#include <vector>
#include <array>
#include <iostream>

#include "gcdr.hpp"
#include "sub_pattern.hpp"
#include "sp_detector.hpp"

const ICA SubPatternDetector::ica;
const CI SubPatternDetector::ci;
const IAGG SubPatternDetector::iagg;
// const IPAG SubPatternDetector::ipag;
// const MLI SubPatternDetector::mli;
// const IASS SubPatternDetector::iass;
// const SAGG SubPatternDetector::sagg;
// const IIAGG SubPatternDetector::iiagg;
const SASS SubPatternDetector::sass;
// ICD;
// DCI;
// IPAS;
// AGPI;
// IPD;
// DPI;

void SubPatternDetector::detect_all() {
    detect_sp_instances(ica);
    detect_sp_instances(ci);
    detect_sp_instances(iagg);

    detect_sp_instances(sass);
}

void SubPatternDetector::combine_cv_1(const SubPattern &subp,
                                      const CandidateVertexList &cvs) {
    auto sp = subp.gcdr();
    auto sp_e = sp.edge(0, 0);
    for (const auto &vd : cvs[0]) {
        auto sys_e = system.edge(vd, vd);
        if (sys_e % sp_e) {
            continue;
        }
        // std::cout << "identified sub-pattern(1):\n";
        printf("identified sub-pattern(%lu)\n", vd);
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
            auto sys_e1 = system.edge(vd1, vd2);
            auto sys_e2 = system.edge(vd2, vd1);
            if (sys_e1 % sp_e1 || sys_e2 % sp_e2) {
                continue;
            }
            // std::cout << "identified sub-pattern(2):\n";
            printf("identified sub-pattern(%lu %lu)\n", vd1, vd2);
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
                size_t sys_es[] = {
                    system.edge(vd1, vd2), system.edge(vd1, vd3),
                    system.edge(vd2, vd1), system.edge(vd2, vd3),
                    system.edge(vd3, vd1), system.edge(vd3, vd2)};
                bool continue_flag = false;
                for (int i = 0; i < 6; ++i) {
                    if (sys_es[i] % sp_es[i]) {
                        continue_flag = true;
                        break;
                    }
                }
                if (continue_flag)
                    continue;
                printf("identified sub-pattern(%lu %lu %lu)\n", vd1, vd2, vd3);
                spis[subp.type()].push_back({vd1, vd2, vd3});
            }
        }
    }
}

void SubPatternDetector::detect_sp_instances(const SubPattern &sp) {
    auto sp_num = sp.gcdr().size();
    CandidateVertexList cvs(sp_num);

    std::cout << sp.name << std::endl;

    for (size_t i = 0; i < sp_num; ++i) {
        for (size_t j = 0; j < system.size(); ++j) {
            // std::cout << cw_out(system, j) << std::endl;
            if (system.cw_out(j) % sp.gcdr().cw_out(i) == 0 &&
                system.cw_in(j) % sp.gcdr().cw_in(i) == 0) {
                cvs[i].push_back(j);
            }
        }
    }

    for (int i = 0; i < cvs.size(); ++i) {
        std::cout << "cvs[" << i << "]: ";
        for (auto v : cvs[i]) {
            std::cout << v << " ";
        }
        std::cout << "\n";
    }

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

    std::cout << "\n";
}
