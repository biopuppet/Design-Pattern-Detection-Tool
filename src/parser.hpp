#ifndef DPDT_PARSER_H
#define DPDT_PARSER_H

#include <vector>

#include "graph.hpp"
#include "pugixml.hpp"

class XMIParser {
    Node *m_curnode = nullptr;

    Graph *m_gcdr;

public:
    Graph parse(const char *file_path);
    void parse_class(pugi::xml_node &cur, Graph &gcdr);
    Parameter *parse_parameter(pugi::xml_node &cur);
    Method parse_operation(pugi::xml_node &cur, size_t curidx);

    void
    add_global_relation(pugi::xml_node &node, Graph &gcdr, Relation relation);
};

#endif  // !DPDT_PARSER_H