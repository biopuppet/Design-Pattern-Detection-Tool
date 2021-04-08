#include <vector>
#include <boost/graph/graph_utility.hpp>
#include <boost/graph/adjacency_matrix.hpp>

#include "pugixml.hpp"
#include "gcdr.hpp"
#include "sp_detector.hpp"
#include "sub_pattern.hpp"

const SubPattern SubPatternDetector::sps[] = {
    ICA{},
    CI{},
    // IAGG{},
    // IPAG{},
    // MLI{},
    // IASS{},
    // SAGG{},
    // IIAGG{},
    SASS{},
    // ICD{},
    // DCI{},
    // IPAS{},
    // AGPI{},
    // IPD{},
    // DPI{},
};


int SubPatternDetector::detect_all(GCDR &system) {
    for (const auto &sp : sps) {
        detect_sp_instances(system, sp);
    }
    return 0;
}

void SubPatternDetector::combine_cv_1(
    GCDR &system,
    const GCDR &sp,
    std::vector<std::vector<vertex_descriptor_t>> &cvs) {
    auto sp_e = edge(0, 0, sp).first;
    for (auto vd : cvs[0]) {
        auto sys_e = edge(vd, vd, system).first;
        if (system[sys_e].relation % sp[sp_e].relation) {
            continue;
        }
        std::cout << "here\n";
    }
}

void SubPatternDetector::combine_cv_2(
    GCDR &system,
    const GCDR &sp,
    std::vector<std::vector<vertex_descriptor_t>> &cvs) {
    auto sp_e1 = edge(0, 1, sp).first;
    auto sp_e2 = edge(1, 0, sp).first;
    for (auto vd1 : cvs[0]) {
        for (auto vd2 : cvs[1]) {
            auto sys_e1 = edge(vd1, vd2, system).first;
            auto sys_e2 = edge(vd2, vd1, system).first;
            if (system[sys_e1].relation % sp[sp_e1].relation ||
                system[sys_e2].relation % sp[sp_e2].relation) {
                continue;
            }
            std::cout << "identified sub-pattern(3): ";
        }
    }
}

void SubPatternDetector::combine_cv_3(
    GCDR &system,
    const GCDR &sp,
    std::vector<std::vector<vertex_descriptor_t>> &cvs) {
    edge_descriptor_t sp_es[] = {edge(0, 1, sp).first, edge(0, 2, sp).first,
                                 edge(1, 0, sp).first, edge(1, 2, sp).first,
                                 edge(2, 0, sp).first, edge(2, 1, sp).first};
    for (auto vd1 : cvs[0]) {
        for (auto vd2 : cvs[1]) {
            for (auto vd3 : cvs[2]) {
                // since there are no self-loops in 2 or 3-vertex-sub-patterns
                // we can presume vd1, vd2, vd3 are different.
                if (vd1 == vd2 || vd2 == vd3 || vd1 == vd3) {
                    continue;
                }
                edge_descriptor_t sys_es[] = {
                    edge(vd1, vd2, system).first, edge(vd1, vd3, system).first,
                    edge(vd2, vd1, system).first, edge(vd2, vd3, system).first,
                    edge(vd3, vd1, system).first, edge(vd3, vd2, system).first};
                bool continue_flag = false;
                for (int i = 0; i < 6; ++i) {
                    if (system[sys_es[i]].relation % sp[sp_es[i]].relation) {
                        continue_flag = true;
                        break;
                    }
                }
                if (continue_flag)
                    continue;
                std::cout << "identified sub-pattern(3): ";
                GCDR sys_ksub(3);
                std::unordered_map<vertex_descriptor_t, vertex_descriptor_t>
                    vm = {{vd1, 0}, {vd2, 1}, {vd3, 2}};

                auto eip = edges(system);
                for (auto es = eip.first; es != eip.second; ++es) {
                    auto e = *es;
                    auto src = source(e, system);
                    auto dst = target(e, system);
                    if ((src == vd1 || src == vd2 || src == vd3) &&
                        (dst == vd1 || dst == vd2 || dst == vd3)) {
                        add_edge(vm[src], vm[dst], system[e].relation,
                                 sys_ksub);
                    }
                }
                printf("%lu %lu %lu\n", vd1, vd2, vd3);
                print_gcdr(sys_ksub);
                identified_sps.emplace_back(sys_ksub);
            }
        }
    }
}

int SubPatternDetector::detect_sp_instances(GCDR &system, const SubPattern &sp) {
    int sys_num = num_vertices(system);
    int sp_num = num_vertices(sp.gcdr());
    std::vector<std::vector<vertex_descriptor_t>> cvs(sp_num);

    for (int i = 0; i < sp_num; ++i) {
        for (int j = 0; j < sys_num; ++j) {
            // std::cout << gcdr_cw_out(system, j) << std::endl;
            if (gcdr_cw_out(system, j) % gcdr_cw_out(sp.gcdr(), i) == 0 &&
                gcdr_cw_in(system, j) % gcdr_cw_in(sp.gcdr(), i) == 0) {
                cvs[i].push_back(j);
            }
        }
    }

    switch (sp_num) {
    case 1:
        combine_cv_1(system, sp.gcdr(), cvs);
        break;
    case 2:
        combine_cv_2(system, sp.gcdr(), cvs);
        break;
    case 3:
        combine_cv_3(system, sp.gcdr(), cvs);
        break;
    default:
        std::cerr << "Sub-pattern of " << sp_num
                  << " vertices isn't supported.\n";
        break;
    }

    for (int i = 0; i < cvs.size(); ++i) {
        std::cout << "cvs[" << i << "]: ";
        for (auto v : cvs[i]) {
            std::cout << v << "  ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    return 0;
}
