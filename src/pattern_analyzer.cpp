#include <iostream>

#include "gcdr.hpp"
#include "sp_detector.hpp"
#include "sfm.hpp"
#include "pattern_analyzer.hpp"

void PatternAnalyzer::analyze() {
    analyze_proxy();
    // std::cout << proxys.size() << std::endl;
}

void PatternAnalyzer::analyze_proxy() {
    for (const auto &ica : spd.icas) {
        for (const auto &ci : spd.cis) {
            if (ica[0] == ci[0] && ica[1] == ci[1] && ica[2] == ci[2]) {
                std::cout << "Proxy!!!\n";
                proxys.emplace_back(&sys.node(ci[0]), &sys.node(ci[1]),
                                    &sys.node(ci[2]), Proxy::RefRealSubject);
            }
        }
    }
}

void PatternAnalyzer::behavoiral_check_proxy() {
    for (const auto &proxy : proxys) {
        // Looking for 3 identical method signature
        // union_set *comparator
    }
}
