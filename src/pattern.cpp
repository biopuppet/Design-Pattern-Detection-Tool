#include <algorithm>
#include <iostream>

#include "pattern.hpp"

bool Proxy::behavioral_check() const {
    // Looking for 3 identical method signature
    std::vector<Method> result;
    auto &sub = subject.methods;
    auto &pro = proxy.methods;
    auto &real = real_subject.methods;
    std::set_intersection(pro.begin(), pro.end(), sub.begin(), sub.end(),
                          std::inserter(result, result.begin()), MethodCmp());
    std::set_intersection(real.begin(), real.end(), result.begin(),
                          result.end(), result.begin(), MethodCmp());
    for (const auto &it : result) {
        std::cout << "Proxy request: " << it.name << std::endl;
    }
    if (result.size()) {
        return true;
    }
    return false;
}

bool Adapter::behavioral_check() const {
    std::vector<Method> result;
    if (result.size()) {
        return true;
    }
    return false;
}

bool Visitor::behavioral_check() const {
    std::vector<Method> result;
    if (result.size()) {
        return true;
    }
    return false;
}
