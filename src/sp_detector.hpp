#ifndef DPDT_SP_DETECTOR_H
#define DPDT_SP_DETECTOR_H

#include <vector>

#include "pugixml.hpp"
#include "gcdr.hpp"

enum SubPattern {
    ICA = 0,
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
    int init();
    void createICA();
    void createCI();
    void createSASS();

    int detect_all(GCDR &system);

    int detect_sp_instances(GCDR &system, GCDR &sp);

    std::vector<GCDR> sps;
};

#endif  // !DPDT_SP_DETECTOR_H