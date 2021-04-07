#ifndef DPDT_PARSER_H
#define DPDT_PARSER_H

#include "pugixml.hpp"
#include "gcdr.hpp"

class XMIParser {
public:
    void parse_class(Node &node, GCDR &gcdr);
    GCDR parse(const char *file_path);
};

#endif  // !DPDT_PARSER_H