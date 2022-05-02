#ifndef OPERATOR_H_
#define OPERATOR_H_

#include <memory>
#include <string>

#include "yaml-cpp/yaml.h"

namespace desgin {

enum OperatorType { STANDALONE = 0, SERIAL, PARALLEL, UNKNOWN };

using OperatorPtr = std::unique_ptr<Operator>;

class Operator {
 public:
  explicit Operator(OperatorType tp = UNKNOWN) : type_(tp) {}
  Operator(const Operator&) = delete;
  Operator& operator=(const Operator&) = delete;
  virtual ~Operator() {}

  virtual bool Init(const YAML::Node& conf) {
    name_ = conf["name"].as<std::string>();
  }
  virtual bool Run(void* data) const = 0;

  const std::string Name() const { return name_; }
  OperatorType Type() { return type_; }

 private:
  std::string name_;
  OperatorType type_;
};

class StandaloneOperator : public Operator {
 public:
  StandaloneOperator() : Operator(STANDALONE) {}

  virtual bool Init(const YAML::Node& conf) { return Operator::Init(conf); }
  virtual bool Run(void* data) const = 0;
};

}  // namespace desgin

#endif