#ifndef LRU_CACHE_H_
#define LRU_CACHE_H_

#include <cstddef>
#include <list>
#include <unordered_map>

namespace problem {

template <typename K, typename V>
class LRUCache {
 public:
  using pair = std::pair<K, V>;
  explicit LRUCache(size_t n) : size_(n) {}

  LRUCache(const LRUCache&) = delete;
  LRUCache& operator=(const LRUCache&) = delete;

  void put(const K& key, const V& val) {
    auto it = um_.find(key);
    if (it != um_.end()) {
      list_.erase(it->second);
      um_.erase(it);
    }
    list_.push_front({key, val});
    um_[key] = list_.begin();
    while (list_.size() > size_) {
      auto back = list_.back();
      list_.pop_back();
      um_.erase(back.first);
    }
  }

  bool get(const K& key, V& val) {
    auto it = um_.find(key);
    if (it == um_.end()) return false;
    val = it->second->second;

    list_.splice(list_.begin(), list_, it->second);
    return true;
  }

 private:
  size_t size_;
  std::list<pair> list_;
  std::unordered_map<K, decltype(list_.begin())> um_;
};

}  // namespace problem

#endif