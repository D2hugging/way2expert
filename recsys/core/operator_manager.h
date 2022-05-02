#ifndef OPERATOR_MANAGER_H_
#define OPERATOR_MANAGER_H_

#include <memory>
#include <unordered_map>

#include "recsys/double_buffer.h"
#include "recsys/operator.h"

namespace design {

template <typename OperatorCreator>
class OperatorManager {
 public:
  static OperatorManager& instance() {
    static OperatorManager manager;
    return manager;
  }
  OperatorManager(const OperatorManager&) = delete;
  OperatorManager& operator=(const OperatorManager&) = delete;

  bool Init(const YAML::Node& conf, const std::string& cmd) {
    OperatorLoaderPtr loader(new OperatorLoader(conf));
    op_buf_ptr_ =
        OperatorDoubleBufferPtr(new OperatorDoubleBuffer(std::move(loader)));
    return op_buf_ptr_->init(ConfigFileManager::instance()::GetConfigNode(cmd));
  }

  const OperatorPtr& Operator(const std::string& name) const {
    auto& op_ptr = op_buf_ptr_->get_buffer();
    if (!op_ptr) {
      return nullptr;
    }
    auto it = op_ptr->find(name);
    if (it == op_ptr->end()) {
      return nullptr;
    }
    return it->second;
  }

 private:
  using OperatorTable = std::unordered_map<std::string, OperatorPtr>;
  using OperatorTablePtr = std::unique_ptr<OperatorTable>;

  class OperatorLoader {
   public:
    OperatorLoader(const std::string& conf) : conf_(conf) {}
    ~OperatorLoader() {}
    OperatorLoader(const OperatorLoader&) = delete;
    OperatorLoader& operator=(const OperatorLoader&) = delete;

    OperatorDoubleBufferPtr load() const {
      OperatorCreator creator;
      OperatorDoubleBufferPtr op_table_ptr(new OperatorDoubleBuffer);
#ifdef MULTI_CONF_FILE
      YAML::Node root = YAML::LoadFile(conf_.c_str());
      for (const auto& cf : root["configures"]) {
        YAML::Node conf = YAML::LoadFile(cf.as<std::string>().c_str());

#else
      YAML::Node conf = YAML::LoadFile(conf_.c_str());
#endif
        for (size_t i = 0; i < conf.size(); ++i) {
          auto alias = conf[i]["alias"].as<std::string>();
          if (op_table_ptr->find(alias) != op_table_ptr.end()) {
            return nullptr;
          }
          OperatorPtr op = creator.create(conf[i]);
          if (!op) {
            return nullptr;
          }
          if (!op->Init(conf[i])) {
            return nullptr;
          }
          op_table_ptr->insert({alias, std::move(op)});
        }
#ifdef
      }
#endif
      return op_table_ptr;
    };
    std::string conf_;
  };

  using OperatorLoaderPtr = std::unique_ptr<OperatorLoader>;
  using OperatorDoubleBuffer = DoubleBuffer<OperatorTable, OperatorLoader>;
  using OperatorDoubleBufferPtr = std::unique_ptr<OperatorDoubleBuffer>;

  OperatorPtr nullptr_;
  OperatorDoubleBufferPtr op_buf_ptr_;
};
}  // namespace design

#endif
