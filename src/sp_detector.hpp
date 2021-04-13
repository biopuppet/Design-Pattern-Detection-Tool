#ifndef DPDT_SP_DETECTOR_H
#define DPDT_SP_DETECTOR_H

#include <vector>

#include "gcdr.hpp"
#include "sub_pattern.hpp"

typedef std::vector<std::vector<size_t>> SPRefList;
typedef std::vector<std::vector<size_t>> CandidateVertexList;

class PatternAnalyzer;
class SubPatternDetector {
    friend class PatternAnalyzer;

    Graph &system;

    // Sub-pattern instance set
    std::vector<SPRefList> spis{SPT_NUM};

public:
    SubPatternDetector(Graph &sys) : system(sys) {}

    void detect_all();

    void detect_sp_instances(const SubPattern &sp);

    void combine_cv_3(const SubPattern &sp, const CandidateVertexList &cvs);
    void combine_cv_2(const SubPattern &sp, const CandidateVertexList &cvs);
    void combine_cv_1(const SubPattern &sp, const CandidateVertexList &cvs);

    static const ICA ica;
    static const CI ci;
    static const IAGG iagg;
    static const IPAG ipag;
    static const IPAS ipas;
    static const SASS sass;
    static const MLI mli;
    static const IIAGG iiagg;
    static const IASS iass;
    static const ICD icd;
    static const DCI dci;
    static const SAGG sagg;
    static const AGPI agpi;
    static const IPD ipd;
    static const DPI dpi;
};

#endif  // !DPDT_SP_DETECTOR_H
