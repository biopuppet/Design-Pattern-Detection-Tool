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
    subpatterns.push_back(ica);
}

int SubPatternDetector::init() {
    createICA();
    return 0;
}

int SubPatternDetector::detect_all(GCDR &system) {
    for (auto sp : subpatterns) {
        detect_sp_instances(system, sp);
    }
    return 0;
}

int SubPatternDetector::detect_sp_instances(GCDR &system, GCDR &sp) {
    int sys_num = num_vertices(system);
    int sp_num = num_vertices(sp);
    std::vector<std::vector<vertex_descriptor_t>> cvs(sp_num);
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

    for (auto cv : cvs) {
        for (auto v : cv) {
            std::cout << v << std::endl;
        }
    }
    return 0;
}
