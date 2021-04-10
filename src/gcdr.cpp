#include <iostream>
#include <cstring>

#include "gcdr.hpp"

size_t GCDR::cw_in(size_t v) const {
    size_t ret = 1;
    for (int i = 0; i < num_nodes(); ++i) {
        ret *= matrix[i][v];
    }
    return ret;
}

size_t GCDR::cw_out(size_t v) const {
    size_t ret = 1;
    for (int i = 0; i < num_nodes(); ++i) {
        ret *= matrix[v][i];
    }
    return ret;
}

void GCDR::print_gcdr() const {
    // const char *name = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // std::cout << "vertex set: ";
    // print_vertices(g, name);

    // std::cout << "edge set: ";
    // print_edges(g, name);

    // std::cout << "out-edges: " << std::endl;
    // print_graph(g, name);

    auto n = size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << nodes[i].name << " --" << matrix[i][j] << "--> " << nodes[j].name << std::endl;
        }
    }
}

// Node::Node(pugi::xml_node &node) {
//     id = node.attribute("xmi:id").value();
//     name = node.attribute("name").value();
//     visibility = Node::get_vis(node.attribute("visibility").value());
//     isAbstract = node.attribute("isAbstract") ? true : false;
// }

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
