#ifndef DPDT_PARSER_H
#define DPDT_PARSER_H

#include <stack>

#include "Java8ParserBaseListener.h"
#include "graph.hpp"

using namespace antlr4;
using namespace antlrcpptest;

class DpdtJava8Listener : public Java8ParserBaseListener {
 public:
  void enterNormalInterfaceDeclaration(
      Java8Parser::NormalInterfaceDeclarationContext * /*ctx*/) override;
  void exitNormalInterfaceDeclaration(
      Java8Parser::NormalInterfaceDeclarationContext * /*ctx*/) override;
  void enterNormalClassDeclaration(
      Java8Parser::NormalClassDeclarationContext * /*ctx*/) override;
  void exitNormalClassDeclaration(
      Java8Parser::NormalClassDeclarationContext * /*ctx*/) override;
  void enterConstantDeclaration(
      Java8Parser::ConstantDeclarationContext * /*ctx*/) override;
  void exitConstantDeclaration(
      Java8Parser::ConstantDeclarationContext * /*ctx*/) override;
  void enterFieldDeclaration(
      Java8Parser::FieldDeclarationContext * /*ctx*/) override;
  void exitFieldDeclaration(
      Java8Parser::FieldDeclarationContext * /*ctx*/) override;

  Node *curNode() const { return nodestack_.top(); }
  void popNode() { nodestack_.pop(); }
  void pushNode(Node *node) { nodestack_.push(node); }

 private:
  std::stack<Node *> nodestack_;
};

class SrcParser {
  Graph *gcdr_;

  std::vector<std::string> srcs_;

 public:
  explicit SrcParser(std::vector<std::string> &file) : srcs_(file) {}

  SrcParser(const SrcParser &) = delete;
  SrcParser &operator=(const SrcParser &) = delete;

  Graph &parse();
};

#endif  // !DPDT_PARSER_H
