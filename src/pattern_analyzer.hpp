#ifndef DPDT_PATTERN_ANALYZER_H
#define DPDT_PATTERN_ANALYZER_H

#include <vector>
#include <unordered_map>

#include "sp_detector.hpp"
#include "pattern.hpp"

typedef std::unordered_map<std::string, PatternType> PatternMap;

class PatternAnalyzer {
    Graph &sys;

    std::vector<SPRefList> &spis;

    PatternType pp;

    std::vector<Proxy> proxys;
    std::vector<Adapter> adapters;

public:
    PatternAnalyzer(SubPatternDetector &spd)
        : sys(spd.system), spis(spd.spis) {}

    void analyze(const std::string &pattern);

    typedef void (*analyze_pattern)();
    void analyze_proxy();
    void analyze_adapter();
    void analyze_composite();
    void analyze_singleton();
    void analyze_command();
    void analyze_memento();
    void analyze_visitor();

    void behavoiral_check();
    bool behavoiral_check(const Proxy &proxy);

    static const PatternMap pattern_map;
};

#endif  // !DPDT_PATTERN_ANALYZER_H
