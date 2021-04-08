#ifndef DPDT_SP_DETECTOR_H
#define DPDT_SP_DETECTOR_H

#include <vector>

#include "pugixml.hpp"
#include "gcdr.hpp"
#include "sub_pattern.hpp"

enum SubPatternType {
    SPT_NONE = -1,
    SPT_ICA = 0,
    SPT_CI,
    SPT_IAGG,
    SPT_IPAG,
    SPT_MLI,
    SPT_IASS,
    SPT_SAGG,
    SPT_IIAGG,
    SPT_SASS,
    SPT_ICD,
    SPT_DCI,
    SPT_IPAS,
    SPT_AGPI,
    SPT_IPD,
    SPT_DPI,
    SPT_NUM,
};

class SubPatternDetector {
public:
    GCDR &system;

    SubPatternDetector(GCDR &sys) : system(sys) {}

    int detect_all();

    int detect_sp_instances(const SubPattern &sp);

    void combine_cv_3(const SubPattern &sp,
                      std::vector<std::vector<vertex_descriptor_t>> &cvs);
    void combine_cv_2(const SubPattern &sp,
                      std::vector<std::vector<vertex_descriptor_t>> &cvs);
    void combine_cv_1(const SubPattern &sp,
                      std::vector<std::vector<vertex_descriptor_t>> &cvs);

    std::vector<SubPattern> identified_sps[SPT_NUM];
    static const std::vector<SubPattern> sps;
};

#endif  // !DPDT_SP_DETECTOR_H