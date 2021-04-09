#include <cstring>

#include "node.hpp"
#include "pugixml.hpp"

Node::Node(pugi::xml_node &node) {
    id = node.attribute("xmi:id").value();
    name = node.attribute("name").value();
    visibility = Node::get_vis(node.attribute("visibility").value());
    isAbstract = node.attribute("isAbstract") ? true : false;
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

void Node::adapt_node(Node &node, pugi::xml_node &_node) {
    node.id = _node.attribute("xmi:id").value();
    node.name = _node.attribute("name").value();
    node.visibility = Node::get_vis(_node.attribute("visibility").value());
    node.isAbstract = _node.attribute("isAbstract") ? true : false;
}