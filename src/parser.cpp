#include "parser.hpp"

#include <cstring>
#include <iostream>
#include <string>

static Visibility get_vis(const char *s) {
  if (!strcmp(s, "public"))
    return Visibility::PUBLIC;
  else if (!strcmp(s, "protected"))
    return Visibility::PROTECTED;
  else if (!strcmp(s, "private"))
    return Visibility::PRIVATE;
  else
    return Visibility::PRIVATE;
}

Graph &SrcParser::parse() {
  gcdr_ = new Graph(4);
  return *gcdr_;
}
