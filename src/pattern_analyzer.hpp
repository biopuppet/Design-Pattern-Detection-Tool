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
    std::vector<Composite> composites;
    std::vector<Adapter> adapters;
    std::vector<Visitor> visitors;
    std::vector<Decorator> decorators;
    std::vector<Bridge> bridges;

public:
    PatternAnalyzer(SubPatternDetector &spd)
        : sys(spd.system), spis(spd.spis) {}

    void analyze(const std::string &pattern);

// typedef void (*analyze_pattern)();
#define PATTERN(x) void analyze_##x();
#include "pattern.def"

    void behavoiral_check();
    bool behavoiral_check(const Proxy &p);
    // bool behavoiral_check(const Visitor &p);

    static const PatternMap pattern_map;
};

#endif  // !DPDT_PATTERN_ANALYZER_H
