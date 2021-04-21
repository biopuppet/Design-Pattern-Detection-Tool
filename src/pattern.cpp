#include <algorithm>
#include <iostream>

#include "pattern.hpp"

bool Proxy::behavioral_check() const {
    // Looking for 3 identical method signature
    std::vector<Method> result;
    auto &sub = m_subject.methods;
    auto &pro = m_proxy.methods;
    auto &real = m_real_subject.methods;
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

bool Composite::behavioral_check() const {
    std::vector<Method> result;
    if (result.size()) {
        return true;
    }
    return false;
}

bool Decorator::behavioral_check() const {
    std::vector<Method> result;
    if (result.size()) {
        return true;
    }
    return false;
}

bool Bridge::behavioral_check() const {
    std::vector<Method> result;
    if (result.size()) {
        return true;
    }
    return false;
}

bool Flyweight::behavioral_check() const {
    std::vector<Method> result;
    if (result.size()) {
        return true;
    }
    return false;
}

bool Facade::behavioral_check() const {
    std::vector<Method> result;
    if (result.size()) {
        return true;
    }
    return false;
}

bool Builder::behavioral_check() const {
    std::vector<Method> result;
    if (result.size()) {
        return true;
    }
    return false;
}

bool Prototype::behavioral_check() const {
    std::vector<Method> result;
    if (result.size()) {
        return true;
    }
    return false;
}

bool Singleton::behavioral_check() const {
    std::vector<Method> result;
    if (result.size()) {
        return true;
    }
    return false;
}

bool ResponsibilityChain::behavioral_check() const {
    std::vector<Method> result;
    if (result.size()) {
        return true;
    }
    return false;
}
