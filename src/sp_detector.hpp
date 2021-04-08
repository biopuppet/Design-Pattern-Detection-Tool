#ifndef DPDT_SP_DETECTOR_H
#define DPDT_SP_DETECTOR_H

#include <vector>

#include "pugixml.hpp"
#include "gcdr.hpp"
#include "sub_pattern.hpp"

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

    std::vector<SubPattern *> identified_sps[SPT_NUM];
    static const std::vector<const SubPattern *> sps;
    static const ICA ica;
    static const CI ci;
    static const IAGG iagg;
    // IPAG{},
    // MLI{},
    // IASS{},
    // SAGG{},
    // IIAGG{},
    static const SASS sass;
};

#endif  // !DPDT_SP_DETECTOR_H