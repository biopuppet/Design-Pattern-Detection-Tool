#include <iostream>

#include "gcdr.hpp"
#include "sp_detector.hpp"
#include "sfm.hpp"
#include "sfm_analyzer.hpp"

void SFMAnalyzer::analyze() {
    analyze_proxy();
    // std::cout << proxys.size() << std::endl;
}

void SFMAnalyzer::analyze_proxy() {
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
