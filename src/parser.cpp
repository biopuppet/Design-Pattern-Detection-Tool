#include "parser.hpp"

#include <cstring>
#include <iostream>
#include <istream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>

#include "JavaLexer.h"
#include "JavaParser.h"
#include "antlr4-runtime.h"

using namespace antlr4;

static std::vector<Node *> nodes;
static std::map<const std::string, Node *> nodemap;
static std::unordered_map<Node *, size_t> nodeidx;
static const std::map<const std::string, Modifier> modifiers = {
    {"public", M_PUBLIC}, {"protected", M_PROTECTED}, {"private", M_PRIVATE},
    {"static", M_STATIC}, {"abstract", M_ABSTRACT},   {"final", M_FINAL},
};
static const std::set<std::string> list_types = {
    "List",
    "ArrayList",
    "LinkedList",
    "Vector",
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
    JavaParser::TypeDeclarationContext *ctx) {}

/**
 *
 */
void DpdtJavaListener::enterClassBodyDeclaration(
    JavaParser::ClassBodyDeclarationContext *ctx) {
  for (const auto &it : ctx->modifier()) {
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
void DpdtJavaListener::exitClassBodyDeclaration(
    JavaParser::ClassBodyDeclarationContext *ctx) {}

/**
 *
 */
void DpdtJavaListener::enterInterfaceDeclaration(
    JavaParser::InterfaceDeclarationContext *ctx) {
  // std::cout << ctx->getText() << std::endl;
  auto interval = ctx->getSourceInterval();
  std::cout << interval.toString() << std::endl;
  auto ident = ctx->IDENTIFIER()->getText();
  if (ctx->typeParameters()) {
    ident += ctx->typeParameters()->getText();
  }
  std::cout << ident << std::endl;
  auto node = new Node(ident, curqual_);

  if (ctx->typeList()) {
    auto parents = ctx->typeList()->typeType();
    for (const auto &parent : parents) {
      auto ps = parent->getText();
      std::cout << "Parent: " << ps << std::endl;
      node->addInterface(ps);
    }
  }

  nodeidx.emplace(node, nodes.size());
  nodes.emplace_back(node);
  nodemap[ident] = node;
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
  if (ctx->typeParameters()) {
    ident += ctx->typeParameters()->getText();
  }
  std::cout << ident << std::endl;

  auto node = new Node(ident, curqual_);

  if (ctx->typeType()) {
    node->setParent(ctx->typeType()->getText());
    // May be an language builtin type
  }
  if (ctx->typeList()) {
    auto parents = ctx->typeList()->typeType();
    for (const auto &p : parents) {
      auto ps = p->getText();
      std::cout << "Parent: " << ps << std::endl;
      node->addInterface(ps);
    }
  }
  // std::cout << qual << std::endl;
  nodeidx.emplace(node, nodes.size());
  nodes.emplace_back(node);
  nodemap[ident] = node;
  pushNode(node);
}

void DpdtJavaListener::exitClassDeclaration(
    JavaParser::ClassDeclarationContext *ctx) {
  popNode();
}

void DpdtJavaListener::enterFieldDeclaration(
    JavaParser::FieldDeclarationContext *ctx) {
  assert(curNode() != nullptr);
  QualType qual;
  auto vards = ctx->variableDeclarators()->variableDeclarator();
  auto type = ctx->typeType()->getText();
  std::cout << "Field type: " << type << std::endl;

  auto node_type = ctx->typeType()->classOrInterfaceType();
  auto builtin_type = ctx->typeType()->primitiveType();
  std::string listof;
  size_t dim = 0;
  if (builtin_type) {
    listof = builtin_type->getText();
  }
  if (node_type) {
    listof = node_type->getText();
    // node_type->typeArguments()
    for (size_t i = 0; i < node_type->IDENTIFIER().size(); ++i) {
      auto ident = node_type->IDENTIFIER(i);
      auto typeargs = node_type->typeArguments(i);
      auto idstr = ident->getText();
      // List<...>
      if (typeargs && list_types.find(idstr) != list_types.end()) {
        // TODO: Add nested type support
        // List has only 1 arg
        dim += 1;
        listof = typeargs->typeArgument()[0]->getText();
      }
    }
  }

  for (const auto &var : vards) {
    auto name = var->variableDeclaratorId()->IDENTIFIER()->getText();
    dim += var->variableDeclaratorId()->LBRACK().size();
    std::cout << "var: " << name << dim << listof << std::endl;
    auto attr = new Attribute(name, type, qual, listof, dim);
    curNode()->attrs_.emplace_back(attr);
  }
}

void DpdtJavaListener::exitFieldDeclaration(
    JavaParser::FieldDeclarationContext *ctx) {}

Graph *SrcParser::parse() {
  for (auto &src : srcs_) {
    std::ifstream stream;
    stream.open(src);
    try {
      ANTLRInputStream input(stream);
      JavaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);
      JavaParser parser(&tokens);

      // JavaParser::CompilationUnitContext *cu = parser.compilationUnit();
      // std::cout << cu->toStringTree(&parser, true) << std::endl;

      DpdtJavaListener listener;
      tree::ParseTree *tree = parser.compilationUnit();
      tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    } catch (std::exception &e) {
      fprintf(stderr, "ANTLR4 parsing error: %s\n", e.what());
      return nullptr;
    }
    stream.close();
  }

  // stream.close();
  gcdr_ = new Graph(nodes);

  for (size_t i = 0; i < gcdr_->size(); ++i) {
    auto node = gcdr_->node(i);
    assert(node);
    if (nodemap.count(node->parent_name_)) {
      node->setParent(nodemap[node->parent_name_]);
    }
    for (const auto &it : node->itf_names_) {
      if (nodemap.count(it)) {
        node->addInterface(nodemap[it]);
      }
    }
    auto parent = node->getParent();
    if (parent) {
      gcdr_->addInheritance(i, nodeidx.at(parent));
    }
    for (const auto &it : node->interfaces_) {
      gcdr_->addInheritance(i, nodeidx.at(it));
    }
    for (const auto &it : node->attrs_) {
      if (nodemap.count(it->listof_) && nodeidx.count(nodemap[it->listof_])) {
        if (it->isList()) {
          gcdr_->addAggregation(i, nodeidx[nodemap[it->listof_]]);
        } else {
          gcdr_->addAssociation(i, nodeidx[nodemap[it->listof_]]);
        }
      }
    }
  }
  return gcdr_;
}
