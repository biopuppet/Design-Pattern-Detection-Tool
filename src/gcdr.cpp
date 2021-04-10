#include <iostream>
#include <cstring>

#include "gcdr.hpp"

size_t GCDR::cw_in(size_t v) const {
    size_t ret = 1;
    for (int i = 0; i < size(); ++i) {
        ret *= edge(i, v);
    }
    return ret;
}

size_t GCDR::cw_out(size_t v) const {
    size_t ret = 1;
    for (int i = 0; i < size(); ++i) {
        ret *= edge(v, i);
    }
    return ret;
}

void GCDR::print_gcdr() const {
    auto n = size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << nodes[i].name << " --" << edge(i, j) << "--> " << nodes[j].name << std::endl;
        }
    }
}

Visibility Node::get_vis(const char *s) {
    if (!strcmp(s, "public"))
        return Visibility::PUBLIC;
    else if (!strcmp(s, "protected"))
        return Visibility::PROTECTED;
    else if (!strcmp(s, "private"))
        return Visibility::PRIVATE;
    else
        return Visibility::PRIVATE;
}
