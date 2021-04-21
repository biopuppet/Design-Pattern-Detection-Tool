#ifndef DPDT_PARSER_H
#define DPDT_PARSER_H

#include <vector>

#include "graph.hpp"
#include "pugixml.hpp"

class XMIParser {
  Node *curnode_ = nullptr;

  Graph *gcdr_;

 public:
  Graph &parse(const char *file_path);
  void parse_class(pugi::xml_node &cur);
  Parameter *parse_parameter(pugi::xml_node &cur);
  Method parse_operation(pugi::xml_node &cur, size_t curidx);
};

#endif  // !DPDT_PARSER_H