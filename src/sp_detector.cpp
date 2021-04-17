#include <vector>
#include <array>
#include <iostream>

#include "gcdr.hpp"
#include "sub_pattern.hpp"
#include "sp_detector.hpp"

const ICA SubPatternDetector::ica;
const CI SubPatternDetector::ci;
const IAGG SubPatternDetector::iagg;
const IPAG SubPatternDetector::ipag;
const IPAS SubPatternDetector::ipas;
const SASS SubPatternDetector::sass;
const MLI SubPatternDetector::mli;
const IIAGG SubPatternDetector::iiagg;
const IASS SubPatternDetector::iass;
const ICD SubPatternDetector::icd;
const DCI SubPatternDetector::dci;
const SAGG SubPatternDetector::sagg;
const AGPI SubPatternDetector::agpi;
const IPD SubPatternDetector::ipd;
const DPI SubPatternDetector::dpi;

void SubPatternDetector::detect_all() {
    detect_sp_instances(ica);
    detect_sp_instances(ci);
    detect_sp_instances(iagg);
    detect_sp_instances(ipag);
    detect_sp_instances(ipas);
    detect_sp_instances(sass);
    detect_sp_instances(mli);
    detect_sp_instances(iiagg);
    detect_sp_instances(iass);
    detect_sp_instances(icd);
    detect_sp_instances(dci);
    detect_sp_instances(sagg);
    detect_sp_instances(agpi);
    detect_sp_instances(ipd);
    detect_sp_instances(dpi);
}

void SubPatternDetector::combine_cv_1(const SubPattern &subp,
                                      const CandidateVertexList &cvs) {
    auto sp = subp.gcdr();
    auto sp_e = sp.edge(0, 0);
    for (const auto &vd : cvs[0]) {
        if (system.edge(vd, vd) % sp_e) {
            continue;
        }
        printf("identified %s(%lu)\n", subp.name(), vd);
        spis[subp.type()].push_back({vd});
    }
}

void SubPatternDetector::combine_cv_2(const SubPattern &subp,
                                      const CandidateVertexList &cvs) {
    auto sp = subp.gcdr();
    auto sp_e1 = sp.edge(0, 1);
    auto sp_e2 = sp.edge(1, 0);
    for (const auto &vd1 : cvs[0]) {
        for (const auto &vd2 : cvs[1]) {
            if (system.edge(vd1, vd2) % sp_e1 ||
                system.edge(vd2, vd1) % sp_e2) {
                continue;
            }
            printf("identified %s(%lu %lu)\n", subp.name(), vd1, vd2);
            spis[subp.type()].push_back({vd1, vd2});
        }
    }
}

void SubPatternDetector::combine_cv_3(const SubPattern &subp,
                                      const CandidateVertexList &cvs) {
    auto sp = subp.gcdr();
    size_t sp_es[] = {sp.edge(0, 1), sp.edge(0, 2), sp.edge(1, 0),
                      sp.edge(1, 2), sp.edge(2, 0), sp.edge(2, 1)};
    for (const auto &vd1 : cvs[0]) {
        for (const auto &vd2 : cvs[1]) {
            for (const auto &vd3 : cvs[2]) {
                // since there are no self-loops in 2 or 3-vertex-sub-patterns
                // we can presume vd1, vd2, vd3 are different.
                if (vd1 == vd2 || vd2 == vd3 || vd1 == vd3) {
                    continue;
                }
                if (system.edge(vd1, vd2) % sp_es[0] ||
                    system.edge(vd1, vd3) % sp_es[1] ||
                    system.edge(vd2, vd1) % sp_es[2] ||
                    system.edge(vd2, vd3) % sp_es[3] ||
                    system.edge(vd3, vd1) % sp_es[4] ||
                    system.edge(vd3, vd2) % sp_es[5]) {
                    continue;
                }
                printf("identified %s(%lu %lu %lu)\n", subp.name(), vd1, vd2,
                       vd3);
                spis[subp.type()].push_back({vd1, vd2, vd3});
            }
        }
    }
}

void SubPatternDetector::detect_sp_instances(const SubPattern &sp) {
    auto &gcdr = sp.gcdr();
    auto sp_num = gcdr.size();
    CandidateVertexList cvs(sp_num);

    // std::cout << sp.name() << std::endl;

    for (size_t i = 0; i < sp_num; ++i) {
        for (size_t j = 0; j < system.size(); ++j) {
            // printf("sys[%lu].cw_out=%lu sp[%lu].cw_out=%lu\n", j,
            // system.cw_out(j), i, gcdr.cw_out(i)); printf("sys[%lu].cw_in=%lu
            // sp[%lu].cw_in=%lu\n", j, system.cw_in(j), i, gcdr.cw_in(i));
            if (system.cw_out(j) % gcdr.cw_out(i) == 0 &&
                system.cw_in(j) % gcdr.cw_in(i) == 0) {
                cvs[i].push_back(j);
            }
        }
    }

    // for (int i = 0; i < cvs.size(); ++i) {
    //     std::cout << "cvs[" << i << "]: ";
    //     for (auto v : cvs[i]) {
    //         std::cout << v << " ";
    //     }
    //     std::cout << "\n";
    // }

    switch (sp_num) {
    case 1:
        combine_cv_1(sp, cvs);
        break;
    case 2:
        combine_cv_2(sp, cvs);
        break;
    case 3:
        combine_cv_3(sp, cvs);
        break;
    default:
        std::cerr << "Sub-pattern of " << sp_num
                  << " vertices isn't supported.\n";
        break;
    }
}
