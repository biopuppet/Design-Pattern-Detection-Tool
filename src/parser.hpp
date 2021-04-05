#ifndef DPDS_PARSER_H
#define DPDS_PARSER_H

#include "pugixml.hpp"
#include "gcdr.hpp"

class Parser {
public:
    void parse_class(Node &node, GCDR &gcdr);
    int parse(const char *file_path);
};

#endif  // !DPDS_PARSER_H