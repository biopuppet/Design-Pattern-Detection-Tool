#ifndef DPDT_NODE_H
#define DPDT_NODE_H

#include <string>

// TODO: Remove this
#include "pugixml.hpp"

enum class Visibility {
    PRIVATE,
    PROTECTED,
    PUBLIC,
    PACKAGE,  // Java
};

class Node {
public:
    std::string id;
    std::string name;
    Visibility visibility;
    bool isAbstract;  // bit-mask?

    Node() {}

    Node(pugi::xml_node &node);

    static Visibility get_vis(const char *s);

    static void adapt_node(Node &node, pugi::xml_node &_node);
};

#endif  // !DPDT_NODE_H