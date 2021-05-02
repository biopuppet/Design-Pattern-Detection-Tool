#ifndef DPDT_PARSER_H
#define DPDT_PARSER_H

#include "graph.hpp"
#include "Java8ParserBaseListener.h"

using namespace antlr4;
using namespace antlrcpptest;

class DpdtJava8Listener : public Java8ParserBaseListener {
public:
  void enterNormalInterfaceDeclaration(Java8Parser::NormalInterfaceDeclarationContext * /*ctx*/) override;
  void exitNormalInterfaceDeclaration(Java8Parser::NormalInterfaceDeclarationContext * /*ctx*/) override;
};

class SrcParser {
  Node *curnode_ = nullptr;

  Graph *gcdr_;

  const std::string src_;

 public:
  explicit SrcParser(const std::string &file) : src_(file) {}

  SrcParser(const SrcParser &) = delete;
  SrcParser &operator=(const SrcParser &) = delete;

  Graph &parse();
};

#endif  // !DPDT_PARSER_H
