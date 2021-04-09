#ifndef DPDT_SFM_ANALYZER_H
#define DPDT_SFM_ANALYZER_H

#include <vector>

#include "gcdr.hpp"
#include "sub_pattern.hpp"

class SFMAnalyzer {
    // sub-pattern instance set
    std::vector<std::vector<SubPattern *>> &spis;

public:
    SFMAnalyzer(std::vector<std::vector<SubPattern *>> &s) : spis(s) {}

    void analyze();
};

#endif  // !DPDT_SFM_ANALYZER_H
