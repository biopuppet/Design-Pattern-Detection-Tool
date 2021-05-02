#ifndef DPDT_PARSER_H
#define DPDT_PARSER_H

#include <stack>

#include "JavaParserBaseListener.h"
#include "graph.hpp"

using namespace antlr4;
using namespace antlrcpptest;

// class DpdtJavaListener : public JavaParserBaseListener {
//  public:
//   void enterNormalInterfaceDeclaration(
//       JavaParser::NormalInterfaceDeclarationContext * /*ctx*/) override;
//   void exitNormalInterfaceDeclaration(
//       JavaParser::NormalInterfaceDeclarationContext * /*ctx*/) override;
//   void enterNormalClassDeclaration(
//       JavaParser::NormalClassDeclarationContext * /*ctx*/) override;
//   void exitNormalClassDeclaration(
//       JavaParser::NormalClassDeclarationContext * /*ctx*/) override;
//   void enterConstantDeclaration(
//       JavaParser::ConstantDeclarationContext * /*ctx*/) override;
//   void exitConstantDeclaration(
//       JavaParser::ConstantDeclarationContext * /*ctx*/) override;
//   void enterFieldDeclaration(
//       JavaParser::FieldDeclarationContext * /*ctx*/) override;
//   void exitFieldDeclaration(
//       JavaParser::FieldDeclarationContext * /*ctx*/) override;

//   Node *curNode() const { return nodestack_.top(); }
//   void popNode() { nodestack_.pop(); }
//   void pushNode(Node *node) { nodestack_.push(node); }

//  private:
//   std::stack<Node *> nodestack_;
// };

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
