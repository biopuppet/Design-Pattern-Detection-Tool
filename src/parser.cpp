#include "parser.hpp"

#include <cstring>
#include <iostream>
#include <istream>
#include <map>
#include <string>

#include "JavaLexer.h"
#include "JavaParser.h"
#include "antlr4-runtime.h"

using namespace antlr4;

static std::vector<Node *> nodes;
static std::map<const std::string, Node *> nodemap;
static const std::map<const std::string, Modifier> modifiers = {
    {"public", M_PUBLIC}, {"protected", M_PROTECTED}, {"private", M_PRIVATE},
    {"static", M_STATIC}, {"abstract", M_ABSTRACT}, {"final", M_FINAL},
};

/**
 *
 */
void DpdtJavaListener::enterTypeDeclaration(
    JavaParser::TypeDeclarationContext *ctx) {
  for (const auto &it : ctx->classOrInterfaceModifier()) {
    const auto mod = it->getText();
    // std::cout << "Mod: " <<  << std::endl;
    if (modifiers.count(mod)) {
      curqual_.setType(modifiers.at(mod));
    }
  }
}

/**
 *
 */
void DpdtJavaListener::exitTypeDeclaration(
    JavaParser::TypeDeclarationContext *ctx) {
}

/**
 *
 */
void DpdtJavaListener::enterInterfaceDeclaration(
    JavaParser::InterfaceDeclarationContext *ctx) {
  // std::cout << ctx->getText() << std::endl;
  auto interval = ctx->getSourceInterval();
  std::cout << interval.toString() << std::endl;
  auto ident = ctx->IDENTIFIER()->getText();
  // TODO: Type parameters
  std::cout << ident << std::endl;
  
  std::vector<Node *> interfaces;
  if (ctx->typeList()) {
    auto parents =
        ctx->typeList()->typeType();
    for (const auto &parent : parents) {
      std::cout << "Parent: " << parent->getText() << std::endl;
      assert(nodemap.count(parent->getText()));
      interfaces.emplace_back(nodemap.at(parent->getText()));
    }
  }
  // std::cout << qual << std::endl;
  auto node = new Node(ident, curqual_, interfaces);
  nodes.emplace_back(node);
  nodemap[ctx->IDENTIFIER()->getText()] = node;
  pushNode(node);
}

void DpdtJavaListener::exitInterfaceDeclaration(
    JavaParser::InterfaceDeclarationContext *ctx) {
  popNode();
}

void DpdtJavaListener::enterClassDeclaration(
    JavaParser::ClassDeclarationContext *ctx) {
  // std::cout << ctx->getText() << std::endl;
  auto interval = ctx->getSourceInterval();
  std::cout << interval.toString() << std::endl;
  auto ident = ctx->IDENTIFIER()->getText();
  std::cout << ident << std::endl;

  Node *parent = nullptr;
  std::vector<Node *> interfaces;
  if (ctx->typeType()) {
    auto sc = ctx->typeType()->getText();
    std::cout << "Parent: " << sc << std::endl;
    // May be an language builtin type
    if (nodemap.count(sc)) {
      parent = nodemap.at(sc);
    }
  }
  if (ctx->typeList()) {
    auto parents =
        ctx->typeList()->typeType();
    for (const auto &parent : parents) {
      std::cout << "Parent: " << parent->getText() << std::endl;
      assert(nodemap.count(parent->getText()));
      interfaces.emplace_back(nodemap.at(parent->getText()));
    }
  }
  // std::cout << qual << std::endl;
  auto node = new Node(ident, curqual_, interfaces, parent);
  nodes.emplace_back(node);
  nodemap[ctx->IDENTIFIER()->getText()] = node;
  pushNode(node);
}

void DpdtJavaListener::exitClassDeclaration(
    JavaParser::ClassDeclarationContext *ctx) {
  popNode();
}

#if 0
void DpdtJavaListener::enterConstDeclaration(
    JavaParser::ConstDeclarationContext *ctx) {
  QualType qual;
  for (const auto &it : ctx->constantModifier()) {
    const auto mod = it->getText();
    // std::cout << "Mod: " <<  << std::endl;
    if (modifiers.count(mod)) {
      qual.setType(modifiers.at(mod));
    }
  }
  std::cout << "Const type: " << ctx->unannType()->getText() << std::endl;
  // auto type = ctx->unannType();
}

void DpdtJavaListener::exitConstDeclaration(
    JavaParser::ConstDeclarationContext *ctx) {}

void DpdtJavaListener::enterFieldDeclaration(
    JavaParser::FieldDeclarationContext *ctx) {
  QualType qual;
  for (const auto &it : ctx->fieldModifier()) {
    const auto mod = it->getText();
    // std::cout << "Mod: " <<  << std::endl;
    if (modifiers.count(mod)) {
      qual.setType(modifiers.at(mod));
    }
  }

  auto type = ctx->unannType();
  std::cout << "Field type: " << type->getText() << std::endl;
  auto vars = ctx->variableDeclaratorList()->variableDeclarator();
  assert(curNode() != nullptr);
  for (const auto &var : vars) {
    std::cout << "var: " << var->getText() << std::endl;
    auto name = var->variableDeclaratorId()->IDENTIFIER()->getText();
    auto attr = new Attribute(name, type->getText(), qual);
    curNode()->attrs.emplace_back(attr);
  }
}

void DpdtJavaListener::exitFieldDeclaration(
    JavaParser::FieldDeclarationContext *ctx) {}
#endif

Graph &SrcParser::parse() {
  for (auto &src : srcs_) {
    std::ifstream stream;
    stream.open(src);

    ANTLRInputStream input(stream);
    JavaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    JavaParser parser(&tokens);

    // JavaParser::CompilationUnitContext *cu = parser.compilationUnit();
    // std::cout << cu->toStringTree(&parser, true) << std::endl;

    DpdtJavaListener listener;
    tree::ParseTree *tree = parser.compilationUnit();
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    stream.close();
  }

  // stream.close();
  gcdr_ = new Graph(nodes);
  return *gcdr_;
}
