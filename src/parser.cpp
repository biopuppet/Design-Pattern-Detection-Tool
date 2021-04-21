#include "parser.hpp"

#include <cstring>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

#include "pugixml.hpp"

static std::map<pugi::xml_node, size_t> node_map;
static std::unordered_map<std::string, pugi::xml_node> xml_nodes;
static std::vector<pugi::xml_node> nodes;
static std::vector<pugi::xml_node> realizations;
static std::vector<pugi::xml_node> deps;
static std::map<std::string, size_t> class_map;

/**
 * Map all xmi id to the corresponding xml_node for later references.
 * TODO: Make this struct a friend of XMIParser so that
 * it can use static maps of XMIParser.
 */
struct simple_walker : pugi::xml_tree_walker {
  virtual bool for_each(pugi::xml_node &node) {
    // for (int i = 0; i < depth(); ++i) std::cout << "  "; // indentation
    // std::cout << "name=" << node.name() << "\n";

    if (!node.attribute("xmi:id").empty()) {
      xml_nodes[node.attribute("xmi:id").value()] = node;
    }
    auto type = node.attribute("xmi:type").value();
    if (!strcmp(type, "uml:Class") || !strcmp(type, "uml:Interface")) {
      nodes.emplace_back(node);
    } else if (!strcmp(type, "uml:Realization")) {
      realizations.emplace_back(node);
    } else if (!strcmp(type, "uml:Dependency")) {
      deps.emplace_back(node);
    }
    return true;  // continue traversal
  }
};

Parameter *XMIParser::parse_parameter(pugi::xml_node &cur) {
  auto id = cur.attribute("xmi:id").value();
  auto name = cur.attribute("name").value();
  auto direction = strcmp("return", cur.attribute("direction").value())
                       ? Parameter::IN
                       : Parameter::RETURN;

  std::string type = cur.attribute("type").value();
  auto m_type = Parameter::Type::Void;

  if (type.substr(0, 7) == "EAJava_") {
    type = type.substr(7);
    // std::cout << type << std::endl;
    if (type == "void") {
      m_type = Parameter::Void;
    } else if (type == "String__") {
      m_type = Parameter::Java_String;
    } else {
      m_type = Parameter::Java_Class;
    }
  }
  return new Parameter(id, name, type, m_type, direction);
}

Method XMIParser::parse_operation(pugi::xml_node &cur, size_t curidx) {
  Method node;
  node.id = cur.attribute("xmi:id").value();
  node.name = cur.attribute("name").value();
  node.visibility = Node::get_vis(cur.attribute("visibility").value());
  node.isAbstract = cur.attribute("isAbstract") ? true : false;
  for (auto child : cur.children()) {
    auto p = parse_parameter(child);
    if (p->direction == Parameter::RETURN &&
        p->m_type == Parameter::Java_Class) {
      auto &ass = class_map[p->type];
      m_gcdr->addAssociation(curidx, ass);
    }
    node.params.emplace_back(p);
  }
  return node;
}

void XMIParser::parse_class(pugi::xml_node &cur) {
  // multi inheritance ignored
  auto &node = m_gcdr->node(node_map[cur]);
  m_curnode = &node;
  for (auto &child : cur.children()) {
    if (!strcmp(child.name(), "ownedOperation")) {
      node.methods.emplace_back(parse_operation(child, node_map[cur]));
    } else if (!strcmp(child.name(), "ownedAttribute")) {
      if (!child.attribute("association").empty()) {
        auto ass = child.child("type").attribute("xmi:idref").value();
        if (!strcmp("shared", child.attribute("aggregation").value())) {
          m_gcdr->addAggregationSafe(node_map[cur], node_map[xml_nodes[ass]]);
        } else {
          m_gcdr->addAssociationSafe(node_map[cur], node_map[xml_nodes[ass]]);
        }
      }
    } else if (!strcmp(child.name(), "generalization")) {
      auto father_id = child.attribute("general").value();
      auto father = xml_nodes[father_id];
      m_gcdr->addInheritanceSafe(node_map[cur], node_map[father]);
    }
  }
}

Graph &XMIParser::parse(const char *file_path) {
  pugi::xml_document doc;
  pugi::xml_parse_result result = doc.load_file(file_path);

  std::cout << "XMI file <" << file_path
            << "> Load result: " << result.description() << std::endl;
  std::cout << "XMI version: "
            << doc.child("xmi:XMI").attribute("xmi:version").value() << "\n\n";

  simple_walker walker;
  doc.traverse(walker);

  m_gcdr = new Graph(nodes.size());

  int i = 0;
  for (auto &child : nodes) {
    auto &node = m_gcdr->node(i);
    node.m_id = child.attribute("xmi:id").value();
    node.m_name = child.attribute("name").value();
    node.m_visibility = Node::get_vis(child.attribute("visibility").value());
    node.m_isAbstract = child.attribute("isAbstract") ? true : false;

    node_map[child] = i;
    class_map[node.m_name] = i;
    ++i;
  }

  // out-class relations
  for (auto &r : realizations) {
    auto client = r.attribute("client").value();
    auto supplier = r.attribute("supplier").value();
    m_gcdr->addInheritanceSafe(node_map[xml_nodes[client]],
                               node_map[xml_nodes[supplier]]);
  }

  for (auto &r : deps) {
    auto client = r.attribute("client").value();
    auto supplier = r.attribute("supplier").value();
    m_gcdr->addDependencySafe(node_map[xml_nodes[client]],
                              node_map[xml_nodes[supplier]]);
  }

  // in-class property relations
  for (auto &child : nodes) {
    parse_class(child);
  }

  m_gcdr->print_gcdr();

  return *m_gcdr;
}
