#ifndef DPDT_SFM_ANALYZER_H
#define DPDT_SFM_ANALYZER_H

#include <vector>

#include "sp_detector.hpp"
#include "sfm.hpp"

class SFMAnalyzer {
    SubPatternDetector &spd;
    Graph &sys;

    std::vector<Proxy> proxys;

public:
    SFMAnalyzer(SubPatternDetector &spd) : spd(spd), sys(spd.system) {}

    void analyze();
    void analyze_proxy();
};

#endif  // !DPDT_SFM_ANALYZER_H
