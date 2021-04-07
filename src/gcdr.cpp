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
