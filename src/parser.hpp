#ifndef DPDT_PARSER_H
#define DPDT_PARSER_H

#include "graph.hpp"
#include "pugixml.hpp"

class XMIParser {
  Node *curnode_ = nullptr;

  Graph *gcdr_;

  const std::string xmi_;

 public:
  explicit XMIParser(const std::string &file) : xmi_(file) {}

  XMIParser(const XMIParser &) = delete;
  XMIParser &operator=(const XMIParser &) = delete;

  Graph &parse();
  void parse_class(pugi::xml_node &cur);
  Parameter *parse_parameter(pugi::xml_node &cur);
  Method *parse_method(pugi::xml_node &cur, size_t curidx);
  Attribute *parse_attribute(pugi::xml_node &cur, size_t curidx);
};

#endif  // !DPDT_PARSER_H