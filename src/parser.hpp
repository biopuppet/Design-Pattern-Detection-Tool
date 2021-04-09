#ifndef DPDT_PARSER_H
#define DPDT_PARSER_H

#include "gcdr.hpp"
#include "pugixml.hpp"

class XMIParser {
public:
    void parse_class(pugi::xml_node &node, GCDR &gcdr);
    GCDR parse(const char *file_path);
};

#endif  // !DPDT_PARSER_H