#ifndef DPDT_PARSER_H
#define DPDT_PARSER_H

#include "graph.hpp"
#include "pugixml.hpp"

class SrcParser {
  Node *curnode_ = nullptr;

  Graph *gcdr_;

  const std::string src_;

 public:
  explicit SrcParser(const std::string &file) : src_(file) {}

  SrcParser(const SrcParser &) = delete;
  SrcParser &operator=(const SrcParser &) = delete;

  Graph &parse();
  void parse_class(pugi::xml_node &cur);
  Parameter *parse_parameter(pugi::xml_node &cur);
  Method *parse_method(pugi::xml_node &cur, size_t curidx);
  Attribute *parse_attribute(pugi::xml_node &cur, size_t curidx);
};

#endif  // !DPDT_PARSER_H