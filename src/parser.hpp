#ifndef DPDT_PARSER_H
#define DPDT_PARSER_H

#include <stack>

#include "JavaParserBaseListener.h"
#include "JavaParserBaseVisitor.h"
#include "graph.hpp"

using namespace antlr4;

class DpdtJavaVisitor : public JavaParserBaseVisitor {
 public:
  antlrcpp::Any visitFormalParameters(
      JavaParser::FormalParametersContext *ctx) override;
};

class DpdtJavaListener : public JavaParserBaseListener {
 public:
  void enterTypeDeclaration(
      JavaParser::TypeDeclarationContext * /*ctx*/) override;
  void exitTypeDeclaration(
      JavaParser::TypeDeclarationContext * /*ctx*/) override;
  void enterClassBodyDeclaration(
      JavaParser::ClassBodyDeclarationContext * /*ctx*/) override;
  void exitClassBodyDeclaration(
      JavaParser::ClassBodyDeclarationContext * /*ctx*/) override;

  void enterInterfaceDeclaration(
      JavaParser::InterfaceDeclarationContext * /*ctx*/) override;
  void exitInterfaceDeclaration(
      JavaParser::InterfaceDeclarationContext * /*ctx*/) override;
  void enterClassDeclaration(
      JavaParser::ClassDeclarationContext * /*ctx*/) override;
  void exitClassDeclaration(
      JavaParser::ClassDeclarationContext * /*ctx*/) override;
  // void enterConstDeclaration(
  //     JavaParser::ConstDeclarationContext * /*ctx*/) override;
  // void exitConstDeclaration(
  //     JavaParser::ConstDeclarationContext * /*ctx*/) override;
  void enterFieldDeclaration(
      JavaParser::FieldDeclarationContext * /*ctx*/) override;
  void exitFieldDeclaration(
      JavaParser::FieldDeclarationContext * /*ctx*/) override;

  void enterMethodDeclaration(
      JavaParser::MethodDeclarationContext * /*ctx*/) override;
  void exitMethodDeclaration(
      JavaParser::MethodDeclarationContext * /*ctx*/) override;

  Node *curNode() const { return nodestack_.top(); }
  void popNode() { nodestack_.pop(); }
  void pushNode(Node *node) { nodestack_.push(node); }

 private:
  std::stack<Node *> nodestack_;
  QualType curqual_;
  DpdtJavaVisitor visitor_;
};

class SrcParser {
  SrcGraph *gcdr_;

  std::vector<std::string> srcs_;

 public:
  explicit SrcParser(std::vector<std::string> &file) : srcs_(file) {}
  ~SrcParser() {
    if (gcdr_) delete gcdr_;
  }

  SrcParser(const SrcParser &) = delete;
  SrcParser &operator=(const SrcParser &) = delete;

  SrcGraph *parse();
};

#endif  // !DPDT_PARSER_H
