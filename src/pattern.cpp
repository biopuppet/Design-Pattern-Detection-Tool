#include "pattern.hpp"

#include <algorithm>
#include <iostream>

using MethodList = std::vector<Method *>;

static MethodList intersected(const MethodList &m1, const MethodList &m2) {
  MethodList res;
  for (const auto &it1 : m1) {
    for (const auto &it2 : m2) {
      if (it1->name == it2->name) {
        res.emplace_back(it1);
      }
    }
  }
  return res;
}

bool Adapter::behavioral_check() const {
  auto result = intersected(target_.methods, adapter_.methods);

  for (auto &it : result) {
    std::cout << "request: " << it->name << std::endl;
  }

  bool indep = intersected(result, adaptee_.methods).size();
  if (result.size() && !indep) {
    return true;
  }
  return false;
}

bool Proxy::behavioral_check() const {
  // Looking for 3 identical method signature
  auto res = intersected(subject_.methods, proxy_.methods);
  res = intersected(res, real_subject_.methods);
  for (auto &it : res) {
    std::cout << "Proxy request: " << it->name << std::endl;
  }
  if (res.size()) {
    return true;
  }
  return false;
}

bool Composite::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Decorator::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Bridge::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Flyweight::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Facade::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool AbstractFactory::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Builder::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Factory::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Prototype::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Singleton::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool ResponsibilityChain::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Command::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Interpreter::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Iterator::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Mediator::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Memento::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Observer::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool State::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Strategy::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Template::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}

bool Visitor::behavioral_check() const {
  std::vector<Method *> result;
  if (result.size()) {
    return true;
  }
  return false;
}
