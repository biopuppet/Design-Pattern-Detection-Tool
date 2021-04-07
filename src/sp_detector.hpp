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

    void combine_cv_3(GCDR &system,
                      GCDR &sp,
                      std::vector<std::vector<vertex_descriptor_t>> &cvs);
    void combine_cv_2(GCDR &system,
                      GCDR &sp,
                      std::vector<std::vector<vertex_descriptor_t>> &cvs);
    void combine_cv_1(GCDR &system,
                      GCDR &sp,
                      std::vector<std::vector<vertex_descriptor_t>> &cvs);

    std::vector<GCDR> sps;
    std::vector<GCDR> identified_sps;
};

#endif  // !DPDT_SP_DETECTOR_H