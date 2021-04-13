#include <iostream>
#include <algorithm>

#include "gcdr.hpp"
#include "sp_detector.hpp"
#include "sfm.hpp"
#include "pattern_analyzer.hpp"

void PatternAnalyzer::analyze() {
    analyze_proxy();
    // std::cout << proxys.size() << std::endl;
    behavoiral_check();
}

void PatternAnalyzer::behavoiral_check() {
    behavoiral_check_proxy();
    // std::cout << proxys.size() << std::endl;
}

void PatternAnalyzer::analyze_proxy() {
    for (const auto &ica : spd.icas) {
        for (const auto &ci : spd.cis) {
            if (ica[0] == ci[0] && ica[1] == ci[1] && ica[2] == ci[2]) {
                proxys.emplace_back(&sys.node(ci[0]), &sys.node(ci[1]),
                                    &sys.node(ci[2]), Proxy::RefRealSubject);
            }
        }
    }
}

void PatternAnalyzer::behavoiral_check_proxy() {
    for (const auto &proxy : proxys) {
        // Looking for 3 identical method signature
        std::vector<Method> result;
        auto &sub = proxy.subject->methods;
        auto &pro = proxy.proxy->methods;
        auto &real = proxy.real_subject->methods;
        std::set_intersection(pro.begin(), pro.end(), sub.begin(), sub.end(),
                              std::inserter(result, result.begin()),
                              MethodCmp());
        std::set_intersection(real.begin(), real.end(), result.begin(),
                              result.end(), result.begin(), MethodCmp());
        for (const auto &it : result) {
            std::cout << it.name << std::endl;
        }
        if (result.size())
            std::cout << "Proxy!!!\n";
    }
}
