#ifndef DPDT_SP_DETECTOR_H
#define DPDT_SP_DETECTOR_H

#include <vector>

#include "gcdr.hpp"
#include "sub_pattern.hpp"

class SFMAnalyzer;
class SubPatternDetector {
    friend class SFMAnalyzer;

    GCDR &system;
public:

    SubPatternDetector(GCDR &sys) : system(sys) {}

    void detect_all();

    void detect_sp_instances(const SubPattern &sp);

    void combine_cv_3(const SubPattern &sp,
                      std::vector<std::vector<size_t>> &cvs);
    void combine_cv_2(const SubPattern &sp,
                      std::vector<std::vector<size_t>> &cvs);
    void combine_cv_1(const SubPattern &sp,
                      std::vector<std::vector<size_t>> &cvs);

    typedef std::vector<std::vector<size_t>> SPRefList;
    
    SPRefList &spt2list(SubPatternType spt) {
        switch (spt) {
            case SubPatternType::SPT_ICA: return icas;
            case SubPatternType::SPT_CI: return cis;
            case SubPatternType::SPT_IAGG: return iaggs;
            case SubPatternType::SPT_SASS: return sasss;
            default: return nones;
        }
    }

    SPRefList nones;
    SPRefList icas;
    SPRefList cis;
    SPRefList iaggs;
    SPRefList sasss;

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
