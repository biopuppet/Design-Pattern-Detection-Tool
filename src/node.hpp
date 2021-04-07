#ifndef DPDT_NODE_H
#define DPDT_NODE_H

#include <string>
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_matrix.hpp>

#include "pugixml.hpp"

enum class Visibility {
    PRIVATE,
    PROTECTED,
    PUBLIC,
    PACKAGE,
};

class Node {
public:
    std::string id;
    std::string name;
    Visibility visibility;
    bool isAbstract;  // bit-mask?

    pugi::xml_node xnode;

    Node() {}

    Node(pugi::xml_node &node) : xnode(node) {
        id = node.attribute("xmi:id").value();
        name = node.attribute("name").value();
        visibility = Node::get_vis(node.attribute("visibility").value());
        isAbstract = node.attribute("isAbstract") ? true : false;
    }

    static Visibility get_vis(const char *s) {
        if (!strcmp(s, "public"))
            return Visibility::PUBLIC;
        else if (!strcmp(s, "protected"))
            return Visibility::PROTECTED;
        else if (!strcmp(s, "private"))
            return Visibility::PRIVATE;
        else
            return Visibility::PRIVATE;
    }

    static void adapt_node(Node &node, pugi::xml_node &_node) {
        node.id = _node.attribute("xmi:id").value();
        node.name = _node.attribute("name").value();
        node.visibility = Node::get_vis(_node.attribute("visibility").value());
        node.isAbstract = _node.attribute("isAbstract") ? true : false;
    }
};

#endif  // !DPDT_NODE_H