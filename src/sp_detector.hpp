#ifndef DPDS_SP_DETECTOR_H
#define DPDS_SP_DETECTOR_H

#include <vector>

#include "pugixml.hpp"
#include "gcdr.hpp"

enum class SubPattern {
    UNKNOWN = -1,
    ICA,
    CI,
    IAGG,
    IPAG,
    MLI,
    IASS,
    SAGG,
    IIAGG,
    SASS,
    ICD,
    DCI,
    IPAS,
    AGPI,
    IPD,
    DPI,
    ALL,
};

class SubPatternDetector {
public:
    std::vector<GCDR> subpatterns;

    int init();
    void createICA();

    int detect_all(GCDR &system);

    int detect_sp_instances(GCDR &system, GCDR &sp);
};

#endif  // !DPDS_SP_DETECTOR_H