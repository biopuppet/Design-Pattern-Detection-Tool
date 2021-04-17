#include <iostream>
#include <algorithm>

#include "gcdr.hpp"
#include "pattern_analyzer.hpp"

const PatternMap PatternAnalyzer::pattern_map = {
#define PATTERN(x) {#x, PatternType::PT_##x},
#include "pattern.def"
};

void PatternAnalyzer::analyze(const std::string &pattern) {
    if (!pattern_map.count(pattern)) {
        std::cerr << "Unknow pattern name " << pattern << std::endl;
        return;
    }
    pp = pattern_map.at(pattern);

    switch (pp) {
#define PATTERN(x)     \
    case PT_##x:       \
        analyze_##x(); \
        break;
#include "pattern.def"
    default:
        break;
    }
    // std::cout << proxys.size() << std::endl;
    behavoiral_check();
}

void PatternAnalyzer::behavoiral_check() {
    for (const auto &proxy : proxys) {
        behavoiral_check(proxy);
    }
    // std::cout << proxys.size() << std::endl;
}

void PatternAnalyzer::analyze_proxy() {
    for (const auto &ica : spis[SPT_ICA]) {
        for (const auto &ci : spis[SPT_CI]) {
            if (ica[0] == ci[0] && ica[1] == ci[1] && ica[2] == ci[2]) {
                proxys.emplace_back(sys[ci[0]], sys[ci[1]], sys[ci[2]],
                                    Proxy::RefRealSubject);
            }
        }
    }

    for (const auto &ci : spis[SPT_CI]) {
        for (const auto &iass : spis[SPT_IASS]) {
            if (ci[0] == iass[0] && ci[2] == iass[1]) {
                proxys.emplace_back(sys[ci[0]], sys[ci[1]], sys[ci[2]],
                                    Proxy::RefSubject);
            }
        }
    }
}

void PatternAnalyzer::analyze_adapter() {
    for (const auto &ica : spis[SPT_ICA]) {
        for (const auto &ci : spis[SPT_CI]) {
            if (ica[0] == ci[0] && ica[1] == ci[1] && ica[2] == ci[2]) {
                return;
            }
        }
        adapters.emplace_back(sys[ica[0]], sys[ica[1]], sys[ica[2]]);
        std::cout << "adapter!\n";
    }
}

void PatternAnalyzer::analyze_composite() { std::cout << "composite!\n"; }

void PatternAnalyzer::analyze_visitor() { std::cout << "visitor!\n"; }

bool PatternAnalyzer::behavoiral_check(const Proxy &proxy) {
    // Looking for 3 identical method signature
    std::vector<Method> result;
    auto &sub = proxy.subject.methods;
    auto &pro = proxy.proxy.methods;
    auto &real = proxy.real_subject.methods;
    std::set_intersection(pro.begin(), pro.end(), sub.begin(), sub.end(),
                          std::inserter(result, result.begin()), MethodCmp());
    std::set_intersection(real.begin(), real.end(), result.begin(),
                          result.end(), result.begin(), MethodCmp());
    for (const auto &it : result) {
        std::cout << it.name << std::endl;
    }
    if (result.size()) {
        std::cout << "Proxy!!!\n";
        return true;
    }
    return false;
}
