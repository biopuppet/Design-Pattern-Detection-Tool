#ifndef DPDT_PATTERN_ANALYZER_H
#define DPDT_PATTERN_ANALYZER_H

#include <vector>

#include "sp_detector.hpp"
#include "sfm.hpp"

class PatternAnalyzer {
    Graph &sys;

    std::vector<SPRefList> &spis;

    std::vector<Proxy> proxys;
    std::vector<Adapter> adapters;

public:
    PatternAnalyzer(SubPatternDetector &spd)
        : sys(spd.system), spis(spd.spis) {}

    void analyze();
    void analyze_proxy();
    void analyze_adapter();
    void analyze_composite();
    void analyze_singleton();
    void analyze_command();
    void analyze_memento();
    void analyze_visitor();

    void behavoiral_check();
    void behavoiral_check_proxy();
};

#endif  // !DPDT_PATTERN_ANALYZER_H
