#include <iostream>
#include <cstring>

#include "gcdr.hpp"

size_t Graph::cw_in(size_t v) const {
    size_t ret = 1;
    for (size_t i = 0; i < size(); ++i) {
        ret *= edge(i, v);
    }
    return ret;
}

size_t Graph::cw_out(size_t v) const {
    size_t ret = 1;
    for (size_t i = 0; i < size(); ++i) {
        ret *= edge(v, i);
    }
    return ret;
}

void Graph::print_gcdr() const {
    auto n = size();
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
            if (edge(i, j) == 1) {
                continue;
            }
            std::cout << nodes[i].name() << " --" << edge(i, j) << "--> "
                      << nodes[j].name() << std::endl;
        }
    }
    std::cout << std::endl;
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
