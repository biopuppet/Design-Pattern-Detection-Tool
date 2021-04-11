#ifndef DPDT_PARSER_H
#define DPDT_PARSER_H

#include <vector>

#include "gcdr.hpp"
#include "pugixml.hpp"

class XMIParser {
public:
    Graph parse(const char *file_path);
    void parse_class(pugi::xml_node cur, Graph &gcdr);
    Parameter parse_parameter(pugi::xml_node cur);
    Method parse_operation(pugi::xml_node cur);
};

#endif  // !DPDT_PARSER_H