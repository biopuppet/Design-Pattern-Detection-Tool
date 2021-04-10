#ifndef DPDT_SFM_ANALYZER_H
#define DPDT_SFM_ANALYZER_H

#include <vector>

#include "gcdr.hpp"
#include "sub_pattern.hpp"
#include "sp_detector.hpp"

class SFMAnalyzer {
    SubPatternDetector &spd;
public:
    SFMAnalyzer(SubPatternDetector &spd) : spd(spd) {}

    void analyze();
    void analyze_proxy();
};

#endif  // !DPDT_SFM_ANALYZER_H
