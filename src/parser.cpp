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
using namespace antlrcpptest;

static std::vector<Node *> nodes;
static std::map<const std::string, Node *> nodemap;
static const std::map<const std::string, Modifier> modifiers = {
    {"public", M_PUBLIC}, {"protected", M_PROTECTED}, {"private", M_PRIVATE},
    {"static", M_STATIC}, {"abstract", M_ABSTRACT},
};
#if 0
/**
 *
 */
void DpdtJavaListener::enterNormalInterfaceDeclaration(
    JavaParser::NormalInterfaceDeclarationContext *ctx) {
  // std::cout << ctx->getText() << std::endl;
  auto interval = ctx->getSourceInterval();
  std::cout << interval.toString() << std::endl;
  auto ident = ctx->Identifier()->getText();
  std::cout << ident << std::endl;
  QualType qual;
  for (const auto &it : ctx->interfaceModifier()) {
    const auto mod = it->getText();
    // std::cout << "Mod: " <<  << std::endl;
    if (modifiers.count(mod)) {
      qual.setType(modifiers.at(mod));
    }
  }

  std::vector<Node *> interfaces;

  if (ctx->extendsInterfaces()) {
    auto parents =
        ctx->extendsInterfaces()->interfaceTypeList()->interfaceType();
    for (const auto &parent : parents) {
      std::cout << "Parent: " << parent->getText() << std::endl;
      assert(nodemap.count(parent->getText()));
      interfaces.emplace_back(nodemap.at(parent->getText()));
    }
  }
  // std::cout << qual << std::endl;
  auto node = new Node(ident, qual, interfaces);
  nodes.emplace_back(node);
  nodemap[ctx->Identifier()->getText()] = node;
  pushNode(node);
}

void DpdtJavaListener::exitNormalInterfaceDeclaration(
    JavaParser::NormalInterfaceDeclarationContext *ctx) {
  popNode();
}

void DpdtJavaListener::enterNormalClassDeclaration(
    JavaParser::NormalClassDeclarationContext *ctx) {
  // std::cout << ctx->getText() << std::endl;
  auto interval = ctx->getSourceInterval();
  std::cout << interval.toString() << std::endl;
  auto ident = ctx->Identifier()->getText();
  std::cout << ident << std::endl;
  QualType qual;
  for (const auto &it : ctx->classModifier()) {
    const auto mod = it->getText();
    // std::cout << "Mod: " <<  << std::endl;
    if (modifiers.count(mod)) {
      qual.setType(modifiers.at(mod));
    }
  }
  Node *parent = nullptr;
  std::vector<Node *> interfaces;
  if (ctx->superclass()) {
    auto sc = ctx->superclass()->classType()->getText();
    std::cout << "Parent: " << sc << std::endl;
    // May be an language builtin type
    if (nodemap.count(sc)) {
      parent = nodemap.at(sc);
    }
  }
  if (ctx->superinterfaces()) {
    auto itfs = ctx->superinterfaces()->interfaceTypeList()->interfaceType();
    for (const auto &itf : itfs) {
      auto name = itf->classType()->getText();
      std::cout << "Parent: " << name << std::endl;
      assert(nodemap.count(name));
      interfaces.emplace_back(nodemap.at(name));
    }
  }
  // std::cout << qual << std::endl;
  auto node = new Node(ident, qual, interfaces, parent);
  nodes.emplace_back(node);
  nodemap[ctx->Identifier()->getText()] = node;
  pushNode(node);
}

void DpdtJavaListener::exitNormalClassDeclaration(
    JavaParser::NormalClassDeclarationContext *ctx) {
  popNode();
}

void DpdtJavaListener::enterConstantDeclaration(
    JavaParser::ConstantDeclarationContext *ctx) {
  QualType qual;
  for (const auto &it : ctx->constantModifier()) {
    const auto mod = it->getText();
    // std::cout << "Mod: " <<  << std::endl;
    if (modifiers.count(mod)) {
      qual.setType(modifiers.at(mod));
    }
  }
  std::cout << "Constant type: " << ctx->unannType()->getText() << std::endl;
  // auto type = ctx->unannType();
}

void DpdtJavaListener::exitConstantDeclaration(
    JavaParser::ConstantDeclarationContext *ctx) {}

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
    auto name = var->variableDeclaratorId()->Identifier()->getText();
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

    JavaParser::CompilationUnitContext *cu = parser.compilationUnit();
    std::cout << cu->toStringTree(&parser, true) << std::endl;

    // DpdtJavaListener listener;
    // tree::ParseTree *tree = parser.compilationUnit();
    // tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    stream.close();
  }

  // stream.close();
  gcdr_ = new Graph(nodes);
  return *gcdr_;
}
