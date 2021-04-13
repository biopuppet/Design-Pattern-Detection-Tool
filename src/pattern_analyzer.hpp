#ifndef DPDT_PATTERN_ANALYZER_H
#define DPDT_PATTERN_ANALYZER_H

#include <vector>

#include "sp_detector.hpp"
#include "sfm.hpp"

class PatternAnalyzer {
    Graph &sys;

    std::vector<SPRefList> &spis;

    std::vector<Proxy> proxys;

public:
    PatternAnalyzer(SubPatternDetector &spd)
        : sys(spd.system), spis(spd.spis) {}

    void analyze();
    void analyze_proxy();
    void behavoiral_check();
    void behavoiral_check_proxy();
};

#endif  // !DPDT_PATTERN_ANALYZER_H
