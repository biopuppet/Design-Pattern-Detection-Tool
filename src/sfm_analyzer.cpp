#include <iostream>

#include "gcdr.hpp"
#include "sfm_analyzer.hpp"
#include "sp_detector.hpp"

void SFMAnalyzer::analyze() { analyze_proxy(); }

void SFMAnalyzer::analyze_proxy() {
    for (const auto &ica : spd.icas) {
        if (ica.size() != 3)
            continue;
        for (const auto &ci : spd.cis) {
            if (ci.size() != 3)
                continue;
            if (ica[0] == ci[0] && ica[1] == ci[1] && ica[2] == ci[2]) {
                std::cout << "Proxy!!!\n";
            }
        }
    }
}
