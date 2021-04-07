#include <iostream>
#include <boost/graph/graph_utility.hpp>
#include <boost/graph/adjacency_matrix.hpp>

#include "gcdr.hpp"

using namespace boost;

size_t gcdr_cw_in(const GCDR &g, vertex_descriptor_t v) {
    auto eip = in_edges(v, g);
    size_t ret = 1;
    for (auto ei = eip.first; ei != eip.second; ++ei) {
        ret *= g[*ei].relation;
    }
    return ret;
}

size_t gcdr_cw_out(const GCDR &g, vertex_descriptor_t v) {
    auto eip = out_edges(v, g);
    size_t ret = 1;
    for (auto ei = eip.first; ei != eip.second; ++ei) {
        ret *= g[*ei].relation;
    }
    return ret;
}

void print_gcdr(const GCDR &g) {
    const char *name = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "vertex set: ";
    print_vertices(g, name);

    std::cout << "edge set: ";
    print_edges(g, name);

    std::cout << "out-edges: " << std::endl;
    print_graph(g, name);

    auto eip = edges(g);
    for (auto ei = eip.first; ei != eip.second; ++ei) {
        std::cout << source(*ei, g) << " ---> " << target(*ei, g)
                  << " relation: " << g[*ei].relation << std::endl;
    }
}
