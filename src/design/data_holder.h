#ifndef DESIGN_DATA_HOLDER_H_
#define DESIGN_DATA_HOLDER_H_

#include <memory>
#include <string>
#include <unordered_map>

namespace design {

class BaseData {
 public:
  virtual ~BaseData() {}
};

template <typename DataType>
class Data : public BaseData {
 public:
  explicit Data(DataType* data = nullptr) : data_(data) {}
  Data(const Data&) = delete;
  Data& operator=(const Data&) = delete;
  virtual ~Data() {}

  DataType* get_data() { return data_.get(); }
  const DataType* get_data() const { return data_.get(); }

 private:
  using DataTypePtr = std::unique_ptr<DataType>;
  DataTypePtr data_;
};

template <typename KeyType = std::string>
class DataHolder {
 public:
  template <typename DataType>
  DataType* insert(const KeyType& key, DataType* val) {
    typename Holder::iterator it = holder_.find(key);
    if (it != holder_.end()) {
      if (val) {
        delete val;
      }
      return nullptr;
    }

    BaseDataPtr data(new Data<DataType>(val));
    holder_.insert(std::make_pair(key, std::move(data)));
    return val;
  }

  template <typename DataType>
  DataType* find(const KeyType& key) {
    typename Holder::iterator it = holder_.find(key);
    if (it == holder_.end()) return nullptr;

    Data<DataType>* data = static_cast<Data<DataType>*>(it->second.get());
    return data->get_data();
  }

  template <typename DataType>
  const DataType* find(const KeyType& key) const {
    typename Holder::iterator it = holder_.find(key);
    if (it == holder_.end()) return nullptr;

    Data<DataType>* data = static_cast<Data<DataType>*>(it->second.get());
    return data->get_data();
  }

  bool erase(const KeyType& key) {
    typename Holder::iterator it = holder_.find(key);
    if (it == holder_.end()) {
      return false;
    }

    return holder_.erase(it).second;
  }

 private:
  using BaseDataPtr = std::unique_ptr<BaseData>;
  using Holder = std::unordered_map<KeyType, BaseDataPtr>;
  Holder holder_;
};

}  // namespace design

#endif