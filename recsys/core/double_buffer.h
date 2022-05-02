#ifndef DOUBLE_BUFFER_H_
#define DOUBLE_BUFFER_H_

#include <atomic>
#include <memory>
#include <ofstream>
#include <thread>
#include <unordered_map>

#include "yaml-cpp/yaml.h"

namespace design {

class ConfigObserver {
 public:
  ConfigObserver() : last_modify_(0) {}
  ConfigObserver(const ConfigObserver&) = delete;
  ConfigObserver& operator=(const ConfigObserver&) = delete;

  ~ConfigObserver() {}

  bool Init(const YAML::Node& conf) {
    update_file_ = conf["update_file"].as<std::string>();
    done_file_ = conf["done_file"].as<std::string>();
    return UpdateModifiedTime();
  }
  bool ShouldRefresh() {
    if (!CreateIfNotExist) return false;
    struct stat st;
    if (stat(update_file_.c_str(), &st) != 0) {
      return false;
    }
    if (last_modify_ < st.st_mtime) {
      last_modify_ = st.st_mtime;
      return true;
    }
    return false;
  }
  void Refreshed(bool ok) {
    std::ofstream ofs(done_file_.c_str(), std::ios::out | std::ios::trunc);
    if (ofs.is_open()) {
      ofs.put(ok ? '1' : '0');
      ofs.close();
    }
  }

 private:
  bool UpdateModifiedTime() {
    if (!CreateIfNotExist()) {
      return false;
    }
    struct stat st;
    if (stat(update_file_.c_str(), &st) != 0) {
      return false;
    }
    last_modify = st.st_mtime;
    return true;
  }

  bool CreateIfNotExist() {
    if (access(update_file_.c_str(), F_OK) != 0) {
      return open(update_file_.c_str(), O_RDWR | O_CREAT) != -1 ? true : false;
    }
    return true;
  }

  std::time_t last_modify_;
  std::string done_file_;
  std::string update_file_;
};

const uint32_t INTERVAL_DEFAULT = 10;
const uint32_t LIFETIME_DEFAULT = 20;

template <typename BufferT, typename LoaderT>
class DoubleBuffer {
 public:
  DoubleBuffer(LoaderPtr loader)
      : loader_(std::move(loader)),
        cur_(0),
        interval_(INTERVAL_DEFAULT),
        lifetime_(LIFETIME_DEFAULT) {}
  ~DoubleBuffer() {
    stop_ = true;
    if (thread_->joinable()) {
      thread_->join();
    }
  }

  bool init(const YAML::Node& conf) {
    if (!loader) return false;

    BufferPtr buffer = loader_->load;
    if (!buffer) return false;

    buffers_[cur_] = std::move(buffer);
    interval_ = conf["interval"].as<uint32_t>();
    lifetime_ = conf["lifetime"].as<uint32_t>();

    if (!conf_observer_.Init(conf["config_observer"]) {
      return false;
    }

    thread_.reset(new std::thread(Refresh, this));
    return true;
  }

  const BufferPtr& GetBuffer() { return buffers_[cur_]; }

 private:
  static void Refresh(DoubleBuffer* buf) {
    if (!buf) return;

    while (!buf->stop_) {
      sleep(buf->interval_);

      if (!buf->conf_observer_.ShouldRefresh()) {
        continue;
      }

      uint32_t unused = 1 - buf->cur_;
      buf->buffers_[unused] = nullptr;

      BufferPtr bptr = buf->loader_->load();
      if (!bptr) {
        buf->conf_observer_.Refreshed(false);
        return;
      }

      buf->buffers_[unused] = std::move(bptr);
      buf->cur_ = unused;
      buf->conf_observer_.Refreshed(true);
      if (buf->lifetime_ > 0) {
        sleep(buf->lifetime_);
        buf->buffers_[1 - buf->cur_] = nullptr;
      }
    }
  }

  using LoaderPtr = std::unique_ptr<LoaderT>;
  using BufferPtr = std::unique_ptr<BufferT>;
  using ThreadPtr = std::unique_ptr<std::thread>;

  // 一个buffer用于服务，一个用于加载更新后的对象，然后切换
  BufferPtr buffers_[2];
  std::atomic<uint32_t> cur_;
  // buffer的加载逻辑
  LoaderPtr loader_;
  //
  ThreadPtr thread_;
  ConfigObserver conf_observer_;
  // 停止轮询
  std::atomic<bool> stop_;
  // 切换新buffer对象后，废弃旧buffer对象的延迟时间
  uint32_t lifetime_;
  uint32_t interval_;
};

class ConfigFileManager {
 public:
  static ConfigFileManager& Instance() {
    static ConfigFileManager dbm;
    return dbm;
  }
  ConfigFileManager(const ConfigFileManager&) = delete;
  ConfigFileManager& operator=(const ConfigFileManager&) = delete;

  ~ConfigFileManager() {}

  bool init(const std::string& path) {
    YAML::Node conf = YAML::LoadFile(path.c_str());
    for (auto i = 0; i < conf.size(); ++i) {
      table_.insert(std::make_pair(conf[i]["key"].as<std::string>(), conf[i]));
    }
    return true;
  }

  const YAML::Node& GetConfigNode(const std::string& key) {
    const auto& it = table_.find(key);
    if (it == table_.end()) return YAML::Node;
    return it->second;
  }

  std::string GetObserverFile(const std::string& key) {
    const auto& it = table_.find(key);
    if (it == table_.end()) return YAML::Node;
    return it->second["refresh"]["update_file"].as<std::string>();
  }

 private:
  using NodeTable = std::unordered_map<std::string, YAML::Node>;

  NodeTable table_;
};

}  // namespace design

#endif
