#include <vector>
#include <boost/graph/graph_utility.hpp>
#include <boost/graph/adjacency_matrix.hpp>

#include "pugixml.hpp"
#include "gcdr.hpp"
#include "sp_detector.hpp"


void SubPatternDetector::createICA() {
    GCDR ica(3);
    add_edge(1, 0, Relation::Inheritance, ica);
    add_edge(1, 2, Relation::Association, ica);
    sps.emplace_back(ica);
}

void SubPatternDetector::createCI() {
    GCDR ci(3);
    add_edge(1, 0, Relation::Inheritance, ci);
    add_edge(2, 0, Relation::Inheritance, ci);
    sps.emplace_back(ci);
}

void SubPatternDetector::createSASS() {
    GCDR sass(1);
    add_edge(0, 0, Relation::Association, sass);
    sps.emplace_back(sass);
}


int SubPatternDetector::init() {
    createICA();
    createCI();

    createSASS();
    return 0;
}

int SubPatternDetector::detect_all(GCDR &system) {
    for (auto sp : sps) {
        detect_sp_instances(system, sp);
    }
    return 0;
}

int SubPatternDetector::detect_sp_instances(GCDR &system, GCDR &sp) {
    int sys_num = num_vertices(system);
    int sp_num = num_vertices(sp);
    std::vector<std::vector<vertex_descriptor_t>> cvs(sp_num);
    std::cout << sp_num << std::endl;

    for (int i = 0; i < sp_num; ++i) {
        for (int j = 0; j < sys_num; ++j) {
            // std::cout << gcdr_cw_out(system, j) << std::endl;
            // std::cout << gcdr_cw_in(system, j) << std::endl;
            if (gcdr_cw_out(system, j) % gcdr_cw_out(sp, i) == 0 &&
                gcdr_cw_in(system, j) % gcdr_cw_in(sp, i) == 0) {
                cvs[i].push_back(j);
            }
        }
    }

    switch (sp_num) {
        case 1:
        {

            auto sp_e = edge(0, 0, sp).first;
            for (auto vd : cvs[0]) {
                auto sys_e = edge(vd, vd, system).first;
                if (system[sys_e].relation % sp[sp_e].relation) {
                    continue;
                }
                std::cout << "here\n";
            }
            break;
        }
        case 2:
        {

            auto sp_e1 = edge(0, 1, sp).first;
            auto sp_e2 = edge(1, 0, sp).first;
            for (auto vd1 : cvs[0]) {
                for (auto vd2 : cvs[1]) {
                    auto sys_e1 = edge(vd1, vd2, system).first;
                    auto sys_e2 = edge(vd2, vd1, system).first;
                    if (system[sys_e1].relation % sp[sp_e1].relation
                    || system[sys_e2].relation % sp[sp_e2].relation) {
                        continue;
                    }
                    std::cout << "here2\n";
                }
            }
            break;
        }
        case 3:
        {

            // since there are no self-loops in 3-vertex-sub-patterns
            // we can presume i, j are different.
            edge_descriptor_t sp_es[] = {edge(0, 1, sp).first,
            edge(0, 2, sp).first,
            edge(1, 0, sp).first,
            edge(1, 2, sp).first,
            edge(2, 0, sp).first,
            edge(2, 1, sp).first
                };
            for (auto vd1 : cvs[0]) {
                for (auto vd2 : cvs[1]) {
                    for (auto vd3 : cvs[2]) {
                        edge_descriptor_t sys_es[] = {edge(vd1, vd2, system).first,
                            edge(vd1, vd3, system).first,
                            edge(vd2, vd1, system).first,
                            edge(vd2, vd3, system).first,
                            edge(vd3, vd1, system).first,
                            edge(vd3, vd2, system).first
                                };
                                bool continue_flag = false;
                        for (int i = 0; i < 6; ++i) {
                            if (system[sys_es[i]].relation % sp[sp_es[i]].relation) {
                                continue_flag = true;
                                break;
                            }
                        }
                        if (continue_flag) continue;
                        std::cout << "here3\n";
                    }
                }
            }
            break;
        }
        default:
            break;
    }

    for (auto cv : cvs) {
        std::cout << "cvs:\n";
        for (auto v : cv) {
            std::cout << v << "  ";
        }
        std::cout << "\n";
    }
    return 0;
}
