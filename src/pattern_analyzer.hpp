#ifndef DPDT_PATTERN_ANALYZER_H
#define DPDT_PATTERN_ANALYZER_H

#include <vector>

#include "sp_detector.hpp"
#include "sfm.hpp"

class PatternAnalyzer {
    SubPatternDetector &spd;
    Graph &sys;

    std::vector<Proxy> proxys;

public:
    PatternAnalyzer(SubPatternDetector &spd) : spd(spd), sys(spd.system) {}

    void analyze();
    void analyze_proxy();
};

#endif  // !DPDT_PATTERN_ANALYZER_H
