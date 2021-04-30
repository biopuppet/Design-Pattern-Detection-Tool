#include "parser.hpp"

#include <cstring>
#include <iostream>
#include <string>

#include "Java8Lexer.h"
#include "Java8Parser.h"
#include "antlr4-runtime.h"

using namespace antlr4;
using namespace antlrcpptest;

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
  std::ifstream stream;
  stream.open(src_);

  ANTLRInputStream input(stream);
  Java8Lexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  Java8Parser parser(&tokens);

  auto cu = parser.compilationUnit();

  std::cout << cu->toStringTree(&parser, true) << std::endl;

  gcdr_ = new Graph(4);
  return *gcdr_;
}
