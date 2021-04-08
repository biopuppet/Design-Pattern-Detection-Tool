#ifndef DPDT_SP_DETECTOR_H
#define DPDT_SP_DETECTOR_H

#include <vector>

#include "pugixml.hpp"
#include "gcdr.hpp"
#include "sub_pattern.hpp"

enum class SubPatternType {
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
    SPT_NUM,
};

class SubPatternDetector {
public:
    int detect_all(GCDR &system);

    int detect_sp_instances(GCDR &system, const SubPattern &sp);

    void combine_cv_3(GCDR &system,
                      const GCDR &sp,
                      std::vector<std::vector<vertex_descriptor_t>> &cvs);
    void combine_cv_2(GCDR &system,
                      const GCDR &sp,
                      std::vector<std::vector<vertex_descriptor_t>> &cvs);
    void combine_cv_1(GCDR &system,
                      const GCDR &sp,
                      std::vector<std::vector<vertex_descriptor_t>> &cvs);

    std::vector<std::vector<SubPattern>> identified_sps(SPT_NUM);
    static const std::vector<SubPattern> sps;
};

#endif  // !DPDT_SP_DETECTOR_H