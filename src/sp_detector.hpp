#ifndef DPDT_SP_DETECTOR_H
#define DPDT_SP_DETECTOR_H

#include <vector>

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

    SubPattern *extract_subgraph(vertex_descriptor_t vm[],
                                 const SubPattern &mold);

    std::vector<SubPattern *> identified_sps[SPT_NUM];
    static const std::vector<const SubPattern *> sps;
    static const ICA ica;
    static const CI ci;
    static const IAGG iagg;
    // static const IPAG ipag;
    // static const MLI mli;
    // static const IASS iass;
    // static const SAGG sagg;
    // static const IIAGG iiagg;
    static const SASS sass;
};

#endif  // !DPDT_SP_DETECTOR_H
