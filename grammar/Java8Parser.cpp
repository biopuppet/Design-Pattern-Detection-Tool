
// Generated from grammar/Java8Parser.g4 by ANTLR 4.9.2


#include "Java8ParserListener.h"
#include "Java8ParserVisitor.h"

#include "Java8Parser.h"


using namespace antlrcpp;
using namespace antlr4;

Java8Parser::Java8Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Java8Parser::~Java8Parser() {
  delete _interpreter;
}

std::string Java8Parser::getGrammarFileName() const {
  return "Java8Parser.g4";
}

const std::vector<std::string>& Java8Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Java8Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- LiteralContext ------------------------------------------------------------------

Java8Parser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::LiteralContext::IntegerLiteral() {
  return getToken(Java8Parser::IntegerLiteral, 0);
}

tree::TerminalNode* Java8Parser::LiteralContext::FloatingPointLiteral() {
  return getToken(Java8Parser::FloatingPointLiteral, 0);
}

tree::TerminalNode* Java8Parser::LiteralContext::BooleanLiteral() {
  return getToken(Java8Parser::BooleanLiteral, 0);
}

tree::TerminalNode* Java8Parser::LiteralContext::CharacterLiteral() {
  return getToken(Java8Parser::CharacterLiteral, 0);
}

tree::TerminalNode* Java8Parser::LiteralContext::StringLiteral() {
  return getToken(Java8Parser::StringLiteral, 0);
}

tree::TerminalNode* Java8Parser::LiteralContext::NullLiteral() {
  return getToken(Java8Parser::NullLiteral, 0);
}


size_t Java8Parser::LiteralContext::getRuleIndex() const {
  return Java8Parser::RuleLiteral;
}

void Java8Parser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void Java8Parser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any Java8Parser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LiteralContext* Java8Parser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 0, Java8Parser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(472);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveTypeContext ------------------------------------------------------------------

Java8Parser::PrimitiveTypeContext::PrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::NumericTypeContext* Java8Parser::PrimitiveTypeContext::numericType() {
  return getRuleContext<Java8Parser::NumericTypeContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::PrimitiveTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::PrimitiveTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

tree::TerminalNode* Java8Parser::PrimitiveTypeContext::BOOLEAN() {
  return getToken(Java8Parser::BOOLEAN, 0);
}


size_t Java8Parser::PrimitiveTypeContext::getRuleIndex() const {
  return Java8Parser::RulePrimitiveType;
}

void Java8Parser::PrimitiveTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveType(this);
}

void Java8Parser::PrimitiveTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveType(this);
}


antlrcpp::Any Java8Parser::PrimitiveTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPrimitiveType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimitiveTypeContext* Java8Parser::primitiveType() {
  PrimitiveTypeContext *_localctx = _tracker.createInstance<PrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 2, Java8Parser::RulePrimitiveType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(488);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(477);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(474);
        annotation();
        setState(479);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(480);
      numericType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(484);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(481);
        annotation();
        setState(486);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(487);
      match(Java8Parser::BOOLEAN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericTypeContext ------------------------------------------------------------------

Java8Parser::NumericTypeContext::NumericTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::IntegralTypeContext* Java8Parser::NumericTypeContext::integralType() {
  return getRuleContext<Java8Parser::IntegralTypeContext>(0);
}

Java8Parser::FloatingPointTypeContext* Java8Parser::NumericTypeContext::floatingPointType() {
  return getRuleContext<Java8Parser::FloatingPointTypeContext>(0);
}


size_t Java8Parser::NumericTypeContext::getRuleIndex() const {
  return Java8Parser::RuleNumericType;
}

void Java8Parser::NumericTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericType(this);
}

void Java8Parser::NumericTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericType(this);
}


antlrcpp::Any Java8Parser::NumericTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitNumericType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::NumericTypeContext* Java8Parser::numericType() {
  NumericTypeContext *_localctx = _tracker.createInstance<NumericTypeContext>(_ctx, getState());
  enterRule(_localctx, 4, Java8Parser::RuleNumericType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(492);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::SHORT: {
        enterOuterAlt(_localctx, 1);
        setState(490);
        integralType();
        break;
      }

      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(491);
        floatingPointType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegralTypeContext ------------------------------------------------------------------

Java8Parser::IntegralTypeContext::IntegralTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::IntegralTypeContext::BYTE() {
  return getToken(Java8Parser::BYTE, 0);
}

tree::TerminalNode* Java8Parser::IntegralTypeContext::SHORT() {
  return getToken(Java8Parser::SHORT, 0);
}

tree::TerminalNode* Java8Parser::IntegralTypeContext::INT() {
  return getToken(Java8Parser::INT, 0);
}

tree::TerminalNode* Java8Parser::IntegralTypeContext::LONG() {
  return getToken(Java8Parser::LONG, 0);
}

tree::TerminalNode* Java8Parser::IntegralTypeContext::CHAR() {
  return getToken(Java8Parser::CHAR, 0);
}


size_t Java8Parser::IntegralTypeContext::getRuleIndex() const {
  return Java8Parser::RuleIntegralType;
}

void Java8Parser::IntegralTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegralType(this);
}

void Java8Parser::IntegralTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegralType(this);
}


antlrcpp::Any Java8Parser::IntegralTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitIntegralType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::IntegralTypeContext* Java8Parser::integralType() {
  IntegralTypeContext *_localctx = _tracker.createInstance<IntegralTypeContext>(_ctx, getState());
  enterRule(_localctx, 6, Java8Parser::RuleIntegralType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(494);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::SHORT))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatingPointTypeContext ------------------------------------------------------------------

Java8Parser::FloatingPointTypeContext::FloatingPointTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::FloatingPointTypeContext::FLOAT() {
  return getToken(Java8Parser::FLOAT, 0);
}

tree::TerminalNode* Java8Parser::FloatingPointTypeContext::DOUBLE() {
  return getToken(Java8Parser::DOUBLE, 0);
}


size_t Java8Parser::FloatingPointTypeContext::getRuleIndex() const {
  return Java8Parser::RuleFloatingPointType;
}

void Java8Parser::FloatingPointTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatingPointType(this);
}

void Java8Parser::FloatingPointTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatingPointType(this);
}


antlrcpp::Any Java8Parser::FloatingPointTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitFloatingPointType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FloatingPointTypeContext* Java8Parser::floatingPointType() {
  FloatingPointTypeContext *_localctx = _tracker.createInstance<FloatingPointTypeContext>(_ctx, getState());
  enterRule(_localctx, 8, Java8Parser::RuleFloatingPointType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(496);
    _la = _input->LA(1);
    if (!(_la == Java8Parser::DOUBLE

    || _la == Java8Parser::FLOAT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReferenceTypeContext ------------------------------------------------------------------

Java8Parser::ReferenceTypeContext::ReferenceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::ReferenceTypeContext::classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassOrInterfaceTypeContext>(0);
}

Java8Parser::TypeVariableContext* Java8Parser::ReferenceTypeContext::typeVariable() {
  return getRuleContext<Java8Parser::TypeVariableContext>(0);
}

Java8Parser::ArrayTypeContext* Java8Parser::ReferenceTypeContext::arrayType() {
  return getRuleContext<Java8Parser::ArrayTypeContext>(0);
}


size_t Java8Parser::ReferenceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleReferenceType;
}

void Java8Parser::ReferenceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReferenceType(this);
}

void Java8Parser::ReferenceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReferenceType(this);
}


antlrcpp::Any Java8Parser::ReferenceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitReferenceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ReferenceTypeContext* Java8Parser::referenceType() {
  ReferenceTypeContext *_localctx = _tracker.createInstance<ReferenceTypeContext>(_ctx, getState());
  enterRule(_localctx, 10, Java8Parser::RuleReferenceType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(501);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(498);
      classOrInterfaceType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(499);
      typeVariable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(500);
      arrayType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::ClassOrInterfaceTypeContext::ClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassType_lfno_classOrInterfaceTypeContext* Java8Parser::ClassOrInterfaceTypeContext::classType_lfno_classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassType_lfno_classOrInterfaceTypeContext>(0);
}

Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext* Java8Parser::ClassOrInterfaceTypeContext::interfaceType_lfno_classOrInterfaceType() {
  return getRuleContext<Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext>(0);
}

std::vector<Java8Parser::ClassType_lf_classOrInterfaceTypeContext *> Java8Parser::ClassOrInterfaceTypeContext::classType_lf_classOrInterfaceType() {
  return getRuleContexts<Java8Parser::ClassType_lf_classOrInterfaceTypeContext>();
}

Java8Parser::ClassType_lf_classOrInterfaceTypeContext* Java8Parser::ClassOrInterfaceTypeContext::classType_lf_classOrInterfaceType(size_t i) {
  return getRuleContext<Java8Parser::ClassType_lf_classOrInterfaceTypeContext>(i);
}

std::vector<Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext *> Java8Parser::ClassOrInterfaceTypeContext::interfaceType_lf_classOrInterfaceType() {
  return getRuleContexts<Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext>();
}

Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext* Java8Parser::ClassOrInterfaceTypeContext::interfaceType_lf_classOrInterfaceType(size_t i) {
  return getRuleContext<Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext>(i);
}


size_t Java8Parser::ClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleClassOrInterfaceType;
}

void Java8Parser::ClassOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassOrInterfaceType(this);
}

void Java8Parser::ClassOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassOrInterfaceType(this);
}


antlrcpp::Any Java8Parser::ClassOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitClassOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::classOrInterfaceType() {
  ClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<ClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 12, Java8Parser::RuleClassOrInterfaceType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(505);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(503);
      classType_lfno_classOrInterfaceType();
      break;
    }

    case 2: {
      setState(504);
      interfaceType_lfno_classOrInterfaceType();
      break;
    }

    default:
      break;
    }
    setState(511);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(509);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          setState(507);
          classType_lf_classOrInterfaceType();
          break;
        }

        case 2: {
          setState(508);
          interfaceType_lf_classOrInterfaceType();
          break;
        }

        default:
          break;
        } 
      }
      setState(513);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassTypeContext ------------------------------------------------------------------

Java8Parser::ClassTypeContext::ClassTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::ClassTypeContext::classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassOrInterfaceTypeContext>(0);
}

tree::TerminalNode* Java8Parser::ClassTypeContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}


size_t Java8Parser::ClassTypeContext::getRuleIndex() const {
  return Java8Parser::RuleClassType;
}

void Java8Parser::ClassTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassType(this);
}

void Java8Parser::ClassTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassType(this);
}


antlrcpp::Any Java8Parser::ClassTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitClassType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassTypeContext* Java8Parser::classType() {
  ClassTypeContext *_localctx = _tracker.createInstance<ClassTypeContext>(_ctx, getState());
  enterRule(_localctx, 14, Java8Parser::RuleClassType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(536);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(517);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(514);
        annotation();
        setState(519);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(520);
      match(Java8Parser::Identifier);
      setState(522);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(521);
        typeArguments();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(524);
      classOrInterfaceType();
      setState(525);
      match(Java8Parser::DOT);
      setState(529);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(526);
        annotation();
        setState(531);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(532);
      match(Java8Parser::Identifier);
      setState(534);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(533);
        typeArguments();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassType_lf_classOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::ClassType_lf_classOrInterfaceTypeContext::ClassType_lf_classOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassType_lf_classOrInterfaceTypeContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::ClassType_lf_classOrInterfaceTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassType_lf_classOrInterfaceTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassType_lf_classOrInterfaceTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassType_lf_classOrInterfaceTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::ClassType_lf_classOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleClassType_lf_classOrInterfaceType;
}

void Java8Parser::ClassType_lf_classOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassType_lf_classOrInterfaceType(this);
}

void Java8Parser::ClassType_lf_classOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassType_lf_classOrInterfaceType(this);
}


antlrcpp::Any Java8Parser::ClassType_lf_classOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitClassType_lf_classOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassType_lf_classOrInterfaceTypeContext* Java8Parser::classType_lf_classOrInterfaceType() {
  ClassType_lf_classOrInterfaceTypeContext *_localctx = _tracker.createInstance<ClassType_lf_classOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 16, Java8Parser::RuleClassType_lf_classOrInterfaceType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(538);
    match(Java8Parser::DOT);
    setState(542);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(539);
      annotation();
      setState(544);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(545);
    match(Java8Parser::Identifier);
    setState(547);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(546);
      typeArguments();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassType_lfno_classOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::ClassType_lfno_classOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleClassType_lfno_classOrInterfaceType;
}

void Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassType_lfno_classOrInterfaceType(this);
}

void Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassType_lfno_classOrInterfaceType(this);
}


antlrcpp::Any Java8Parser::ClassType_lfno_classOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitClassType_lfno_classOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassType_lfno_classOrInterfaceTypeContext* Java8Parser::classType_lfno_classOrInterfaceType() {
  ClassType_lfno_classOrInterfaceTypeContext *_localctx = _tracker.createInstance<ClassType_lfno_classOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 18, Java8Parser::RuleClassType_lfno_classOrInterfaceType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(552);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(549);
      annotation();
      setState(554);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(555);
    match(Java8Parser::Identifier);
    setState(557);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(556);
      typeArguments();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceTypeContext ------------------------------------------------------------------

Java8Parser::InterfaceTypeContext::InterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassTypeContext* Java8Parser::InterfaceTypeContext::classType() {
  return getRuleContext<Java8Parser::ClassTypeContext>(0);
}


size_t Java8Parser::InterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceType;
}

void Java8Parser::InterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceType(this);
}

void Java8Parser::InterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceType(this);
}


antlrcpp::Any Java8Parser::InterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceTypeContext* Java8Parser::interfaceType() {
  InterfaceTypeContext *_localctx = _tracker.createInstance<InterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 20, Java8Parser::RuleInterfaceType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(559);
    classType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceType_lf_classOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext::InterfaceType_lf_classOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassType_lf_classOrInterfaceTypeContext* Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext::classType_lf_classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassType_lf_classOrInterfaceTypeContext>(0);
}


size_t Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceType_lf_classOrInterfaceType;
}

void Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceType_lf_classOrInterfaceType(this);
}

void Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceType_lf_classOrInterfaceType(this);
}


antlrcpp::Any Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceType_lf_classOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext* Java8Parser::interfaceType_lf_classOrInterfaceType() {
  InterfaceType_lf_classOrInterfaceTypeContext *_localctx = _tracker.createInstance<InterfaceType_lf_classOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 22, Java8Parser::RuleInterfaceType_lf_classOrInterfaceType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(561);
    classType_lf_classOrInterfaceType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceType_lfno_classOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext::InterfaceType_lfno_classOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassType_lfno_classOrInterfaceTypeContext* Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext::classType_lfno_classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassType_lfno_classOrInterfaceTypeContext>(0);
}


size_t Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceType_lfno_classOrInterfaceType;
}

void Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceType_lfno_classOrInterfaceType(this);
}

void Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceType_lfno_classOrInterfaceType(this);
}


antlrcpp::Any Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceType_lfno_classOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext* Java8Parser::interfaceType_lfno_classOrInterfaceType() {
  InterfaceType_lfno_classOrInterfaceTypeContext *_localctx = _tracker.createInstance<InterfaceType_lfno_classOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 24, Java8Parser::RuleInterfaceType_lfno_classOrInterfaceType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(563);
    classType_lfno_classOrInterfaceType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeVariableContext ------------------------------------------------------------------

Java8Parser::TypeVariableContext::TypeVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeVariableContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::TypeVariableContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::TypeVariableContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::TypeVariableContext::getRuleIndex() const {
  return Java8Parser::RuleTypeVariable;
}

void Java8Parser::TypeVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeVariable(this);
}

void Java8Parser::TypeVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeVariable(this);
}


antlrcpp::Any Java8Parser::TypeVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitTypeVariable(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeVariableContext* Java8Parser::typeVariable() {
  TypeVariableContext *_localctx = _tracker.createInstance<TypeVariableContext>(_ctx, getState());
  enterRule(_localctx, 26, Java8Parser::RuleTypeVariable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(568);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(565);
      annotation();
      setState(570);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(571);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayTypeContext ------------------------------------------------------------------

Java8Parser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimitiveTypeContext* Java8Parser::ArrayTypeContext::primitiveType() {
  return getRuleContext<Java8Parser::PrimitiveTypeContext>(0);
}

Java8Parser::DimsContext* Java8Parser::ArrayTypeContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::ArrayTypeContext::classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassOrInterfaceTypeContext>(0);
}

Java8Parser::TypeVariableContext* Java8Parser::ArrayTypeContext::typeVariable() {
  return getRuleContext<Java8Parser::TypeVariableContext>(0);
}


size_t Java8Parser::ArrayTypeContext::getRuleIndex() const {
  return Java8Parser::RuleArrayType;
}

void Java8Parser::ArrayTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayType(this);
}

void Java8Parser::ArrayTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayType(this);
}


antlrcpp::Any Java8Parser::ArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitArrayType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ArrayTypeContext* Java8Parser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 28, Java8Parser::RuleArrayType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(582);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(573);
      primitiveType();
      setState(574);
      dims();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(576);
      classOrInterfaceType();
      setState(577);
      dims();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(579);
      typeVariable();
      setState(580);
      dims();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DimsContext ------------------------------------------------------------------

Java8Parser::DimsContext::DimsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> Java8Parser::DimsContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::DimsContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<tree::TerminalNode *> Java8Parser::DimsContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::DimsContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::DimsContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::DimsContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::DimsContext::getRuleIndex() const {
  return Java8Parser::RuleDims;
}

void Java8Parser::DimsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDims(this);
}

void Java8Parser::DimsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDims(this);
}


antlrcpp::Any Java8Parser::DimsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitDims(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::DimsContext* Java8Parser::dims() {
  DimsContext *_localctx = _tracker.createInstance<DimsContext>(_ctx, getState());
  enterRule(_localctx, 30, Java8Parser::RuleDims);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(587);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(584);
      annotation();
      setState(589);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(590);
    match(Java8Parser::LBRACK);
    setState(591);
    match(Java8Parser::RBRACK);
    setState(602);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(595);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(592);
          annotation();
          setState(597);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(598);
        match(Java8Parser::LBRACK);
        setState(599);
        match(Java8Parser::RBRACK); 
      }
      setState(604);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterContext ------------------------------------------------------------------

Java8Parser::TypeParameterContext::TypeParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeParameterContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::TypeParameterModifierContext *> Java8Parser::TypeParameterContext::typeParameterModifier() {
  return getRuleContexts<Java8Parser::TypeParameterModifierContext>();
}

Java8Parser::TypeParameterModifierContext* Java8Parser::TypeParameterContext::typeParameterModifier(size_t i) {
  return getRuleContext<Java8Parser::TypeParameterModifierContext>(i);
}

Java8Parser::TypeBoundContext* Java8Parser::TypeParameterContext::typeBound() {
  return getRuleContext<Java8Parser::TypeBoundContext>(0);
}


size_t Java8Parser::TypeParameterContext::getRuleIndex() const {
  return Java8Parser::RuleTypeParameter;
}

void Java8Parser::TypeParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameter(this);
}

void Java8Parser::TypeParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameter(this);
}


antlrcpp::Any Java8Parser::TypeParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitTypeParameter(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeParameterContext* Java8Parser::typeParameter() {
  TypeParameterContext *_localctx = _tracker.createInstance<TypeParameterContext>(_ctx, getState());
  enterRule(_localctx, 32, Java8Parser::RuleTypeParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(608);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(605);
      typeParameterModifier();
      setState(610);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(611);
    match(Java8Parser::Identifier);
    setState(613);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS) {
      setState(612);
      typeBound();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterModifierContext ------------------------------------------------------------------

Java8Parser::TypeParameterModifierContext::TypeParameterModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::TypeParameterModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::TypeParameterModifierContext::getRuleIndex() const {
  return Java8Parser::RuleTypeParameterModifier;
}

void Java8Parser::TypeParameterModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameterModifier(this);
}

void Java8Parser::TypeParameterModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameterModifier(this);
}


antlrcpp::Any Java8Parser::TypeParameterModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitTypeParameterModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeParameterModifierContext* Java8Parser::typeParameterModifier() {
  TypeParameterModifierContext *_localctx = _tracker.createInstance<TypeParameterModifierContext>(_ctx, getState());
  enterRule(_localctx, 34, Java8Parser::RuleTypeParameterModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(615);
    annotation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeBoundContext ------------------------------------------------------------------

Java8Parser::TypeBoundContext::TypeBoundContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeBoundContext::EXTENDS() {
  return getToken(Java8Parser::EXTENDS, 0);
}

Java8Parser::TypeVariableContext* Java8Parser::TypeBoundContext::typeVariable() {
  return getRuleContext<Java8Parser::TypeVariableContext>(0);
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::TypeBoundContext::classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassOrInterfaceTypeContext>(0);
}

std::vector<Java8Parser::AdditionalBoundContext *> Java8Parser::TypeBoundContext::additionalBound() {
  return getRuleContexts<Java8Parser::AdditionalBoundContext>();
}

Java8Parser::AdditionalBoundContext* Java8Parser::TypeBoundContext::additionalBound(size_t i) {
  return getRuleContext<Java8Parser::AdditionalBoundContext>(i);
}


size_t Java8Parser::TypeBoundContext::getRuleIndex() const {
  return Java8Parser::RuleTypeBound;
}

void Java8Parser::TypeBoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeBound(this);
}

void Java8Parser::TypeBoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeBound(this);
}


antlrcpp::Any Java8Parser::TypeBoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitTypeBound(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeBoundContext* Java8Parser::typeBound() {
  TypeBoundContext *_localctx = _tracker.createInstance<TypeBoundContext>(_ctx, getState());
  enterRule(_localctx, 36, Java8Parser::RuleTypeBound);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(627);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(617);
      match(Java8Parser::EXTENDS);
      setState(618);
      typeVariable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(619);
      match(Java8Parser::EXTENDS);
      setState(620);
      classOrInterfaceType();
      setState(624);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::BITAND) {
        setState(621);
        additionalBound();
        setState(626);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditionalBoundContext ------------------------------------------------------------------

Java8Parser::AdditionalBoundContext::AdditionalBoundContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::AdditionalBoundContext::BITAND() {
  return getToken(Java8Parser::BITAND, 0);
}

Java8Parser::InterfaceTypeContext* Java8Parser::AdditionalBoundContext::interfaceType() {
  return getRuleContext<Java8Parser::InterfaceTypeContext>(0);
}


size_t Java8Parser::AdditionalBoundContext::getRuleIndex() const {
  return Java8Parser::RuleAdditionalBound;
}

void Java8Parser::AdditionalBoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditionalBound(this);
}

void Java8Parser::AdditionalBoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditionalBound(this);
}


antlrcpp::Any Java8Parser::AdditionalBoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitAdditionalBound(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AdditionalBoundContext* Java8Parser::additionalBound() {
  AdditionalBoundContext *_localctx = _tracker.createInstance<AdditionalBoundContext>(_ctx, getState());
  enterRule(_localctx, 38, Java8Parser::RuleAdditionalBound);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(629);
    match(Java8Parser::BITAND);
    setState(630);
    interfaceType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentsContext ------------------------------------------------------------------

Java8Parser::TypeArgumentsContext::TypeArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeArgumentsContext::LT() {
  return getToken(Java8Parser::LT, 0);
}

Java8Parser::TypeArgumentListContext* Java8Parser::TypeArgumentsContext::typeArgumentList() {
  return getRuleContext<Java8Parser::TypeArgumentListContext>(0);
}

tree::TerminalNode* Java8Parser::TypeArgumentsContext::GT() {
  return getToken(Java8Parser::GT, 0);
}


size_t Java8Parser::TypeArgumentsContext::getRuleIndex() const {
  return Java8Parser::RuleTypeArguments;
}

void Java8Parser::TypeArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArguments(this);
}

void Java8Parser::TypeArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArguments(this);
}


antlrcpp::Any Java8Parser::TypeArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitTypeArguments(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeArgumentsContext* Java8Parser::typeArguments() {
  TypeArgumentsContext *_localctx = _tracker.createInstance<TypeArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 40, Java8Parser::RuleTypeArguments);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(632);
    match(Java8Parser::LT);
    setState(633);
    typeArgumentList();
    setState(634);
    match(Java8Parser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentListContext ------------------------------------------------------------------

Java8Parser::TypeArgumentListContext::TypeArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::TypeArgumentContext *> Java8Parser::TypeArgumentListContext::typeArgument() {
  return getRuleContexts<Java8Parser::TypeArgumentContext>();
}

Java8Parser::TypeArgumentContext* Java8Parser::TypeArgumentListContext::typeArgument(size_t i) {
  return getRuleContext<Java8Parser::TypeArgumentContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::TypeArgumentListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::TypeArgumentListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::TypeArgumentListContext::getRuleIndex() const {
  return Java8Parser::RuleTypeArgumentList;
}

void Java8Parser::TypeArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArgumentList(this);
}

void Java8Parser::TypeArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArgumentList(this);
}


antlrcpp::Any Java8Parser::TypeArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitTypeArgumentList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeArgumentListContext* Java8Parser::typeArgumentList() {
  TypeArgumentListContext *_localctx = _tracker.createInstance<TypeArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 42, Java8Parser::RuleTypeArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(636);
    typeArgument();
    setState(641);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(637);
      match(Java8Parser::COMMA);
      setState(638);
      typeArgument();
      setState(643);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentContext ------------------------------------------------------------------

Java8Parser::TypeArgumentContext::TypeArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ReferenceTypeContext* Java8Parser::TypeArgumentContext::referenceType() {
  return getRuleContext<Java8Parser::ReferenceTypeContext>(0);
}

Java8Parser::WildcardContext* Java8Parser::TypeArgumentContext::wildcard() {
  return getRuleContext<Java8Parser::WildcardContext>(0);
}


size_t Java8Parser::TypeArgumentContext::getRuleIndex() const {
  return Java8Parser::RuleTypeArgument;
}

void Java8Parser::TypeArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArgument(this);
}

void Java8Parser::TypeArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArgument(this);
}


antlrcpp::Any Java8Parser::TypeArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitTypeArgument(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeArgumentContext* Java8Parser::typeArgument() {
  TypeArgumentContext *_localctx = _tracker.createInstance<TypeArgumentContext>(_ctx, getState());
  enterRule(_localctx, 44, Java8Parser::RuleTypeArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(646);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(644);
      referenceType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(645);
      wildcard();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WildcardContext ------------------------------------------------------------------

Java8Parser::WildcardContext::WildcardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::WildcardContext::QUESTION() {
  return getToken(Java8Parser::QUESTION, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::WildcardContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::WildcardContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::WildcardBoundsContext* Java8Parser::WildcardContext::wildcardBounds() {
  return getRuleContext<Java8Parser::WildcardBoundsContext>(0);
}


size_t Java8Parser::WildcardContext::getRuleIndex() const {
  return Java8Parser::RuleWildcard;
}

void Java8Parser::WildcardContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWildcard(this);
}

void Java8Parser::WildcardContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWildcard(this);
}


antlrcpp::Any Java8Parser::WildcardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitWildcard(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::WildcardContext* Java8Parser::wildcard() {
  WildcardContext *_localctx = _tracker.createInstance<WildcardContext>(_ctx, getState());
  enterRule(_localctx, 46, Java8Parser::RuleWildcard);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(651);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(648);
      annotation();
      setState(653);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(654);
    match(Java8Parser::QUESTION);
    setState(656);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS

    || _la == Java8Parser::SUPER) {
      setState(655);
      wildcardBounds();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WildcardBoundsContext ------------------------------------------------------------------

Java8Parser::WildcardBoundsContext::WildcardBoundsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::WildcardBoundsContext::EXTENDS() {
  return getToken(Java8Parser::EXTENDS, 0);
}

Java8Parser::ReferenceTypeContext* Java8Parser::WildcardBoundsContext::referenceType() {
  return getRuleContext<Java8Parser::ReferenceTypeContext>(0);
}

tree::TerminalNode* Java8Parser::WildcardBoundsContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}


size_t Java8Parser::WildcardBoundsContext::getRuleIndex() const {
  return Java8Parser::RuleWildcardBounds;
}

void Java8Parser::WildcardBoundsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWildcardBounds(this);
}

void Java8Parser::WildcardBoundsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWildcardBounds(this);
}


antlrcpp::Any Java8Parser::WildcardBoundsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitWildcardBounds(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::WildcardBoundsContext* Java8Parser::wildcardBounds() {
  WildcardBoundsContext *_localctx = _tracker.createInstance<WildcardBoundsContext>(_ctx, getState());
  enterRule(_localctx, 48, Java8Parser::RuleWildcardBounds);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(662);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::EXTENDS: {
        enterOuterAlt(_localctx, 1);
        setState(658);
        match(Java8Parser::EXTENDS);
        setState(659);
        referenceType();
        break;
      }

      case Java8Parser::SUPER: {
        enterOuterAlt(_localctx, 2);
        setState(660);
        match(Java8Parser::SUPER);
        setState(661);
        referenceType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageNameContext ------------------------------------------------------------------

Java8Parser::PackageNameContext::PackageNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PackageNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::PackageNameContext* Java8Parser::PackageNameContext::packageName() {
  return getRuleContext<Java8Parser::PackageNameContext>(0);
}

tree::TerminalNode* Java8Parser::PackageNameContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}


size_t Java8Parser::PackageNameContext::getRuleIndex() const {
  return Java8Parser::RulePackageName;
}

void Java8Parser::PackageNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageName(this);
}

void Java8Parser::PackageNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageName(this);
}


antlrcpp::Any Java8Parser::PackageNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPackageName(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::PackageNameContext* Java8Parser::packageName() {
   return packageName(0);
}

Java8Parser::PackageNameContext* Java8Parser::packageName(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::PackageNameContext *_localctx = _tracker.createInstance<PackageNameContext>(_ctx, parentState);
  Java8Parser::PackageNameContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, Java8Parser::RulePackageName, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(665);
    match(Java8Parser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(672);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PackageNameContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePackageName);
        setState(667);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(668);
        match(Java8Parser::DOT);
        setState(669);
        match(Java8Parser::Identifier); 
      }
      setState(674);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

Java8Parser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::PackageOrTypeNameContext* Java8Parser::TypeNameContext::packageOrTypeName() {
  return getRuleContext<Java8Parser::PackageOrTypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::TypeNameContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}


size_t Java8Parser::TypeNameContext::getRuleIndex() const {
  return Java8Parser::RuleTypeName;
}

void Java8Parser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void Java8Parser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}


antlrcpp::Any Java8Parser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeNameContext* Java8Parser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 52, Java8Parser::RuleTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(680);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(675);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(676);
      packageOrTypeName(0);
      setState(677);
      match(Java8Parser::DOT);
      setState(678);
      match(Java8Parser::Identifier);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageOrTypeNameContext ------------------------------------------------------------------

Java8Parser::PackageOrTypeNameContext::PackageOrTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PackageOrTypeNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::PackageOrTypeNameContext* Java8Parser::PackageOrTypeNameContext::packageOrTypeName() {
  return getRuleContext<Java8Parser::PackageOrTypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::PackageOrTypeNameContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}


size_t Java8Parser::PackageOrTypeNameContext::getRuleIndex() const {
  return Java8Parser::RulePackageOrTypeName;
}

void Java8Parser::PackageOrTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageOrTypeName(this);
}

void Java8Parser::PackageOrTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageOrTypeName(this);
}


antlrcpp::Any Java8Parser::PackageOrTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPackageOrTypeName(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::PackageOrTypeNameContext* Java8Parser::packageOrTypeName() {
   return packageOrTypeName(0);
}

Java8Parser::PackageOrTypeNameContext* Java8Parser::packageOrTypeName(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::PackageOrTypeNameContext *_localctx = _tracker.createInstance<PackageOrTypeNameContext>(_ctx, parentState);
  Java8Parser::PackageOrTypeNameContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, Java8Parser::RulePackageOrTypeName, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(683);
    match(Java8Parser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(690);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PackageOrTypeNameContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePackageOrTypeName);
        setState(685);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(686);
        match(Java8Parser::DOT);
        setState(687);
        match(Java8Parser::Identifier); 
      }
      setState(692);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressionNameContext ------------------------------------------------------------------

Java8Parser::ExpressionNameContext::ExpressionNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ExpressionNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::AmbiguousNameContext* Java8Parser::ExpressionNameContext::ambiguousName() {
  return getRuleContext<Java8Parser::AmbiguousNameContext>(0);
}

tree::TerminalNode* Java8Parser::ExpressionNameContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}


size_t Java8Parser::ExpressionNameContext::getRuleIndex() const {
  return Java8Parser::RuleExpressionName;
}

void Java8Parser::ExpressionNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionName(this);
}

void Java8Parser::ExpressionNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionName(this);
}


antlrcpp::Any Java8Parser::ExpressionNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitExpressionName(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ExpressionNameContext* Java8Parser::expressionName() {
  ExpressionNameContext *_localctx = _tracker.createInstance<ExpressionNameContext>(_ctx, getState());
  enterRule(_localctx, 56, Java8Parser::RuleExpressionName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(698);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(693);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(694);
      ambiguousName(0);
      setState(695);
      match(Java8Parser::DOT);
      setState(696);
      match(Java8Parser::Identifier);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodNameContext ------------------------------------------------------------------

Java8Parser::MethodNameContext::MethodNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::MethodNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::MethodNameContext::getRuleIndex() const {
  return Java8Parser::RuleMethodName;
}

void Java8Parser::MethodNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodName(this);
}

void Java8Parser::MethodNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodName(this);
}


antlrcpp::Any Java8Parser::MethodNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitMethodName(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodNameContext* Java8Parser::methodName() {
  MethodNameContext *_localctx = _tracker.createInstance<MethodNameContext>(_ctx, getState());
  enterRule(_localctx, 58, Java8Parser::RuleMethodName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(700);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AmbiguousNameContext ------------------------------------------------------------------

Java8Parser::AmbiguousNameContext::AmbiguousNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::AmbiguousNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::AmbiguousNameContext* Java8Parser::AmbiguousNameContext::ambiguousName() {
  return getRuleContext<Java8Parser::AmbiguousNameContext>(0);
}

tree::TerminalNode* Java8Parser::AmbiguousNameContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}


size_t Java8Parser::AmbiguousNameContext::getRuleIndex() const {
  return Java8Parser::RuleAmbiguousName;
}

void Java8Parser::AmbiguousNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAmbiguousName(this);
}

void Java8Parser::AmbiguousNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAmbiguousName(this);
}


antlrcpp::Any Java8Parser::AmbiguousNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitAmbiguousName(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::AmbiguousNameContext* Java8Parser::ambiguousName() {
   return ambiguousName(0);
}

Java8Parser::AmbiguousNameContext* Java8Parser::ambiguousName(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::AmbiguousNameContext *_localctx = _tracker.createInstance<AmbiguousNameContext>(_ctx, parentState);
  Java8Parser::AmbiguousNameContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, Java8Parser::RuleAmbiguousName, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(703);
    match(Java8Parser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(710);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AmbiguousNameContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAmbiguousName);
        setState(705);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(706);
        match(Java8Parser::DOT);
        setState(707);
        match(Java8Parser::Identifier); 
      }
      setState(712);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CompilationUnitContext ------------------------------------------------------------------

Java8Parser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::CompilationUnitContext::EOF() {
  return getToken(Java8Parser::EOF, 0);
}

Java8Parser::PackageDeclarationContext* Java8Parser::CompilationUnitContext::packageDeclaration() {
  return getRuleContext<Java8Parser::PackageDeclarationContext>(0);
}

std::vector<Java8Parser::ImportDeclarationContext *> Java8Parser::CompilationUnitContext::importDeclaration() {
  return getRuleContexts<Java8Parser::ImportDeclarationContext>();
}

Java8Parser::ImportDeclarationContext* Java8Parser::CompilationUnitContext::importDeclaration(size_t i) {
  return getRuleContext<Java8Parser::ImportDeclarationContext>(i);
}

std::vector<Java8Parser::TypeDeclarationContext *> Java8Parser::CompilationUnitContext::typeDeclaration() {
  return getRuleContexts<Java8Parser::TypeDeclarationContext>();
}

Java8Parser::TypeDeclarationContext* Java8Parser::CompilationUnitContext::typeDeclaration(size_t i) {
  return getRuleContext<Java8Parser::TypeDeclarationContext>(i);
}


size_t Java8Parser::CompilationUnitContext::getRuleIndex() const {
  return Java8Parser::RuleCompilationUnit;
}

void Java8Parser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void Java8Parser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}


antlrcpp::Any Java8Parser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::CompilationUnitContext* Java8Parser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 62, Java8Parser::RuleCompilationUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(714);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(713);
      packageDeclaration();
      break;
    }

    default:
      break;
    }
    setState(719);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::IMPORT) {
      setState(716);
      importDeclaration();
      setState(721);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(725);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::INTERFACE)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SEMI))) != 0) || _la == Java8Parser::AT) {
      setState(722);
      typeDeclaration();
      setState(727);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(728);
    match(Java8Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageDeclarationContext ------------------------------------------------------------------

Java8Parser::PackageDeclarationContext::PackageDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PackageDeclarationContext::PACKAGE() {
  return getToken(Java8Parser::PACKAGE, 0);
}

Java8Parser::PackageNameContext* Java8Parser::PackageDeclarationContext::packageName() {
  return getRuleContext<Java8Parser::PackageNameContext>(0);
}

tree::TerminalNode* Java8Parser::PackageDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

std::vector<Java8Parser::PackageModifierContext *> Java8Parser::PackageDeclarationContext::packageModifier() {
  return getRuleContexts<Java8Parser::PackageModifierContext>();
}

Java8Parser::PackageModifierContext* Java8Parser::PackageDeclarationContext::packageModifier(size_t i) {
  return getRuleContext<Java8Parser::PackageModifierContext>(i);
}


size_t Java8Parser::PackageDeclarationContext::getRuleIndex() const {
  return Java8Parser::RulePackageDeclaration;
}

void Java8Parser::PackageDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageDeclaration(this);
}

void Java8Parser::PackageDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageDeclaration(this);
}


antlrcpp::Any Java8Parser::PackageDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPackageDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PackageDeclarationContext* Java8Parser::packageDeclaration() {
  PackageDeclarationContext *_localctx = _tracker.createInstance<PackageDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 64, Java8Parser::RulePackageDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(733);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(730);
      packageModifier();
      setState(735);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(736);
    match(Java8Parser::PACKAGE);
    setState(737);
    packageName(0);
    setState(738);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageModifierContext ------------------------------------------------------------------

Java8Parser::PackageModifierContext::PackageModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::PackageModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::PackageModifierContext::getRuleIndex() const {
  return Java8Parser::RulePackageModifier;
}

void Java8Parser::PackageModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageModifier(this);
}

void Java8Parser::PackageModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageModifier(this);
}


antlrcpp::Any Java8Parser::PackageModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPackageModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PackageModifierContext* Java8Parser::packageModifier() {
  PackageModifierContext *_localctx = _tracker.createInstance<PackageModifierContext>(_ctx, getState());
  enterRule(_localctx, 66, Java8Parser::RulePackageModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(740);
    annotation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportDeclarationContext ------------------------------------------------------------------

Java8Parser::ImportDeclarationContext::ImportDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::SingleTypeImportDeclarationContext* Java8Parser::ImportDeclarationContext::singleTypeImportDeclaration() {
  return getRuleContext<Java8Parser::SingleTypeImportDeclarationContext>(0);
}

Java8Parser::TypeImportOnDemandDeclarationContext* Java8Parser::ImportDeclarationContext::typeImportOnDemandDeclaration() {
  return getRuleContext<Java8Parser::TypeImportOnDemandDeclarationContext>(0);
}

Java8Parser::SingleStaticImportDeclarationContext* Java8Parser::ImportDeclarationContext::singleStaticImportDeclaration() {
  return getRuleContext<Java8Parser::SingleStaticImportDeclarationContext>(0);
}

Java8Parser::StaticImportOnDemandDeclarationContext* Java8Parser::ImportDeclarationContext::staticImportOnDemandDeclaration() {
  return getRuleContext<Java8Parser::StaticImportOnDemandDeclarationContext>(0);
}


size_t Java8Parser::ImportDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleImportDeclaration;
}

void Java8Parser::ImportDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportDeclaration(this);
}

void Java8Parser::ImportDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportDeclaration(this);
}


antlrcpp::Any Java8Parser::ImportDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitImportDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ImportDeclarationContext* Java8Parser::importDeclaration() {
  ImportDeclarationContext *_localctx = _tracker.createInstance<ImportDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 68, Java8Parser::RuleImportDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(746);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(742);
      singleTypeImportDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(743);
      typeImportOnDemandDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(744);
      singleStaticImportDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(745);
      staticImportOnDemandDeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleTypeImportDeclarationContext ------------------------------------------------------------------

Java8Parser::SingleTypeImportDeclarationContext::SingleTypeImportDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SingleTypeImportDeclarationContext::IMPORT() {
  return getToken(Java8Parser::IMPORT, 0);
}

Java8Parser::TypeNameContext* Java8Parser::SingleTypeImportDeclarationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::SingleTypeImportDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::SingleTypeImportDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleSingleTypeImportDeclaration;
}

void Java8Parser::SingleTypeImportDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleTypeImportDeclaration(this);
}

void Java8Parser::SingleTypeImportDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleTypeImportDeclaration(this);
}


antlrcpp::Any Java8Parser::SingleTypeImportDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitSingleTypeImportDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SingleTypeImportDeclarationContext* Java8Parser::singleTypeImportDeclaration() {
  SingleTypeImportDeclarationContext *_localctx = _tracker.createInstance<SingleTypeImportDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 70, Java8Parser::RuleSingleTypeImportDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(748);
    match(Java8Parser::IMPORT);
    setState(749);
    typeName();
    setState(750);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeImportOnDemandDeclarationContext ------------------------------------------------------------------

Java8Parser::TypeImportOnDemandDeclarationContext::TypeImportOnDemandDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeImportOnDemandDeclarationContext::IMPORT() {
  return getToken(Java8Parser::IMPORT, 0);
}

Java8Parser::PackageOrTypeNameContext* Java8Parser::TypeImportOnDemandDeclarationContext::packageOrTypeName() {
  return getRuleContext<Java8Parser::PackageOrTypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::TypeImportOnDemandDeclarationContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::TypeImportOnDemandDeclarationContext::MUL() {
  return getToken(Java8Parser::MUL, 0);
}

tree::TerminalNode* Java8Parser::TypeImportOnDemandDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::TypeImportOnDemandDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleTypeImportOnDemandDeclaration;
}

void Java8Parser::TypeImportOnDemandDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeImportOnDemandDeclaration(this);
}

void Java8Parser::TypeImportOnDemandDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeImportOnDemandDeclaration(this);
}


antlrcpp::Any Java8Parser::TypeImportOnDemandDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitTypeImportOnDemandDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeImportOnDemandDeclarationContext* Java8Parser::typeImportOnDemandDeclaration() {
  TypeImportOnDemandDeclarationContext *_localctx = _tracker.createInstance<TypeImportOnDemandDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 72, Java8Parser::RuleTypeImportOnDemandDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(752);
    match(Java8Parser::IMPORT);
    setState(753);
    packageOrTypeName(0);
    setState(754);
    match(Java8Parser::DOT);
    setState(755);
    match(Java8Parser::MUL);
    setState(756);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleStaticImportDeclarationContext ------------------------------------------------------------------

Java8Parser::SingleStaticImportDeclarationContext::SingleStaticImportDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SingleStaticImportDeclarationContext::IMPORT() {
  return getToken(Java8Parser::IMPORT, 0);
}

tree::TerminalNode* Java8Parser::SingleStaticImportDeclarationContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

Java8Parser::TypeNameContext* Java8Parser::SingleStaticImportDeclarationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::SingleStaticImportDeclarationContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::SingleStaticImportDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::SingleStaticImportDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::SingleStaticImportDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleSingleStaticImportDeclaration;
}

void Java8Parser::SingleStaticImportDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleStaticImportDeclaration(this);
}

void Java8Parser::SingleStaticImportDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleStaticImportDeclaration(this);
}


antlrcpp::Any Java8Parser::SingleStaticImportDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitSingleStaticImportDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SingleStaticImportDeclarationContext* Java8Parser::singleStaticImportDeclaration() {
  SingleStaticImportDeclarationContext *_localctx = _tracker.createInstance<SingleStaticImportDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 74, Java8Parser::RuleSingleStaticImportDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(758);
    match(Java8Parser::IMPORT);
    setState(759);
    match(Java8Parser::STATIC);
    setState(760);
    typeName();
    setState(761);
    match(Java8Parser::DOT);
    setState(762);
    match(Java8Parser::Identifier);
    setState(763);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StaticImportOnDemandDeclarationContext ------------------------------------------------------------------

Java8Parser::StaticImportOnDemandDeclarationContext::StaticImportOnDemandDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::StaticImportOnDemandDeclarationContext::IMPORT() {
  return getToken(Java8Parser::IMPORT, 0);
}

tree::TerminalNode* Java8Parser::StaticImportOnDemandDeclarationContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

Java8Parser::TypeNameContext* Java8Parser::StaticImportOnDemandDeclarationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::StaticImportOnDemandDeclarationContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::StaticImportOnDemandDeclarationContext::MUL() {
  return getToken(Java8Parser::MUL, 0);
}

tree::TerminalNode* Java8Parser::StaticImportOnDemandDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::StaticImportOnDemandDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleStaticImportOnDemandDeclaration;
}

void Java8Parser::StaticImportOnDemandDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStaticImportOnDemandDeclaration(this);
}

void Java8Parser::StaticImportOnDemandDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStaticImportOnDemandDeclaration(this);
}


antlrcpp::Any Java8Parser::StaticImportOnDemandDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitStaticImportOnDemandDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::StaticImportOnDemandDeclarationContext* Java8Parser::staticImportOnDemandDeclaration() {
  StaticImportOnDemandDeclarationContext *_localctx = _tracker.createInstance<StaticImportOnDemandDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 76, Java8Parser::RuleStaticImportOnDemandDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(765);
    match(Java8Parser::IMPORT);
    setState(766);
    match(Java8Parser::STATIC);
    setState(767);
    typeName();
    setState(768);
    match(Java8Parser::DOT);
    setState(769);
    match(Java8Parser::MUL);
    setState(770);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclarationContext ------------------------------------------------------------------

Java8Parser::TypeDeclarationContext::TypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassDeclarationContext* Java8Parser::TypeDeclarationContext::classDeclaration() {
  return getRuleContext<Java8Parser::ClassDeclarationContext>(0);
}

Java8Parser::InterfaceDeclarationContext* Java8Parser::TypeDeclarationContext::interfaceDeclaration() {
  return getRuleContext<Java8Parser::InterfaceDeclarationContext>(0);
}

tree::TerminalNode* Java8Parser::TypeDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::TypeDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleTypeDeclaration;
}

void Java8Parser::TypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDeclaration(this);
}

void Java8Parser::TypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDeclaration(this);
}


antlrcpp::Any Java8Parser::TypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeDeclarationContext* Java8Parser::typeDeclaration() {
  TypeDeclarationContext *_localctx = _tracker.createInstance<TypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 78, Java8Parser::RuleTypeDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(775);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(772);
      classDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(773);
      interfaceDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(774);
      match(Java8Parser::SEMI);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

Java8Parser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::NormalClassDeclarationContext* Java8Parser::ClassDeclarationContext::normalClassDeclaration() {
  return getRuleContext<Java8Parser::NormalClassDeclarationContext>(0);
}

Java8Parser::EnumDeclarationContext* Java8Parser::ClassDeclarationContext::enumDeclaration() {
  return getRuleContext<Java8Parser::EnumDeclarationContext>(0);
}


size_t Java8Parser::ClassDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleClassDeclaration;
}

void Java8Parser::ClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDeclaration(this);
}

void Java8Parser::ClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDeclaration(this);
}


antlrcpp::Any Java8Parser::ClassDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitClassDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassDeclarationContext* Java8Parser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 80, Java8Parser::RuleClassDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(779);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(777);
      normalClassDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(778);
      enumDeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NormalClassDeclarationContext ------------------------------------------------------------------

Java8Parser::NormalClassDeclarationContext::NormalClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::NormalClassDeclarationContext::CLASS() {
  return getToken(Java8Parser::CLASS, 0);
}

tree::TerminalNode* Java8Parser::NormalClassDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::ClassBodyContext* Java8Parser::NormalClassDeclarationContext::classBody() {
  return getRuleContext<Java8Parser::ClassBodyContext>(0);
}

std::vector<Java8Parser::ClassModifierContext *> Java8Parser::NormalClassDeclarationContext::classModifier() {
  return getRuleContexts<Java8Parser::ClassModifierContext>();
}

Java8Parser::ClassModifierContext* Java8Parser::NormalClassDeclarationContext::classModifier(size_t i) {
  return getRuleContext<Java8Parser::ClassModifierContext>(i);
}

Java8Parser::TypeParametersContext* Java8Parser::NormalClassDeclarationContext::typeParameters() {
  return getRuleContext<Java8Parser::TypeParametersContext>(0);
}

Java8Parser::SuperclassContext* Java8Parser::NormalClassDeclarationContext::superclass() {
  return getRuleContext<Java8Parser::SuperclassContext>(0);
}

Java8Parser::SuperinterfacesContext* Java8Parser::NormalClassDeclarationContext::superinterfaces() {
  return getRuleContext<Java8Parser::SuperinterfacesContext>(0);
}


size_t Java8Parser::NormalClassDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleNormalClassDeclaration;
}

void Java8Parser::NormalClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNormalClassDeclaration(this);
}

void Java8Parser::NormalClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNormalClassDeclaration(this);
}


antlrcpp::Any Java8Parser::NormalClassDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitNormalClassDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::NormalClassDeclarationContext* Java8Parser::normalClassDeclaration() {
  NormalClassDeclarationContext *_localctx = _tracker.createInstance<NormalClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 82, Java8Parser::RuleNormalClassDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(784);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP))) != 0) || _la == Java8Parser::AT) {
      setState(781);
      classModifier();
      setState(786);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(787);
    match(Java8Parser::CLASS);
    setState(788);
    match(Java8Parser::Identifier);
    setState(790);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(789);
      typeParameters();
    }
    setState(793);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS) {
      setState(792);
      superclass();
    }
    setState(796);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::IMPLEMENTS) {
      setState(795);
      superinterfaces();
    }
    setState(798);
    classBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassModifierContext ------------------------------------------------------------------

Java8Parser::ClassModifierContext::ClassModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::ClassModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::ClassModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::ClassModifierContext::PROTECTED() {
  return getToken(Java8Parser::PROTECTED, 0);
}

tree::TerminalNode* Java8Parser::ClassModifierContext::PRIVATE() {
  return getToken(Java8Parser::PRIVATE, 0);
}

tree::TerminalNode* Java8Parser::ClassModifierContext::ABSTRACT() {
  return getToken(Java8Parser::ABSTRACT, 0);
}

tree::TerminalNode* Java8Parser::ClassModifierContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

tree::TerminalNode* Java8Parser::ClassModifierContext::FINAL() {
  return getToken(Java8Parser::FINAL, 0);
}

tree::TerminalNode* Java8Parser::ClassModifierContext::STRICTFP() {
  return getToken(Java8Parser::STRICTFP, 0);
}


size_t Java8Parser::ClassModifierContext::getRuleIndex() const {
  return Java8Parser::RuleClassModifier;
}

void Java8Parser::ClassModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassModifier(this);
}

void Java8Parser::ClassModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassModifier(this);
}


antlrcpp::Any Java8Parser::ClassModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitClassModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassModifierContext* Java8Parser::classModifier() {
  ClassModifierContext *_localctx = _tracker.createInstance<ClassModifierContext>(_ctx, getState());
  enterRule(_localctx, 84, Java8Parser::RuleClassModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(808);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(800);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(801);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(802);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(803);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 5);
        setState(804);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 6);
        setState(805);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 7);
        setState(806);
        match(Java8Parser::FINAL);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 8);
        setState(807);
        match(Java8Parser::STRICTFP);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParametersContext ------------------------------------------------------------------

Java8Parser::TypeParametersContext::TypeParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TypeParametersContext::LT() {
  return getToken(Java8Parser::LT, 0);
}

Java8Parser::TypeParameterListContext* Java8Parser::TypeParametersContext::typeParameterList() {
  return getRuleContext<Java8Parser::TypeParameterListContext>(0);
}

tree::TerminalNode* Java8Parser::TypeParametersContext::GT() {
  return getToken(Java8Parser::GT, 0);
}


size_t Java8Parser::TypeParametersContext::getRuleIndex() const {
  return Java8Parser::RuleTypeParameters;
}

void Java8Parser::TypeParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameters(this);
}

void Java8Parser::TypeParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameters(this);
}


antlrcpp::Any Java8Parser::TypeParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitTypeParameters(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeParametersContext* Java8Parser::typeParameters() {
  TypeParametersContext *_localctx = _tracker.createInstance<TypeParametersContext>(_ctx, getState());
  enterRule(_localctx, 86, Java8Parser::RuleTypeParameters);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(810);
    match(Java8Parser::LT);
    setState(811);
    typeParameterList();
    setState(812);
    match(Java8Parser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterListContext ------------------------------------------------------------------

Java8Parser::TypeParameterListContext::TypeParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::TypeParameterContext *> Java8Parser::TypeParameterListContext::typeParameter() {
  return getRuleContexts<Java8Parser::TypeParameterContext>();
}

Java8Parser::TypeParameterContext* Java8Parser::TypeParameterListContext::typeParameter(size_t i) {
  return getRuleContext<Java8Parser::TypeParameterContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::TypeParameterListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::TypeParameterListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::TypeParameterListContext::getRuleIndex() const {
  return Java8Parser::RuleTypeParameterList;
}

void Java8Parser::TypeParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameterList(this);
}

void Java8Parser::TypeParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameterList(this);
}


antlrcpp::Any Java8Parser::TypeParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitTypeParameterList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeParameterListContext* Java8Parser::typeParameterList() {
  TypeParameterListContext *_localctx = _tracker.createInstance<TypeParameterListContext>(_ctx, getState());
  enterRule(_localctx, 88, Java8Parser::RuleTypeParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(814);
    typeParameter();
    setState(819);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(815);
      match(Java8Parser::COMMA);
      setState(816);
      typeParameter();
      setState(821);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SuperclassContext ------------------------------------------------------------------

Java8Parser::SuperclassContext::SuperclassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SuperclassContext::EXTENDS() {
  return getToken(Java8Parser::EXTENDS, 0);
}

Java8Parser::ClassTypeContext* Java8Parser::SuperclassContext::classType() {
  return getRuleContext<Java8Parser::ClassTypeContext>(0);
}


size_t Java8Parser::SuperclassContext::getRuleIndex() const {
  return Java8Parser::RuleSuperclass;
}

void Java8Parser::SuperclassContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuperclass(this);
}

void Java8Parser::SuperclassContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuperclass(this);
}


antlrcpp::Any Java8Parser::SuperclassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitSuperclass(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SuperclassContext* Java8Parser::superclass() {
  SuperclassContext *_localctx = _tracker.createInstance<SuperclassContext>(_ctx, getState());
  enterRule(_localctx, 90, Java8Parser::RuleSuperclass);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(822);
    match(Java8Parser::EXTENDS);
    setState(823);
    classType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SuperinterfacesContext ------------------------------------------------------------------

Java8Parser::SuperinterfacesContext::SuperinterfacesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SuperinterfacesContext::IMPLEMENTS() {
  return getToken(Java8Parser::IMPLEMENTS, 0);
}

Java8Parser::InterfaceTypeListContext* Java8Parser::SuperinterfacesContext::interfaceTypeList() {
  return getRuleContext<Java8Parser::InterfaceTypeListContext>(0);
}


size_t Java8Parser::SuperinterfacesContext::getRuleIndex() const {
  return Java8Parser::RuleSuperinterfaces;
}

void Java8Parser::SuperinterfacesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuperinterfaces(this);
}

void Java8Parser::SuperinterfacesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuperinterfaces(this);
}


antlrcpp::Any Java8Parser::SuperinterfacesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitSuperinterfaces(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SuperinterfacesContext* Java8Parser::superinterfaces() {
  SuperinterfacesContext *_localctx = _tracker.createInstance<SuperinterfacesContext>(_ctx, getState());
  enterRule(_localctx, 92, Java8Parser::RuleSuperinterfaces);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(825);
    match(Java8Parser::IMPLEMENTS);
    setState(826);
    interfaceTypeList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceTypeListContext ------------------------------------------------------------------

Java8Parser::InterfaceTypeListContext::InterfaceTypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::InterfaceTypeContext *> Java8Parser::InterfaceTypeListContext::interfaceType() {
  return getRuleContexts<Java8Parser::InterfaceTypeContext>();
}

Java8Parser::InterfaceTypeContext* Java8Parser::InterfaceTypeListContext::interfaceType(size_t i) {
  return getRuleContext<Java8Parser::InterfaceTypeContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::InterfaceTypeListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::InterfaceTypeListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::InterfaceTypeListContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceTypeList;
}

void Java8Parser::InterfaceTypeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceTypeList(this);
}

void Java8Parser::InterfaceTypeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceTypeList(this);
}


antlrcpp::Any Java8Parser::InterfaceTypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceTypeList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceTypeListContext* Java8Parser::interfaceTypeList() {
  InterfaceTypeListContext *_localctx = _tracker.createInstance<InterfaceTypeListContext>(_ctx, getState());
  enterRule(_localctx, 94, Java8Parser::RuleInterfaceTypeList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(828);
    interfaceType();
    setState(833);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(829);
      match(Java8Parser::COMMA);
      setState(830);
      interfaceType();
      setState(835);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyContext ------------------------------------------------------------------

Java8Parser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassBodyContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::ClassBodyContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

std::vector<Java8Parser::ClassBodyDeclarationContext *> Java8Parser::ClassBodyContext::classBodyDeclaration() {
  return getRuleContexts<Java8Parser::ClassBodyDeclarationContext>();
}

Java8Parser::ClassBodyDeclarationContext* Java8Parser::ClassBodyContext::classBodyDeclaration(size_t i) {
  return getRuleContext<Java8Parser::ClassBodyDeclarationContext>(i);
}


size_t Java8Parser::ClassBodyContext::getRuleIndex() const {
  return Java8Parser::RuleClassBody;
}

void Java8Parser::ClassBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassBody(this);
}

void Java8Parser::ClassBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassBody(this);
}


antlrcpp::Any Java8Parser::ClassBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitClassBody(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassBodyContext* Java8Parser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 96, Java8Parser::RuleClassBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(836);
    match(Java8Parser::LBRACE);
    setState(840);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::INTERFACE)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NATIVE)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SYNCHRONIZED)
      | (1ULL << Java8Parser::TRANSIENT)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::VOLATILE)
      | (1ULL << Java8Parser::LBRACE)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (Java8Parser::LT - 68))
      | (1ULL << (Java8Parser::Identifier - 68))
      | (1ULL << (Java8Parser::AT - 68)))) != 0)) {
      setState(837);
      classBodyDeclaration();
      setState(842);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(843);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyDeclarationContext ------------------------------------------------------------------

Java8Parser::ClassBodyDeclarationContext::ClassBodyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassMemberDeclarationContext* Java8Parser::ClassBodyDeclarationContext::classMemberDeclaration() {
  return getRuleContext<Java8Parser::ClassMemberDeclarationContext>(0);
}

Java8Parser::InstanceInitializerContext* Java8Parser::ClassBodyDeclarationContext::instanceInitializer() {
  return getRuleContext<Java8Parser::InstanceInitializerContext>(0);
}

Java8Parser::StaticInitializerContext* Java8Parser::ClassBodyDeclarationContext::staticInitializer() {
  return getRuleContext<Java8Parser::StaticInitializerContext>(0);
}

Java8Parser::ConstructorDeclarationContext* Java8Parser::ClassBodyDeclarationContext::constructorDeclaration() {
  return getRuleContext<Java8Parser::ConstructorDeclarationContext>(0);
}


size_t Java8Parser::ClassBodyDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleClassBodyDeclaration;
}

void Java8Parser::ClassBodyDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassBodyDeclaration(this);
}

void Java8Parser::ClassBodyDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassBodyDeclaration(this);
}


antlrcpp::Any Java8Parser::ClassBodyDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitClassBodyDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassBodyDeclarationContext* Java8Parser::classBodyDeclaration() {
  ClassBodyDeclarationContext *_localctx = _tracker.createInstance<ClassBodyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 98, Java8Parser::RuleClassBodyDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(849);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(845);
      classMemberDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(846);
      instanceInitializer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(847);
      staticInitializer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(848);
      constructorDeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassMemberDeclarationContext ------------------------------------------------------------------

Java8Parser::ClassMemberDeclarationContext::ClassMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::FieldDeclarationContext* Java8Parser::ClassMemberDeclarationContext::fieldDeclaration() {
  return getRuleContext<Java8Parser::FieldDeclarationContext>(0);
}

Java8Parser::MethodDeclarationContext* Java8Parser::ClassMemberDeclarationContext::methodDeclaration() {
  return getRuleContext<Java8Parser::MethodDeclarationContext>(0);
}

Java8Parser::ClassDeclarationContext* Java8Parser::ClassMemberDeclarationContext::classDeclaration() {
  return getRuleContext<Java8Parser::ClassDeclarationContext>(0);
}

Java8Parser::InterfaceDeclarationContext* Java8Parser::ClassMemberDeclarationContext::interfaceDeclaration() {
  return getRuleContext<Java8Parser::InterfaceDeclarationContext>(0);
}

tree::TerminalNode* Java8Parser::ClassMemberDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::ClassMemberDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleClassMemberDeclaration;
}

void Java8Parser::ClassMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassMemberDeclaration(this);
}

void Java8Parser::ClassMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassMemberDeclaration(this);
}


antlrcpp::Any Java8Parser::ClassMemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitClassMemberDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassMemberDeclarationContext* Java8Parser::classMemberDeclaration() {
  ClassMemberDeclarationContext *_localctx = _tracker.createInstance<ClassMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 100, Java8Parser::RuleClassMemberDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(856);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(851);
      fieldDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(852);
      methodDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(853);
      classDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(854);
      interfaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(855);
      match(Java8Parser::SEMI);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDeclarationContext ------------------------------------------------------------------

Java8Parser::FieldDeclarationContext::FieldDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::FieldDeclarationContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

Java8Parser::VariableDeclaratorListContext* Java8Parser::FieldDeclarationContext::variableDeclaratorList() {
  return getRuleContext<Java8Parser::VariableDeclaratorListContext>(0);
}

tree::TerminalNode* Java8Parser::FieldDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

std::vector<Java8Parser::FieldModifierContext *> Java8Parser::FieldDeclarationContext::fieldModifier() {
  return getRuleContexts<Java8Parser::FieldModifierContext>();
}

Java8Parser::FieldModifierContext* Java8Parser::FieldDeclarationContext::fieldModifier(size_t i) {
  return getRuleContext<Java8Parser::FieldModifierContext>(i);
}


size_t Java8Parser::FieldDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleFieldDeclaration;
}

void Java8Parser::FieldDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldDeclaration(this);
}

void Java8Parser::FieldDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldDeclaration(this);
}


antlrcpp::Any Java8Parser::FieldDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitFieldDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FieldDeclarationContext* Java8Parser::fieldDeclaration() {
  FieldDeclarationContext *_localctx = _tracker.createInstance<FieldDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 102, Java8Parser::RuleFieldDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(861);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::TRANSIENT)
      | (1ULL << Java8Parser::VOLATILE))) != 0) || _la == Java8Parser::AT) {
      setState(858);
      fieldModifier();
      setState(863);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(864);
    unannType();
    setState(865);
    variableDeclaratorList();
    setState(866);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldModifierContext ------------------------------------------------------------------

Java8Parser::FieldModifierContext::FieldModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::FieldModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::FieldModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::FieldModifierContext::PROTECTED() {
  return getToken(Java8Parser::PROTECTED, 0);
}

tree::TerminalNode* Java8Parser::FieldModifierContext::PRIVATE() {
  return getToken(Java8Parser::PRIVATE, 0);
}

tree::TerminalNode* Java8Parser::FieldModifierContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

tree::TerminalNode* Java8Parser::FieldModifierContext::FINAL() {
  return getToken(Java8Parser::FINAL, 0);
}

tree::TerminalNode* Java8Parser::FieldModifierContext::TRANSIENT() {
  return getToken(Java8Parser::TRANSIENT, 0);
}

tree::TerminalNode* Java8Parser::FieldModifierContext::VOLATILE() {
  return getToken(Java8Parser::VOLATILE, 0);
}


size_t Java8Parser::FieldModifierContext::getRuleIndex() const {
  return Java8Parser::RuleFieldModifier;
}

void Java8Parser::FieldModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldModifier(this);
}

void Java8Parser::FieldModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldModifier(this);
}


antlrcpp::Any Java8Parser::FieldModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitFieldModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FieldModifierContext* Java8Parser::fieldModifier() {
  FieldModifierContext *_localctx = _tracker.createInstance<FieldModifierContext>(_ctx, getState());
  enterRule(_localctx, 104, Java8Parser::RuleFieldModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(876);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(868);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(869);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(870);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(871);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 5);
        setState(872);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 6);
        setState(873);
        match(Java8Parser::FINAL);
        break;
      }

      case Java8Parser::TRANSIENT: {
        enterOuterAlt(_localctx, 7);
        setState(874);
        match(Java8Parser::TRANSIENT);
        break;
      }

      case Java8Parser::VOLATILE: {
        enterOuterAlt(_localctx, 8);
        setState(875);
        match(Java8Parser::VOLATILE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorListContext ------------------------------------------------------------------

Java8Parser::VariableDeclaratorListContext::VariableDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::VariableDeclaratorContext *> Java8Parser::VariableDeclaratorListContext::variableDeclarator() {
  return getRuleContexts<Java8Parser::VariableDeclaratorContext>();
}

Java8Parser::VariableDeclaratorContext* Java8Parser::VariableDeclaratorListContext::variableDeclarator(size_t i) {
  return getRuleContext<Java8Parser::VariableDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::VariableDeclaratorListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::VariableDeclaratorListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::VariableDeclaratorListContext::getRuleIndex() const {
  return Java8Parser::RuleVariableDeclaratorList;
}

void Java8Parser::VariableDeclaratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaratorList(this);
}

void Java8Parser::VariableDeclaratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaratorList(this);
}


antlrcpp::Any Java8Parser::VariableDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::VariableDeclaratorListContext* Java8Parser::variableDeclaratorList() {
  VariableDeclaratorListContext *_localctx = _tracker.createInstance<VariableDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 106, Java8Parser::RuleVariableDeclaratorList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(878);
    variableDeclarator();
    setState(883);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(879);
      match(Java8Parser::COMMA);
      setState(880);
      variableDeclarator();
      setState(885);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorContext ------------------------------------------------------------------

Java8Parser::VariableDeclaratorContext::VariableDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::VariableDeclaratorContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

tree::TerminalNode* Java8Parser::VariableDeclaratorContext::ASSIGN() {
  return getToken(Java8Parser::ASSIGN, 0);
}

Java8Parser::VariableInitializerContext* Java8Parser::VariableDeclaratorContext::variableInitializer() {
  return getRuleContext<Java8Parser::VariableInitializerContext>(0);
}


size_t Java8Parser::VariableDeclaratorContext::getRuleIndex() const {
  return Java8Parser::RuleVariableDeclarator;
}

void Java8Parser::VariableDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarator(this);
}

void Java8Parser::VariableDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarator(this);
}


antlrcpp::Any Java8Parser::VariableDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarator(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::VariableDeclaratorContext* Java8Parser::variableDeclarator() {
  VariableDeclaratorContext *_localctx = _tracker.createInstance<VariableDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 108, Java8Parser::RuleVariableDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(886);
    variableDeclaratorId();
    setState(889);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::ASSIGN) {
      setState(887);
      match(Java8Parser::ASSIGN);
      setState(888);
      variableInitializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorIdContext ------------------------------------------------------------------

Java8Parser::VariableDeclaratorIdContext::VariableDeclaratorIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::VariableDeclaratorIdContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::DimsContext* Java8Parser::VariableDeclaratorIdContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}


size_t Java8Parser::VariableDeclaratorIdContext::getRuleIndex() const {
  return Java8Parser::RuleVariableDeclaratorId;
}

void Java8Parser::VariableDeclaratorIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaratorId(this);
}

void Java8Parser::VariableDeclaratorIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaratorId(this);
}


antlrcpp::Any Java8Parser::VariableDeclaratorIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaratorId(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::variableDeclaratorId() {
  VariableDeclaratorIdContext *_localctx = _tracker.createInstance<VariableDeclaratorIdContext>(_ctx, getState());
  enterRule(_localctx, 110, Java8Parser::RuleVariableDeclaratorId);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(891);
    match(Java8Parser::Identifier);
    setState(893);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACK

    || _la == Java8Parser::AT) {
      setState(892);
      dims();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableInitializerContext ------------------------------------------------------------------

Java8Parser::VariableInitializerContext::VariableInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::VariableInitializerContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::ArrayInitializerContext* Java8Parser::VariableInitializerContext::arrayInitializer() {
  return getRuleContext<Java8Parser::ArrayInitializerContext>(0);
}


size_t Java8Parser::VariableInitializerContext::getRuleIndex() const {
  return Java8Parser::RuleVariableInitializer;
}

void Java8Parser::VariableInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableInitializer(this);
}

void Java8Parser::VariableInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableInitializer(this);
}


antlrcpp::Any Java8Parser::VariableInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitVariableInitializer(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::VariableInitializerContext* Java8Parser::variableInitializer() {
  VariableInitializerContext *_localctx = _tracker.createInstance<VariableInitializerContext>(_ctx, getState());
  enterRule(_localctx, 112, Java8Parser::RuleVariableInitializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(897);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::NEW:
      case Java8Parser::SHORT:
      case Java8Parser::SUPER:
      case Java8Parser::THIS:
      case Java8Parser::VOID:
      case Java8Parser::IntegerLiteral:
      case Java8Parser::FloatingPointLiteral:
      case Java8Parser::BooleanLiteral:
      case Java8Parser::CharacterLiteral:
      case Java8Parser::StringLiteral:
      case Java8Parser::NullLiteral:
      case Java8Parser::LPAREN:
      case Java8Parser::BANG:
      case Java8Parser::TILDE:
      case Java8Parser::INC:
      case Java8Parser::DEC:
      case Java8Parser::ADD:
      case Java8Parser::SUB:
      case Java8Parser::Identifier:
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(895);
        expression();
        break;
      }

      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 2);
        setState(896);
        arrayInitializer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannTypeContext ------------------------------------------------------------------

Java8Parser::UnannTypeContext::UnannTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannPrimitiveTypeContext* Java8Parser::UnannTypeContext::unannPrimitiveType() {
  return getRuleContext<Java8Parser::UnannPrimitiveTypeContext>(0);
}

Java8Parser::UnannReferenceTypeContext* Java8Parser::UnannTypeContext::unannReferenceType() {
  return getRuleContext<Java8Parser::UnannReferenceTypeContext>(0);
}


size_t Java8Parser::UnannTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannType;
}

void Java8Parser::UnannTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannType(this);
}

void Java8Parser::UnannTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannType(this);
}


antlrcpp::Any Java8Parser::UnannTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitUnannType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannTypeContext* Java8Parser::unannType() {
  UnannTypeContext *_localctx = _tracker.createInstance<UnannTypeContext>(_ctx, getState());
  enterRule(_localctx, 114, Java8Parser::RuleUnannType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(901);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(899);
      unannPrimitiveType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(900);
      unannReferenceType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannPrimitiveTypeContext ------------------------------------------------------------------

Java8Parser::UnannPrimitiveTypeContext::UnannPrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::NumericTypeContext* Java8Parser::UnannPrimitiveTypeContext::numericType() {
  return getRuleContext<Java8Parser::NumericTypeContext>(0);
}

tree::TerminalNode* Java8Parser::UnannPrimitiveTypeContext::BOOLEAN() {
  return getToken(Java8Parser::BOOLEAN, 0);
}


size_t Java8Parser::UnannPrimitiveTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannPrimitiveType;
}

void Java8Parser::UnannPrimitiveTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannPrimitiveType(this);
}

void Java8Parser::UnannPrimitiveTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannPrimitiveType(this);
}


antlrcpp::Any Java8Parser::UnannPrimitiveTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitUnannPrimitiveType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannPrimitiveTypeContext* Java8Parser::unannPrimitiveType() {
  UnannPrimitiveTypeContext *_localctx = _tracker.createInstance<UnannPrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 116, Java8Parser::RuleUnannPrimitiveType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(905);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::SHORT: {
        enterOuterAlt(_localctx, 1);
        setState(903);
        numericType();
        break;
      }

      case Java8Parser::BOOLEAN: {
        enterOuterAlt(_localctx, 2);
        setState(904);
        match(Java8Parser::BOOLEAN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannReferenceTypeContext ------------------------------------------------------------------

Java8Parser::UnannReferenceTypeContext::UnannReferenceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassOrInterfaceTypeContext* Java8Parser::UnannReferenceTypeContext::unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassOrInterfaceTypeContext>(0);
}

Java8Parser::UnannTypeVariableContext* Java8Parser::UnannReferenceTypeContext::unannTypeVariable() {
  return getRuleContext<Java8Parser::UnannTypeVariableContext>(0);
}

Java8Parser::UnannArrayTypeContext* Java8Parser::UnannReferenceTypeContext::unannArrayType() {
  return getRuleContext<Java8Parser::UnannArrayTypeContext>(0);
}


size_t Java8Parser::UnannReferenceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannReferenceType;
}

void Java8Parser::UnannReferenceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannReferenceType(this);
}

void Java8Parser::UnannReferenceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannReferenceType(this);
}


antlrcpp::Any Java8Parser::UnannReferenceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitUnannReferenceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannReferenceTypeContext* Java8Parser::unannReferenceType() {
  UnannReferenceTypeContext *_localctx = _tracker.createInstance<UnannReferenceTypeContext>(_ctx, getState());
  enterRule(_localctx, 118, Java8Parser::RuleUnannReferenceType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(910);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(907);
      unannClassOrInterfaceType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(908);
      unannTypeVariable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(909);
      unannArrayType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannClassOrInterfaceTypeContext::UnannClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext* Java8Parser::UnannClassOrInterfaceTypeContext::unannClassType_lfno_unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext>(0);
}

Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext* Java8Parser::UnannClassOrInterfaceTypeContext::unannInterfaceType_lfno_unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext>(0);
}

std::vector<Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext *> Java8Parser::UnannClassOrInterfaceTypeContext::unannClassType_lf_unannClassOrInterfaceType() {
  return getRuleContexts<Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext>();
}

Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext* Java8Parser::UnannClassOrInterfaceTypeContext::unannClassType_lf_unannClassOrInterfaceType(size_t i) {
  return getRuleContext<Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext>(i);
}

std::vector<Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext *> Java8Parser::UnannClassOrInterfaceTypeContext::unannInterfaceType_lf_unannClassOrInterfaceType() {
  return getRuleContexts<Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext>();
}

Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext* Java8Parser::UnannClassOrInterfaceTypeContext::unannInterfaceType_lf_unannClassOrInterfaceType(size_t i) {
  return getRuleContext<Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext>(i);
}


size_t Java8Parser::UnannClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannClassOrInterfaceType;
}

void Java8Parser::UnannClassOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannClassOrInterfaceType(this);
}

void Java8Parser::UnannClassOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannClassOrInterfaceType(this);
}


antlrcpp::Any Java8Parser::UnannClassOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitUnannClassOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannClassOrInterfaceTypeContext* Java8Parser::unannClassOrInterfaceType() {
  UnannClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<UnannClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 120, Java8Parser::RuleUnannClassOrInterfaceType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(914);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      setState(912);
      unannClassType_lfno_unannClassOrInterfaceType();
      break;
    }

    case 2: {
      setState(913);
      unannInterfaceType_lfno_unannClassOrInterfaceType();
      break;
    }

    default:
      break;
    }
    setState(920);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(918);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
        case 1: {
          setState(916);
          unannClassType_lf_unannClassOrInterfaceType();
          break;
        }

        case 2: {
          setState(917);
          unannInterfaceType_lf_unannClassOrInterfaceType();
          break;
        }

        default:
          break;
        } 
      }
      setState(922);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannClassTypeContext ------------------------------------------------------------------

Java8Parser::UnannClassTypeContext::UnannClassTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::UnannClassTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::UnannClassTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::UnannClassOrInterfaceTypeContext* Java8Parser::UnannClassTypeContext::unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassOrInterfaceTypeContext>(0);
}

tree::TerminalNode* Java8Parser::UnannClassTypeContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::UnannClassTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::UnannClassTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::UnannClassTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannClassType;
}

void Java8Parser::UnannClassTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannClassType(this);
}

void Java8Parser::UnannClassTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannClassType(this);
}


antlrcpp::Any Java8Parser::UnannClassTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitUnannClassType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannClassTypeContext* Java8Parser::unannClassType() {
  UnannClassTypeContext *_localctx = _tracker.createInstance<UnannClassTypeContext>(_ctx, getState());
  enterRule(_localctx, 122, Java8Parser::RuleUnannClassType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(939);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(923);
      match(Java8Parser::Identifier);
      setState(925);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(924);
        typeArguments();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(927);
      unannClassOrInterfaceType();
      setState(928);
      match(Java8Parser::DOT);
      setState(932);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(929);
        annotation();
        setState(934);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(935);
      match(Java8Parser::Identifier);
      setState(937);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(936);
        typeArguments();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannClassType_lf_unannClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::UnannClassType_lf_unannClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsContext* Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannClassType_lf_unannClassOrInterfaceType;
}

void Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannClassType_lf_unannClassOrInterfaceType(this);
}

void Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannClassType_lf_unannClassOrInterfaceType(this);
}


antlrcpp::Any Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitUnannClassType_lf_unannClassOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext* Java8Parser::unannClassType_lf_unannClassOrInterfaceType() {
  UnannClassType_lf_unannClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<UnannClassType_lf_unannClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 124, Java8Parser::RuleUnannClassType_lf_unannClassOrInterfaceType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(941);
    match(Java8Parser::DOT);
    setState(945);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(942);
      annotation();
      setState(947);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(948);
    match(Java8Parser::Identifier);
    setState(950);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(949);
      typeArguments();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannClassType_lfno_unannClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext::UnannClassType_lfno_unannClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannClassType_lfno_unannClassOrInterfaceType;
}

void Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannClassType_lfno_unannClassOrInterfaceType(this);
}

void Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannClassType_lfno_unannClassOrInterfaceType(this);
}


antlrcpp::Any Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitUnannClassType_lfno_unannClassOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext* Java8Parser::unannClassType_lfno_unannClassOrInterfaceType() {
  UnannClassType_lfno_unannClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<UnannClassType_lfno_unannClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 126, Java8Parser::RuleUnannClassType_lfno_unannClassOrInterfaceType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(952);
    match(Java8Parser::Identifier);
    setState(954);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(953);
      typeArguments();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannInterfaceTypeContext::UnannInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassTypeContext* Java8Parser::UnannInterfaceTypeContext::unannClassType() {
  return getRuleContext<Java8Parser::UnannClassTypeContext>(0);
}


size_t Java8Parser::UnannInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannInterfaceType;
}

void Java8Parser::UnannInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannInterfaceType(this);
}

void Java8Parser::UnannInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannInterfaceType(this);
}


antlrcpp::Any Java8Parser::UnannInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitUnannInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannInterfaceTypeContext* Java8Parser::unannInterfaceType() {
  UnannInterfaceTypeContext *_localctx = _tracker.createInstance<UnannInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 128, Java8Parser::RuleUnannInterfaceType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(956);
    unannClassType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannInterfaceType_lf_unannClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext* Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext::unannClassType_lf_unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext>(0);
}


size_t Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannInterfaceType_lf_unannClassOrInterfaceType;
}

void Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannInterfaceType_lf_unannClassOrInterfaceType(this);
}

void Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannInterfaceType_lf_unannClassOrInterfaceType(this);
}


antlrcpp::Any Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitUnannInterfaceType_lf_unannClassOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext* Java8Parser::unannInterfaceType_lf_unannClassOrInterfaceType() {
  UnannInterfaceType_lf_unannClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<UnannInterfaceType_lf_unannClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 130, Java8Parser::RuleUnannInterfaceType_lf_unannClassOrInterfaceType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(958);
    unannClassType_lf_unannClassOrInterfaceType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext ------------------------------------------------------------------

Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext* Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext::unannClassType_lfno_unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext>(0);
}


size_t Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannInterfaceType_lfno_unannClassOrInterfaceType;
}

void Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannInterfaceType_lfno_unannClassOrInterfaceType(this);
}

void Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannInterfaceType_lfno_unannClassOrInterfaceType(this);
}


antlrcpp::Any Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitUnannInterfaceType_lfno_unannClassOrInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext* Java8Parser::unannInterfaceType_lfno_unannClassOrInterfaceType() {
  UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext *_localctx = _tracker.createInstance<UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 132, Java8Parser::RuleUnannInterfaceType_lfno_unannClassOrInterfaceType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(960);
    unannClassType_lfno_unannClassOrInterfaceType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannTypeVariableContext ------------------------------------------------------------------

Java8Parser::UnannTypeVariableContext::UnannTypeVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::UnannTypeVariableContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::UnannTypeVariableContext::getRuleIndex() const {
  return Java8Parser::RuleUnannTypeVariable;
}

void Java8Parser::UnannTypeVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannTypeVariable(this);
}

void Java8Parser::UnannTypeVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannTypeVariable(this);
}


antlrcpp::Any Java8Parser::UnannTypeVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitUnannTypeVariable(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannTypeVariableContext* Java8Parser::unannTypeVariable() {
  UnannTypeVariableContext *_localctx = _tracker.createInstance<UnannTypeVariableContext>(_ctx, getState());
  enterRule(_localctx, 134, Java8Parser::RuleUnannTypeVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(962);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnannArrayTypeContext ------------------------------------------------------------------

Java8Parser::UnannArrayTypeContext::UnannArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannPrimitiveTypeContext* Java8Parser::UnannArrayTypeContext::unannPrimitiveType() {
  return getRuleContext<Java8Parser::UnannPrimitiveTypeContext>(0);
}

Java8Parser::DimsContext* Java8Parser::UnannArrayTypeContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}

Java8Parser::UnannClassOrInterfaceTypeContext* Java8Parser::UnannArrayTypeContext::unannClassOrInterfaceType() {
  return getRuleContext<Java8Parser::UnannClassOrInterfaceTypeContext>(0);
}

Java8Parser::UnannTypeVariableContext* Java8Parser::UnannArrayTypeContext::unannTypeVariable() {
  return getRuleContext<Java8Parser::UnannTypeVariableContext>(0);
}


size_t Java8Parser::UnannArrayTypeContext::getRuleIndex() const {
  return Java8Parser::RuleUnannArrayType;
}

void Java8Parser::UnannArrayTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnannArrayType(this);
}

void Java8Parser::UnannArrayTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnannArrayType(this);
}


antlrcpp::Any Java8Parser::UnannArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitUnannArrayType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnannArrayTypeContext* Java8Parser::unannArrayType() {
  UnannArrayTypeContext *_localctx = _tracker.createInstance<UnannArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 136, Java8Parser::RuleUnannArrayType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(973);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(964);
      unannPrimitiveType();
      setState(965);
      dims();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(967);
      unannClassOrInterfaceType();
      setState(968);
      dims();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(970);
      unannTypeVariable();
      setState(971);
      dims();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDeclarationContext ------------------------------------------------------------------

Java8Parser::MethodDeclarationContext::MethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::MethodHeaderContext* Java8Parser::MethodDeclarationContext::methodHeader() {
  return getRuleContext<Java8Parser::MethodHeaderContext>(0);
}

Java8Parser::MethodBodyContext* Java8Parser::MethodDeclarationContext::methodBody() {
  return getRuleContext<Java8Parser::MethodBodyContext>(0);
}

std::vector<Java8Parser::MethodModifierContext *> Java8Parser::MethodDeclarationContext::methodModifier() {
  return getRuleContexts<Java8Parser::MethodModifierContext>();
}

Java8Parser::MethodModifierContext* Java8Parser::MethodDeclarationContext::methodModifier(size_t i) {
  return getRuleContext<Java8Parser::MethodModifierContext>(i);
}


size_t Java8Parser::MethodDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleMethodDeclaration;
}

void Java8Parser::MethodDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodDeclaration(this);
}

void Java8Parser::MethodDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodDeclaration(this);
}


antlrcpp::Any Java8Parser::MethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitMethodDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodDeclarationContext* Java8Parser::methodDeclaration() {
  MethodDeclarationContext *_localctx = _tracker.createInstance<MethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 138, Java8Parser::RuleMethodDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(978);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::NATIVE)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SYNCHRONIZED))) != 0) || _la == Java8Parser::AT) {
      setState(975);
      methodModifier();
      setState(980);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(981);
    methodHeader();
    setState(982);
    methodBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodModifierContext ------------------------------------------------------------------

Java8Parser::MethodModifierContext::MethodModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::MethodModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::PROTECTED() {
  return getToken(Java8Parser::PROTECTED, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::PRIVATE() {
  return getToken(Java8Parser::PRIVATE, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::ABSTRACT() {
  return getToken(Java8Parser::ABSTRACT, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::FINAL() {
  return getToken(Java8Parser::FINAL, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::SYNCHRONIZED() {
  return getToken(Java8Parser::SYNCHRONIZED, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::NATIVE() {
  return getToken(Java8Parser::NATIVE, 0);
}

tree::TerminalNode* Java8Parser::MethodModifierContext::STRICTFP() {
  return getToken(Java8Parser::STRICTFP, 0);
}


size_t Java8Parser::MethodModifierContext::getRuleIndex() const {
  return Java8Parser::RuleMethodModifier;
}

void Java8Parser::MethodModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodModifier(this);
}

void Java8Parser::MethodModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodModifier(this);
}


antlrcpp::Any Java8Parser::MethodModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitMethodModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodModifierContext* Java8Parser::methodModifier() {
  MethodModifierContext *_localctx = _tracker.createInstance<MethodModifierContext>(_ctx, getState());
  enterRule(_localctx, 140, Java8Parser::RuleMethodModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(994);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(984);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(985);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(986);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(987);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 5);
        setState(988);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 6);
        setState(989);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 7);
        setState(990);
        match(Java8Parser::FINAL);
        break;
      }

      case Java8Parser::SYNCHRONIZED: {
        enterOuterAlt(_localctx, 8);
        setState(991);
        match(Java8Parser::SYNCHRONIZED);
        break;
      }

      case Java8Parser::NATIVE: {
        enterOuterAlt(_localctx, 9);
        setState(992);
        match(Java8Parser::NATIVE);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 10);
        setState(993);
        match(Java8Parser::STRICTFP);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodHeaderContext ------------------------------------------------------------------

Java8Parser::MethodHeaderContext::MethodHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ResultContext* Java8Parser::MethodHeaderContext::result() {
  return getRuleContext<Java8Parser::ResultContext>(0);
}

Java8Parser::MethodDeclaratorContext* Java8Parser::MethodHeaderContext::methodDeclarator() {
  return getRuleContext<Java8Parser::MethodDeclaratorContext>(0);
}

Java8Parser::Throws_Context* Java8Parser::MethodHeaderContext::throws_() {
  return getRuleContext<Java8Parser::Throws_Context>(0);
}

Java8Parser::TypeParametersContext* Java8Parser::MethodHeaderContext::typeParameters() {
  return getRuleContext<Java8Parser::TypeParametersContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::MethodHeaderContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::MethodHeaderContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::MethodHeaderContext::getRuleIndex() const {
  return Java8Parser::RuleMethodHeader;
}

void Java8Parser::MethodHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodHeader(this);
}

void Java8Parser::MethodHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodHeader(this);
}


antlrcpp::Any Java8Parser::MethodHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitMethodHeader(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodHeaderContext* Java8Parser::methodHeader() {
  MethodHeaderContext *_localctx = _tracker.createInstance<MethodHeaderContext>(_ctx, getState());
  enterRule(_localctx, 142, Java8Parser::RuleMethodHeader);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1013);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::SHORT:
      case Java8Parser::VOID:
      case Java8Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(996);
        result();
        setState(997);
        methodDeclarator();
        setState(999);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::THROWS) {
          setState(998);
          throws_();
        }
        break;
      }

      case Java8Parser::LT: {
        enterOuterAlt(_localctx, 2);
        setState(1001);
        typeParameters();
        setState(1005);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(1002);
          annotation();
          setState(1007);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1008);
        result();
        setState(1009);
        methodDeclarator();
        setState(1011);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::THROWS) {
          setState(1010);
          throws_();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResultContext ------------------------------------------------------------------

Java8Parser::ResultContext::ResultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::ResultContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

tree::TerminalNode* Java8Parser::ResultContext::VOID() {
  return getToken(Java8Parser::VOID, 0);
}


size_t Java8Parser::ResultContext::getRuleIndex() const {
  return Java8Parser::RuleResult;
}

void Java8Parser::ResultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResult(this);
}

void Java8Parser::ResultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResult(this);
}


antlrcpp::Any Java8Parser::ResultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitResult(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ResultContext* Java8Parser::result() {
  ResultContext *_localctx = _tracker.createInstance<ResultContext>(_ctx, getState());
  enterRule(_localctx, 144, Java8Parser::RuleResult);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1017);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::SHORT:
      case Java8Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1015);
        unannType();
        break;
      }

      case Java8Parser::VOID: {
        enterOuterAlt(_localctx, 2);
        setState(1016);
        match(Java8Parser::VOID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDeclaratorContext ------------------------------------------------------------------

Java8Parser::MethodDeclaratorContext::MethodDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::MethodDeclaratorContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::MethodDeclaratorContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::MethodDeclaratorContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::FormalParameterListContext* Java8Parser::MethodDeclaratorContext::formalParameterList() {
  return getRuleContext<Java8Parser::FormalParameterListContext>(0);
}

Java8Parser::DimsContext* Java8Parser::MethodDeclaratorContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}


size_t Java8Parser::MethodDeclaratorContext::getRuleIndex() const {
  return Java8Parser::RuleMethodDeclarator;
}

void Java8Parser::MethodDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodDeclarator(this);
}

void Java8Parser::MethodDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodDeclarator(this);
}


antlrcpp::Any Java8Parser::MethodDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitMethodDeclarator(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodDeclaratorContext* Java8Parser::methodDeclarator() {
  MethodDeclaratorContext *_localctx = _tracker.createInstance<MethodDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 146, Java8Parser::RuleMethodDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1019);
    match(Java8Parser::Identifier);
    setState(1020);
    match(Java8Parser::LPAREN);
    setState(1022);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::SHORT))) != 0) || _la == Java8Parser::Identifier

    || _la == Java8Parser::AT) {
      setState(1021);
      formalParameterList();
    }
    setState(1024);
    match(Java8Parser::RPAREN);
    setState(1026);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACK

    || _la == Java8Parser::AT) {
      setState(1025);
      dims();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterListContext ------------------------------------------------------------------

Java8Parser::FormalParameterListContext::FormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ReceiverParameterContext* Java8Parser::FormalParameterListContext::receiverParameter() {
  return getRuleContext<Java8Parser::ReceiverParameterContext>(0);
}

Java8Parser::FormalParametersContext* Java8Parser::FormalParameterListContext::formalParameters() {
  return getRuleContext<Java8Parser::FormalParametersContext>(0);
}

tree::TerminalNode* Java8Parser::FormalParameterListContext::COMMA() {
  return getToken(Java8Parser::COMMA, 0);
}

Java8Parser::LastFormalParameterContext* Java8Parser::FormalParameterListContext::lastFormalParameter() {
  return getRuleContext<Java8Parser::LastFormalParameterContext>(0);
}


size_t Java8Parser::FormalParameterListContext::getRuleIndex() const {
  return Java8Parser::RuleFormalParameterList;
}

void Java8Parser::FormalParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameterList(this);
}

void Java8Parser::FormalParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameterList(this);
}


antlrcpp::Any Java8Parser::FormalParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameterList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FormalParameterListContext* Java8Parser::formalParameterList() {
  FormalParameterListContext *_localctx = _tracker.createInstance<FormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 148, Java8Parser::RuleFormalParameterList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1034);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1028);
      receiverParameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1029);
      formalParameters();
      setState(1030);
      match(Java8Parser::COMMA);
      setState(1031);
      lastFormalParameter();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1033);
      lastFormalParameter();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParametersContext ------------------------------------------------------------------

Java8Parser::FormalParametersContext::FormalParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::FormalParameterContext *> Java8Parser::FormalParametersContext::formalParameter() {
  return getRuleContexts<Java8Parser::FormalParameterContext>();
}

Java8Parser::FormalParameterContext* Java8Parser::FormalParametersContext::formalParameter(size_t i) {
  return getRuleContext<Java8Parser::FormalParameterContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::FormalParametersContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::FormalParametersContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}

Java8Parser::ReceiverParameterContext* Java8Parser::FormalParametersContext::receiverParameter() {
  return getRuleContext<Java8Parser::ReceiverParameterContext>(0);
}


size_t Java8Parser::FormalParametersContext::getRuleIndex() const {
  return Java8Parser::RuleFormalParameters;
}

void Java8Parser::FormalParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameters(this);
}

void Java8Parser::FormalParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameters(this);
}


antlrcpp::Any Java8Parser::FormalParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameters(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FormalParametersContext* Java8Parser::formalParameters() {
  FormalParametersContext *_localctx = _tracker.createInstance<FormalParametersContext>(_ctx, getState());
  enterRule(_localctx, 150, Java8Parser::RuleFormalParameters);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(1052);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1036);
      formalParameter();
      setState(1041);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1037);
          match(Java8Parser::COMMA);
          setState(1038);
          formalParameter(); 
        }
        setState(1043);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1044);
      receiverParameter();
      setState(1049);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1045);
          match(Java8Parser::COMMA);
          setState(1046);
          formalParameter(); 
        }
        setState(1051);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterContext ------------------------------------------------------------------

Java8Parser::FormalParameterContext::FormalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::FormalParameterContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::FormalParameterContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::FormalParameterContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::FormalParameterContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::FormalParameterContext::getRuleIndex() const {
  return Java8Parser::RuleFormalParameter;
}

void Java8Parser::FormalParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameter(this);
}

void Java8Parser::FormalParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameter(this);
}


antlrcpp::Any Java8Parser::FormalParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitFormalParameter(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FormalParameterContext* Java8Parser::formalParameter() {
  FormalParameterContext *_localctx = _tracker.createInstance<FormalParameterContext>(_ctx, getState());
  enterRule(_localctx, 152, Java8Parser::RuleFormalParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1057);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1054);
      variableModifier();
      setState(1059);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1060);
    unannType();
    setState(1061);
    variableDeclaratorId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableModifierContext ------------------------------------------------------------------

Java8Parser::VariableModifierContext::VariableModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::VariableModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::VariableModifierContext::FINAL() {
  return getToken(Java8Parser::FINAL, 0);
}


size_t Java8Parser::VariableModifierContext::getRuleIndex() const {
  return Java8Parser::RuleVariableModifier;
}

void Java8Parser::VariableModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableModifier(this);
}

void Java8Parser::VariableModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableModifier(this);
}


antlrcpp::Any Java8Parser::VariableModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitVariableModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::VariableModifierContext* Java8Parser::variableModifier() {
  VariableModifierContext *_localctx = _tracker.createInstance<VariableModifierContext>(_ctx, getState());
  enterRule(_localctx, 154, Java8Parser::RuleVariableModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1065);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1063);
        annotation();
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 2);
        setState(1064);
        match(Java8Parser::FINAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LastFormalParameterContext ------------------------------------------------------------------

Java8Parser::LastFormalParameterContext::LastFormalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::LastFormalParameterContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

tree::TerminalNode* Java8Parser::LastFormalParameterContext::ELLIPSIS() {
  return getToken(Java8Parser::ELLIPSIS, 0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::LastFormalParameterContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::LastFormalParameterContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::LastFormalParameterContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::LastFormalParameterContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::LastFormalParameterContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::FormalParameterContext* Java8Parser::LastFormalParameterContext::formalParameter() {
  return getRuleContext<Java8Parser::FormalParameterContext>(0);
}


size_t Java8Parser::LastFormalParameterContext::getRuleIndex() const {
  return Java8Parser::RuleLastFormalParameter;
}

void Java8Parser::LastFormalParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLastFormalParameter(this);
}

void Java8Parser::LastFormalParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLastFormalParameter(this);
}


antlrcpp::Any Java8Parser::LastFormalParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitLastFormalParameter(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LastFormalParameterContext* Java8Parser::lastFormalParameter() {
  LastFormalParameterContext *_localctx = _tracker.createInstance<LastFormalParameterContext>(_ctx, getState());
  enterRule(_localctx, 156, Java8Parser::RuleLastFormalParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1084);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1070);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
        setState(1067);
        variableModifier();
        setState(1072);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1073);
      unannType();
      setState(1077);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(1074);
        annotation();
        setState(1079);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1080);
      match(Java8Parser::ELLIPSIS);
      setState(1081);
      variableDeclaratorId();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1083);
      formalParameter();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReceiverParameterContext ------------------------------------------------------------------

Java8Parser::ReceiverParameterContext::ReceiverParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::ReceiverParameterContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

tree::TerminalNode* Java8Parser::ReceiverParameterContext::THIS() {
  return getToken(Java8Parser::THIS, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ReceiverParameterContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ReceiverParameterContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

tree::TerminalNode* Java8Parser::ReceiverParameterContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::ReceiverParameterContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}


size_t Java8Parser::ReceiverParameterContext::getRuleIndex() const {
  return Java8Parser::RuleReceiverParameter;
}

void Java8Parser::ReceiverParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReceiverParameter(this);
}

void Java8Parser::ReceiverParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReceiverParameter(this);
}


antlrcpp::Any Java8Parser::ReceiverParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitReceiverParameter(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ReceiverParameterContext* Java8Parser::receiverParameter() {
  ReceiverParameterContext *_localctx = _tracker.createInstance<ReceiverParameterContext>(_ctx, getState());
  enterRule(_localctx, 158, Java8Parser::RuleReceiverParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1089);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(1086);
      annotation();
      setState(1091);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1092);
    unannType();
    setState(1095);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier) {
      setState(1093);
      match(Java8Parser::Identifier);
      setState(1094);
      match(Java8Parser::DOT);
    }
    setState(1097);
    match(Java8Parser::THIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Throws_Context ------------------------------------------------------------------

Java8Parser::Throws_Context::Throws_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::Throws_Context::THROWS() {
  return getToken(Java8Parser::THROWS, 0);
}

Java8Parser::ExceptionTypeListContext* Java8Parser::Throws_Context::exceptionTypeList() {
  return getRuleContext<Java8Parser::ExceptionTypeListContext>(0);
}


size_t Java8Parser::Throws_Context::getRuleIndex() const {
  return Java8Parser::RuleThrows_;
}

void Java8Parser::Throws_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrows_(this);
}

void Java8Parser::Throws_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrows_(this);
}


antlrcpp::Any Java8Parser::Throws_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitThrows_(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::Throws_Context* Java8Parser::throws_() {
  Throws_Context *_localctx = _tracker.createInstance<Throws_Context>(_ctx, getState());
  enterRule(_localctx, 160, Java8Parser::RuleThrows_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1099);
    match(Java8Parser::THROWS);
    setState(1100);
    exceptionTypeList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionTypeListContext ------------------------------------------------------------------

Java8Parser::ExceptionTypeListContext::ExceptionTypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ExceptionTypeContext *> Java8Parser::ExceptionTypeListContext::exceptionType() {
  return getRuleContexts<Java8Parser::ExceptionTypeContext>();
}

Java8Parser::ExceptionTypeContext* Java8Parser::ExceptionTypeListContext::exceptionType(size_t i) {
  return getRuleContext<Java8Parser::ExceptionTypeContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ExceptionTypeListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::ExceptionTypeListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::ExceptionTypeListContext::getRuleIndex() const {
  return Java8Parser::RuleExceptionTypeList;
}

void Java8Parser::ExceptionTypeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptionTypeList(this);
}

void Java8Parser::ExceptionTypeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptionTypeList(this);
}


antlrcpp::Any Java8Parser::ExceptionTypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitExceptionTypeList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ExceptionTypeListContext* Java8Parser::exceptionTypeList() {
  ExceptionTypeListContext *_localctx = _tracker.createInstance<ExceptionTypeListContext>(_ctx, getState());
  enterRule(_localctx, 162, Java8Parser::RuleExceptionTypeList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1102);
    exceptionType();
    setState(1107);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(1103);
      match(Java8Parser::COMMA);
      setState(1104);
      exceptionType();
      setState(1109);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionTypeContext ------------------------------------------------------------------

Java8Parser::ExceptionTypeContext::ExceptionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassTypeContext* Java8Parser::ExceptionTypeContext::classType() {
  return getRuleContext<Java8Parser::ClassTypeContext>(0);
}

Java8Parser::TypeVariableContext* Java8Parser::ExceptionTypeContext::typeVariable() {
  return getRuleContext<Java8Parser::TypeVariableContext>(0);
}


size_t Java8Parser::ExceptionTypeContext::getRuleIndex() const {
  return Java8Parser::RuleExceptionType;
}

void Java8Parser::ExceptionTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptionType(this);
}

void Java8Parser::ExceptionTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptionType(this);
}


antlrcpp::Any Java8Parser::ExceptionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitExceptionType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ExceptionTypeContext* Java8Parser::exceptionType() {
  ExceptionTypeContext *_localctx = _tracker.createInstance<ExceptionTypeContext>(_ctx, getState());
  enterRule(_localctx, 164, Java8Parser::RuleExceptionType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1112);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1110);
      classType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1111);
      typeVariable();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodBodyContext ------------------------------------------------------------------

Java8Parser::MethodBodyContext::MethodBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BlockContext* Java8Parser::MethodBodyContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}

tree::TerminalNode* Java8Parser::MethodBodyContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::MethodBodyContext::getRuleIndex() const {
  return Java8Parser::RuleMethodBody;
}

void Java8Parser::MethodBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodBody(this);
}

void Java8Parser::MethodBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodBody(this);
}


antlrcpp::Any Java8Parser::MethodBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitMethodBody(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodBodyContext* Java8Parser::methodBody() {
  MethodBodyContext *_localctx = _tracker.createInstance<MethodBodyContext>(_ctx, getState());
  enterRule(_localctx, 166, Java8Parser::RuleMethodBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1116);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1114);
        block();
        break;
      }

      case Java8Parser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(1115);
        match(Java8Parser::SEMI);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstanceInitializerContext ------------------------------------------------------------------

Java8Parser::InstanceInitializerContext::InstanceInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BlockContext* Java8Parser::InstanceInitializerContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::InstanceInitializerContext::getRuleIndex() const {
  return Java8Parser::RuleInstanceInitializer;
}

void Java8Parser::InstanceInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstanceInitializer(this);
}

void Java8Parser::InstanceInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstanceInitializer(this);
}


antlrcpp::Any Java8Parser::InstanceInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitInstanceInitializer(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InstanceInitializerContext* Java8Parser::instanceInitializer() {
  InstanceInitializerContext *_localctx = _tracker.createInstance<InstanceInitializerContext>(_ctx, getState());
  enterRule(_localctx, 168, Java8Parser::RuleInstanceInitializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1118);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StaticInitializerContext ------------------------------------------------------------------

Java8Parser::StaticInitializerContext::StaticInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::StaticInitializerContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

Java8Parser::BlockContext* Java8Parser::StaticInitializerContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::StaticInitializerContext::getRuleIndex() const {
  return Java8Parser::RuleStaticInitializer;
}

void Java8Parser::StaticInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStaticInitializer(this);
}

void Java8Parser::StaticInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStaticInitializer(this);
}


antlrcpp::Any Java8Parser::StaticInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitStaticInitializer(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::StaticInitializerContext* Java8Parser::staticInitializer() {
  StaticInitializerContext *_localctx = _tracker.createInstance<StaticInitializerContext>(_ctx, getState());
  enterRule(_localctx, 170, Java8Parser::RuleStaticInitializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1120);
    match(Java8Parser::STATIC);
    setState(1121);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorDeclarationContext ------------------------------------------------------------------

Java8Parser::ConstructorDeclarationContext::ConstructorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConstructorDeclaratorContext* Java8Parser::ConstructorDeclarationContext::constructorDeclarator() {
  return getRuleContext<Java8Parser::ConstructorDeclaratorContext>(0);
}

Java8Parser::ConstructorBodyContext* Java8Parser::ConstructorDeclarationContext::constructorBody() {
  return getRuleContext<Java8Parser::ConstructorBodyContext>(0);
}

std::vector<Java8Parser::ConstructorModifierContext *> Java8Parser::ConstructorDeclarationContext::constructorModifier() {
  return getRuleContexts<Java8Parser::ConstructorModifierContext>();
}

Java8Parser::ConstructorModifierContext* Java8Parser::ConstructorDeclarationContext::constructorModifier(size_t i) {
  return getRuleContext<Java8Parser::ConstructorModifierContext>(i);
}

Java8Parser::Throws_Context* Java8Parser::ConstructorDeclarationContext::throws_() {
  return getRuleContext<Java8Parser::Throws_Context>(0);
}


size_t Java8Parser::ConstructorDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleConstructorDeclaration;
}

void Java8Parser::ConstructorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorDeclaration(this);
}

void Java8Parser::ConstructorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorDeclaration(this);
}


antlrcpp::Any Java8Parser::ConstructorDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitConstructorDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConstructorDeclarationContext* Java8Parser::constructorDeclaration() {
  ConstructorDeclarationContext *_localctx = _tracker.createInstance<ConstructorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 172, Java8Parser::RuleConstructorDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC))) != 0) || _la == Java8Parser::AT) {
      setState(1123);
      constructorModifier();
      setState(1128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1129);
    constructorDeclarator();
    setState(1131);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::THROWS) {
      setState(1130);
      throws_();
    }
    setState(1133);
    constructorBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorModifierContext ------------------------------------------------------------------

Java8Parser::ConstructorModifierContext::ConstructorModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::ConstructorModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::ConstructorModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::ConstructorModifierContext::PROTECTED() {
  return getToken(Java8Parser::PROTECTED, 0);
}

tree::TerminalNode* Java8Parser::ConstructorModifierContext::PRIVATE() {
  return getToken(Java8Parser::PRIVATE, 0);
}


size_t Java8Parser::ConstructorModifierContext::getRuleIndex() const {
  return Java8Parser::RuleConstructorModifier;
}

void Java8Parser::ConstructorModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorModifier(this);
}

void Java8Parser::ConstructorModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorModifier(this);
}


antlrcpp::Any Java8Parser::ConstructorModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitConstructorModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConstructorModifierContext* Java8Parser::constructorModifier() {
  ConstructorModifierContext *_localctx = _tracker.createInstance<ConstructorModifierContext>(_ctx, getState());
  enterRule(_localctx, 174, Java8Parser::RuleConstructorModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1139);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1135);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1136);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(1137);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(1138);
        match(Java8Parser::PRIVATE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorDeclaratorContext ------------------------------------------------------------------

Java8Parser::ConstructorDeclaratorContext::ConstructorDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::SimpleTypeNameContext* Java8Parser::ConstructorDeclaratorContext::simpleTypeName() {
  return getRuleContext<Java8Parser::SimpleTypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::ConstructorDeclaratorContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::ConstructorDeclaratorContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::TypeParametersContext* Java8Parser::ConstructorDeclaratorContext::typeParameters() {
  return getRuleContext<Java8Parser::TypeParametersContext>(0);
}

Java8Parser::FormalParameterListContext* Java8Parser::ConstructorDeclaratorContext::formalParameterList() {
  return getRuleContext<Java8Parser::FormalParameterListContext>(0);
}


size_t Java8Parser::ConstructorDeclaratorContext::getRuleIndex() const {
  return Java8Parser::RuleConstructorDeclarator;
}

void Java8Parser::ConstructorDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorDeclarator(this);
}

void Java8Parser::ConstructorDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorDeclarator(this);
}


antlrcpp::Any Java8Parser::ConstructorDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitConstructorDeclarator(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConstructorDeclaratorContext* Java8Parser::constructorDeclarator() {
  ConstructorDeclaratorContext *_localctx = _tracker.createInstance<ConstructorDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 176, Java8Parser::RuleConstructorDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(1141);
      typeParameters();
    }
    setState(1144);
    simpleTypeName();
    setState(1145);
    match(Java8Parser::LPAREN);
    setState(1147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::SHORT))) != 0) || _la == Java8Parser::Identifier

    || _la == Java8Parser::AT) {
      setState(1146);
      formalParameterList();
    }
    setState(1149);
    match(Java8Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTypeNameContext ------------------------------------------------------------------

Java8Parser::SimpleTypeNameContext::SimpleTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SimpleTypeNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::SimpleTypeNameContext::getRuleIndex() const {
  return Java8Parser::RuleSimpleTypeName;
}

void Java8Parser::SimpleTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleTypeName(this);
}

void Java8Parser::SimpleTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleTypeName(this);
}


antlrcpp::Any Java8Parser::SimpleTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitSimpleTypeName(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SimpleTypeNameContext* Java8Parser::simpleTypeName() {
  SimpleTypeNameContext *_localctx = _tracker.createInstance<SimpleTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 178, Java8Parser::RuleSimpleTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1151);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorBodyContext ------------------------------------------------------------------

Java8Parser::ConstructorBodyContext::ConstructorBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ConstructorBodyContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::ConstructorBodyContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

Java8Parser::ExplicitConstructorInvocationContext* Java8Parser::ConstructorBodyContext::explicitConstructorInvocation() {
  return getRuleContext<Java8Parser::ExplicitConstructorInvocationContext>(0);
}

Java8Parser::BlockStatementsContext* Java8Parser::ConstructorBodyContext::blockStatements() {
  return getRuleContext<Java8Parser::BlockStatementsContext>(0);
}


size_t Java8Parser::ConstructorBodyContext::getRuleIndex() const {
  return Java8Parser::RuleConstructorBody;
}

void Java8Parser::ConstructorBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorBody(this);
}

void Java8Parser::ConstructorBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorBody(this);
}


antlrcpp::Any Java8Parser::ConstructorBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitConstructorBody(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConstructorBodyContext* Java8Parser::constructorBody() {
  ConstructorBodyContext *_localctx = _tracker.createInstance<ConstructorBodyContext>(_ctx, getState());
  enterRule(_localctx, 180, Java8Parser::RuleConstructorBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1153);
    match(Java8Parser::LBRACE);
    setState(1155);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx)) {
    case 1: {
      setState(1154);
      explicitConstructorInvocation();
      break;
    }

    default:
      break;
    }
    setState(1158);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::ASSERT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BREAK)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::CONTINUE)
      | (1ULL << Java8Parser::DO)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::FOR)
      | (1ULL << Java8Parser::IF)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::RETURN)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::SWITCH)
      | (1ULL << Java8Parser::SYNCHRONIZED)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::THROW)
      | (1ULL << Java8Parser::TRY)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::WHILE)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN)
      | (1ULL << Java8Parser::LBRACE)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1157);
      blockStatements();
    }
    setState(1160);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitConstructorInvocationContext ------------------------------------------------------------------

Java8Parser::ExplicitConstructorInvocationContext::ExplicitConstructorInvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ExplicitConstructorInvocationContext::THIS() {
  return getToken(Java8Parser::THIS, 0);
}

tree::TerminalNode* Java8Parser::ExplicitConstructorInvocationContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::ExplicitConstructorInvocationContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

tree::TerminalNode* Java8Parser::ExplicitConstructorInvocationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ExplicitConstructorInvocationContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::ExplicitConstructorInvocationContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

tree::TerminalNode* Java8Parser::ExplicitConstructorInvocationContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}

Java8Parser::ExpressionNameContext* Java8Parser::ExplicitConstructorInvocationContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

tree::TerminalNode* Java8Parser::ExplicitConstructorInvocationContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

Java8Parser::PrimaryContext* Java8Parser::ExplicitConstructorInvocationContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}


size_t Java8Parser::ExplicitConstructorInvocationContext::getRuleIndex() const {
  return Java8Parser::RuleExplicitConstructorInvocation;
}

void Java8Parser::ExplicitConstructorInvocationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitConstructorInvocation(this);
}

void Java8Parser::ExplicitConstructorInvocationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitConstructorInvocation(this);
}


antlrcpp::Any Java8Parser::ExplicitConstructorInvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitExplicitConstructorInvocation(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ExplicitConstructorInvocationContext* Java8Parser::explicitConstructorInvocation() {
  ExplicitConstructorInvocationContext *_localctx = _tracker.createInstance<ExplicitConstructorInvocationContext>(_ctx, getState());
  enterRule(_localctx, 182, Java8Parser::RuleExplicitConstructorInvocation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1208);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1163);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1162);
        typeArguments();
      }
      setState(1165);
      match(Java8Parser::THIS);
      setState(1166);
      match(Java8Parser::LPAREN);
      setState(1168);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(1167);
        argumentList();
      }
      setState(1170);
      match(Java8Parser::RPAREN);
      setState(1171);
      match(Java8Parser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1173);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1172);
        typeArguments();
      }
      setState(1175);
      match(Java8Parser::SUPER);
      setState(1176);
      match(Java8Parser::LPAREN);
      setState(1178);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(1177);
        argumentList();
      }
      setState(1180);
      match(Java8Parser::RPAREN);
      setState(1181);
      match(Java8Parser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1182);
      expressionName();
      setState(1183);
      match(Java8Parser::DOT);
      setState(1185);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1184);
        typeArguments();
      }
      setState(1187);
      match(Java8Parser::SUPER);
      setState(1188);
      match(Java8Parser::LPAREN);
      setState(1190);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(1189);
        argumentList();
      }
      setState(1192);
      match(Java8Parser::RPAREN);
      setState(1193);
      match(Java8Parser::SEMI);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1195);
      primary();
      setState(1196);
      match(Java8Parser::DOT);
      setState(1198);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(1197);
        typeArguments();
      }
      setState(1200);
      match(Java8Parser::SUPER);
      setState(1201);
      match(Java8Parser::LPAREN);
      setState(1203);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(1202);
        argumentList();
      }
      setState(1205);
      match(Java8Parser::RPAREN);
      setState(1206);
      match(Java8Parser::SEMI);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDeclarationContext ------------------------------------------------------------------

Java8Parser::EnumDeclarationContext::EnumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnumDeclarationContext::ENUM() {
  return getToken(Java8Parser::ENUM, 0);
}

tree::TerminalNode* Java8Parser::EnumDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::EnumBodyContext* Java8Parser::EnumDeclarationContext::enumBody() {
  return getRuleContext<Java8Parser::EnumBodyContext>(0);
}

std::vector<Java8Parser::ClassModifierContext *> Java8Parser::EnumDeclarationContext::classModifier() {
  return getRuleContexts<Java8Parser::ClassModifierContext>();
}

Java8Parser::ClassModifierContext* Java8Parser::EnumDeclarationContext::classModifier(size_t i) {
  return getRuleContext<Java8Parser::ClassModifierContext>(i);
}

Java8Parser::SuperinterfacesContext* Java8Parser::EnumDeclarationContext::superinterfaces() {
  return getRuleContext<Java8Parser::SuperinterfacesContext>(0);
}


size_t Java8Parser::EnumDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleEnumDeclaration;
}

void Java8Parser::EnumDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumDeclaration(this);
}

void Java8Parser::EnumDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumDeclaration(this);
}


antlrcpp::Any Java8Parser::EnumDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitEnumDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnumDeclarationContext* Java8Parser::enumDeclaration() {
  EnumDeclarationContext *_localctx = _tracker.createInstance<EnumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 184, Java8Parser::RuleEnumDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1213);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP))) != 0) || _la == Java8Parser::AT) {
      setState(1210);
      classModifier();
      setState(1215);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1216);
    match(Java8Parser::ENUM);
    setState(1217);
    match(Java8Parser::Identifier);
    setState(1219);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::IMPLEMENTS) {
      setState(1218);
      superinterfaces();
    }
    setState(1221);
    enumBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBodyContext ------------------------------------------------------------------

Java8Parser::EnumBodyContext::EnumBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnumBodyContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::EnumBodyContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

Java8Parser::EnumConstantListContext* Java8Parser::EnumBodyContext::enumConstantList() {
  return getRuleContext<Java8Parser::EnumConstantListContext>(0);
}

tree::TerminalNode* Java8Parser::EnumBodyContext::COMMA() {
  return getToken(Java8Parser::COMMA, 0);
}

Java8Parser::EnumBodyDeclarationsContext* Java8Parser::EnumBodyContext::enumBodyDeclarations() {
  return getRuleContext<Java8Parser::EnumBodyDeclarationsContext>(0);
}


size_t Java8Parser::EnumBodyContext::getRuleIndex() const {
  return Java8Parser::RuleEnumBody;
}

void Java8Parser::EnumBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumBody(this);
}

void Java8Parser::EnumBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumBody(this);
}


antlrcpp::Any Java8Parser::EnumBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitEnumBody(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnumBodyContext* Java8Parser::enumBody() {
  EnumBodyContext *_localctx = _tracker.createInstance<EnumBodyContext>(_ctx, getState());
  enterRule(_localctx, 186, Java8Parser::RuleEnumBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1223);
    match(Java8Parser::LBRACE);
    setState(1225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier

    || _la == Java8Parser::AT) {
      setState(1224);
      enumConstantList();
    }
    setState(1228);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::COMMA) {
      setState(1227);
      match(Java8Parser::COMMA);
    }
    setState(1231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::SEMI) {
      setState(1230);
      enumBodyDeclarations();
    }
    setState(1233);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumConstantListContext ------------------------------------------------------------------

Java8Parser::EnumConstantListContext::EnumConstantListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::EnumConstantContext *> Java8Parser::EnumConstantListContext::enumConstant() {
  return getRuleContexts<Java8Parser::EnumConstantContext>();
}

Java8Parser::EnumConstantContext* Java8Parser::EnumConstantListContext::enumConstant(size_t i) {
  return getRuleContext<Java8Parser::EnumConstantContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::EnumConstantListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::EnumConstantListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::EnumConstantListContext::getRuleIndex() const {
  return Java8Parser::RuleEnumConstantList;
}

void Java8Parser::EnumConstantListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumConstantList(this);
}

void Java8Parser::EnumConstantListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumConstantList(this);
}


antlrcpp::Any Java8Parser::EnumConstantListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitEnumConstantList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnumConstantListContext* Java8Parser::enumConstantList() {
  EnumConstantListContext *_localctx = _tracker.createInstance<EnumConstantListContext>(_ctx, getState());
  enterRule(_localctx, 188, Java8Parser::RuleEnumConstantList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1235);
    enumConstant();
    setState(1240);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1236);
        match(Java8Parser::COMMA);
        setState(1237);
        enumConstant(); 
      }
      setState(1242);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumConstantContext ------------------------------------------------------------------

Java8Parser::EnumConstantContext::EnumConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnumConstantContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

std::vector<Java8Parser::EnumConstantModifierContext *> Java8Parser::EnumConstantContext::enumConstantModifier() {
  return getRuleContexts<Java8Parser::EnumConstantModifierContext>();
}

Java8Parser::EnumConstantModifierContext* Java8Parser::EnumConstantContext::enumConstantModifier(size_t i) {
  return getRuleContext<Java8Parser::EnumConstantModifierContext>(i);
}

tree::TerminalNode* Java8Parser::EnumConstantContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::EnumConstantContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ClassBodyContext* Java8Parser::EnumConstantContext::classBody() {
  return getRuleContext<Java8Parser::ClassBodyContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::EnumConstantContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}


size_t Java8Parser::EnumConstantContext::getRuleIndex() const {
  return Java8Parser::RuleEnumConstant;
}

void Java8Parser::EnumConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumConstant(this);
}

void Java8Parser::EnumConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumConstant(this);
}


antlrcpp::Any Java8Parser::EnumConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitEnumConstant(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnumConstantContext* Java8Parser::enumConstant() {
  EnumConstantContext *_localctx = _tracker.createInstance<EnumConstantContext>(_ctx, getState());
  enterRule(_localctx, 190, Java8Parser::RuleEnumConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1246);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(1243);
      enumConstantModifier();
      setState(1248);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1249);
    match(Java8Parser::Identifier);
    setState(1255);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LPAREN) {
      setState(1250);
      match(Java8Parser::LPAREN);
      setState(1252);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(1251);
        argumentList();
      }
      setState(1254);
      match(Java8Parser::RPAREN);
    }
    setState(1258);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACE) {
      setState(1257);
      classBody();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumConstantModifierContext ------------------------------------------------------------------

Java8Parser::EnumConstantModifierContext::EnumConstantModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::EnumConstantModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::EnumConstantModifierContext::getRuleIndex() const {
  return Java8Parser::RuleEnumConstantModifier;
}

void Java8Parser::EnumConstantModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumConstantModifier(this);
}

void Java8Parser::EnumConstantModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumConstantModifier(this);
}


antlrcpp::Any Java8Parser::EnumConstantModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitEnumConstantModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnumConstantModifierContext* Java8Parser::enumConstantModifier() {
  EnumConstantModifierContext *_localctx = _tracker.createInstance<EnumConstantModifierContext>(_ctx, getState());
  enterRule(_localctx, 192, Java8Parser::RuleEnumConstantModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1260);
    annotation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBodyDeclarationsContext ------------------------------------------------------------------

Java8Parser::EnumBodyDeclarationsContext::EnumBodyDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnumBodyDeclarationsContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

std::vector<Java8Parser::ClassBodyDeclarationContext *> Java8Parser::EnumBodyDeclarationsContext::classBodyDeclaration() {
  return getRuleContexts<Java8Parser::ClassBodyDeclarationContext>();
}

Java8Parser::ClassBodyDeclarationContext* Java8Parser::EnumBodyDeclarationsContext::classBodyDeclaration(size_t i) {
  return getRuleContext<Java8Parser::ClassBodyDeclarationContext>(i);
}


size_t Java8Parser::EnumBodyDeclarationsContext::getRuleIndex() const {
  return Java8Parser::RuleEnumBodyDeclarations;
}

void Java8Parser::EnumBodyDeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumBodyDeclarations(this);
}

void Java8Parser::EnumBodyDeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumBodyDeclarations(this);
}


antlrcpp::Any Java8Parser::EnumBodyDeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitEnumBodyDeclarations(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnumBodyDeclarationsContext* Java8Parser::enumBodyDeclarations() {
  EnumBodyDeclarationsContext *_localctx = _tracker.createInstance<EnumBodyDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 194, Java8Parser::RuleEnumBodyDeclarations);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1262);
    match(Java8Parser::SEMI);
    setState(1266);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::INTERFACE)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NATIVE)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SYNCHRONIZED)
      | (1ULL << Java8Parser::TRANSIENT)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::VOLATILE)
      | (1ULL << Java8Parser::LBRACE)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (Java8Parser::LT - 68))
      | (1ULL << (Java8Parser::Identifier - 68))
      | (1ULL << (Java8Parser::AT - 68)))) != 0)) {
      setState(1263);
      classBodyDeclaration();
      setState(1268);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceDeclarationContext ------------------------------------------------------------------

Java8Parser::InterfaceDeclarationContext::InterfaceDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::NormalInterfaceDeclarationContext* Java8Parser::InterfaceDeclarationContext::normalInterfaceDeclaration() {
  return getRuleContext<Java8Parser::NormalInterfaceDeclarationContext>(0);
}

Java8Parser::AnnotationTypeDeclarationContext* Java8Parser::InterfaceDeclarationContext::annotationTypeDeclaration() {
  return getRuleContext<Java8Parser::AnnotationTypeDeclarationContext>(0);
}


size_t Java8Parser::InterfaceDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceDeclaration;
}

void Java8Parser::InterfaceDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceDeclaration(this);
}

void Java8Parser::InterfaceDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceDeclaration(this);
}


antlrcpp::Any Java8Parser::InterfaceDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceDeclarationContext* Java8Parser::interfaceDeclaration() {
  InterfaceDeclarationContext *_localctx = _tracker.createInstance<InterfaceDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 196, Java8Parser::RuleInterfaceDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1271);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1269);
      normalInterfaceDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1270);
      annotationTypeDeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NormalInterfaceDeclarationContext ------------------------------------------------------------------

Java8Parser::NormalInterfaceDeclarationContext::NormalInterfaceDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::NormalInterfaceDeclarationContext::INTERFACE() {
  return getToken(Java8Parser::INTERFACE, 0);
}

tree::TerminalNode* Java8Parser::NormalInterfaceDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::InterfaceBodyContext* Java8Parser::NormalInterfaceDeclarationContext::interfaceBody() {
  return getRuleContext<Java8Parser::InterfaceBodyContext>(0);
}

std::vector<Java8Parser::InterfaceModifierContext *> Java8Parser::NormalInterfaceDeclarationContext::interfaceModifier() {
  return getRuleContexts<Java8Parser::InterfaceModifierContext>();
}

Java8Parser::InterfaceModifierContext* Java8Parser::NormalInterfaceDeclarationContext::interfaceModifier(size_t i) {
  return getRuleContext<Java8Parser::InterfaceModifierContext>(i);
}

Java8Parser::TypeParametersContext* Java8Parser::NormalInterfaceDeclarationContext::typeParameters() {
  return getRuleContext<Java8Parser::TypeParametersContext>(0);
}

Java8Parser::ExtendsInterfacesContext* Java8Parser::NormalInterfaceDeclarationContext::extendsInterfaces() {
  return getRuleContext<Java8Parser::ExtendsInterfacesContext>(0);
}


size_t Java8Parser::NormalInterfaceDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleNormalInterfaceDeclaration;
}

void Java8Parser::NormalInterfaceDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNormalInterfaceDeclaration(this);
}

void Java8Parser::NormalInterfaceDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNormalInterfaceDeclaration(this);
}


antlrcpp::Any Java8Parser::NormalInterfaceDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitNormalInterfaceDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::NormalInterfaceDeclarationContext* Java8Parser::normalInterfaceDeclaration() {
  NormalInterfaceDeclarationContext *_localctx = _tracker.createInstance<NormalInterfaceDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 198, Java8Parser::RuleNormalInterfaceDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1276);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP))) != 0) || _la == Java8Parser::AT) {
      setState(1273);
      interfaceModifier();
      setState(1278);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1279);
    match(Java8Parser::INTERFACE);
    setState(1280);
    match(Java8Parser::Identifier);
    setState(1282);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(1281);
      typeParameters();
    }
    setState(1285);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::EXTENDS) {
      setState(1284);
      extendsInterfaces();
    }
    setState(1287);
    interfaceBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceModifierContext ------------------------------------------------------------------

Java8Parser::InterfaceModifierContext::InterfaceModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::InterfaceModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::InterfaceModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::InterfaceModifierContext::PROTECTED() {
  return getToken(Java8Parser::PROTECTED, 0);
}

tree::TerminalNode* Java8Parser::InterfaceModifierContext::PRIVATE() {
  return getToken(Java8Parser::PRIVATE, 0);
}

tree::TerminalNode* Java8Parser::InterfaceModifierContext::ABSTRACT() {
  return getToken(Java8Parser::ABSTRACT, 0);
}

tree::TerminalNode* Java8Parser::InterfaceModifierContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

tree::TerminalNode* Java8Parser::InterfaceModifierContext::STRICTFP() {
  return getToken(Java8Parser::STRICTFP, 0);
}


size_t Java8Parser::InterfaceModifierContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceModifier;
}

void Java8Parser::InterfaceModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceModifier(this);
}

void Java8Parser::InterfaceModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceModifier(this);
}


antlrcpp::Any Java8Parser::InterfaceModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceModifierContext* Java8Parser::interfaceModifier() {
  InterfaceModifierContext *_localctx = _tracker.createInstance<InterfaceModifierContext>(_ctx, getState());
  enterRule(_localctx, 200, Java8Parser::RuleInterfaceModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1296);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1289);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1290);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::PROTECTED: {
        enterOuterAlt(_localctx, 3);
        setState(1291);
        match(Java8Parser::PROTECTED);
        break;
      }

      case Java8Parser::PRIVATE: {
        enterOuterAlt(_localctx, 4);
        setState(1292);
        match(Java8Parser::PRIVATE);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 5);
        setState(1293);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 6);
        setState(1294);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 7);
        setState(1295);
        match(Java8Parser::STRICTFP);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExtendsInterfacesContext ------------------------------------------------------------------

Java8Parser::ExtendsInterfacesContext::ExtendsInterfacesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ExtendsInterfacesContext::EXTENDS() {
  return getToken(Java8Parser::EXTENDS, 0);
}

Java8Parser::InterfaceTypeListContext* Java8Parser::ExtendsInterfacesContext::interfaceTypeList() {
  return getRuleContext<Java8Parser::InterfaceTypeListContext>(0);
}


size_t Java8Parser::ExtendsInterfacesContext::getRuleIndex() const {
  return Java8Parser::RuleExtendsInterfaces;
}

void Java8Parser::ExtendsInterfacesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtendsInterfaces(this);
}

void Java8Parser::ExtendsInterfacesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtendsInterfaces(this);
}


antlrcpp::Any Java8Parser::ExtendsInterfacesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitExtendsInterfaces(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ExtendsInterfacesContext* Java8Parser::extendsInterfaces() {
  ExtendsInterfacesContext *_localctx = _tracker.createInstance<ExtendsInterfacesContext>(_ctx, getState());
  enterRule(_localctx, 202, Java8Parser::RuleExtendsInterfaces);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1298);
    match(Java8Parser::EXTENDS);
    setState(1299);
    interfaceTypeList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceBodyContext ------------------------------------------------------------------

Java8Parser::InterfaceBodyContext::InterfaceBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::InterfaceBodyContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::InterfaceBodyContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

std::vector<Java8Parser::InterfaceMemberDeclarationContext *> Java8Parser::InterfaceBodyContext::interfaceMemberDeclaration() {
  return getRuleContexts<Java8Parser::InterfaceMemberDeclarationContext>();
}

Java8Parser::InterfaceMemberDeclarationContext* Java8Parser::InterfaceBodyContext::interfaceMemberDeclaration(size_t i) {
  return getRuleContext<Java8Parser::InterfaceMemberDeclarationContext>(i);
}


size_t Java8Parser::InterfaceBodyContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceBody;
}

void Java8Parser::InterfaceBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceBody(this);
}

void Java8Parser::InterfaceBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceBody(this);
}


antlrcpp::Any Java8Parser::InterfaceBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceBody(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceBodyContext* Java8Parser::interfaceBody() {
  InterfaceBodyContext *_localctx = _tracker.createInstance<InterfaceBodyContext>(_ctx, getState());
  enterRule(_localctx, 204, Java8Parser::RuleInterfaceBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1301);
    match(Java8Parser::LBRACE);
    setState(1305);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::DEFAULT)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::INTERFACE)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (Java8Parser::LT - 68))
      | (1ULL << (Java8Parser::Identifier - 68))
      | (1ULL << (Java8Parser::AT - 68)))) != 0)) {
      setState(1302);
      interfaceMemberDeclaration();
      setState(1307);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1308);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMemberDeclarationContext ------------------------------------------------------------------

Java8Parser::InterfaceMemberDeclarationContext::InterfaceMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConstantDeclarationContext* Java8Parser::InterfaceMemberDeclarationContext::constantDeclaration() {
  return getRuleContext<Java8Parser::ConstantDeclarationContext>(0);
}

Java8Parser::InterfaceMethodDeclarationContext* Java8Parser::InterfaceMemberDeclarationContext::interfaceMethodDeclaration() {
  return getRuleContext<Java8Parser::InterfaceMethodDeclarationContext>(0);
}

Java8Parser::ClassDeclarationContext* Java8Parser::InterfaceMemberDeclarationContext::classDeclaration() {
  return getRuleContext<Java8Parser::ClassDeclarationContext>(0);
}

Java8Parser::InterfaceDeclarationContext* Java8Parser::InterfaceMemberDeclarationContext::interfaceDeclaration() {
  return getRuleContext<Java8Parser::InterfaceDeclarationContext>(0);
}

tree::TerminalNode* Java8Parser::InterfaceMemberDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::InterfaceMemberDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceMemberDeclaration;
}

void Java8Parser::InterfaceMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceMemberDeclaration(this);
}

void Java8Parser::InterfaceMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceMemberDeclaration(this);
}


antlrcpp::Any Java8Parser::InterfaceMemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceMemberDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceMemberDeclarationContext* Java8Parser::interfaceMemberDeclaration() {
  InterfaceMemberDeclarationContext *_localctx = _tracker.createInstance<InterfaceMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 206, Java8Parser::RuleInterfaceMemberDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1315);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1310);
      constantDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1311);
      interfaceMethodDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1312);
      classDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1313);
      interfaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1314);
      match(Java8Parser::SEMI);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDeclarationContext ------------------------------------------------------------------

Java8Parser::ConstantDeclarationContext::ConstantDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::ConstantDeclarationContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

Java8Parser::VariableDeclaratorListContext* Java8Parser::ConstantDeclarationContext::variableDeclaratorList() {
  return getRuleContext<Java8Parser::VariableDeclaratorListContext>(0);
}

tree::TerminalNode* Java8Parser::ConstantDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

std::vector<Java8Parser::ConstantModifierContext *> Java8Parser::ConstantDeclarationContext::constantModifier() {
  return getRuleContexts<Java8Parser::ConstantModifierContext>();
}

Java8Parser::ConstantModifierContext* Java8Parser::ConstantDeclarationContext::constantModifier(size_t i) {
  return getRuleContext<Java8Parser::ConstantModifierContext>(i);
}


size_t Java8Parser::ConstantDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleConstantDeclaration;
}

void Java8Parser::ConstantDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantDeclaration(this);
}

void Java8Parser::ConstantDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantDeclaration(this);
}


antlrcpp::Any Java8Parser::ConstantDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitConstantDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConstantDeclarationContext* Java8Parser::constantDeclaration() {
  ConstantDeclarationContext *_localctx = _tracker.createInstance<ConstantDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 208, Java8Parser::RuleConstantDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1320);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC))) != 0) || _la == Java8Parser::AT) {
      setState(1317);
      constantModifier();
      setState(1322);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1323);
    unannType();
    setState(1324);
    variableDeclaratorList();
    setState(1325);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantModifierContext ------------------------------------------------------------------

Java8Parser::ConstantModifierContext::ConstantModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::ConstantModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::ConstantModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::ConstantModifierContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

tree::TerminalNode* Java8Parser::ConstantModifierContext::FINAL() {
  return getToken(Java8Parser::FINAL, 0);
}


size_t Java8Parser::ConstantModifierContext::getRuleIndex() const {
  return Java8Parser::RuleConstantModifier;
}

void Java8Parser::ConstantModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantModifier(this);
}

void Java8Parser::ConstantModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantModifier(this);
}


antlrcpp::Any Java8Parser::ConstantModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitConstantModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConstantModifierContext* Java8Parser::constantModifier() {
  ConstantModifierContext *_localctx = _tracker.createInstance<ConstantModifierContext>(_ctx, getState());
  enterRule(_localctx, 210, Java8Parser::RuleConstantModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1331);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1327);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1328);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 3);
        setState(1329);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::FINAL: {
        enterOuterAlt(_localctx, 4);
        setState(1330);
        match(Java8Parser::FINAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMethodDeclarationContext ------------------------------------------------------------------

Java8Parser::InterfaceMethodDeclarationContext::InterfaceMethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::MethodHeaderContext* Java8Parser::InterfaceMethodDeclarationContext::methodHeader() {
  return getRuleContext<Java8Parser::MethodHeaderContext>(0);
}

Java8Parser::MethodBodyContext* Java8Parser::InterfaceMethodDeclarationContext::methodBody() {
  return getRuleContext<Java8Parser::MethodBodyContext>(0);
}

std::vector<Java8Parser::InterfaceMethodModifierContext *> Java8Parser::InterfaceMethodDeclarationContext::interfaceMethodModifier() {
  return getRuleContexts<Java8Parser::InterfaceMethodModifierContext>();
}

Java8Parser::InterfaceMethodModifierContext* Java8Parser::InterfaceMethodDeclarationContext::interfaceMethodModifier(size_t i) {
  return getRuleContext<Java8Parser::InterfaceMethodModifierContext>(i);
}


size_t Java8Parser::InterfaceMethodDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceMethodDeclaration;
}

void Java8Parser::InterfaceMethodDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceMethodDeclaration(this);
}

void Java8Parser::InterfaceMethodDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceMethodDeclaration(this);
}


antlrcpp::Any Java8Parser::InterfaceMethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceMethodDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceMethodDeclarationContext* Java8Parser::interfaceMethodDeclaration() {
  InterfaceMethodDeclarationContext *_localctx = _tracker.createInstance<InterfaceMethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 212, Java8Parser::RuleInterfaceMethodDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1336);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::DEFAULT)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP))) != 0) || _la == Java8Parser::AT) {
      setState(1333);
      interfaceMethodModifier();
      setState(1338);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1339);
    methodHeader();
    setState(1340);
    methodBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceMethodModifierContext ------------------------------------------------------------------

Java8Parser::InterfaceMethodModifierContext::InterfaceMethodModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::InterfaceMethodModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::InterfaceMethodModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::InterfaceMethodModifierContext::ABSTRACT() {
  return getToken(Java8Parser::ABSTRACT, 0);
}

tree::TerminalNode* Java8Parser::InterfaceMethodModifierContext::DEFAULT() {
  return getToken(Java8Parser::DEFAULT, 0);
}

tree::TerminalNode* Java8Parser::InterfaceMethodModifierContext::STATIC() {
  return getToken(Java8Parser::STATIC, 0);
}

tree::TerminalNode* Java8Parser::InterfaceMethodModifierContext::STRICTFP() {
  return getToken(Java8Parser::STRICTFP, 0);
}


size_t Java8Parser::InterfaceMethodModifierContext::getRuleIndex() const {
  return Java8Parser::RuleInterfaceMethodModifier;
}

void Java8Parser::InterfaceMethodModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceMethodModifier(this);
}

void Java8Parser::InterfaceMethodModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceMethodModifier(this);
}


antlrcpp::Any Java8Parser::InterfaceMethodModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceMethodModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InterfaceMethodModifierContext* Java8Parser::interfaceMethodModifier() {
  InterfaceMethodModifierContext *_localctx = _tracker.createInstance<InterfaceMethodModifierContext>(_ctx, getState());
  enterRule(_localctx, 214, Java8Parser::RuleInterfaceMethodModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1348);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1342);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1343);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 3);
        setState(1344);
        match(Java8Parser::ABSTRACT);
        break;
      }

      case Java8Parser::DEFAULT: {
        enterOuterAlt(_localctx, 4);
        setState(1345);
        match(Java8Parser::DEFAULT);
        break;
      }

      case Java8Parser::STATIC: {
        enterOuterAlt(_localctx, 5);
        setState(1346);
        match(Java8Parser::STATIC);
        break;
      }

      case Java8Parser::STRICTFP: {
        enterOuterAlt(_localctx, 6);
        setState(1347);
        match(Java8Parser::STRICTFP);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeDeclarationContext ------------------------------------------------------------------

Java8Parser::AnnotationTypeDeclarationContext::AnnotationTypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::AnnotationTypeDeclarationContext::AT() {
  return getToken(Java8Parser::AT, 0);
}

tree::TerminalNode* Java8Parser::AnnotationTypeDeclarationContext::INTERFACE() {
  return getToken(Java8Parser::INTERFACE, 0);
}

tree::TerminalNode* Java8Parser::AnnotationTypeDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::AnnotationTypeBodyContext* Java8Parser::AnnotationTypeDeclarationContext::annotationTypeBody() {
  return getRuleContext<Java8Parser::AnnotationTypeBodyContext>(0);
}

std::vector<Java8Parser::InterfaceModifierContext *> Java8Parser::AnnotationTypeDeclarationContext::interfaceModifier() {
  return getRuleContexts<Java8Parser::InterfaceModifierContext>();
}

Java8Parser::InterfaceModifierContext* Java8Parser::AnnotationTypeDeclarationContext::interfaceModifier(size_t i) {
  return getRuleContext<Java8Parser::InterfaceModifierContext>(i);
}


size_t Java8Parser::AnnotationTypeDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotationTypeDeclaration;
}

void Java8Parser::AnnotationTypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationTypeDeclaration(this);
}

void Java8Parser::AnnotationTypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationTypeDeclaration(this);
}


antlrcpp::Any Java8Parser::AnnotationTypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitAnnotationTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AnnotationTypeDeclarationContext* Java8Parser::annotationTypeDeclaration() {
  AnnotationTypeDeclarationContext *_localctx = _tracker.createInstance<AnnotationTypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 216, Java8Parser::RuleAnnotationTypeDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1353);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1350);
        interfaceModifier(); 
      }
      setState(1355);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx);
    }
    setState(1356);
    match(Java8Parser::AT);
    setState(1357);
    match(Java8Parser::INTERFACE);
    setState(1358);
    match(Java8Parser::Identifier);
    setState(1359);
    annotationTypeBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeBodyContext ------------------------------------------------------------------

Java8Parser::AnnotationTypeBodyContext::AnnotationTypeBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::AnnotationTypeBodyContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::AnnotationTypeBodyContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

std::vector<Java8Parser::AnnotationTypeMemberDeclarationContext *> Java8Parser::AnnotationTypeBodyContext::annotationTypeMemberDeclaration() {
  return getRuleContexts<Java8Parser::AnnotationTypeMemberDeclarationContext>();
}

Java8Parser::AnnotationTypeMemberDeclarationContext* Java8Parser::AnnotationTypeBodyContext::annotationTypeMemberDeclaration(size_t i) {
  return getRuleContext<Java8Parser::AnnotationTypeMemberDeclarationContext>(i);
}


size_t Java8Parser::AnnotationTypeBodyContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotationTypeBody;
}

void Java8Parser::AnnotationTypeBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationTypeBody(this);
}

void Java8Parser::AnnotationTypeBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationTypeBody(this);
}


antlrcpp::Any Java8Parser::AnnotationTypeBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitAnnotationTypeBody(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AnnotationTypeBodyContext* Java8Parser::annotationTypeBody() {
  AnnotationTypeBodyContext *_localctx = _tracker.createInstance<AnnotationTypeBodyContext>(_ctx, getState());
  enterRule(_localctx, 218, Java8Parser::RuleAnnotationTypeBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1361);
    match(Java8Parser::LBRACE);
    setState(1365);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::INTERFACE)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SEMI))) != 0) || _la == Java8Parser::Identifier

    || _la == Java8Parser::AT) {
      setState(1362);
      annotationTypeMemberDeclaration();
      setState(1367);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1368);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeMemberDeclarationContext ------------------------------------------------------------------

Java8Parser::AnnotationTypeMemberDeclarationContext::AnnotationTypeMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationTypeElementDeclarationContext* Java8Parser::AnnotationTypeMemberDeclarationContext::annotationTypeElementDeclaration() {
  return getRuleContext<Java8Parser::AnnotationTypeElementDeclarationContext>(0);
}

Java8Parser::ConstantDeclarationContext* Java8Parser::AnnotationTypeMemberDeclarationContext::constantDeclaration() {
  return getRuleContext<Java8Parser::ConstantDeclarationContext>(0);
}

Java8Parser::ClassDeclarationContext* Java8Parser::AnnotationTypeMemberDeclarationContext::classDeclaration() {
  return getRuleContext<Java8Parser::ClassDeclarationContext>(0);
}

Java8Parser::InterfaceDeclarationContext* Java8Parser::AnnotationTypeMemberDeclarationContext::interfaceDeclaration() {
  return getRuleContext<Java8Parser::InterfaceDeclarationContext>(0);
}

tree::TerminalNode* Java8Parser::AnnotationTypeMemberDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::AnnotationTypeMemberDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotationTypeMemberDeclaration;
}

void Java8Parser::AnnotationTypeMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationTypeMemberDeclaration(this);
}

void Java8Parser::AnnotationTypeMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationTypeMemberDeclaration(this);
}


antlrcpp::Any Java8Parser::AnnotationTypeMemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitAnnotationTypeMemberDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AnnotationTypeMemberDeclarationContext* Java8Parser::annotationTypeMemberDeclaration() {
  AnnotationTypeMemberDeclarationContext *_localctx = _tracker.createInstance<AnnotationTypeMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 220, Java8Parser::RuleAnnotationTypeMemberDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1375);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1370);
      annotationTypeElementDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1371);
      constantDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1372);
      classDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1373);
      interfaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1374);
      match(Java8Parser::SEMI);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeElementDeclarationContext ------------------------------------------------------------------

Java8Parser::AnnotationTypeElementDeclarationContext::AnnotationTypeElementDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::AnnotationTypeElementDeclarationContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

tree::TerminalNode* Java8Parser::AnnotationTypeElementDeclarationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::AnnotationTypeElementDeclarationContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::AnnotationTypeElementDeclarationContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

tree::TerminalNode* Java8Parser::AnnotationTypeElementDeclarationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

std::vector<Java8Parser::AnnotationTypeElementModifierContext *> Java8Parser::AnnotationTypeElementDeclarationContext::annotationTypeElementModifier() {
  return getRuleContexts<Java8Parser::AnnotationTypeElementModifierContext>();
}

Java8Parser::AnnotationTypeElementModifierContext* Java8Parser::AnnotationTypeElementDeclarationContext::annotationTypeElementModifier(size_t i) {
  return getRuleContext<Java8Parser::AnnotationTypeElementModifierContext>(i);
}

Java8Parser::DimsContext* Java8Parser::AnnotationTypeElementDeclarationContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}

Java8Parser::DefaultValueContext* Java8Parser::AnnotationTypeElementDeclarationContext::defaultValue() {
  return getRuleContext<Java8Parser::DefaultValueContext>(0);
}


size_t Java8Parser::AnnotationTypeElementDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotationTypeElementDeclaration;
}

void Java8Parser::AnnotationTypeElementDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationTypeElementDeclaration(this);
}

void Java8Parser::AnnotationTypeElementDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationTypeElementDeclaration(this);
}


antlrcpp::Any Java8Parser::AnnotationTypeElementDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitAnnotationTypeElementDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AnnotationTypeElementDeclarationContext* Java8Parser::annotationTypeElementDeclaration() {
  AnnotationTypeElementDeclarationContext *_localctx = _tracker.createInstance<AnnotationTypeElementDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 222, Java8Parser::RuleAnnotationTypeElementDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1380);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::ABSTRACT

    || _la == Java8Parser::PUBLIC || _la == Java8Parser::AT) {
      setState(1377);
      annotationTypeElementModifier();
      setState(1382);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1383);
    unannType();
    setState(1384);
    match(Java8Parser::Identifier);
    setState(1385);
    match(Java8Parser::LPAREN);
    setState(1386);
    match(Java8Parser::RPAREN);
    setState(1388);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LBRACK

    || _la == Java8Parser::AT) {
      setState(1387);
      dims();
    }
    setState(1391);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::DEFAULT) {
      setState(1390);
      defaultValue();
    }
    setState(1393);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationTypeElementModifierContext ------------------------------------------------------------------

Java8Parser::AnnotationTypeElementModifierContext::AnnotationTypeElementModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AnnotationContext* Java8Parser::AnnotationTypeElementModifierContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}

tree::TerminalNode* Java8Parser::AnnotationTypeElementModifierContext::PUBLIC() {
  return getToken(Java8Parser::PUBLIC, 0);
}

tree::TerminalNode* Java8Parser::AnnotationTypeElementModifierContext::ABSTRACT() {
  return getToken(Java8Parser::ABSTRACT, 0);
}


size_t Java8Parser::AnnotationTypeElementModifierContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotationTypeElementModifier;
}

void Java8Parser::AnnotationTypeElementModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationTypeElementModifier(this);
}

void Java8Parser::AnnotationTypeElementModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationTypeElementModifier(this);
}


antlrcpp::Any Java8Parser::AnnotationTypeElementModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitAnnotationTypeElementModifier(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AnnotationTypeElementModifierContext* Java8Parser::annotationTypeElementModifier() {
  AnnotationTypeElementModifierContext *_localctx = _tracker.createInstance<AnnotationTypeElementModifierContext>(_ctx, getState());
  enterRule(_localctx, 224, Java8Parser::RuleAnnotationTypeElementModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1398);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(1395);
        annotation();
        break;
      }

      case Java8Parser::PUBLIC: {
        enterOuterAlt(_localctx, 2);
        setState(1396);
        match(Java8Parser::PUBLIC);
        break;
      }

      case Java8Parser::ABSTRACT: {
        enterOuterAlt(_localctx, 3);
        setState(1397);
        match(Java8Parser::ABSTRACT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultValueContext ------------------------------------------------------------------

Java8Parser::DefaultValueContext::DefaultValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::DefaultValueContext::DEFAULT() {
  return getToken(Java8Parser::DEFAULT, 0);
}

Java8Parser::ElementValueContext* Java8Parser::DefaultValueContext::elementValue() {
  return getRuleContext<Java8Parser::ElementValueContext>(0);
}


size_t Java8Parser::DefaultValueContext::getRuleIndex() const {
  return Java8Parser::RuleDefaultValue;
}

void Java8Parser::DefaultValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultValue(this);
}

void Java8Parser::DefaultValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultValue(this);
}


antlrcpp::Any Java8Parser::DefaultValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitDefaultValue(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::DefaultValueContext* Java8Parser::defaultValue() {
  DefaultValueContext *_localctx = _tracker.createInstance<DefaultValueContext>(_ctx, getState());
  enterRule(_localctx, 226, Java8Parser::RuleDefaultValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1400);
    match(Java8Parser::DEFAULT);
    setState(1401);
    elementValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationContext ------------------------------------------------------------------

Java8Parser::AnnotationContext::AnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::NormalAnnotationContext* Java8Parser::AnnotationContext::normalAnnotation() {
  return getRuleContext<Java8Parser::NormalAnnotationContext>(0);
}

Java8Parser::MarkerAnnotationContext* Java8Parser::AnnotationContext::markerAnnotation() {
  return getRuleContext<Java8Parser::MarkerAnnotationContext>(0);
}

Java8Parser::SingleElementAnnotationContext* Java8Parser::AnnotationContext::singleElementAnnotation() {
  return getRuleContext<Java8Parser::SingleElementAnnotationContext>(0);
}


size_t Java8Parser::AnnotationContext::getRuleIndex() const {
  return Java8Parser::RuleAnnotation;
}

void Java8Parser::AnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotation(this);
}

void Java8Parser::AnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotation(this);
}


antlrcpp::Any Java8Parser::AnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitAnnotation(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AnnotationContext* Java8Parser::annotation() {
  AnnotationContext *_localctx = _tracker.createInstance<AnnotationContext>(_ctx, getState());
  enterRule(_localctx, 228, Java8Parser::RuleAnnotation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1406);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1403);
      normalAnnotation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1404);
      markerAnnotation();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1405);
      singleElementAnnotation();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NormalAnnotationContext ------------------------------------------------------------------

Java8Parser::NormalAnnotationContext::NormalAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::NormalAnnotationContext::AT() {
  return getToken(Java8Parser::AT, 0);
}

Java8Parser::TypeNameContext* Java8Parser::NormalAnnotationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::NormalAnnotationContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::NormalAnnotationContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ElementValuePairListContext* Java8Parser::NormalAnnotationContext::elementValuePairList() {
  return getRuleContext<Java8Parser::ElementValuePairListContext>(0);
}


size_t Java8Parser::NormalAnnotationContext::getRuleIndex() const {
  return Java8Parser::RuleNormalAnnotation;
}

void Java8Parser::NormalAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNormalAnnotation(this);
}

void Java8Parser::NormalAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNormalAnnotation(this);
}


antlrcpp::Any Java8Parser::NormalAnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitNormalAnnotation(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::NormalAnnotationContext* Java8Parser::normalAnnotation() {
  NormalAnnotationContext *_localctx = _tracker.createInstance<NormalAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 230, Java8Parser::RuleNormalAnnotation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1408);
    match(Java8Parser::AT);
    setState(1409);
    typeName();
    setState(1410);
    match(Java8Parser::LPAREN);
    setState(1412);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier) {
      setState(1411);
      elementValuePairList();
    }
    setState(1414);
    match(Java8Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValuePairListContext ------------------------------------------------------------------

Java8Parser::ElementValuePairListContext::ElementValuePairListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ElementValuePairContext *> Java8Parser::ElementValuePairListContext::elementValuePair() {
  return getRuleContexts<Java8Parser::ElementValuePairContext>();
}

Java8Parser::ElementValuePairContext* Java8Parser::ElementValuePairListContext::elementValuePair(size_t i) {
  return getRuleContext<Java8Parser::ElementValuePairContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ElementValuePairListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::ElementValuePairListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::ElementValuePairListContext::getRuleIndex() const {
  return Java8Parser::RuleElementValuePairList;
}

void Java8Parser::ElementValuePairListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementValuePairList(this);
}

void Java8Parser::ElementValuePairListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementValuePairList(this);
}


antlrcpp::Any Java8Parser::ElementValuePairListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitElementValuePairList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ElementValuePairListContext* Java8Parser::elementValuePairList() {
  ElementValuePairListContext *_localctx = _tracker.createInstance<ElementValuePairListContext>(_ctx, getState());
  enterRule(_localctx, 232, Java8Parser::RuleElementValuePairList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1416);
    elementValuePair();
    setState(1421);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(1417);
      match(Java8Parser::COMMA);
      setState(1418);
      elementValuePair();
      setState(1423);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValuePairContext ------------------------------------------------------------------

Java8Parser::ElementValuePairContext::ElementValuePairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ElementValuePairContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::ElementValuePairContext::ASSIGN() {
  return getToken(Java8Parser::ASSIGN, 0);
}

Java8Parser::ElementValueContext* Java8Parser::ElementValuePairContext::elementValue() {
  return getRuleContext<Java8Parser::ElementValueContext>(0);
}


size_t Java8Parser::ElementValuePairContext::getRuleIndex() const {
  return Java8Parser::RuleElementValuePair;
}

void Java8Parser::ElementValuePairContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementValuePair(this);
}

void Java8Parser::ElementValuePairContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementValuePair(this);
}


antlrcpp::Any Java8Parser::ElementValuePairContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitElementValuePair(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ElementValuePairContext* Java8Parser::elementValuePair() {
  ElementValuePairContext *_localctx = _tracker.createInstance<ElementValuePairContext>(_ctx, getState());
  enterRule(_localctx, 234, Java8Parser::RuleElementValuePair);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1424);
    match(Java8Parser::Identifier);
    setState(1425);
    match(Java8Parser::ASSIGN);
    setState(1426);
    elementValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValueContext ------------------------------------------------------------------

Java8Parser::ElementValueContext::ElementValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConditionalExpressionContext* Java8Parser::ElementValueContext::conditionalExpression() {
  return getRuleContext<Java8Parser::ConditionalExpressionContext>(0);
}

Java8Parser::ElementValueArrayInitializerContext* Java8Parser::ElementValueContext::elementValueArrayInitializer() {
  return getRuleContext<Java8Parser::ElementValueArrayInitializerContext>(0);
}

Java8Parser::AnnotationContext* Java8Parser::ElementValueContext::annotation() {
  return getRuleContext<Java8Parser::AnnotationContext>(0);
}


size_t Java8Parser::ElementValueContext::getRuleIndex() const {
  return Java8Parser::RuleElementValue;
}

void Java8Parser::ElementValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementValue(this);
}

void Java8Parser::ElementValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementValue(this);
}


antlrcpp::Any Java8Parser::ElementValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitElementValue(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ElementValueContext* Java8Parser::elementValue() {
  ElementValueContext *_localctx = _tracker.createInstance<ElementValueContext>(_ctx, getState());
  enterRule(_localctx, 236, Java8Parser::RuleElementValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1431);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 144, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1428);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1429);
      elementValueArrayInitializer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1430);
      annotation();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValueArrayInitializerContext ------------------------------------------------------------------

Java8Parser::ElementValueArrayInitializerContext::ElementValueArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ElementValueArrayInitializerContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::ElementValueArrayInitializerContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

Java8Parser::ElementValueListContext* Java8Parser::ElementValueArrayInitializerContext::elementValueList() {
  return getRuleContext<Java8Parser::ElementValueListContext>(0);
}

tree::TerminalNode* Java8Parser::ElementValueArrayInitializerContext::COMMA() {
  return getToken(Java8Parser::COMMA, 0);
}


size_t Java8Parser::ElementValueArrayInitializerContext::getRuleIndex() const {
  return Java8Parser::RuleElementValueArrayInitializer;
}

void Java8Parser::ElementValueArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementValueArrayInitializer(this);
}

void Java8Parser::ElementValueArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementValueArrayInitializer(this);
}


antlrcpp::Any Java8Parser::ElementValueArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitElementValueArrayInitializer(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ElementValueArrayInitializerContext* Java8Parser::elementValueArrayInitializer() {
  ElementValueArrayInitializerContext *_localctx = _tracker.createInstance<ElementValueArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 238, Java8Parser::RuleElementValueArrayInitializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1433);
    match(Java8Parser::LBRACE);
    setState(1435);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN)
      | (1ULL << Java8Parser::LBRACE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1434);
      elementValueList();
    }
    setState(1438);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::COMMA) {
      setState(1437);
      match(Java8Parser::COMMA);
    }
    setState(1440);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementValueListContext ------------------------------------------------------------------

Java8Parser::ElementValueListContext::ElementValueListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ElementValueContext *> Java8Parser::ElementValueListContext::elementValue() {
  return getRuleContexts<Java8Parser::ElementValueContext>();
}

Java8Parser::ElementValueContext* Java8Parser::ElementValueListContext::elementValue(size_t i) {
  return getRuleContext<Java8Parser::ElementValueContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ElementValueListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::ElementValueListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::ElementValueListContext::getRuleIndex() const {
  return Java8Parser::RuleElementValueList;
}

void Java8Parser::ElementValueListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementValueList(this);
}

void Java8Parser::ElementValueListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementValueList(this);
}


antlrcpp::Any Java8Parser::ElementValueListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitElementValueList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ElementValueListContext* Java8Parser::elementValueList() {
  ElementValueListContext *_localctx = _tracker.createInstance<ElementValueListContext>(_ctx, getState());
  enterRule(_localctx, 240, Java8Parser::RuleElementValueList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1442);
    elementValue();
    setState(1447);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 147, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1443);
        match(Java8Parser::COMMA);
        setState(1444);
        elementValue(); 
      }
      setState(1449);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 147, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MarkerAnnotationContext ------------------------------------------------------------------

Java8Parser::MarkerAnnotationContext::MarkerAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::MarkerAnnotationContext::AT() {
  return getToken(Java8Parser::AT, 0);
}

Java8Parser::TypeNameContext* Java8Parser::MarkerAnnotationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}


size_t Java8Parser::MarkerAnnotationContext::getRuleIndex() const {
  return Java8Parser::RuleMarkerAnnotation;
}

void Java8Parser::MarkerAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMarkerAnnotation(this);
}

void Java8Parser::MarkerAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMarkerAnnotation(this);
}


antlrcpp::Any Java8Parser::MarkerAnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitMarkerAnnotation(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MarkerAnnotationContext* Java8Parser::markerAnnotation() {
  MarkerAnnotationContext *_localctx = _tracker.createInstance<MarkerAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 242, Java8Parser::RuleMarkerAnnotation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1450);
    match(Java8Parser::AT);
    setState(1451);
    typeName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleElementAnnotationContext ------------------------------------------------------------------

Java8Parser::SingleElementAnnotationContext::SingleElementAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SingleElementAnnotationContext::AT() {
  return getToken(Java8Parser::AT, 0);
}

Java8Parser::TypeNameContext* Java8Parser::SingleElementAnnotationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::SingleElementAnnotationContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ElementValueContext* Java8Parser::SingleElementAnnotationContext::elementValue() {
  return getRuleContext<Java8Parser::ElementValueContext>(0);
}

tree::TerminalNode* Java8Parser::SingleElementAnnotationContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}


size_t Java8Parser::SingleElementAnnotationContext::getRuleIndex() const {
  return Java8Parser::RuleSingleElementAnnotation;
}

void Java8Parser::SingleElementAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleElementAnnotation(this);
}

void Java8Parser::SingleElementAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleElementAnnotation(this);
}


antlrcpp::Any Java8Parser::SingleElementAnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitSingleElementAnnotation(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SingleElementAnnotationContext* Java8Parser::singleElementAnnotation() {
  SingleElementAnnotationContext *_localctx = _tracker.createInstance<SingleElementAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 244, Java8Parser::RuleSingleElementAnnotation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1453);
    match(Java8Parser::AT);
    setState(1454);
    typeName();
    setState(1455);
    match(Java8Parser::LPAREN);
    setState(1456);
    elementValue();
    setState(1457);
    match(Java8Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayInitializerContext ------------------------------------------------------------------

Java8Parser::ArrayInitializerContext::ArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ArrayInitializerContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::ArrayInitializerContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

Java8Parser::VariableInitializerListContext* Java8Parser::ArrayInitializerContext::variableInitializerList() {
  return getRuleContext<Java8Parser::VariableInitializerListContext>(0);
}

tree::TerminalNode* Java8Parser::ArrayInitializerContext::COMMA() {
  return getToken(Java8Parser::COMMA, 0);
}


size_t Java8Parser::ArrayInitializerContext::getRuleIndex() const {
  return Java8Parser::RuleArrayInitializer;
}

void Java8Parser::ArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayInitializer(this);
}

void Java8Parser::ArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayInitializer(this);
}


antlrcpp::Any Java8Parser::ArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitArrayInitializer(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ArrayInitializerContext* Java8Parser::arrayInitializer() {
  ArrayInitializerContext *_localctx = _tracker.createInstance<ArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 246, Java8Parser::RuleArrayInitializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1459);
    match(Java8Parser::LBRACE);
    setState(1461);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN)
      | (1ULL << Java8Parser::LBRACE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1460);
      variableInitializerList();
    }
    setState(1464);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::COMMA) {
      setState(1463);
      match(Java8Parser::COMMA);
    }
    setState(1466);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableInitializerListContext ------------------------------------------------------------------

Java8Parser::VariableInitializerListContext::VariableInitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::VariableInitializerContext *> Java8Parser::VariableInitializerListContext::variableInitializer() {
  return getRuleContexts<Java8Parser::VariableInitializerContext>();
}

Java8Parser::VariableInitializerContext* Java8Parser::VariableInitializerListContext::variableInitializer(size_t i) {
  return getRuleContext<Java8Parser::VariableInitializerContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::VariableInitializerListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::VariableInitializerListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::VariableInitializerListContext::getRuleIndex() const {
  return Java8Parser::RuleVariableInitializerList;
}

void Java8Parser::VariableInitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableInitializerList(this);
}

void Java8Parser::VariableInitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableInitializerList(this);
}


antlrcpp::Any Java8Parser::VariableInitializerListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitVariableInitializerList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::VariableInitializerListContext* Java8Parser::variableInitializerList() {
  VariableInitializerListContext *_localctx = _tracker.createInstance<VariableInitializerListContext>(_ctx, getState());
  enterRule(_localctx, 248, Java8Parser::RuleVariableInitializerList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1468);
    variableInitializer();
    setState(1473);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1469);
        match(Java8Parser::COMMA);
        setState(1470);
        variableInitializer(); 
      }
      setState(1475);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

Java8Parser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::BlockContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::BlockContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

Java8Parser::BlockStatementsContext* Java8Parser::BlockContext::blockStatements() {
  return getRuleContext<Java8Parser::BlockStatementsContext>(0);
}


size_t Java8Parser::BlockContext::getRuleIndex() const {
  return Java8Parser::RuleBlock;
}

void Java8Parser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void Java8Parser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any Java8Parser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::BlockContext* Java8Parser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 250, Java8Parser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1476);
    match(Java8Parser::LBRACE);
    setState(1478);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::ASSERT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BREAK)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::CONTINUE)
      | (1ULL << Java8Parser::DO)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::FOR)
      | (1ULL << Java8Parser::IF)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::RETURN)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::SWITCH)
      | (1ULL << Java8Parser::SYNCHRONIZED)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::THROW)
      | (1ULL << Java8Parser::TRY)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::WHILE)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN)
      | (1ULL << Java8Parser::LBRACE)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1477);
      blockStatements();
    }
    setState(1480);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStatementsContext ------------------------------------------------------------------

Java8Parser::BlockStatementsContext::BlockStatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::BlockStatementContext *> Java8Parser::BlockStatementsContext::blockStatement() {
  return getRuleContexts<Java8Parser::BlockStatementContext>();
}

Java8Parser::BlockStatementContext* Java8Parser::BlockStatementsContext::blockStatement(size_t i) {
  return getRuleContext<Java8Parser::BlockStatementContext>(i);
}


size_t Java8Parser::BlockStatementsContext::getRuleIndex() const {
  return Java8Parser::RuleBlockStatements;
}

void Java8Parser::BlockStatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStatements(this);
}

void Java8Parser::BlockStatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStatements(this);
}


antlrcpp::Any Java8Parser::BlockStatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitBlockStatements(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::BlockStatementsContext* Java8Parser::blockStatements() {
  BlockStatementsContext *_localctx = _tracker.createInstance<BlockStatementsContext>(_ctx, getState());
  enterRule(_localctx, 252, Java8Parser::RuleBlockStatements);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1483); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1482);
      blockStatement();
      setState(1485); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::ABSTRACT)
      | (1ULL << Java8Parser::ASSERT)
      | (1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BREAK)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::CLASS)
      | (1ULL << Java8Parser::CONTINUE)
      | (1ULL << Java8Parser::DO)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::ENUM)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::FOR)
      | (1ULL << Java8Parser::IF)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::PRIVATE)
      | (1ULL << Java8Parser::PROTECTED)
      | (1ULL << Java8Parser::PUBLIC)
      | (1ULL << Java8Parser::RETURN)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::STATIC)
      | (1ULL << Java8Parser::STRICTFP)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::SWITCH)
      | (1ULL << Java8Parser::SYNCHRONIZED)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::THROW)
      | (1ULL << Java8Parser::TRY)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::WHILE)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN)
      | (1ULL << Java8Parser::LBRACE)
      | (1ULL << Java8Parser::SEMI))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStatementContext ------------------------------------------------------------------

Java8Parser::BlockStatementContext::BlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LocalVariableDeclarationStatementContext* Java8Parser::BlockStatementContext::localVariableDeclarationStatement() {
  return getRuleContext<Java8Parser::LocalVariableDeclarationStatementContext>(0);
}

Java8Parser::ClassDeclarationContext* Java8Parser::BlockStatementContext::classDeclaration() {
  return getRuleContext<Java8Parser::ClassDeclarationContext>(0);
}

Java8Parser::StatementContext* Java8Parser::BlockStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}


size_t Java8Parser::BlockStatementContext::getRuleIndex() const {
  return Java8Parser::RuleBlockStatement;
}

void Java8Parser::BlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStatement(this);
}

void Java8Parser::BlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStatement(this);
}


antlrcpp::Any Java8Parser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::BlockStatementContext* Java8Parser::blockStatement() {
  BlockStatementContext *_localctx = _tracker.createInstance<BlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 254, Java8Parser::RuleBlockStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1490);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1487);
      localVariableDeclarationStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1488);
      classDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1489);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVariableDeclarationStatementContext ------------------------------------------------------------------

Java8Parser::LocalVariableDeclarationStatementContext::LocalVariableDeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LocalVariableDeclarationContext* Java8Parser::LocalVariableDeclarationStatementContext::localVariableDeclaration() {
  return getRuleContext<Java8Parser::LocalVariableDeclarationContext>(0);
}

tree::TerminalNode* Java8Parser::LocalVariableDeclarationStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::LocalVariableDeclarationStatementContext::getRuleIndex() const {
  return Java8Parser::RuleLocalVariableDeclarationStatement;
}

void Java8Parser::LocalVariableDeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalVariableDeclarationStatement(this);
}

void Java8Parser::LocalVariableDeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalVariableDeclarationStatement(this);
}


antlrcpp::Any Java8Parser::LocalVariableDeclarationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitLocalVariableDeclarationStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LocalVariableDeclarationStatementContext* Java8Parser::localVariableDeclarationStatement() {
  LocalVariableDeclarationStatementContext *_localctx = _tracker.createInstance<LocalVariableDeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 256, Java8Parser::RuleLocalVariableDeclarationStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1492);
    localVariableDeclaration();
    setState(1493);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVariableDeclarationContext ------------------------------------------------------------------

Java8Parser::LocalVariableDeclarationContext::LocalVariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::LocalVariableDeclarationContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

Java8Parser::VariableDeclaratorListContext* Java8Parser::LocalVariableDeclarationContext::variableDeclaratorList() {
  return getRuleContext<Java8Parser::VariableDeclaratorListContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::LocalVariableDeclarationContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::LocalVariableDeclarationContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::LocalVariableDeclarationContext::getRuleIndex() const {
  return Java8Parser::RuleLocalVariableDeclaration;
}

void Java8Parser::LocalVariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalVariableDeclaration(this);
}

void Java8Parser::LocalVariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalVariableDeclaration(this);
}


antlrcpp::Any Java8Parser::LocalVariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitLocalVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LocalVariableDeclarationContext* Java8Parser::localVariableDeclaration() {
  LocalVariableDeclarationContext *_localctx = _tracker.createInstance<LocalVariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 258, Java8Parser::RuleLocalVariableDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1498);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1495);
      variableModifier();
      setState(1500);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1501);
    unannType();
    setState(1502);
    variableDeclaratorList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

Java8Parser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementWithoutTrailingSubstatementContext* Java8Parser::StatementContext::statementWithoutTrailingSubstatement() {
  return getRuleContext<Java8Parser::StatementWithoutTrailingSubstatementContext>(0);
}

Java8Parser::LabeledStatementContext* Java8Parser::StatementContext::labeledStatement() {
  return getRuleContext<Java8Parser::LabeledStatementContext>(0);
}

Java8Parser::IfThenStatementContext* Java8Parser::StatementContext::ifThenStatement() {
  return getRuleContext<Java8Parser::IfThenStatementContext>(0);
}

Java8Parser::IfThenElseStatementContext* Java8Parser::StatementContext::ifThenElseStatement() {
  return getRuleContext<Java8Parser::IfThenElseStatementContext>(0);
}

Java8Parser::WhileStatementContext* Java8Parser::StatementContext::whileStatement() {
  return getRuleContext<Java8Parser::WhileStatementContext>(0);
}

Java8Parser::ForStatementContext* Java8Parser::StatementContext::forStatement() {
  return getRuleContext<Java8Parser::ForStatementContext>(0);
}


size_t Java8Parser::StatementContext::getRuleIndex() const {
  return Java8Parser::RuleStatement;
}

void Java8Parser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void Java8Parser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any Java8Parser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::StatementContext* Java8Parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 260, Java8Parser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1510);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 155, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1504);
      statementWithoutTrailingSubstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1505);
      labeledStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1506);
      ifThenStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1507);
      ifThenElseStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1508);
      whileStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1509);
      forStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::StatementNoShortIfContext::StatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementWithoutTrailingSubstatementContext* Java8Parser::StatementNoShortIfContext::statementWithoutTrailingSubstatement() {
  return getRuleContext<Java8Parser::StatementWithoutTrailingSubstatementContext>(0);
}

Java8Parser::LabeledStatementNoShortIfContext* Java8Parser::StatementNoShortIfContext::labeledStatementNoShortIf() {
  return getRuleContext<Java8Parser::LabeledStatementNoShortIfContext>(0);
}

Java8Parser::IfThenElseStatementNoShortIfContext* Java8Parser::StatementNoShortIfContext::ifThenElseStatementNoShortIf() {
  return getRuleContext<Java8Parser::IfThenElseStatementNoShortIfContext>(0);
}

Java8Parser::WhileStatementNoShortIfContext* Java8Parser::StatementNoShortIfContext::whileStatementNoShortIf() {
  return getRuleContext<Java8Parser::WhileStatementNoShortIfContext>(0);
}

Java8Parser::ForStatementNoShortIfContext* Java8Parser::StatementNoShortIfContext::forStatementNoShortIf() {
  return getRuleContext<Java8Parser::ForStatementNoShortIfContext>(0);
}


size_t Java8Parser::StatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleStatementNoShortIf;
}

void Java8Parser::StatementNoShortIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementNoShortIf(this);
}

void Java8Parser::StatementNoShortIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementNoShortIf(this);
}


antlrcpp::Any Java8Parser::StatementNoShortIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitStatementNoShortIf(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::statementNoShortIf() {
  StatementNoShortIfContext *_localctx = _tracker.createInstance<StatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 262, Java8Parser::RuleStatementNoShortIf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1517);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1512);
      statementWithoutTrailingSubstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1513);
      labeledStatementNoShortIf();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1514);
      ifThenElseStatementNoShortIf();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1515);
      whileStatementNoShortIf();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1516);
      forStatementNoShortIf();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementWithoutTrailingSubstatementContext ------------------------------------------------------------------

Java8Parser::StatementWithoutTrailingSubstatementContext::StatementWithoutTrailingSubstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BlockContext* Java8Parser::StatementWithoutTrailingSubstatementContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}

Java8Parser::EmptyStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::emptyStatement() {
  return getRuleContext<Java8Parser::EmptyStatementContext>(0);
}

Java8Parser::ExpressionStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::expressionStatement() {
  return getRuleContext<Java8Parser::ExpressionStatementContext>(0);
}

Java8Parser::AssertStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::assertStatement() {
  return getRuleContext<Java8Parser::AssertStatementContext>(0);
}

Java8Parser::SwitchStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::switchStatement() {
  return getRuleContext<Java8Parser::SwitchStatementContext>(0);
}

Java8Parser::DoStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::doStatement() {
  return getRuleContext<Java8Parser::DoStatementContext>(0);
}

Java8Parser::BreakStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::breakStatement() {
  return getRuleContext<Java8Parser::BreakStatementContext>(0);
}

Java8Parser::ContinueStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::continueStatement() {
  return getRuleContext<Java8Parser::ContinueStatementContext>(0);
}

Java8Parser::ReturnStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::returnStatement() {
  return getRuleContext<Java8Parser::ReturnStatementContext>(0);
}

Java8Parser::SynchronizedStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::synchronizedStatement() {
  return getRuleContext<Java8Parser::SynchronizedStatementContext>(0);
}

Java8Parser::ThrowStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::throwStatement() {
  return getRuleContext<Java8Parser::ThrowStatementContext>(0);
}

Java8Parser::TryStatementContext* Java8Parser::StatementWithoutTrailingSubstatementContext::tryStatement() {
  return getRuleContext<Java8Parser::TryStatementContext>(0);
}


size_t Java8Parser::StatementWithoutTrailingSubstatementContext::getRuleIndex() const {
  return Java8Parser::RuleStatementWithoutTrailingSubstatement;
}

void Java8Parser::StatementWithoutTrailingSubstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementWithoutTrailingSubstatement(this);
}

void Java8Parser::StatementWithoutTrailingSubstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementWithoutTrailingSubstatement(this);
}


antlrcpp::Any Java8Parser::StatementWithoutTrailingSubstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitStatementWithoutTrailingSubstatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::StatementWithoutTrailingSubstatementContext* Java8Parser::statementWithoutTrailingSubstatement() {
  StatementWithoutTrailingSubstatementContext *_localctx = _tracker.createInstance<StatementWithoutTrailingSubstatementContext>(_ctx, getState());
  enterRule(_localctx, 264, Java8Parser::RuleStatementWithoutTrailingSubstatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1531);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1519);
        block();
        break;
      }

      case Java8Parser::SEMI: {
        enterOuterAlt(_localctx, 2);
        setState(1520);
        emptyStatement();
        break;
      }

      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::NEW:
      case Java8Parser::SHORT:
      case Java8Parser::SUPER:
      case Java8Parser::THIS:
      case Java8Parser::VOID:
      case Java8Parser::IntegerLiteral:
      case Java8Parser::FloatingPointLiteral:
      case Java8Parser::BooleanLiteral:
      case Java8Parser::CharacterLiteral:
      case Java8Parser::StringLiteral:
      case Java8Parser::NullLiteral:
      case Java8Parser::LPAREN:
      case Java8Parser::INC:
      case Java8Parser::DEC:
      case Java8Parser::Identifier:
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 3);
        setState(1521);
        expressionStatement();
        break;
      }

      case Java8Parser::ASSERT: {
        enterOuterAlt(_localctx, 4);
        setState(1522);
        assertStatement();
        break;
      }

      case Java8Parser::SWITCH: {
        enterOuterAlt(_localctx, 5);
        setState(1523);
        switchStatement();
        break;
      }

      case Java8Parser::DO: {
        enterOuterAlt(_localctx, 6);
        setState(1524);
        doStatement();
        break;
      }

      case Java8Parser::BREAK: {
        enterOuterAlt(_localctx, 7);
        setState(1525);
        breakStatement();
        break;
      }

      case Java8Parser::CONTINUE: {
        enterOuterAlt(_localctx, 8);
        setState(1526);
        continueStatement();
        break;
      }

      case Java8Parser::RETURN: {
        enterOuterAlt(_localctx, 9);
        setState(1527);
        returnStatement();
        break;
      }

      case Java8Parser::SYNCHRONIZED: {
        enterOuterAlt(_localctx, 10);
        setState(1528);
        synchronizedStatement();
        break;
      }

      case Java8Parser::THROW: {
        enterOuterAlt(_localctx, 11);
        setState(1529);
        throwStatement();
        break;
      }

      case Java8Parser::TRY: {
        enterOuterAlt(_localctx, 12);
        setState(1530);
        tryStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

Java8Parser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EmptyStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::EmptyStatementContext::getRuleIndex() const {
  return Java8Parser::RuleEmptyStatement;
}

void Java8Parser::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}

void Java8Parser::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}


antlrcpp::Any Java8Parser::EmptyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitEmptyStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EmptyStatementContext* Java8Parser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 266, Java8Parser::RuleEmptyStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1533);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledStatementContext ------------------------------------------------------------------

Java8Parser::LabeledStatementContext::LabeledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::LabeledStatementContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::LabeledStatementContext::COLON() {
  return getToken(Java8Parser::COLON, 0);
}

Java8Parser::StatementContext* Java8Parser::LabeledStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}


size_t Java8Parser::LabeledStatementContext::getRuleIndex() const {
  return Java8Parser::RuleLabeledStatement;
}

void Java8Parser::LabeledStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledStatement(this);
}

void Java8Parser::LabeledStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledStatement(this);
}


antlrcpp::Any Java8Parser::LabeledStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitLabeledStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LabeledStatementContext* Java8Parser::labeledStatement() {
  LabeledStatementContext *_localctx = _tracker.createInstance<LabeledStatementContext>(_ctx, getState());
  enterRule(_localctx, 268, Java8Parser::RuleLabeledStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1535);
    match(Java8Parser::Identifier);
    setState(1536);
    match(Java8Parser::COLON);
    setState(1537);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::LabeledStatementNoShortIfContext::LabeledStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::LabeledStatementNoShortIfContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::LabeledStatementNoShortIfContext::COLON() {
  return getToken(Java8Parser::COLON, 0);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::LabeledStatementNoShortIfContext::statementNoShortIf() {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(0);
}


size_t Java8Parser::LabeledStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleLabeledStatementNoShortIf;
}

void Java8Parser::LabeledStatementNoShortIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledStatementNoShortIf(this);
}

void Java8Parser::LabeledStatementNoShortIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledStatementNoShortIf(this);
}


antlrcpp::Any Java8Parser::LabeledStatementNoShortIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitLabeledStatementNoShortIf(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LabeledStatementNoShortIfContext* Java8Parser::labeledStatementNoShortIf() {
  LabeledStatementNoShortIfContext *_localctx = _tracker.createInstance<LabeledStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 270, Java8Parser::RuleLabeledStatementNoShortIf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1539);
    match(Java8Parser::Identifier);
    setState(1540);
    match(Java8Parser::COLON);
    setState(1541);
    statementNoShortIf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

Java8Parser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementExpressionContext* Java8Parser::ExpressionStatementContext::statementExpression() {
  return getRuleContext<Java8Parser::StatementExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::ExpressionStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::ExpressionStatementContext::getRuleIndex() const {
  return Java8Parser::RuleExpressionStatement;
}

void Java8Parser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void Java8Parser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}


antlrcpp::Any Java8Parser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ExpressionStatementContext* Java8Parser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 272, Java8Parser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1543);
    statementExpression();
    setState(1544);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementExpressionContext ------------------------------------------------------------------

Java8Parser::StatementExpressionContext::StatementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AssignmentContext* Java8Parser::StatementExpressionContext::assignment() {
  return getRuleContext<Java8Parser::AssignmentContext>(0);
}

Java8Parser::PreIncrementExpressionContext* Java8Parser::StatementExpressionContext::preIncrementExpression() {
  return getRuleContext<Java8Parser::PreIncrementExpressionContext>(0);
}

Java8Parser::PreDecrementExpressionContext* Java8Parser::StatementExpressionContext::preDecrementExpression() {
  return getRuleContext<Java8Parser::PreDecrementExpressionContext>(0);
}

Java8Parser::PostIncrementExpressionContext* Java8Parser::StatementExpressionContext::postIncrementExpression() {
  return getRuleContext<Java8Parser::PostIncrementExpressionContext>(0);
}

Java8Parser::PostDecrementExpressionContext* Java8Parser::StatementExpressionContext::postDecrementExpression() {
  return getRuleContext<Java8Parser::PostDecrementExpressionContext>(0);
}

Java8Parser::MethodInvocationContext* Java8Parser::StatementExpressionContext::methodInvocation() {
  return getRuleContext<Java8Parser::MethodInvocationContext>(0);
}

Java8Parser::ClassInstanceCreationExpressionContext* Java8Parser::StatementExpressionContext::classInstanceCreationExpression() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpressionContext>(0);
}


size_t Java8Parser::StatementExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleStatementExpression;
}

void Java8Parser::StatementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementExpression(this);
}

void Java8Parser::StatementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementExpression(this);
}


antlrcpp::Any Java8Parser::StatementExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitStatementExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::StatementExpressionContext* Java8Parser::statementExpression() {
  StatementExpressionContext *_localctx = _tracker.createInstance<StatementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 274, Java8Parser::RuleStatementExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1553);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1546);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1547);
      preIncrementExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1548);
      preDecrementExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1549);
      postIncrementExpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1550);
      postDecrementExpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1551);
      methodInvocation();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1552);
      classInstanceCreationExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfThenStatementContext ------------------------------------------------------------------

Java8Parser::IfThenStatementContext::IfThenStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::IfThenStatementContext::IF() {
  return getToken(Java8Parser::IF, 0);
}

tree::TerminalNode* Java8Parser::IfThenStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::IfThenStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::IfThenStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementContext* Java8Parser::IfThenStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}


size_t Java8Parser::IfThenStatementContext::getRuleIndex() const {
  return Java8Parser::RuleIfThenStatement;
}

void Java8Parser::IfThenStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfThenStatement(this);
}

void Java8Parser::IfThenStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfThenStatement(this);
}


antlrcpp::Any Java8Parser::IfThenStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitIfThenStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::IfThenStatementContext* Java8Parser::ifThenStatement() {
  IfThenStatementContext *_localctx = _tracker.createInstance<IfThenStatementContext>(_ctx, getState());
  enterRule(_localctx, 276, Java8Parser::RuleIfThenStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1555);
    match(Java8Parser::IF);
    setState(1556);
    match(Java8Parser::LPAREN);
    setState(1557);
    expression();
    setState(1558);
    match(Java8Parser::RPAREN);
    setState(1559);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfThenElseStatementContext ------------------------------------------------------------------

Java8Parser::IfThenElseStatementContext::IfThenElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::IfThenElseStatementContext::IF() {
  return getToken(Java8Parser::IF, 0);
}

tree::TerminalNode* Java8Parser::IfThenElseStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::IfThenElseStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::IfThenElseStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::IfThenElseStatementContext::statementNoShortIf() {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(0);
}

tree::TerminalNode* Java8Parser::IfThenElseStatementContext::ELSE() {
  return getToken(Java8Parser::ELSE, 0);
}

Java8Parser::StatementContext* Java8Parser::IfThenElseStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}


size_t Java8Parser::IfThenElseStatementContext::getRuleIndex() const {
  return Java8Parser::RuleIfThenElseStatement;
}

void Java8Parser::IfThenElseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfThenElseStatement(this);
}

void Java8Parser::IfThenElseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfThenElseStatement(this);
}


antlrcpp::Any Java8Parser::IfThenElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitIfThenElseStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::IfThenElseStatementContext* Java8Parser::ifThenElseStatement() {
  IfThenElseStatementContext *_localctx = _tracker.createInstance<IfThenElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 278, Java8Parser::RuleIfThenElseStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1561);
    match(Java8Parser::IF);
    setState(1562);
    match(Java8Parser::LPAREN);
    setState(1563);
    expression();
    setState(1564);
    match(Java8Parser::RPAREN);
    setState(1565);
    statementNoShortIf();
    setState(1566);
    match(Java8Parser::ELSE);
    setState(1567);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfThenElseStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::IfThenElseStatementNoShortIfContext::IfThenElseStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::IfThenElseStatementNoShortIfContext::IF() {
  return getToken(Java8Parser::IF, 0);
}

tree::TerminalNode* Java8Parser::IfThenElseStatementNoShortIfContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::IfThenElseStatementNoShortIfContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::IfThenElseStatementNoShortIfContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

std::vector<Java8Parser::StatementNoShortIfContext *> Java8Parser::IfThenElseStatementNoShortIfContext::statementNoShortIf() {
  return getRuleContexts<Java8Parser::StatementNoShortIfContext>();
}

Java8Parser::StatementNoShortIfContext* Java8Parser::IfThenElseStatementNoShortIfContext::statementNoShortIf(size_t i) {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(i);
}

tree::TerminalNode* Java8Parser::IfThenElseStatementNoShortIfContext::ELSE() {
  return getToken(Java8Parser::ELSE, 0);
}


size_t Java8Parser::IfThenElseStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleIfThenElseStatementNoShortIf;
}

void Java8Parser::IfThenElseStatementNoShortIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfThenElseStatementNoShortIf(this);
}

void Java8Parser::IfThenElseStatementNoShortIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfThenElseStatementNoShortIf(this);
}


antlrcpp::Any Java8Parser::IfThenElseStatementNoShortIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitIfThenElseStatementNoShortIf(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::IfThenElseStatementNoShortIfContext* Java8Parser::ifThenElseStatementNoShortIf() {
  IfThenElseStatementNoShortIfContext *_localctx = _tracker.createInstance<IfThenElseStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 280, Java8Parser::RuleIfThenElseStatementNoShortIf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1569);
    match(Java8Parser::IF);
    setState(1570);
    match(Java8Parser::LPAREN);
    setState(1571);
    expression();
    setState(1572);
    match(Java8Parser::RPAREN);
    setState(1573);
    statementNoShortIf();
    setState(1574);
    match(Java8Parser::ELSE);
    setState(1575);
    statementNoShortIf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssertStatementContext ------------------------------------------------------------------

Java8Parser::AssertStatementContext::AssertStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::AssertStatementContext::ASSERT() {
  return getToken(Java8Parser::ASSERT, 0);
}

std::vector<Java8Parser::ExpressionContext *> Java8Parser::AssertStatementContext::expression() {
  return getRuleContexts<Java8Parser::ExpressionContext>();
}

Java8Parser::ExpressionContext* Java8Parser::AssertStatementContext::expression(size_t i) {
  return getRuleContext<Java8Parser::ExpressionContext>(i);
}

tree::TerminalNode* Java8Parser::AssertStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

tree::TerminalNode* Java8Parser::AssertStatementContext::COLON() {
  return getToken(Java8Parser::COLON, 0);
}


size_t Java8Parser::AssertStatementContext::getRuleIndex() const {
  return Java8Parser::RuleAssertStatement;
}

void Java8Parser::AssertStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssertStatement(this);
}

void Java8Parser::AssertStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssertStatement(this);
}


antlrcpp::Any Java8Parser::AssertStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitAssertStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AssertStatementContext* Java8Parser::assertStatement() {
  AssertStatementContext *_localctx = _tracker.createInstance<AssertStatementContext>(_ctx, getState());
  enterRule(_localctx, 282, Java8Parser::RuleAssertStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1587);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1577);
      match(Java8Parser::ASSERT);
      setState(1578);
      expression();
      setState(1579);
      match(Java8Parser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1581);
      match(Java8Parser::ASSERT);
      setState(1582);
      expression();
      setState(1583);
      match(Java8Parser::COLON);
      setState(1584);
      expression();
      setState(1585);
      match(Java8Parser::SEMI);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementContext ------------------------------------------------------------------

Java8Parser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SwitchStatementContext::SWITCH() {
  return getToken(Java8Parser::SWITCH, 0);
}

tree::TerminalNode* Java8Parser::SwitchStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::SwitchStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::SwitchStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::SwitchBlockContext* Java8Parser::SwitchStatementContext::switchBlock() {
  return getRuleContext<Java8Parser::SwitchBlockContext>(0);
}


size_t Java8Parser::SwitchStatementContext::getRuleIndex() const {
  return Java8Parser::RuleSwitchStatement;
}

void Java8Parser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}

void Java8Parser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}


antlrcpp::Any Java8Parser::SwitchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitSwitchStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SwitchStatementContext* Java8Parser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 284, Java8Parser::RuleSwitchStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1589);
    match(Java8Parser::SWITCH);
    setState(1590);
    match(Java8Parser::LPAREN);
    setState(1591);
    expression();
    setState(1592);
    match(Java8Parser::RPAREN);
    setState(1593);
    switchBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchBlockContext ------------------------------------------------------------------

Java8Parser::SwitchBlockContext::SwitchBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SwitchBlockContext::LBRACE() {
  return getToken(Java8Parser::LBRACE, 0);
}

tree::TerminalNode* Java8Parser::SwitchBlockContext::RBRACE() {
  return getToken(Java8Parser::RBRACE, 0);
}

std::vector<Java8Parser::SwitchBlockStatementGroupContext *> Java8Parser::SwitchBlockContext::switchBlockStatementGroup() {
  return getRuleContexts<Java8Parser::SwitchBlockStatementGroupContext>();
}

Java8Parser::SwitchBlockStatementGroupContext* Java8Parser::SwitchBlockContext::switchBlockStatementGroup(size_t i) {
  return getRuleContext<Java8Parser::SwitchBlockStatementGroupContext>(i);
}

std::vector<Java8Parser::SwitchLabelContext *> Java8Parser::SwitchBlockContext::switchLabel() {
  return getRuleContexts<Java8Parser::SwitchLabelContext>();
}

Java8Parser::SwitchLabelContext* Java8Parser::SwitchBlockContext::switchLabel(size_t i) {
  return getRuleContext<Java8Parser::SwitchLabelContext>(i);
}


size_t Java8Parser::SwitchBlockContext::getRuleIndex() const {
  return Java8Parser::RuleSwitchBlock;
}

void Java8Parser::SwitchBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchBlock(this);
}

void Java8Parser::SwitchBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchBlock(this);
}


antlrcpp::Any Java8Parser::SwitchBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitSwitchBlock(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SwitchBlockContext* Java8Parser::switchBlock() {
  SwitchBlockContext *_localctx = _tracker.createInstance<SwitchBlockContext>(_ctx, getState());
  enterRule(_localctx, 286, Java8Parser::RuleSwitchBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1595);
    match(Java8Parser::LBRACE);
    setState(1599);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1596);
        switchBlockStatementGroup(); 
      }
      setState(1601);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx);
    }
    setState(1605);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::CASE

    || _la == Java8Parser::DEFAULT) {
      setState(1602);
      switchLabel();
      setState(1607);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1608);
    match(Java8Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchBlockStatementGroupContext ------------------------------------------------------------------

Java8Parser::SwitchBlockStatementGroupContext::SwitchBlockStatementGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::SwitchLabelsContext* Java8Parser::SwitchBlockStatementGroupContext::switchLabels() {
  return getRuleContext<Java8Parser::SwitchLabelsContext>(0);
}

Java8Parser::BlockStatementsContext* Java8Parser::SwitchBlockStatementGroupContext::blockStatements() {
  return getRuleContext<Java8Parser::BlockStatementsContext>(0);
}


size_t Java8Parser::SwitchBlockStatementGroupContext::getRuleIndex() const {
  return Java8Parser::RuleSwitchBlockStatementGroup;
}

void Java8Parser::SwitchBlockStatementGroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchBlockStatementGroup(this);
}

void Java8Parser::SwitchBlockStatementGroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchBlockStatementGroup(this);
}


antlrcpp::Any Java8Parser::SwitchBlockStatementGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitSwitchBlockStatementGroup(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SwitchBlockStatementGroupContext* Java8Parser::switchBlockStatementGroup() {
  SwitchBlockStatementGroupContext *_localctx = _tracker.createInstance<SwitchBlockStatementGroupContext>(_ctx, getState());
  enterRule(_localctx, 288, Java8Parser::RuleSwitchBlockStatementGroup);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1610);
    switchLabels();
    setState(1611);
    blockStatements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchLabelsContext ------------------------------------------------------------------

Java8Parser::SwitchLabelsContext::SwitchLabelsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::SwitchLabelContext *> Java8Parser::SwitchLabelsContext::switchLabel() {
  return getRuleContexts<Java8Parser::SwitchLabelContext>();
}

Java8Parser::SwitchLabelContext* Java8Parser::SwitchLabelsContext::switchLabel(size_t i) {
  return getRuleContext<Java8Parser::SwitchLabelContext>(i);
}


size_t Java8Parser::SwitchLabelsContext::getRuleIndex() const {
  return Java8Parser::RuleSwitchLabels;
}

void Java8Parser::SwitchLabelsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchLabels(this);
}

void Java8Parser::SwitchLabelsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchLabels(this);
}


antlrcpp::Any Java8Parser::SwitchLabelsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitSwitchLabels(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SwitchLabelsContext* Java8Parser::switchLabels() {
  SwitchLabelsContext *_localctx = _tracker.createInstance<SwitchLabelsContext>(_ctx, getState());
  enterRule(_localctx, 290, Java8Parser::RuleSwitchLabels);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1613);
    switchLabel();
    setState(1617);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::CASE

    || _la == Java8Parser::DEFAULT) {
      setState(1614);
      switchLabel();
      setState(1619);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchLabelContext ------------------------------------------------------------------

Java8Parser::SwitchLabelContext::SwitchLabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SwitchLabelContext::CASE() {
  return getToken(Java8Parser::CASE, 0);
}

Java8Parser::ConstantExpressionContext* Java8Parser::SwitchLabelContext::constantExpression() {
  return getRuleContext<Java8Parser::ConstantExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::SwitchLabelContext::COLON() {
  return getToken(Java8Parser::COLON, 0);
}

Java8Parser::EnumConstantNameContext* Java8Parser::SwitchLabelContext::enumConstantName() {
  return getRuleContext<Java8Parser::EnumConstantNameContext>(0);
}

tree::TerminalNode* Java8Parser::SwitchLabelContext::DEFAULT() {
  return getToken(Java8Parser::DEFAULT, 0);
}


size_t Java8Parser::SwitchLabelContext::getRuleIndex() const {
  return Java8Parser::RuleSwitchLabel;
}

void Java8Parser::SwitchLabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchLabel(this);
}

void Java8Parser::SwitchLabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchLabel(this);
}


antlrcpp::Any Java8Parser::SwitchLabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitSwitchLabel(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SwitchLabelContext* Java8Parser::switchLabel() {
  SwitchLabelContext *_localctx = _tracker.createInstance<SwitchLabelContext>(_ctx, getState());
  enterRule(_localctx, 292, Java8Parser::RuleSwitchLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1630);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1620);
      match(Java8Parser::CASE);
      setState(1621);
      constantExpression();
      setState(1622);
      match(Java8Parser::COLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1624);
      match(Java8Parser::CASE);
      setState(1625);
      enumConstantName();
      setState(1626);
      match(Java8Parser::COLON);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1628);
      match(Java8Parser::DEFAULT);
      setState(1629);
      match(Java8Parser::COLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumConstantNameContext ------------------------------------------------------------------

Java8Parser::EnumConstantNameContext::EnumConstantNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnumConstantNameContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::EnumConstantNameContext::getRuleIndex() const {
  return Java8Parser::RuleEnumConstantName;
}

void Java8Parser::EnumConstantNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumConstantName(this);
}

void Java8Parser::EnumConstantNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumConstantName(this);
}


antlrcpp::Any Java8Parser::EnumConstantNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitEnumConstantName(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnumConstantNameContext* Java8Parser::enumConstantName() {
  EnumConstantNameContext *_localctx = _tracker.createInstance<EnumConstantNameContext>(_ctx, getState());
  enterRule(_localctx, 294, Java8Parser::RuleEnumConstantName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1632);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

Java8Parser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::WhileStatementContext::WHILE() {
  return getToken(Java8Parser::WHILE, 0);
}

tree::TerminalNode* Java8Parser::WhileStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::WhileStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::WhileStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementContext* Java8Parser::WhileStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}


size_t Java8Parser::WhileStatementContext::getRuleIndex() const {
  return Java8Parser::RuleWhileStatement;
}

void Java8Parser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void Java8Parser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


antlrcpp::Any Java8Parser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::WhileStatementContext* Java8Parser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 296, Java8Parser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1634);
    match(Java8Parser::WHILE);
    setState(1635);
    match(Java8Parser::LPAREN);
    setState(1636);
    expression();
    setState(1637);
    match(Java8Parser::RPAREN);
    setState(1638);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::WhileStatementNoShortIfContext::WhileStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::WhileStatementNoShortIfContext::WHILE() {
  return getToken(Java8Parser::WHILE, 0);
}

tree::TerminalNode* Java8Parser::WhileStatementNoShortIfContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::WhileStatementNoShortIfContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::WhileStatementNoShortIfContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::WhileStatementNoShortIfContext::statementNoShortIf() {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(0);
}


size_t Java8Parser::WhileStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleWhileStatementNoShortIf;
}

void Java8Parser::WhileStatementNoShortIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatementNoShortIf(this);
}

void Java8Parser::WhileStatementNoShortIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatementNoShortIf(this);
}


antlrcpp::Any Java8Parser::WhileStatementNoShortIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitWhileStatementNoShortIf(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::WhileStatementNoShortIfContext* Java8Parser::whileStatementNoShortIf() {
  WhileStatementNoShortIfContext *_localctx = _tracker.createInstance<WhileStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 298, Java8Parser::RuleWhileStatementNoShortIf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1640);
    match(Java8Parser::WHILE);
    setState(1641);
    match(Java8Parser::LPAREN);
    setState(1642);
    expression();
    setState(1643);
    match(Java8Parser::RPAREN);
    setState(1644);
    statementNoShortIf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoStatementContext ------------------------------------------------------------------

Java8Parser::DoStatementContext::DoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::DoStatementContext::DO() {
  return getToken(Java8Parser::DO, 0);
}

Java8Parser::StatementContext* Java8Parser::DoStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}

tree::TerminalNode* Java8Parser::DoStatementContext::WHILE() {
  return getToken(Java8Parser::WHILE, 0);
}

tree::TerminalNode* Java8Parser::DoStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::DoStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::DoStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

tree::TerminalNode* Java8Parser::DoStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::DoStatementContext::getRuleIndex() const {
  return Java8Parser::RuleDoStatement;
}

void Java8Parser::DoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoStatement(this);
}

void Java8Parser::DoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoStatement(this);
}


antlrcpp::Any Java8Parser::DoStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitDoStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::DoStatementContext* Java8Parser::doStatement() {
  DoStatementContext *_localctx = _tracker.createInstance<DoStatementContext>(_ctx, getState());
  enterRule(_localctx, 300, Java8Parser::RuleDoStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1646);
    match(Java8Parser::DO);
    setState(1647);
    statement();
    setState(1648);
    match(Java8Parser::WHILE);
    setState(1649);
    match(Java8Parser::LPAREN);
    setState(1650);
    expression();
    setState(1651);
    match(Java8Parser::RPAREN);
    setState(1652);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

Java8Parser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BasicForStatementContext* Java8Parser::ForStatementContext::basicForStatement() {
  return getRuleContext<Java8Parser::BasicForStatementContext>(0);
}

Java8Parser::EnhancedForStatementContext* Java8Parser::ForStatementContext::enhancedForStatement() {
  return getRuleContext<Java8Parser::EnhancedForStatementContext>(0);
}


size_t Java8Parser::ForStatementContext::getRuleIndex() const {
  return Java8Parser::RuleForStatement;
}

void Java8Parser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void Java8Parser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}


antlrcpp::Any Java8Parser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ForStatementContext* Java8Parser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 302, Java8Parser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1656);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1654);
      basicForStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1655);
      enhancedForStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::ForStatementNoShortIfContext::ForStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::BasicForStatementNoShortIfContext* Java8Parser::ForStatementNoShortIfContext::basicForStatementNoShortIf() {
  return getRuleContext<Java8Parser::BasicForStatementNoShortIfContext>(0);
}

Java8Parser::EnhancedForStatementNoShortIfContext* Java8Parser::ForStatementNoShortIfContext::enhancedForStatementNoShortIf() {
  return getRuleContext<Java8Parser::EnhancedForStatementNoShortIfContext>(0);
}


size_t Java8Parser::ForStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleForStatementNoShortIf;
}

void Java8Parser::ForStatementNoShortIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatementNoShortIf(this);
}

void Java8Parser::ForStatementNoShortIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatementNoShortIf(this);
}


antlrcpp::Any Java8Parser::ForStatementNoShortIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitForStatementNoShortIf(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ForStatementNoShortIfContext* Java8Parser::forStatementNoShortIf() {
  ForStatementNoShortIfContext *_localctx = _tracker.createInstance<ForStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 304, Java8Parser::RuleForStatementNoShortIf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1660);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1658);
      basicForStatementNoShortIf();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1659);
      enhancedForStatementNoShortIf();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicForStatementContext ------------------------------------------------------------------

Java8Parser::BasicForStatementContext::BasicForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::BasicForStatementContext::FOR() {
  return getToken(Java8Parser::FOR, 0);
}

tree::TerminalNode* Java8Parser::BasicForStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::BasicForStatementContext::SEMI() {
  return getTokens(Java8Parser::SEMI);
}

tree::TerminalNode* Java8Parser::BasicForStatementContext::SEMI(size_t i) {
  return getToken(Java8Parser::SEMI, i);
}

tree::TerminalNode* Java8Parser::BasicForStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementContext* Java8Parser::BasicForStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}

Java8Parser::ForInitContext* Java8Parser::BasicForStatementContext::forInit() {
  return getRuleContext<Java8Parser::ForInitContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::BasicForStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::ForUpdateContext* Java8Parser::BasicForStatementContext::forUpdate() {
  return getRuleContext<Java8Parser::ForUpdateContext>(0);
}


size_t Java8Parser::BasicForStatementContext::getRuleIndex() const {
  return Java8Parser::RuleBasicForStatement;
}

void Java8Parser::BasicForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicForStatement(this);
}

void Java8Parser::BasicForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicForStatement(this);
}


antlrcpp::Any Java8Parser::BasicForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitBasicForStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::BasicForStatementContext* Java8Parser::basicForStatement() {
  BasicForStatementContext *_localctx = _tracker.createInstance<BasicForStatementContext>(_ctx, getState());
  enterRule(_localctx, 306, Java8Parser::RuleBasicForStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1662);
    match(Java8Parser::FOR);
    setState(1663);
    match(Java8Parser::LPAREN);
    setState(1665);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1664);
      forInit();
    }
    setState(1667);
    match(Java8Parser::SEMI);
    setState(1669);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1668);
      expression();
    }
    setState(1671);
    match(Java8Parser::SEMI);
    setState(1673);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1672);
      forUpdate();
    }
    setState(1675);
    match(Java8Parser::RPAREN);
    setState(1676);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicForStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::BasicForStatementNoShortIfContext::BasicForStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::BasicForStatementNoShortIfContext::FOR() {
  return getToken(Java8Parser::FOR, 0);
}

tree::TerminalNode* Java8Parser::BasicForStatementNoShortIfContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::BasicForStatementNoShortIfContext::SEMI() {
  return getTokens(Java8Parser::SEMI);
}

tree::TerminalNode* Java8Parser::BasicForStatementNoShortIfContext::SEMI(size_t i) {
  return getToken(Java8Parser::SEMI, i);
}

tree::TerminalNode* Java8Parser::BasicForStatementNoShortIfContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::BasicForStatementNoShortIfContext::statementNoShortIf() {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(0);
}

Java8Parser::ForInitContext* Java8Parser::BasicForStatementNoShortIfContext::forInit() {
  return getRuleContext<Java8Parser::ForInitContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::BasicForStatementNoShortIfContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::ForUpdateContext* Java8Parser::BasicForStatementNoShortIfContext::forUpdate() {
  return getRuleContext<Java8Parser::ForUpdateContext>(0);
}


size_t Java8Parser::BasicForStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleBasicForStatementNoShortIf;
}

void Java8Parser::BasicForStatementNoShortIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicForStatementNoShortIf(this);
}

void Java8Parser::BasicForStatementNoShortIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicForStatementNoShortIf(this);
}


antlrcpp::Any Java8Parser::BasicForStatementNoShortIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitBasicForStatementNoShortIf(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::BasicForStatementNoShortIfContext* Java8Parser::basicForStatementNoShortIf() {
  BasicForStatementNoShortIfContext *_localctx = _tracker.createInstance<BasicForStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 308, Java8Parser::RuleBasicForStatementNoShortIf);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1678);
    match(Java8Parser::FOR);
    setState(1679);
    match(Java8Parser::LPAREN);
    setState(1681);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FINAL)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1680);
      forInit();
    }
    setState(1683);
    match(Java8Parser::SEMI);
    setState(1685);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1684);
      expression();
    }
    setState(1687);
    match(Java8Parser::SEMI);
    setState(1689);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Java8Parser::INC - 79))
      | (1ULL << (Java8Parser::DEC - 79))
      | (1ULL << (Java8Parser::Identifier - 79))
      | (1ULL << (Java8Parser::AT - 79)))) != 0)) {
      setState(1688);
      forUpdate();
    }
    setState(1691);
    match(Java8Parser::RPAREN);
    setState(1692);
    statementNoShortIf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInitContext ------------------------------------------------------------------

Java8Parser::ForInitContext::ForInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementExpressionListContext* Java8Parser::ForInitContext::statementExpressionList() {
  return getRuleContext<Java8Parser::StatementExpressionListContext>(0);
}

Java8Parser::LocalVariableDeclarationContext* Java8Parser::ForInitContext::localVariableDeclaration() {
  return getRuleContext<Java8Parser::LocalVariableDeclarationContext>(0);
}


size_t Java8Parser::ForInitContext::getRuleIndex() const {
  return Java8Parser::RuleForInit;
}

void Java8Parser::ForInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInit(this);
}

void Java8Parser::ForInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInit(this);
}


antlrcpp::Any Java8Parser::ForInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitForInit(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ForInitContext* Java8Parser::forInit() {
  ForInitContext *_localctx = _tracker.createInstance<ForInitContext>(_ctx, getState());
  enterRule(_localctx, 310, Java8Parser::RuleForInit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1696);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1694);
      statementExpressionList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1695);
      localVariableDeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForUpdateContext ------------------------------------------------------------------

Java8Parser::ForUpdateContext::ForUpdateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::StatementExpressionListContext* Java8Parser::ForUpdateContext::statementExpressionList() {
  return getRuleContext<Java8Parser::StatementExpressionListContext>(0);
}


size_t Java8Parser::ForUpdateContext::getRuleIndex() const {
  return Java8Parser::RuleForUpdate;
}

void Java8Parser::ForUpdateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForUpdate(this);
}

void Java8Parser::ForUpdateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForUpdate(this);
}


antlrcpp::Any Java8Parser::ForUpdateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitForUpdate(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ForUpdateContext* Java8Parser::forUpdate() {
  ForUpdateContext *_localctx = _tracker.createInstance<ForUpdateContext>(_ctx, getState());
  enterRule(_localctx, 312, Java8Parser::RuleForUpdate);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1698);
    statementExpressionList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementExpressionListContext ------------------------------------------------------------------

Java8Parser::StatementExpressionListContext::StatementExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::StatementExpressionContext *> Java8Parser::StatementExpressionListContext::statementExpression() {
  return getRuleContexts<Java8Parser::StatementExpressionContext>();
}

Java8Parser::StatementExpressionContext* Java8Parser::StatementExpressionListContext::statementExpression(size_t i) {
  return getRuleContext<Java8Parser::StatementExpressionContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::StatementExpressionListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::StatementExpressionListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::StatementExpressionListContext::getRuleIndex() const {
  return Java8Parser::RuleStatementExpressionList;
}

void Java8Parser::StatementExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementExpressionList(this);
}

void Java8Parser::StatementExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementExpressionList(this);
}


antlrcpp::Any Java8Parser::StatementExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitStatementExpressionList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::StatementExpressionListContext* Java8Parser::statementExpressionList() {
  StatementExpressionListContext *_localctx = _tracker.createInstance<StatementExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 314, Java8Parser::RuleStatementExpressionList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1700);
    statementExpression();
    setState(1705);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(1701);
      match(Java8Parser::COMMA);
      setState(1702);
      statementExpression();
      setState(1707);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnhancedForStatementContext ------------------------------------------------------------------

Java8Parser::EnhancedForStatementContext::EnhancedForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnhancedForStatementContext::FOR() {
  return getToken(Java8Parser::FOR, 0);
}

tree::TerminalNode* Java8Parser::EnhancedForStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::UnannTypeContext* Java8Parser::EnhancedForStatementContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::EnhancedForStatementContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

tree::TerminalNode* Java8Parser::EnhancedForStatementContext::COLON() {
  return getToken(Java8Parser::COLON, 0);
}

Java8Parser::ExpressionContext* Java8Parser::EnhancedForStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::EnhancedForStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementContext* Java8Parser::EnhancedForStatementContext::statement() {
  return getRuleContext<Java8Parser::StatementContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::EnhancedForStatementContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::EnhancedForStatementContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::EnhancedForStatementContext::getRuleIndex() const {
  return Java8Parser::RuleEnhancedForStatement;
}

void Java8Parser::EnhancedForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnhancedForStatement(this);
}

void Java8Parser::EnhancedForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnhancedForStatement(this);
}


antlrcpp::Any Java8Parser::EnhancedForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitEnhancedForStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnhancedForStatementContext* Java8Parser::enhancedForStatement() {
  EnhancedForStatementContext *_localctx = _tracker.createInstance<EnhancedForStatementContext>(_ctx, getState());
  enterRule(_localctx, 316, Java8Parser::RuleEnhancedForStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1708);
    match(Java8Parser::FOR);
    setState(1709);
    match(Java8Parser::LPAREN);
    setState(1713);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1710);
      variableModifier();
      setState(1715);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1716);
    unannType();
    setState(1717);
    variableDeclaratorId();
    setState(1718);
    match(Java8Parser::COLON);
    setState(1719);
    expression();
    setState(1720);
    match(Java8Parser::RPAREN);
    setState(1721);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnhancedForStatementNoShortIfContext ------------------------------------------------------------------

Java8Parser::EnhancedForStatementNoShortIfContext::EnhancedForStatementNoShortIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::EnhancedForStatementNoShortIfContext::FOR() {
  return getToken(Java8Parser::FOR, 0);
}

tree::TerminalNode* Java8Parser::EnhancedForStatementNoShortIfContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::UnannTypeContext* Java8Parser::EnhancedForStatementNoShortIfContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::EnhancedForStatementNoShortIfContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

tree::TerminalNode* Java8Parser::EnhancedForStatementNoShortIfContext::COLON() {
  return getToken(Java8Parser::COLON, 0);
}

Java8Parser::ExpressionContext* Java8Parser::EnhancedForStatementNoShortIfContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::EnhancedForStatementNoShortIfContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::StatementNoShortIfContext* Java8Parser::EnhancedForStatementNoShortIfContext::statementNoShortIf() {
  return getRuleContext<Java8Parser::StatementNoShortIfContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::EnhancedForStatementNoShortIfContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::EnhancedForStatementNoShortIfContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::EnhancedForStatementNoShortIfContext::getRuleIndex() const {
  return Java8Parser::RuleEnhancedForStatementNoShortIf;
}

void Java8Parser::EnhancedForStatementNoShortIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnhancedForStatementNoShortIf(this);
}

void Java8Parser::EnhancedForStatementNoShortIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnhancedForStatementNoShortIf(this);
}


antlrcpp::Any Java8Parser::EnhancedForStatementNoShortIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitEnhancedForStatementNoShortIf(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::EnhancedForStatementNoShortIfContext* Java8Parser::enhancedForStatementNoShortIf() {
  EnhancedForStatementNoShortIfContext *_localctx = _tracker.createInstance<EnhancedForStatementNoShortIfContext>(_ctx, getState());
  enterRule(_localctx, 318, Java8Parser::RuleEnhancedForStatementNoShortIf);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1723);
    match(Java8Parser::FOR);
    setState(1724);
    match(Java8Parser::LPAREN);
    setState(1728);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1725);
      variableModifier();
      setState(1730);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1731);
    unannType();
    setState(1732);
    variableDeclaratorId();
    setState(1733);
    match(Java8Parser::COLON);
    setState(1734);
    expression();
    setState(1735);
    match(Java8Parser::RPAREN);
    setState(1736);
    statementNoShortIf();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

Java8Parser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::BreakStatementContext::BREAK() {
  return getToken(Java8Parser::BREAK, 0);
}

tree::TerminalNode* Java8Parser::BreakStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

tree::TerminalNode* Java8Parser::BreakStatementContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::BreakStatementContext::getRuleIndex() const {
  return Java8Parser::RuleBreakStatement;
}

void Java8Parser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void Java8Parser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}


antlrcpp::Any Java8Parser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::BreakStatementContext* Java8Parser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 320, Java8Parser::RuleBreakStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1738);
    match(Java8Parser::BREAK);
    setState(1740);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier) {
      setState(1739);
      match(Java8Parser::Identifier);
    }
    setState(1742);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

Java8Parser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ContinueStatementContext::CONTINUE() {
  return getToken(Java8Parser::CONTINUE, 0);
}

tree::TerminalNode* Java8Parser::ContinueStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

tree::TerminalNode* Java8Parser::ContinueStatementContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::ContinueStatementContext::getRuleIndex() const {
  return Java8Parser::RuleContinueStatement;
}

void Java8Parser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}

void Java8Parser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}


antlrcpp::Any Java8Parser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ContinueStatementContext* Java8Parser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 322, Java8Parser::RuleContinueStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1744);
    match(Java8Parser::CONTINUE);
    setState(1746);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::Identifier) {
      setState(1745);
      match(Java8Parser::Identifier);
    }
    setState(1748);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

Java8Parser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ReturnStatementContext::RETURN() {
  return getToken(Java8Parser::RETURN, 0);
}

tree::TerminalNode* Java8Parser::ReturnStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}

Java8Parser::ExpressionContext* Java8Parser::ReturnStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}


size_t Java8Parser::ReturnStatementContext::getRuleIndex() const {
  return Java8Parser::RuleReturnStatement;
}

void Java8Parser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void Java8Parser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


antlrcpp::Any Java8Parser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ReturnStatementContext* Java8Parser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 324, Java8Parser::RuleReturnStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1750);
    match(Java8Parser::RETURN);
    setState(1752);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(1751);
      expression();
    }
    setState(1754);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowStatementContext ------------------------------------------------------------------

Java8Parser::ThrowStatementContext::ThrowStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ThrowStatementContext::THROW() {
  return getToken(Java8Parser::THROW, 0);
}

Java8Parser::ExpressionContext* Java8Parser::ThrowStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::ThrowStatementContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::ThrowStatementContext::getRuleIndex() const {
  return Java8Parser::RuleThrowStatement;
}

void Java8Parser::ThrowStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowStatement(this);
}

void Java8Parser::ThrowStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowStatement(this);
}


antlrcpp::Any Java8Parser::ThrowStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitThrowStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ThrowStatementContext* Java8Parser::throwStatement() {
  ThrowStatementContext *_localctx = _tracker.createInstance<ThrowStatementContext>(_ctx, getState());
  enterRule(_localctx, 326, Java8Parser::RuleThrowStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1756);
    match(Java8Parser::THROW);
    setState(1757);
    expression();
    setState(1758);
    match(Java8Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SynchronizedStatementContext ------------------------------------------------------------------

Java8Parser::SynchronizedStatementContext::SynchronizedStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::SynchronizedStatementContext::SYNCHRONIZED() {
  return getToken(Java8Parser::SYNCHRONIZED, 0);
}

tree::TerminalNode* Java8Parser::SynchronizedStatementContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::SynchronizedStatementContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::SynchronizedStatementContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::BlockContext* Java8Parser::SynchronizedStatementContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::SynchronizedStatementContext::getRuleIndex() const {
  return Java8Parser::RuleSynchronizedStatement;
}

void Java8Parser::SynchronizedStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSynchronizedStatement(this);
}

void Java8Parser::SynchronizedStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSynchronizedStatement(this);
}


antlrcpp::Any Java8Parser::SynchronizedStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitSynchronizedStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::SynchronizedStatementContext* Java8Parser::synchronizedStatement() {
  SynchronizedStatementContext *_localctx = _tracker.createInstance<SynchronizedStatementContext>(_ctx, getState());
  enterRule(_localctx, 328, Java8Parser::RuleSynchronizedStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1760);
    match(Java8Parser::SYNCHRONIZED);
    setState(1761);
    match(Java8Parser::LPAREN);
    setState(1762);
    expression();
    setState(1763);
    match(Java8Parser::RPAREN);
    setState(1764);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryStatementContext ------------------------------------------------------------------

Java8Parser::TryStatementContext::TryStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TryStatementContext::TRY() {
  return getToken(Java8Parser::TRY, 0);
}

Java8Parser::BlockContext* Java8Parser::TryStatementContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}

Java8Parser::CatchesContext* Java8Parser::TryStatementContext::catches() {
  return getRuleContext<Java8Parser::CatchesContext>(0);
}

Java8Parser::Finally_Context* Java8Parser::TryStatementContext::finally_() {
  return getRuleContext<Java8Parser::Finally_Context>(0);
}

Java8Parser::TryWithResourcesStatementContext* Java8Parser::TryStatementContext::tryWithResourcesStatement() {
  return getRuleContext<Java8Parser::TryWithResourcesStatementContext>(0);
}


size_t Java8Parser::TryStatementContext::getRuleIndex() const {
  return Java8Parser::RuleTryStatement;
}

void Java8Parser::TryStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryStatement(this);
}

void Java8Parser::TryStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryStatement(this);
}


antlrcpp::Any Java8Parser::TryStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitTryStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TryStatementContext* Java8Parser::tryStatement() {
  TryStatementContext *_localctx = _tracker.createInstance<TryStatementContext>(_ctx, getState());
  enterRule(_localctx, 330, Java8Parser::RuleTryStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1778);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1766);
      match(Java8Parser::TRY);
      setState(1767);
      block();
      setState(1768);
      catches();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1770);
      match(Java8Parser::TRY);
      setState(1771);
      block();
      setState(1773);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::CATCH) {
        setState(1772);
        catches();
      }
      setState(1775);
      finally_();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1777);
      tryWithResourcesStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchesContext ------------------------------------------------------------------

Java8Parser::CatchesContext::CatchesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::CatchClauseContext *> Java8Parser::CatchesContext::catchClause() {
  return getRuleContexts<Java8Parser::CatchClauseContext>();
}

Java8Parser::CatchClauseContext* Java8Parser::CatchesContext::catchClause(size_t i) {
  return getRuleContext<Java8Parser::CatchClauseContext>(i);
}


size_t Java8Parser::CatchesContext::getRuleIndex() const {
  return Java8Parser::RuleCatches;
}

void Java8Parser::CatchesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatches(this);
}

void Java8Parser::CatchesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatches(this);
}


antlrcpp::Any Java8Parser::CatchesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitCatches(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::CatchesContext* Java8Parser::catches() {
  CatchesContext *_localctx = _tracker.createInstance<CatchesContext>(_ctx, getState());
  enterRule(_localctx, 332, Java8Parser::RuleCatches);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1780);
    catchClause();
    setState(1784);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::CATCH) {
      setState(1781);
      catchClause();
      setState(1786);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchClauseContext ------------------------------------------------------------------

Java8Parser::CatchClauseContext::CatchClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::CatchClauseContext::CATCH() {
  return getToken(Java8Parser::CATCH, 0);
}

tree::TerminalNode* Java8Parser::CatchClauseContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::CatchFormalParameterContext* Java8Parser::CatchClauseContext::catchFormalParameter() {
  return getRuleContext<Java8Parser::CatchFormalParameterContext>(0);
}

tree::TerminalNode* Java8Parser::CatchClauseContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::BlockContext* Java8Parser::CatchClauseContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::CatchClauseContext::getRuleIndex() const {
  return Java8Parser::RuleCatchClause;
}

void Java8Parser::CatchClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatchClause(this);
}

void Java8Parser::CatchClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatchClause(this);
}


antlrcpp::Any Java8Parser::CatchClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitCatchClause(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::CatchClauseContext* Java8Parser::catchClause() {
  CatchClauseContext *_localctx = _tracker.createInstance<CatchClauseContext>(_ctx, getState());
  enterRule(_localctx, 334, Java8Parser::RuleCatchClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1787);
    match(Java8Parser::CATCH);
    setState(1788);
    match(Java8Parser::LPAREN);
    setState(1789);
    catchFormalParameter();
    setState(1790);
    match(Java8Parser::RPAREN);
    setState(1791);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchFormalParameterContext ------------------------------------------------------------------

Java8Parser::CatchFormalParameterContext::CatchFormalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::CatchTypeContext* Java8Parser::CatchFormalParameterContext::catchType() {
  return getRuleContext<Java8Parser::CatchTypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::CatchFormalParameterContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::CatchFormalParameterContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::CatchFormalParameterContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::CatchFormalParameterContext::getRuleIndex() const {
  return Java8Parser::RuleCatchFormalParameter;
}

void Java8Parser::CatchFormalParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatchFormalParameter(this);
}

void Java8Parser::CatchFormalParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatchFormalParameter(this);
}


antlrcpp::Any Java8Parser::CatchFormalParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitCatchFormalParameter(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::CatchFormalParameterContext* Java8Parser::catchFormalParameter() {
  CatchFormalParameterContext *_localctx = _tracker.createInstance<CatchFormalParameterContext>(_ctx, getState());
  enterRule(_localctx, 336, Java8Parser::RuleCatchFormalParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1796);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1793);
      variableModifier();
      setState(1798);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1799);
    catchType();
    setState(1800);
    variableDeclaratorId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchTypeContext ------------------------------------------------------------------

Java8Parser::CatchTypeContext::CatchTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannClassTypeContext* Java8Parser::CatchTypeContext::unannClassType() {
  return getRuleContext<Java8Parser::UnannClassTypeContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::CatchTypeContext::BITOR() {
  return getTokens(Java8Parser::BITOR);
}

tree::TerminalNode* Java8Parser::CatchTypeContext::BITOR(size_t i) {
  return getToken(Java8Parser::BITOR, i);
}

std::vector<Java8Parser::ClassTypeContext *> Java8Parser::CatchTypeContext::classType() {
  return getRuleContexts<Java8Parser::ClassTypeContext>();
}

Java8Parser::ClassTypeContext* Java8Parser::CatchTypeContext::classType(size_t i) {
  return getRuleContext<Java8Parser::ClassTypeContext>(i);
}


size_t Java8Parser::CatchTypeContext::getRuleIndex() const {
  return Java8Parser::RuleCatchType;
}

void Java8Parser::CatchTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatchType(this);
}

void Java8Parser::CatchTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatchType(this);
}


antlrcpp::Any Java8Parser::CatchTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitCatchType(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::CatchTypeContext* Java8Parser::catchType() {
  CatchTypeContext *_localctx = _tracker.createInstance<CatchTypeContext>(_ctx, getState());
  enterRule(_localctx, 338, Java8Parser::RuleCatchType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1802);
    unannClassType();
    setState(1807);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::BITOR) {
      setState(1803);
      match(Java8Parser::BITOR);
      setState(1804);
      classType();
      setState(1809);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Finally_Context ------------------------------------------------------------------

Java8Parser::Finally_Context::Finally_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::Finally_Context::FINALLY() {
  return getToken(Java8Parser::FINALLY, 0);
}

Java8Parser::BlockContext* Java8Parser::Finally_Context::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::Finally_Context::getRuleIndex() const {
  return Java8Parser::RuleFinally_;
}

void Java8Parser::Finally_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFinally_(this);
}

void Java8Parser::Finally_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFinally_(this);
}


antlrcpp::Any Java8Parser::Finally_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitFinally_(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::Finally_Context* Java8Parser::finally_() {
  Finally_Context *_localctx = _tracker.createInstance<Finally_Context>(_ctx, getState());
  enterRule(_localctx, 340, Java8Parser::RuleFinally_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1810);
    match(Java8Parser::FINALLY);
    setState(1811);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryWithResourcesStatementContext ------------------------------------------------------------------

Java8Parser::TryWithResourcesStatementContext::TryWithResourcesStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::TryWithResourcesStatementContext::TRY() {
  return getToken(Java8Parser::TRY, 0);
}

Java8Parser::ResourceSpecificationContext* Java8Parser::TryWithResourcesStatementContext::resourceSpecification() {
  return getRuleContext<Java8Parser::ResourceSpecificationContext>(0);
}

Java8Parser::BlockContext* Java8Parser::TryWithResourcesStatementContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}

Java8Parser::CatchesContext* Java8Parser::TryWithResourcesStatementContext::catches() {
  return getRuleContext<Java8Parser::CatchesContext>(0);
}

Java8Parser::Finally_Context* Java8Parser::TryWithResourcesStatementContext::finally_() {
  return getRuleContext<Java8Parser::Finally_Context>(0);
}


size_t Java8Parser::TryWithResourcesStatementContext::getRuleIndex() const {
  return Java8Parser::RuleTryWithResourcesStatement;
}

void Java8Parser::TryWithResourcesStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryWithResourcesStatement(this);
}

void Java8Parser::TryWithResourcesStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryWithResourcesStatement(this);
}


antlrcpp::Any Java8Parser::TryWithResourcesStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitTryWithResourcesStatement(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TryWithResourcesStatementContext* Java8Parser::tryWithResourcesStatement() {
  TryWithResourcesStatementContext *_localctx = _tracker.createInstance<TryWithResourcesStatementContext>(_ctx, getState());
  enterRule(_localctx, 342, Java8Parser::RuleTryWithResourcesStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1813);
    match(Java8Parser::TRY);
    setState(1814);
    resourceSpecification();
    setState(1815);
    block();
    setState(1817);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::CATCH) {
      setState(1816);
      catches();
    }
    setState(1820);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::FINALLY) {
      setState(1819);
      finally_();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceSpecificationContext ------------------------------------------------------------------

Java8Parser::ResourceSpecificationContext::ResourceSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ResourceSpecificationContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ResourceListContext* Java8Parser::ResourceSpecificationContext::resourceList() {
  return getRuleContext<Java8Parser::ResourceListContext>(0);
}

tree::TerminalNode* Java8Parser::ResourceSpecificationContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

tree::TerminalNode* Java8Parser::ResourceSpecificationContext::SEMI() {
  return getToken(Java8Parser::SEMI, 0);
}


size_t Java8Parser::ResourceSpecificationContext::getRuleIndex() const {
  return Java8Parser::RuleResourceSpecification;
}

void Java8Parser::ResourceSpecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResourceSpecification(this);
}

void Java8Parser::ResourceSpecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResourceSpecification(this);
}


antlrcpp::Any Java8Parser::ResourceSpecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitResourceSpecification(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ResourceSpecificationContext* Java8Parser::resourceSpecification() {
  ResourceSpecificationContext *_localctx = _tracker.createInstance<ResourceSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 344, Java8Parser::RuleResourceSpecification);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1822);
    match(Java8Parser::LPAREN);
    setState(1823);
    resourceList();
    setState(1825);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::SEMI) {
      setState(1824);
      match(Java8Parser::SEMI);
    }
    setState(1827);
    match(Java8Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceListContext ------------------------------------------------------------------

Java8Parser::ResourceListContext::ResourceListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ResourceContext *> Java8Parser::ResourceListContext::resource() {
  return getRuleContexts<Java8Parser::ResourceContext>();
}

Java8Parser::ResourceContext* Java8Parser::ResourceListContext::resource(size_t i) {
  return getRuleContext<Java8Parser::ResourceContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ResourceListContext::SEMI() {
  return getTokens(Java8Parser::SEMI);
}

tree::TerminalNode* Java8Parser::ResourceListContext::SEMI(size_t i) {
  return getToken(Java8Parser::SEMI, i);
}


size_t Java8Parser::ResourceListContext::getRuleIndex() const {
  return Java8Parser::RuleResourceList;
}

void Java8Parser::ResourceListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResourceList(this);
}

void Java8Parser::ResourceListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResourceList(this);
}


antlrcpp::Any Java8Parser::ResourceListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitResourceList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ResourceListContext* Java8Parser::resourceList() {
  ResourceListContext *_localctx = _tracker.createInstance<ResourceListContext>(_ctx, getState());
  enterRule(_localctx, 346, Java8Parser::RuleResourceList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1829);
    resource();
    setState(1834);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 187, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1830);
        match(Java8Parser::SEMI);
        setState(1831);
        resource(); 
      }
      setState(1836);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 187, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResourceContext ------------------------------------------------------------------

Java8Parser::ResourceContext::ResourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnannTypeContext* Java8Parser::ResourceContext::unannType() {
  return getRuleContext<Java8Parser::UnannTypeContext>(0);
}

Java8Parser::VariableDeclaratorIdContext* Java8Parser::ResourceContext::variableDeclaratorId() {
  return getRuleContext<Java8Parser::VariableDeclaratorIdContext>(0);
}

tree::TerminalNode* Java8Parser::ResourceContext::ASSIGN() {
  return getToken(Java8Parser::ASSIGN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::ResourceContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

std::vector<Java8Parser::VariableModifierContext *> Java8Parser::ResourceContext::variableModifier() {
  return getRuleContexts<Java8Parser::VariableModifierContext>();
}

Java8Parser::VariableModifierContext* Java8Parser::ResourceContext::variableModifier(size_t i) {
  return getRuleContext<Java8Parser::VariableModifierContext>(i);
}


size_t Java8Parser::ResourceContext::getRuleIndex() const {
  return Java8Parser::RuleResource;
}

void Java8Parser::ResourceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResource(this);
}

void Java8Parser::ResourceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResource(this);
}


antlrcpp::Any Java8Parser::ResourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitResource(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ResourceContext* Java8Parser::resource() {
  ResourceContext *_localctx = _tracker.createInstance<ResourceContext>(_ctx, getState());
  enterRule(_localctx, 348, Java8Parser::RuleResource);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1840);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::FINAL || _la == Java8Parser::AT) {
      setState(1837);
      variableModifier();
      setState(1842);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1843);
    unannType();
    setState(1844);
    variableDeclaratorId();
    setState(1845);
    match(Java8Parser::ASSIGN);
    setState(1846);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

Java8Parser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimaryNoNewArray_lfno_primaryContext* Java8Parser::PrimaryContext::primaryNoNewArray_lfno_primary() {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lfno_primaryContext>(0);
}

Java8Parser::ArrayCreationExpressionContext* Java8Parser::PrimaryContext::arrayCreationExpression() {
  return getRuleContext<Java8Parser::ArrayCreationExpressionContext>(0);
}

std::vector<Java8Parser::PrimaryNoNewArray_lf_primaryContext *> Java8Parser::PrimaryContext::primaryNoNewArray_lf_primary() {
  return getRuleContexts<Java8Parser::PrimaryNoNewArray_lf_primaryContext>();
}

Java8Parser::PrimaryNoNewArray_lf_primaryContext* Java8Parser::PrimaryContext::primaryNoNewArray_lf_primary(size_t i) {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lf_primaryContext>(i);
}


size_t Java8Parser::PrimaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimary;
}

void Java8Parser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void Java8Parser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}


antlrcpp::Any Java8Parser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryContext* Java8Parser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 350, Java8Parser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1850);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 189, _ctx)) {
    case 1: {
      setState(1848);
      primaryNoNewArray_lfno_primary();
      break;
    }

    case 2: {
      setState(1849);
      arrayCreationExpression();
      break;
    }

    default:
      break;
    }
    setState(1855);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 190, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1852);
        primaryNoNewArray_lf_primary(); 
      }
      setState(1857);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 190, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArrayContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArrayContext::PrimaryNoNewArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LiteralContext* Java8Parser::PrimaryNoNewArrayContext::literal() {
  return getRuleContext<Java8Parser::LiteralContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::PrimaryNoNewArrayContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::CLASS() {
  return getToken(Java8Parser::CLASS, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArrayContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArrayContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::VOID() {
  return getToken(Java8Parser::VOID, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::THIS() {
  return getToken(Java8Parser::THIS, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::PrimaryNoNewArrayContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArrayContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ClassInstanceCreationExpressionContext* Java8Parser::PrimaryNoNewArrayContext::classInstanceCreationExpression() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpressionContext>(0);
}

Java8Parser::FieldAccessContext* Java8Parser::PrimaryNoNewArrayContext::fieldAccess() {
  return getRuleContext<Java8Parser::FieldAccessContext>(0);
}

Java8Parser::ArrayAccessContext* Java8Parser::PrimaryNoNewArrayContext::arrayAccess() {
  return getRuleContext<Java8Parser::ArrayAccessContext>(0);
}

Java8Parser::MethodInvocationContext* Java8Parser::PrimaryNoNewArrayContext::methodInvocation() {
  return getRuleContext<Java8Parser::MethodInvocationContext>(0);
}

Java8Parser::MethodReferenceContext* Java8Parser::PrimaryNoNewArrayContext::methodReference() {
  return getRuleContext<Java8Parser::MethodReferenceContext>(0);
}


size_t Java8Parser::PrimaryNoNewArrayContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray;
}

void Java8Parser::PrimaryNoNewArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray(this);
}

void Java8Parser::PrimaryNoNewArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray(this);
}


antlrcpp::Any Java8Parser::PrimaryNoNewArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArrayContext* Java8Parser::primaryNoNewArray() {
  PrimaryNoNewArrayContext *_localctx = _tracker.createInstance<PrimaryNoNewArrayContext>(_ctx, getState());
  enterRule(_localctx, 352, Java8Parser::RulePrimaryNoNewArray);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1887);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 192, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1858);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1859);
      typeName();
      setState(1864);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1860);
        match(Java8Parser::LBRACK);
        setState(1861);
        match(Java8Parser::RBRACK);
        setState(1866);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1867);
      match(Java8Parser::DOT);
      setState(1868);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1870);
      match(Java8Parser::VOID);
      setState(1871);
      match(Java8Parser::DOT);
      setState(1872);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1873);
      match(Java8Parser::THIS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1874);
      typeName();
      setState(1875);
      match(Java8Parser::DOT);
      setState(1876);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1878);
      match(Java8Parser::LPAREN);
      setState(1879);
      expression();
      setState(1880);
      match(Java8Parser::RPAREN);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1882);
      classInstanceCreationExpression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1883);
      fieldAccess();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1884);
      arrayAccess();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1885);
      methodInvocation();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1886);
      methodReference();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lf_arrayAccessContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext::PrimaryNoNewArray_lf_arrayAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lf_arrayAccess;
}

void Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lf_arrayAccess(this);
}

void Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lf_arrayAccess(this);
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray_lf_arrayAccess(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext* Java8Parser::primaryNoNewArray_lf_arrayAccess() {
  PrimaryNoNewArray_lf_arrayAccessContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lf_arrayAccessContext>(_ctx, getState());
  enterRule(_localctx, 354, Java8Parser::RulePrimaryNoNewArray_lf_arrayAccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lfno_arrayAccessContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::PrimaryNoNewArray_lfno_arrayAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LiteralContext* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::literal() {
  return getRuleContext<Java8Parser::LiteralContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::CLASS() {
  return getToken(Java8Parser::CLASS, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::VOID() {
  return getToken(Java8Parser::VOID, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::THIS() {
  return getToken(Java8Parser::THIS, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ClassInstanceCreationExpressionContext* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::classInstanceCreationExpression() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpressionContext>(0);
}

Java8Parser::FieldAccessContext* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::fieldAccess() {
  return getRuleContext<Java8Parser::FieldAccessContext>(0);
}

Java8Parser::MethodInvocationContext* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::methodInvocation() {
  return getRuleContext<Java8Parser::MethodInvocationContext>(0);
}

Java8Parser::MethodReferenceContext* Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::methodReference() {
  return getRuleContext<Java8Parser::MethodReferenceContext>(0);
}


size_t Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lfno_arrayAccess;
}

void Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lfno_arrayAccess(this);
}

void Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lfno_arrayAccess(this);
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray_lfno_arrayAccess(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext* Java8Parser::primaryNoNewArray_lfno_arrayAccess() {
  PrimaryNoNewArray_lfno_arrayAccessContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lfno_arrayAccessContext>(_ctx, getState());
  enterRule(_localctx, 356, Java8Parser::RulePrimaryNoNewArray_lfno_arrayAccess);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1919);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1891);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1892);
      typeName();
      setState(1897);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1893);
        match(Java8Parser::LBRACK);
        setState(1894);
        match(Java8Parser::RBRACK);
        setState(1899);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1900);
      match(Java8Parser::DOT);
      setState(1901);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1903);
      match(Java8Parser::VOID);
      setState(1904);
      match(Java8Parser::DOT);
      setState(1905);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1906);
      match(Java8Parser::THIS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1907);
      typeName();
      setState(1908);
      match(Java8Parser::DOT);
      setState(1909);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1911);
      match(Java8Parser::LPAREN);
      setState(1912);
      expression();
      setState(1913);
      match(Java8Parser::RPAREN);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1915);
      classInstanceCreationExpression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1916);
      fieldAccess();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1917);
      methodInvocation();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1918);
      methodReference();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lf_primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lf_primaryContext::PrimaryNoNewArray_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassInstanceCreationExpression_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primaryContext::classInstanceCreationExpression_lf_primary() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpression_lf_primaryContext>(0);
}

Java8Parser::FieldAccess_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primaryContext::fieldAccess_lf_primary() {
  return getRuleContext<Java8Parser::FieldAccess_lf_primaryContext>(0);
}

Java8Parser::ArrayAccess_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primaryContext::arrayAccess_lf_primary() {
  return getRuleContext<Java8Parser::ArrayAccess_lf_primaryContext>(0);
}

Java8Parser::MethodInvocation_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primaryContext::methodInvocation_lf_primary() {
  return getRuleContext<Java8Parser::MethodInvocation_lf_primaryContext>(0);
}

Java8Parser::MethodReference_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primaryContext::methodReference_lf_primary() {
  return getRuleContext<Java8Parser::MethodReference_lf_primaryContext>(0);
}


size_t Java8Parser::PrimaryNoNewArray_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lf_primary;
}

void Java8Parser::PrimaryNoNewArray_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lf_primary(this);
}

void Java8Parser::PrimaryNoNewArray_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lf_primary(this);
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray_lf_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray_lf_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray_lf_primaryContext* Java8Parser::primaryNoNewArray_lf_primary() {
  PrimaryNoNewArray_lf_primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 358, Java8Parser::RulePrimaryNoNewArray_lf_primary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1926);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1921);
      classInstanceCreationExpression_lf_primary();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1922);
      fieldAccess_lf_primary();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1923);
      arrayAccess_lf_primary();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1924);
      methodInvocation_lf_primary();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1925);
      methodReference_lf_primary();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary;
}

void Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(this);
}

void Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(this);
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext* Java8Parser::primaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary() {
  PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 360, Java8Parser::RulePrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ClassInstanceCreationExpression_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::classInstanceCreationExpression_lf_primary() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpression_lf_primaryContext>(0);
}

Java8Parser::FieldAccess_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::fieldAccess_lf_primary() {
  return getRuleContext<Java8Parser::FieldAccess_lf_primaryContext>(0);
}

Java8Parser::MethodInvocation_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::methodInvocation_lf_primary() {
  return getRuleContext<Java8Parser::MethodInvocation_lf_primaryContext>(0);
}

Java8Parser::MethodReference_lf_primaryContext* Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::methodReference_lf_primary() {
  return getRuleContext<Java8Parser::MethodReference_lf_primaryContext>(0);
}


size_t Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary;
}

void Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary(this);
}

void Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary(this);
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext* Java8Parser::primaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary() {
  PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 362, Java8Parser::RulePrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1934);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1930);
      classInstanceCreationExpression_lf_primary();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1931);
      fieldAccess_lf_primary();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1932);
      methodInvocation_lf_primary();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1933);
      methodReference_lf_primary();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lfno_primaryContext::PrimaryNoNewArray_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LiteralContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::literal() {
  return getRuleContext<Java8Parser::LiteralContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::CLASS() {
  return getToken(Java8Parser::CLASS, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArray_lfno_primaryContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArray_lfno_primaryContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

Java8Parser::UnannPrimitiveTypeContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::unannPrimitiveType() {
  return getRuleContext<Java8Parser::UnannPrimitiveTypeContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::VOID() {
  return getToken(Java8Parser::VOID, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::THIS() {
  return getToken(Java8Parser::THIS, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::classInstanceCreationExpression_lfno_primary() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext>(0);
}

Java8Parser::FieldAccess_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::fieldAccess_lfno_primary() {
  return getRuleContext<Java8Parser::FieldAccess_lfno_primaryContext>(0);
}

Java8Parser::ArrayAccess_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::arrayAccess_lfno_primary() {
  return getRuleContext<Java8Parser::ArrayAccess_lfno_primaryContext>(0);
}

Java8Parser::MethodInvocation_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::methodInvocation_lfno_primary() {
  return getRuleContext<Java8Parser::MethodInvocation_lfno_primaryContext>(0);
}

Java8Parser::MethodReference_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primaryContext::methodReference_lfno_primary() {
  return getRuleContext<Java8Parser::MethodReference_lfno_primaryContext>(0);
}


size_t Java8Parser::PrimaryNoNewArray_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lfno_primary;
}

void Java8Parser::PrimaryNoNewArray_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lfno_primary(this);
}

void Java8Parser::PrimaryNoNewArray_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lfno_primary(this);
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray_lfno_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray_lfno_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray_lfno_primaryContext* Java8Parser::primaryNoNewArray_lfno_primary() {
  PrimaryNoNewArray_lfno_primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 364, Java8Parser::RulePrimaryNoNewArray_lfno_primary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1976);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1936);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1937);
      typeName();
      setState(1942);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1938);
        match(Java8Parser::LBRACK);
        setState(1939);
        match(Java8Parser::RBRACK);
        setState(1944);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1945);
      match(Java8Parser::DOT);
      setState(1946);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1948);
      unannPrimitiveType();
      setState(1953);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1949);
        match(Java8Parser::LBRACK);
        setState(1950);
        match(Java8Parser::RBRACK);
        setState(1955);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1956);
      match(Java8Parser::DOT);
      setState(1957);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1959);
      match(Java8Parser::VOID);
      setState(1960);
      match(Java8Parser::DOT);
      setState(1961);
      match(Java8Parser::CLASS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1962);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1963);
      typeName();
      setState(1964);
      match(Java8Parser::DOT);
      setState(1965);
      match(Java8Parser::THIS);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1967);
      match(Java8Parser::LPAREN);
      setState(1968);
      expression();
      setState(1969);
      match(Java8Parser::RPAREN);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1971);
      classInstanceCreationExpression_lfno_primary();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1972);
      fieldAccess_lfno_primary();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1973);
      arrayAccess_lfno_primary();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1974);
      methodInvocation_lfno_primary();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1975);
      methodReference_lfno_primary();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary;
}

void Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(this);
}

void Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(this);
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext* Java8Parser::primaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary() {
  PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 366, Java8Parser::RulePrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LiteralContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::literal() {
  return getRuleContext<Java8Parser::LiteralContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::CLASS() {
  return getToken(Java8Parser::CLASS, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<tree::TerminalNode *> Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

Java8Parser::UnannPrimitiveTypeContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::unannPrimitiveType() {
  return getRuleContext<Java8Parser::UnannPrimitiveTypeContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::VOID() {
  return getToken(Java8Parser::VOID, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::THIS() {
  return getToken(Java8Parser::THIS, 0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::ExpressionContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::classInstanceCreationExpression_lfno_primary() {
  return getRuleContext<Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext>(0);
}

Java8Parser::FieldAccess_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::fieldAccess_lfno_primary() {
  return getRuleContext<Java8Parser::FieldAccess_lfno_primaryContext>(0);
}

Java8Parser::MethodInvocation_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::methodInvocation_lfno_primary() {
  return getRuleContext<Java8Parser::MethodInvocation_lfno_primaryContext>(0);
}

Java8Parser::MethodReference_lfno_primaryContext* Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::methodReference_lfno_primary() {
  return getRuleContext<Java8Parser::MethodReference_lfno_primaryContext>(0);
}


size_t Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RulePrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary;
}

void Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary(this);
}

void Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary(this);
}


antlrcpp::Any Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext* Java8Parser::primaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary() {
  PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext *_localctx = _tracker.createInstance<PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 368, Java8Parser::RulePrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2019);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1980);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1981);
      typeName();
      setState(1986);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1982);
        match(Java8Parser::LBRACK);
        setState(1983);
        match(Java8Parser::RBRACK);
        setState(1988);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1989);
      match(Java8Parser::DOT);
      setState(1990);
      match(Java8Parser::CLASS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1992);
      unannPrimitiveType();
      setState(1997);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::LBRACK) {
        setState(1993);
        match(Java8Parser::LBRACK);
        setState(1994);
        match(Java8Parser::RBRACK);
        setState(1999);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2000);
      match(Java8Parser::DOT);
      setState(2001);
      match(Java8Parser::CLASS);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2003);
      match(Java8Parser::VOID);
      setState(2004);
      match(Java8Parser::DOT);
      setState(2005);
      match(Java8Parser::CLASS);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2006);
      match(Java8Parser::THIS);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2007);
      typeName();
      setState(2008);
      match(Java8Parser::DOT);
      setState(2009);
      match(Java8Parser::THIS);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2011);
      match(Java8Parser::LPAREN);
      setState(2012);
      expression();
      setState(2013);
      match(Java8Parser::RPAREN);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2015);
      classInstanceCreationExpression_lfno_primary();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2016);
      fieldAccess_lfno_primary();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2017);
      methodInvocation_lfno_primary();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2018);
      methodReference_lfno_primary();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInstanceCreationExpressionContext ------------------------------------------------------------------

Java8Parser::ClassInstanceCreationExpressionContext::ClassInstanceCreationExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpressionContext::NEW() {
  return getToken(Java8Parser::NEW, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::ClassInstanceCreationExpressionContext::Identifier() {
  return getTokens(Java8Parser::Identifier);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpressionContext::Identifier(size_t i) {
  return getToken(Java8Parser::Identifier, i);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpressionContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpressionContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassInstanceCreationExpressionContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassInstanceCreationExpressionContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassInstanceCreationExpressionContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ClassInstanceCreationExpressionContext::DOT() {
  return getTokens(Java8Parser::DOT);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpressionContext::DOT(size_t i) {
  return getToken(Java8Parser::DOT, i);
}

Java8Parser::TypeArgumentsOrDiamondContext* Java8Parser::ClassInstanceCreationExpressionContext::typeArgumentsOrDiamond() {
  return getRuleContext<Java8Parser::TypeArgumentsOrDiamondContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::ClassInstanceCreationExpressionContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::ClassBodyContext* Java8Parser::ClassInstanceCreationExpressionContext::classBody() {
  return getRuleContext<Java8Parser::ClassBodyContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::ClassInstanceCreationExpressionContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

Java8Parser::PrimaryContext* Java8Parser::ClassInstanceCreationExpressionContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}


size_t Java8Parser::ClassInstanceCreationExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleClassInstanceCreationExpression;
}

void Java8Parser::ClassInstanceCreationExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassInstanceCreationExpression(this);
}

void Java8Parser::ClassInstanceCreationExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassInstanceCreationExpression(this);
}


antlrcpp::Any Java8Parser::ClassInstanceCreationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitClassInstanceCreationExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassInstanceCreationExpressionContext* Java8Parser::classInstanceCreationExpression() {
  ClassInstanceCreationExpressionContext *_localctx = _tracker.createInstance<ClassInstanceCreationExpressionContext>(_ctx, getState());
  enterRule(_localctx, 370, Java8Parser::RuleClassInstanceCreationExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2104);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 220, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2021);
      match(Java8Parser::NEW);
      setState(2023);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2022);
        typeArguments();
      }
      setState(2028);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(2025);
        annotation();
        setState(2030);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2031);
      match(Java8Parser::Identifier);
      setState(2042);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::DOT) {
        setState(2032);
        match(Java8Parser::DOT);
        setState(2036);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(2033);
          annotation();
          setState(2038);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2039);
        match(Java8Parser::Identifier);
        setState(2044);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2046);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2045);
        typeArgumentsOrDiamond();
      }
      setState(2048);
      match(Java8Parser::LPAREN);
      setState(2050);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2049);
        argumentList();
      }
      setState(2052);
      match(Java8Parser::RPAREN);
      setState(2054);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LBRACE) {
        setState(2053);
        classBody();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2056);
      expressionName();
      setState(2057);
      match(Java8Parser::DOT);
      setState(2058);
      match(Java8Parser::NEW);
      setState(2060);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2059);
        typeArguments();
      }
      setState(2065);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(2062);
        annotation();
        setState(2067);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2068);
      match(Java8Parser::Identifier);
      setState(2070);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2069);
        typeArgumentsOrDiamond();
      }
      setState(2072);
      match(Java8Parser::LPAREN);
      setState(2074);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2073);
        argumentList();
      }
      setState(2076);
      match(Java8Parser::RPAREN);
      setState(2078);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LBRACE) {
        setState(2077);
        classBody();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2080);
      primary();
      setState(2081);
      match(Java8Parser::DOT);
      setState(2082);
      match(Java8Parser::NEW);
      setState(2084);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2083);
        typeArguments();
      }
      setState(2089);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::AT) {
        setState(2086);
        annotation();
        setState(2091);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2092);
      match(Java8Parser::Identifier);
      setState(2094);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2093);
        typeArgumentsOrDiamond();
      }
      setState(2096);
      match(Java8Parser::LPAREN);
      setState(2098);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2097);
        argumentList();
      }
      setState(2100);
      match(Java8Parser::RPAREN);
      setState(2102);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LBRACE) {
        setState(2101);
        classBody();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInstanceCreationExpression_lf_primaryContext ------------------------------------------------------------------

Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::ClassInstanceCreationExpression_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::NEW() {
  return getToken(Java8Parser::NEW, 0);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

Java8Parser::TypeArgumentsOrDiamondContext* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::typeArgumentsOrDiamond() {
  return getRuleContext<Java8Parser::TypeArgumentsOrDiamondContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::ClassBodyContext* Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::classBody() {
  return getRuleContext<Java8Parser::ClassBodyContext>(0);
}


size_t Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleClassInstanceCreationExpression_lf_primary;
}

void Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassInstanceCreationExpression_lf_primary(this);
}

void Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassInstanceCreationExpression_lf_primary(this);
}


antlrcpp::Any Java8Parser::ClassInstanceCreationExpression_lf_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitClassInstanceCreationExpression_lf_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassInstanceCreationExpression_lf_primaryContext* Java8Parser::classInstanceCreationExpression_lf_primary() {
  ClassInstanceCreationExpression_lf_primaryContext *_localctx = _tracker.createInstance<ClassInstanceCreationExpression_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 372, Java8Parser::RuleClassInstanceCreationExpression_lf_primary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2106);
    match(Java8Parser::DOT);
    setState(2107);
    match(Java8Parser::NEW);
    setState(2109);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2108);
      typeArguments();
    }
    setState(2114);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(2111);
      annotation();
      setState(2116);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2117);
    match(Java8Parser::Identifier);
    setState(2119);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2118);
      typeArgumentsOrDiamond();
    }
    setState(2121);
    match(Java8Parser::LPAREN);
    setState(2123);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(2122);
      argumentList();
    }
    setState(2125);
    match(Java8Parser::RPAREN);
    setState(2127);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 225, _ctx)) {
    case 1: {
      setState(2126);
      classBody();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInstanceCreationExpression_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::ClassInstanceCreationExpression_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::NEW() {
  return getToken(Java8Parser::NEW, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::Identifier() {
  return getTokens(Java8Parser::Identifier);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::Identifier(size_t i) {
  return getToken(Java8Parser::Identifier, i);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::DOT() {
  return getTokens(Java8Parser::DOT);
}

tree::TerminalNode* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::DOT(size_t i) {
  return getToken(Java8Parser::DOT, i);
}

Java8Parser::TypeArgumentsOrDiamondContext* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::typeArgumentsOrDiamond() {
  return getRuleContext<Java8Parser::TypeArgumentsOrDiamondContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::ClassBodyContext* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::classBody() {
  return getRuleContext<Java8Parser::ClassBodyContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}


size_t Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleClassInstanceCreationExpression_lfno_primary;
}

void Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassInstanceCreationExpression_lfno_primary(this);
}

void Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassInstanceCreationExpression_lfno_primary(this);
}


antlrcpp::Any Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitClassInstanceCreationExpression_lfno_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext* Java8Parser::classInstanceCreationExpression_lfno_primary() {
  ClassInstanceCreationExpression_lfno_primaryContext *_localctx = _tracker.createInstance<ClassInstanceCreationExpression_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 374, Java8Parser::RuleClassInstanceCreationExpression_lfno_primary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2188);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::NEW: {
        enterOuterAlt(_localctx, 1);
        setState(2129);
        match(Java8Parser::NEW);
        setState(2131);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2130);
          typeArguments();
        }
        setState(2136);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(2133);
          annotation();
          setState(2138);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2139);
        match(Java8Parser::Identifier);
        setState(2150);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::DOT) {
          setState(2140);
          match(Java8Parser::DOT);
          setState(2144);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == Java8Parser::AT) {
            setState(2141);
            annotation();
            setState(2146);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(2147);
          match(Java8Parser::Identifier);
          setState(2152);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2154);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2153);
          typeArgumentsOrDiamond();
        }
        setState(2156);
        match(Java8Parser::LPAREN);
        setState(2158);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
          | (1ULL << Java8Parser::BYTE)
          | (1ULL << Java8Parser::CHAR)
          | (1ULL << Java8Parser::DOUBLE)
          | (1ULL << Java8Parser::FLOAT)
          | (1ULL << Java8Parser::INT)
          | (1ULL << Java8Parser::LONG)
          | (1ULL << Java8Parser::NEW)
          | (1ULL << Java8Parser::SHORT)
          | (1ULL << Java8Parser::SUPER)
          | (1ULL << Java8Parser::THIS)
          | (1ULL << Java8Parser::VOID)
          | (1ULL << Java8Parser::IntegerLiteral)
          | (1ULL << Java8Parser::FloatingPointLiteral)
          | (1ULL << Java8Parser::BooleanLiteral)
          | (1ULL << Java8Parser::CharacterLiteral)
          | (1ULL << Java8Parser::StringLiteral)
          | (1ULL << Java8Parser::NullLiteral)
          | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
          | (1ULL << (Java8Parser::TILDE - 69))
          | (1ULL << (Java8Parser::INC - 69))
          | (1ULL << (Java8Parser::DEC - 69))
          | (1ULL << (Java8Parser::ADD - 69))
          | (1ULL << (Java8Parser::SUB - 69))
          | (1ULL << (Java8Parser::Identifier - 69))
          | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
          setState(2157);
          argumentList();
        }
        setState(2160);
        match(Java8Parser::RPAREN);
        setState(2162);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 232, _ctx)) {
        case 1: {
          setState(2161);
          classBody();
          break;
        }

        default:
          break;
        }
        break;
      }

      case Java8Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(2164);
        expressionName();
        setState(2165);
        match(Java8Parser::DOT);
        setState(2166);
        match(Java8Parser::NEW);
        setState(2168);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2167);
          typeArguments();
        }
        setState(2173);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Java8Parser::AT) {
          setState(2170);
          annotation();
          setState(2175);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2176);
        match(Java8Parser::Identifier);
        setState(2178);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == Java8Parser::LT) {
          setState(2177);
          typeArgumentsOrDiamond();
        }
        setState(2180);
        match(Java8Parser::LPAREN);
        setState(2182);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
          | (1ULL << Java8Parser::BYTE)
          | (1ULL << Java8Parser::CHAR)
          | (1ULL << Java8Parser::DOUBLE)
          | (1ULL << Java8Parser::FLOAT)
          | (1ULL << Java8Parser::INT)
          | (1ULL << Java8Parser::LONG)
          | (1ULL << Java8Parser::NEW)
          | (1ULL << Java8Parser::SHORT)
          | (1ULL << Java8Parser::SUPER)
          | (1ULL << Java8Parser::THIS)
          | (1ULL << Java8Parser::VOID)
          | (1ULL << Java8Parser::IntegerLiteral)
          | (1ULL << Java8Parser::FloatingPointLiteral)
          | (1ULL << Java8Parser::BooleanLiteral)
          | (1ULL << Java8Parser::CharacterLiteral)
          | (1ULL << Java8Parser::StringLiteral)
          | (1ULL << Java8Parser::NullLiteral)
          | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
          | (1ULL << (Java8Parser::TILDE - 69))
          | (1ULL << (Java8Parser::INC - 69))
          | (1ULL << (Java8Parser::DEC - 69))
          | (1ULL << (Java8Parser::ADD - 69))
          | (1ULL << (Java8Parser::SUB - 69))
          | (1ULL << (Java8Parser::Identifier - 69))
          | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
          setState(2181);
          argumentList();
        }
        setState(2184);
        match(Java8Parser::RPAREN);
        setState(2186);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 237, _ctx)) {
        case 1: {
          setState(2185);
          classBody();
          break;
        }

        default:
          break;
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentsOrDiamondContext ------------------------------------------------------------------

Java8Parser::TypeArgumentsOrDiamondContext::TypeArgumentsOrDiamondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::TypeArgumentsContext* Java8Parser::TypeArgumentsOrDiamondContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

tree::TerminalNode* Java8Parser::TypeArgumentsOrDiamondContext::LT() {
  return getToken(Java8Parser::LT, 0);
}

tree::TerminalNode* Java8Parser::TypeArgumentsOrDiamondContext::GT() {
  return getToken(Java8Parser::GT, 0);
}


size_t Java8Parser::TypeArgumentsOrDiamondContext::getRuleIndex() const {
  return Java8Parser::RuleTypeArgumentsOrDiamond;
}

void Java8Parser::TypeArgumentsOrDiamondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArgumentsOrDiamond(this);
}

void Java8Parser::TypeArgumentsOrDiamondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArgumentsOrDiamond(this);
}


antlrcpp::Any Java8Parser::TypeArgumentsOrDiamondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitTypeArgumentsOrDiamond(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::TypeArgumentsOrDiamondContext* Java8Parser::typeArgumentsOrDiamond() {
  TypeArgumentsOrDiamondContext *_localctx = _tracker.createInstance<TypeArgumentsOrDiamondContext>(_ctx, getState());
  enterRule(_localctx, 376, Java8Parser::RuleTypeArgumentsOrDiamond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2193);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 239, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2190);
      typeArguments();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2191);
      match(Java8Parser::LT);
      setState(2192);
      match(Java8Parser::GT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldAccessContext ------------------------------------------------------------------

Java8Parser::FieldAccessContext::FieldAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimaryContext* Java8Parser::FieldAccessContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::FieldAccessContext::DOT() {
  return getTokens(Java8Parser::DOT);
}

tree::TerminalNode* Java8Parser::FieldAccessContext::DOT(size_t i) {
  return getToken(Java8Parser::DOT, i);
}

tree::TerminalNode* Java8Parser::FieldAccessContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::FieldAccessContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}

Java8Parser::TypeNameContext* Java8Parser::FieldAccessContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}


size_t Java8Parser::FieldAccessContext::getRuleIndex() const {
  return Java8Parser::RuleFieldAccess;
}

void Java8Parser::FieldAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldAccess(this);
}

void Java8Parser::FieldAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldAccess(this);
}


antlrcpp::Any Java8Parser::FieldAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitFieldAccess(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FieldAccessContext* Java8Parser::fieldAccess() {
  FieldAccessContext *_localctx = _tracker.createInstance<FieldAccessContext>(_ctx, getState());
  enterRule(_localctx, 378, Java8Parser::RuleFieldAccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2208);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 240, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2195);
      primary();
      setState(2196);
      match(Java8Parser::DOT);
      setState(2197);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2199);
      match(Java8Parser::SUPER);
      setState(2200);
      match(Java8Parser::DOT);
      setState(2201);
      match(Java8Parser::Identifier);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2202);
      typeName();
      setState(2203);
      match(Java8Parser::DOT);
      setState(2204);
      match(Java8Parser::SUPER);
      setState(2205);
      match(Java8Parser::DOT);
      setState(2206);
      match(Java8Parser::Identifier);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldAccess_lf_primaryContext ------------------------------------------------------------------

Java8Parser::FieldAccess_lf_primaryContext::FieldAccess_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::FieldAccess_lf_primaryContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::FieldAccess_lf_primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}


size_t Java8Parser::FieldAccess_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleFieldAccess_lf_primary;
}

void Java8Parser::FieldAccess_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldAccess_lf_primary(this);
}

void Java8Parser::FieldAccess_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldAccess_lf_primary(this);
}


antlrcpp::Any Java8Parser::FieldAccess_lf_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitFieldAccess_lf_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FieldAccess_lf_primaryContext* Java8Parser::fieldAccess_lf_primary() {
  FieldAccess_lf_primaryContext *_localctx = _tracker.createInstance<FieldAccess_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 380, Java8Parser::RuleFieldAccess_lf_primary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2210);
    match(Java8Parser::DOT);
    setState(2211);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldAccess_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::FieldAccess_lfno_primaryContext::FieldAccess_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::FieldAccess_lfno_primaryContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}

std::vector<tree::TerminalNode *> Java8Parser::FieldAccess_lfno_primaryContext::DOT() {
  return getTokens(Java8Parser::DOT);
}

tree::TerminalNode* Java8Parser::FieldAccess_lfno_primaryContext::DOT(size_t i) {
  return getToken(Java8Parser::DOT, i);
}

tree::TerminalNode* Java8Parser::FieldAccess_lfno_primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeNameContext* Java8Parser::FieldAccess_lfno_primaryContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}


size_t Java8Parser::FieldAccess_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleFieldAccess_lfno_primary;
}

void Java8Parser::FieldAccess_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldAccess_lfno_primary(this);
}

void Java8Parser::FieldAccess_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldAccess_lfno_primary(this);
}


antlrcpp::Any Java8Parser::FieldAccess_lfno_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitFieldAccess_lfno_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::FieldAccess_lfno_primaryContext* Java8Parser::fieldAccess_lfno_primary() {
  FieldAccess_lfno_primaryContext *_localctx = _tracker.createInstance<FieldAccess_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 382, Java8Parser::RuleFieldAccess_lfno_primary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2222);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::SUPER: {
        enterOuterAlt(_localctx, 1);
        setState(2213);
        match(Java8Parser::SUPER);
        setState(2214);
        match(Java8Parser::DOT);
        setState(2215);
        match(Java8Parser::Identifier);
        break;
      }

      case Java8Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(2216);
        typeName();
        setState(2217);
        match(Java8Parser::DOT);
        setState(2218);
        match(Java8Parser::SUPER);
        setState(2219);
        match(Java8Parser::DOT);
        setState(2220);
        match(Java8Parser::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayAccessContext ------------------------------------------------------------------

Java8Parser::ArrayAccessContext::ArrayAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionNameContext* Java8Parser::ArrayAccessContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::ArrayAccessContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::ArrayAccessContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<Java8Parser::ExpressionContext *> Java8Parser::ArrayAccessContext::expression() {
  return getRuleContexts<Java8Parser::ExpressionContext>();
}

Java8Parser::ExpressionContext* Java8Parser::ArrayAccessContext::expression(size_t i) {
  return getRuleContext<Java8Parser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ArrayAccessContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::ArrayAccessContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext* Java8Parser::ArrayAccessContext::primaryNoNewArray_lfno_arrayAccess() {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext>(0);
}

std::vector<Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext *> Java8Parser::ArrayAccessContext::primaryNoNewArray_lf_arrayAccess() {
  return getRuleContexts<Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext>();
}

Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext* Java8Parser::ArrayAccessContext::primaryNoNewArray_lf_arrayAccess(size_t i) {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext>(i);
}


size_t Java8Parser::ArrayAccessContext::getRuleIndex() const {
  return Java8Parser::RuleArrayAccess;
}

void Java8Parser::ArrayAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccess(this);
}

void Java8Parser::ArrayAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccess(this);
}


antlrcpp::Any Java8Parser::ArrayAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitArrayAccess(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ArrayAccessContext* Java8Parser::arrayAccess() {
  ArrayAccessContext *_localctx = _tracker.createInstance<ArrayAccessContext>(_ctx, getState());
  enterRule(_localctx, 384, Java8Parser::RuleArrayAccess);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2234);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 242, _ctx)) {
    case 1: {
      setState(2224);
      expressionName();
      setState(2225);
      match(Java8Parser::LBRACK);
      setState(2226);
      expression();
      setState(2227);
      match(Java8Parser::RBRACK);
      break;
    }

    case 2: {
      setState(2229);
      primaryNoNewArray_lfno_arrayAccess();
      setState(2230);
      match(Java8Parser::LBRACK);
      setState(2231);
      expression();
      setState(2232);
      match(Java8Parser::RBRACK);
      break;
    }

    default:
      break;
    }
    setState(2243);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::LBRACK) {
      setState(2236);
      primaryNoNewArray_lf_arrayAccess();
      setState(2237);
      match(Java8Parser::LBRACK);
      setState(2238);
      expression();
      setState(2239);
      match(Java8Parser::RBRACK);
      setState(2245);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayAccess_lf_primaryContext ------------------------------------------------------------------

Java8Parser::ArrayAccess_lf_primaryContext::ArrayAccess_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext* Java8Parser::ArrayAccess_lf_primaryContext::primaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary() {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::ArrayAccess_lf_primaryContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::ArrayAccess_lf_primaryContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<Java8Parser::ExpressionContext *> Java8Parser::ArrayAccess_lf_primaryContext::expression() {
  return getRuleContexts<Java8Parser::ExpressionContext>();
}

Java8Parser::ExpressionContext* Java8Parser::ArrayAccess_lf_primaryContext::expression(size_t i) {
  return getRuleContext<Java8Parser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ArrayAccess_lf_primaryContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::ArrayAccess_lf_primaryContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

std::vector<Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext *> Java8Parser::ArrayAccess_lf_primaryContext::primaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary() {
  return getRuleContexts<Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext>();
}

Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext* Java8Parser::ArrayAccess_lf_primaryContext::primaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(size_t i) {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext>(i);
}


size_t Java8Parser::ArrayAccess_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleArrayAccess_lf_primary;
}

void Java8Parser::ArrayAccess_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccess_lf_primary(this);
}

void Java8Parser::ArrayAccess_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccess_lf_primary(this);
}


antlrcpp::Any Java8Parser::ArrayAccess_lf_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitArrayAccess_lf_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ArrayAccess_lf_primaryContext* Java8Parser::arrayAccess_lf_primary() {
  ArrayAccess_lf_primaryContext *_localctx = _tracker.createInstance<ArrayAccess_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 386, Java8Parser::RuleArrayAccess_lf_primary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2246);
    primaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary();
    setState(2247);
    match(Java8Parser::LBRACK);
    setState(2248);
    expression();
    setState(2249);
    match(Java8Parser::RBRACK);
    setState(2258);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 244, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2251);
        primaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary();
        setState(2252);
        match(Java8Parser::LBRACK);
        setState(2253);
        expression();
        setState(2254);
        match(Java8Parser::RBRACK); 
      }
      setState(2260);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 244, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayAccess_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::ArrayAccess_lfno_primaryContext::ArrayAccess_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionNameContext* Java8Parser::ArrayAccess_lfno_primaryContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::ArrayAccess_lfno_primaryContext::LBRACK() {
  return getTokens(Java8Parser::LBRACK);
}

tree::TerminalNode* Java8Parser::ArrayAccess_lfno_primaryContext::LBRACK(size_t i) {
  return getToken(Java8Parser::LBRACK, i);
}

std::vector<Java8Parser::ExpressionContext *> Java8Parser::ArrayAccess_lfno_primaryContext::expression() {
  return getRuleContexts<Java8Parser::ExpressionContext>();
}

Java8Parser::ExpressionContext* Java8Parser::ArrayAccess_lfno_primaryContext::expression(size_t i) {
  return getRuleContext<Java8Parser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ArrayAccess_lfno_primaryContext::RBRACK() {
  return getTokens(Java8Parser::RBRACK);
}

tree::TerminalNode* Java8Parser::ArrayAccess_lfno_primaryContext::RBRACK(size_t i) {
  return getToken(Java8Parser::RBRACK, i);
}

Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext* Java8Parser::ArrayAccess_lfno_primaryContext::primaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary() {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext>(0);
}

std::vector<Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext *> Java8Parser::ArrayAccess_lfno_primaryContext::primaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary() {
  return getRuleContexts<Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext>();
}

Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext* Java8Parser::ArrayAccess_lfno_primaryContext::primaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(size_t i) {
  return getRuleContext<Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext>(i);
}


size_t Java8Parser::ArrayAccess_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleArrayAccess_lfno_primary;
}

void Java8Parser::ArrayAccess_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccess_lfno_primary(this);
}

void Java8Parser::ArrayAccess_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccess_lfno_primary(this);
}


antlrcpp::Any Java8Parser::ArrayAccess_lfno_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitArrayAccess_lfno_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ArrayAccess_lfno_primaryContext* Java8Parser::arrayAccess_lfno_primary() {
  ArrayAccess_lfno_primaryContext *_localctx = _tracker.createInstance<ArrayAccess_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 388, Java8Parser::RuleArrayAccess_lfno_primary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2271);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 245, _ctx)) {
    case 1: {
      setState(2261);
      expressionName();
      setState(2262);
      match(Java8Parser::LBRACK);
      setState(2263);
      expression();
      setState(2264);
      match(Java8Parser::RBRACK);
      break;
    }

    case 2: {
      setState(2266);
      primaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary();
      setState(2267);
      match(Java8Parser::LBRACK);
      setState(2268);
      expression();
      setState(2269);
      match(Java8Parser::RBRACK);
      break;
    }

    default:
      break;
    }
    setState(2280);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2273);
        primaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary();
        setState(2274);
        match(Java8Parser::LBRACK);
        setState(2275);
        expression();
        setState(2276);
        match(Java8Parser::RBRACK); 
      }
      setState(2282);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodInvocationContext ------------------------------------------------------------------

Java8Parser::MethodInvocationContext::MethodInvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::MethodNameContext* Java8Parser::MethodInvocationContext::methodName() {
  return getRuleContext<Java8Parser::MethodNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodInvocationContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::MethodInvocationContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ArgumentListContext* Java8Parser::MethodInvocationContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::MethodInvocationContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::MethodInvocationContext::DOT() {
  return getTokens(Java8Parser::DOT);
}

tree::TerminalNode* Java8Parser::MethodInvocationContext::DOT(size_t i) {
  return getToken(Java8Parser::DOT, i);
}

tree::TerminalNode* Java8Parser::MethodInvocationContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodInvocationContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::MethodInvocationContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

Java8Parser::PrimaryContext* Java8Parser::MethodInvocationContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}

tree::TerminalNode* Java8Parser::MethodInvocationContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}


size_t Java8Parser::MethodInvocationContext::getRuleIndex() const {
  return Java8Parser::RuleMethodInvocation;
}

void Java8Parser::MethodInvocationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodInvocation(this);
}

void Java8Parser::MethodInvocationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodInvocation(this);
}


antlrcpp::Any Java8Parser::MethodInvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitMethodInvocation(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodInvocationContext* Java8Parser::methodInvocation() {
  MethodInvocationContext *_localctx = _tracker.createInstance<MethodInvocationContext>(_ctx, getState());
  enterRule(_localctx, 390, Java8Parser::RuleMethodInvocation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2351);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 258, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2283);
      methodName();
      setState(2284);
      match(Java8Parser::LPAREN);
      setState(2286);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2285);
        argumentList();
      }
      setState(2288);
      match(Java8Parser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2290);
      typeName();
      setState(2291);
      match(Java8Parser::DOT);
      setState(2293);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2292);
        typeArguments();
      }
      setState(2295);
      match(Java8Parser::Identifier);
      setState(2296);
      match(Java8Parser::LPAREN);
      setState(2298);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2297);
        argumentList();
      }
      setState(2300);
      match(Java8Parser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2302);
      expressionName();
      setState(2303);
      match(Java8Parser::DOT);
      setState(2305);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2304);
        typeArguments();
      }
      setState(2307);
      match(Java8Parser::Identifier);
      setState(2308);
      match(Java8Parser::LPAREN);
      setState(2310);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2309);
        argumentList();
      }
      setState(2312);
      match(Java8Parser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2314);
      primary();
      setState(2315);
      match(Java8Parser::DOT);
      setState(2317);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2316);
        typeArguments();
      }
      setState(2319);
      match(Java8Parser::Identifier);
      setState(2320);
      match(Java8Parser::LPAREN);
      setState(2322);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2321);
        argumentList();
      }
      setState(2324);
      match(Java8Parser::RPAREN);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2326);
      match(Java8Parser::SUPER);
      setState(2327);
      match(Java8Parser::DOT);
      setState(2329);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2328);
        typeArguments();
      }
      setState(2331);
      match(Java8Parser::Identifier);
      setState(2332);
      match(Java8Parser::LPAREN);
      setState(2334);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2333);
        argumentList();
      }
      setState(2336);
      match(Java8Parser::RPAREN);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2337);
      typeName();
      setState(2338);
      match(Java8Parser::DOT);
      setState(2339);
      match(Java8Parser::SUPER);
      setState(2340);
      match(Java8Parser::DOT);
      setState(2342);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2341);
        typeArguments();
      }
      setState(2344);
      match(Java8Parser::Identifier);
      setState(2345);
      match(Java8Parser::LPAREN);
      setState(2347);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2346);
        argumentList();
      }
      setState(2349);
      match(Java8Parser::RPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodInvocation_lf_primaryContext ------------------------------------------------------------------

Java8Parser::MethodInvocation_lf_primaryContext::MethodInvocation_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::MethodInvocation_lf_primaryContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

tree::TerminalNode* Java8Parser::MethodInvocation_lf_primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::MethodInvocation_lf_primaryContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::MethodInvocation_lf_primaryContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodInvocation_lf_primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ArgumentListContext* Java8Parser::MethodInvocation_lf_primaryContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}


size_t Java8Parser::MethodInvocation_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleMethodInvocation_lf_primary;
}

void Java8Parser::MethodInvocation_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodInvocation_lf_primary(this);
}

void Java8Parser::MethodInvocation_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodInvocation_lf_primary(this);
}


antlrcpp::Any Java8Parser::MethodInvocation_lf_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitMethodInvocation_lf_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodInvocation_lf_primaryContext* Java8Parser::methodInvocation_lf_primary() {
  MethodInvocation_lf_primaryContext *_localctx = _tracker.createInstance<MethodInvocation_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 392, Java8Parser::RuleMethodInvocation_lf_primary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2353);
    match(Java8Parser::DOT);
    setState(2355);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2354);
      typeArguments();
    }
    setState(2357);
    match(Java8Parser::Identifier);
    setState(2358);
    match(Java8Parser::LPAREN);
    setState(2360);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
      | (1ULL << Java8Parser::BYTE)
      | (1ULL << Java8Parser::CHAR)
      | (1ULL << Java8Parser::DOUBLE)
      | (1ULL << Java8Parser::FLOAT)
      | (1ULL << Java8Parser::INT)
      | (1ULL << Java8Parser::LONG)
      | (1ULL << Java8Parser::NEW)
      | (1ULL << Java8Parser::SHORT)
      | (1ULL << Java8Parser::SUPER)
      | (1ULL << Java8Parser::THIS)
      | (1ULL << Java8Parser::VOID)
      | (1ULL << Java8Parser::IntegerLiteral)
      | (1ULL << Java8Parser::FloatingPointLiteral)
      | (1ULL << Java8Parser::BooleanLiteral)
      | (1ULL << Java8Parser::CharacterLiteral)
      | (1ULL << Java8Parser::StringLiteral)
      | (1ULL << Java8Parser::NullLiteral)
      | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
      | (1ULL << (Java8Parser::TILDE - 69))
      | (1ULL << (Java8Parser::INC - 69))
      | (1ULL << (Java8Parser::DEC - 69))
      | (1ULL << (Java8Parser::ADD - 69))
      | (1ULL << (Java8Parser::SUB - 69))
      | (1ULL << (Java8Parser::Identifier - 69))
      | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
      setState(2359);
      argumentList();
    }
    setState(2362);
    match(Java8Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodInvocation_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::MethodInvocation_lfno_primaryContext::MethodInvocation_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::MethodNameContext* Java8Parser::MethodInvocation_lfno_primaryContext::methodName() {
  return getRuleContext<Java8Parser::MethodNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodInvocation_lfno_primaryContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::MethodInvocation_lfno_primaryContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::ArgumentListContext* Java8Parser::MethodInvocation_lfno_primaryContext::argumentList() {
  return getRuleContext<Java8Parser::ArgumentListContext>(0);
}

Java8Parser::TypeNameContext* Java8Parser::MethodInvocation_lfno_primaryContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::MethodInvocation_lfno_primaryContext::DOT() {
  return getTokens(Java8Parser::DOT);
}

tree::TerminalNode* Java8Parser::MethodInvocation_lfno_primaryContext::DOT(size_t i) {
  return getToken(Java8Parser::DOT, i);
}

tree::TerminalNode* Java8Parser::MethodInvocation_lfno_primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodInvocation_lfno_primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::MethodInvocation_lfno_primaryContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodInvocation_lfno_primaryContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}


size_t Java8Parser::MethodInvocation_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleMethodInvocation_lfno_primary;
}

void Java8Parser::MethodInvocation_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodInvocation_lfno_primary(this);
}

void Java8Parser::MethodInvocation_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodInvocation_lfno_primary(this);
}


antlrcpp::Any Java8Parser::MethodInvocation_lfno_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitMethodInvocation_lfno_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodInvocation_lfno_primaryContext* Java8Parser::methodInvocation_lfno_primary() {
  MethodInvocation_lfno_primaryContext *_localctx = _tracker.createInstance<MethodInvocation_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 394, Java8Parser::RuleMethodInvocation_lfno_primary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2420);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 270, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2364);
      methodName();
      setState(2365);
      match(Java8Parser::LPAREN);
      setState(2367);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2366);
        argumentList();
      }
      setState(2369);
      match(Java8Parser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2371);
      typeName();
      setState(2372);
      match(Java8Parser::DOT);
      setState(2374);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2373);
        typeArguments();
      }
      setState(2376);
      match(Java8Parser::Identifier);
      setState(2377);
      match(Java8Parser::LPAREN);
      setState(2379);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2378);
        argumentList();
      }
      setState(2381);
      match(Java8Parser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2383);
      expressionName();
      setState(2384);
      match(Java8Parser::DOT);
      setState(2386);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2385);
        typeArguments();
      }
      setState(2388);
      match(Java8Parser::Identifier);
      setState(2389);
      match(Java8Parser::LPAREN);
      setState(2391);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2390);
        argumentList();
      }
      setState(2393);
      match(Java8Parser::RPAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2395);
      match(Java8Parser::SUPER);
      setState(2396);
      match(Java8Parser::DOT);
      setState(2398);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2397);
        typeArguments();
      }
      setState(2400);
      match(Java8Parser::Identifier);
      setState(2401);
      match(Java8Parser::LPAREN);
      setState(2403);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2402);
        argumentList();
      }
      setState(2405);
      match(Java8Parser::RPAREN);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2406);
      typeName();
      setState(2407);
      match(Java8Parser::DOT);
      setState(2408);
      match(Java8Parser::SUPER);
      setState(2409);
      match(Java8Parser::DOT);
      setState(2411);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2410);
        typeArguments();
      }
      setState(2413);
      match(Java8Parser::Identifier);
      setState(2414);
      match(Java8Parser::LPAREN);
      setState(2416);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::NEW)
        | (1ULL << Java8Parser::SHORT)
        | (1ULL << Java8Parser::SUPER)
        | (1ULL << Java8Parser::THIS)
        | (1ULL << Java8Parser::VOID)
        | (1ULL << Java8Parser::IntegerLiteral)
        | (1ULL << Java8Parser::FloatingPointLiteral)
        | (1ULL << Java8Parser::BooleanLiteral)
        | (1ULL << Java8Parser::CharacterLiteral)
        | (1ULL << Java8Parser::StringLiteral)
        | (1ULL << Java8Parser::NullLiteral)
        | (1ULL << Java8Parser::LPAREN))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (Java8Parser::BANG - 69))
        | (1ULL << (Java8Parser::TILDE - 69))
        | (1ULL << (Java8Parser::INC - 69))
        | (1ULL << (Java8Parser::DEC - 69))
        | (1ULL << (Java8Parser::ADD - 69))
        | (1ULL << (Java8Parser::SUB - 69))
        | (1ULL << (Java8Parser::Identifier - 69))
        | (1ULL << (Java8Parser::AT - 69)))) != 0)) {
        setState(2415);
        argumentList();
      }
      setState(2418);
      match(Java8Parser::RPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

Java8Parser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::ExpressionContext *> Java8Parser::ArgumentListContext::expression() {
  return getRuleContexts<Java8Parser::ExpressionContext>();
}

Java8Parser::ExpressionContext* Java8Parser::ArgumentListContext::expression(size_t i) {
  return getRuleContext<Java8Parser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> Java8Parser::ArgumentListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::ArgumentListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::ArgumentListContext::getRuleIndex() const {
  return Java8Parser::RuleArgumentList;
}

void Java8Parser::ArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentList(this);
}

void Java8Parser::ArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentList(this);
}


antlrcpp::Any Java8Parser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ArgumentListContext* Java8Parser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 396, Java8Parser::RuleArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2422);
    expression();
    setState(2427);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(2423);
      match(Java8Parser::COMMA);
      setState(2424);
      expression();
      setState(2429);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodReferenceContext ------------------------------------------------------------------

Java8Parser::MethodReferenceContext::MethodReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionNameContext* Java8Parser::MethodReferenceContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReferenceContext::COLONCOLON() {
  return getToken(Java8Parser::COLONCOLON, 0);
}

tree::TerminalNode* Java8Parser::MethodReferenceContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodReferenceContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ReferenceTypeContext* Java8Parser::MethodReferenceContext::referenceType() {
  return getRuleContext<Java8Parser::ReferenceTypeContext>(0);
}

Java8Parser::PrimaryContext* Java8Parser::MethodReferenceContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReferenceContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}

Java8Parser::TypeNameContext* Java8Parser::MethodReferenceContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReferenceContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

Java8Parser::ClassTypeContext* Java8Parser::MethodReferenceContext::classType() {
  return getRuleContext<Java8Parser::ClassTypeContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReferenceContext::NEW() {
  return getToken(Java8Parser::NEW, 0);
}

Java8Parser::ArrayTypeContext* Java8Parser::MethodReferenceContext::arrayType() {
  return getRuleContext<Java8Parser::ArrayTypeContext>(0);
}


size_t Java8Parser::MethodReferenceContext::getRuleIndex() const {
  return Java8Parser::RuleMethodReference;
}

void Java8Parser::MethodReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodReference(this);
}

void Java8Parser::MethodReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodReference(this);
}


antlrcpp::Any Java8Parser::MethodReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitMethodReference(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodReferenceContext* Java8Parser::methodReference() {
  MethodReferenceContext *_localctx = _tracker.createInstance<MethodReferenceContext>(_ctx, getState());
  enterRule(_localctx, 398, Java8Parser::RuleMethodReference);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2477);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 278, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2430);
      expressionName();
      setState(2431);
      match(Java8Parser::COLONCOLON);
      setState(2433);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2432);
        typeArguments();
      }
      setState(2435);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2437);
      referenceType();
      setState(2438);
      match(Java8Parser::COLONCOLON);
      setState(2440);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2439);
        typeArguments();
      }
      setState(2442);
      match(Java8Parser::Identifier);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2444);
      primary();
      setState(2445);
      match(Java8Parser::COLONCOLON);
      setState(2447);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2446);
        typeArguments();
      }
      setState(2449);
      match(Java8Parser::Identifier);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2451);
      match(Java8Parser::SUPER);
      setState(2452);
      match(Java8Parser::COLONCOLON);
      setState(2454);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2453);
        typeArguments();
      }
      setState(2456);
      match(Java8Parser::Identifier);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2457);
      typeName();
      setState(2458);
      match(Java8Parser::DOT);
      setState(2459);
      match(Java8Parser::SUPER);
      setState(2460);
      match(Java8Parser::COLONCOLON);
      setState(2462);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2461);
        typeArguments();
      }
      setState(2464);
      match(Java8Parser::Identifier);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2466);
      classType();
      setState(2467);
      match(Java8Parser::COLONCOLON);
      setState(2469);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2468);
        typeArguments();
      }
      setState(2471);
      match(Java8Parser::NEW);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2473);
      arrayType();
      setState(2474);
      match(Java8Parser::COLONCOLON);
      setState(2475);
      match(Java8Parser::NEW);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodReference_lf_primaryContext ------------------------------------------------------------------

Java8Parser::MethodReference_lf_primaryContext::MethodReference_lf_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::MethodReference_lf_primaryContext::COLONCOLON() {
  return getToken(Java8Parser::COLONCOLON, 0);
}

tree::TerminalNode* Java8Parser::MethodReference_lf_primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodReference_lf_primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}


size_t Java8Parser::MethodReference_lf_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleMethodReference_lf_primary;
}

void Java8Parser::MethodReference_lf_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodReference_lf_primary(this);
}

void Java8Parser::MethodReference_lf_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodReference_lf_primary(this);
}


antlrcpp::Any Java8Parser::MethodReference_lf_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitMethodReference_lf_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodReference_lf_primaryContext* Java8Parser::methodReference_lf_primary() {
  MethodReference_lf_primaryContext *_localctx = _tracker.createInstance<MethodReference_lf_primaryContext>(_ctx, getState());
  enterRule(_localctx, 400, Java8Parser::RuleMethodReference_lf_primary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2479);
    match(Java8Parser::COLONCOLON);
    setState(2481);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Java8Parser::LT) {
      setState(2480);
      typeArguments();
    }
    setState(2483);
    match(Java8Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodReference_lfno_primaryContext ------------------------------------------------------------------

Java8Parser::MethodReference_lfno_primaryContext::MethodReference_lfno_primaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionNameContext* Java8Parser::MethodReference_lfno_primaryContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReference_lfno_primaryContext::COLONCOLON() {
  return getToken(Java8Parser::COLONCOLON, 0);
}

tree::TerminalNode* Java8Parser::MethodReference_lfno_primaryContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

Java8Parser::TypeArgumentsContext* Java8Parser::MethodReference_lfno_primaryContext::typeArguments() {
  return getRuleContext<Java8Parser::TypeArgumentsContext>(0);
}

Java8Parser::ReferenceTypeContext* Java8Parser::MethodReference_lfno_primaryContext::referenceType() {
  return getRuleContext<Java8Parser::ReferenceTypeContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReference_lfno_primaryContext::SUPER() {
  return getToken(Java8Parser::SUPER, 0);
}

Java8Parser::TypeNameContext* Java8Parser::MethodReference_lfno_primaryContext::typeName() {
  return getRuleContext<Java8Parser::TypeNameContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReference_lfno_primaryContext::DOT() {
  return getToken(Java8Parser::DOT, 0);
}

Java8Parser::ClassTypeContext* Java8Parser::MethodReference_lfno_primaryContext::classType() {
  return getRuleContext<Java8Parser::ClassTypeContext>(0);
}

tree::TerminalNode* Java8Parser::MethodReference_lfno_primaryContext::NEW() {
  return getToken(Java8Parser::NEW, 0);
}

Java8Parser::ArrayTypeContext* Java8Parser::MethodReference_lfno_primaryContext::arrayType() {
  return getRuleContext<Java8Parser::ArrayTypeContext>(0);
}


size_t Java8Parser::MethodReference_lfno_primaryContext::getRuleIndex() const {
  return Java8Parser::RuleMethodReference_lfno_primary;
}

void Java8Parser::MethodReference_lfno_primaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodReference_lfno_primary(this);
}

void Java8Parser::MethodReference_lfno_primaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodReference_lfno_primary(this);
}


antlrcpp::Any Java8Parser::MethodReference_lfno_primaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitMethodReference_lfno_primary(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::MethodReference_lfno_primaryContext* Java8Parser::methodReference_lfno_primary() {
  MethodReference_lfno_primaryContext *_localctx = _tracker.createInstance<MethodReference_lfno_primaryContext>(_ctx, getState());
  enterRule(_localctx, 402, Java8Parser::RuleMethodReference_lfno_primary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2525);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 285, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2485);
      expressionName();
      setState(2486);
      match(Java8Parser::COLONCOLON);
      setState(2488);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2487);
        typeArguments();
      }
      setState(2490);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2492);
      referenceType();
      setState(2493);
      match(Java8Parser::COLONCOLON);
      setState(2495);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2494);
        typeArguments();
      }
      setState(2497);
      match(Java8Parser::Identifier);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2499);
      match(Java8Parser::SUPER);
      setState(2500);
      match(Java8Parser::COLONCOLON);
      setState(2502);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2501);
        typeArguments();
      }
      setState(2504);
      match(Java8Parser::Identifier);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2505);
      typeName();
      setState(2506);
      match(Java8Parser::DOT);
      setState(2507);
      match(Java8Parser::SUPER);
      setState(2508);
      match(Java8Parser::COLONCOLON);
      setState(2510);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2509);
        typeArguments();
      }
      setState(2512);
      match(Java8Parser::Identifier);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2514);
      classType();
      setState(2515);
      match(Java8Parser::COLONCOLON);
      setState(2517);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Java8Parser::LT) {
        setState(2516);
        typeArguments();
      }
      setState(2519);
      match(Java8Parser::NEW);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2521);
      arrayType();
      setState(2522);
      match(Java8Parser::COLONCOLON);
      setState(2523);
      match(Java8Parser::NEW);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayCreationExpressionContext ------------------------------------------------------------------

Java8Parser::ArrayCreationExpressionContext::ArrayCreationExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::ArrayCreationExpressionContext::NEW() {
  return getToken(Java8Parser::NEW, 0);
}

Java8Parser::PrimitiveTypeContext* Java8Parser::ArrayCreationExpressionContext::primitiveType() {
  return getRuleContext<Java8Parser::PrimitiveTypeContext>(0);
}

Java8Parser::DimExprsContext* Java8Parser::ArrayCreationExpressionContext::dimExprs() {
  return getRuleContext<Java8Parser::DimExprsContext>(0);
}

Java8Parser::DimsContext* Java8Parser::ArrayCreationExpressionContext::dims() {
  return getRuleContext<Java8Parser::DimsContext>(0);
}

Java8Parser::ClassOrInterfaceTypeContext* Java8Parser::ArrayCreationExpressionContext::classOrInterfaceType() {
  return getRuleContext<Java8Parser::ClassOrInterfaceTypeContext>(0);
}

Java8Parser::ArrayInitializerContext* Java8Parser::ArrayCreationExpressionContext::arrayInitializer() {
  return getRuleContext<Java8Parser::ArrayInitializerContext>(0);
}


size_t Java8Parser::ArrayCreationExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleArrayCreationExpression;
}

void Java8Parser::ArrayCreationExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayCreationExpression(this);
}

void Java8Parser::ArrayCreationExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayCreationExpression(this);
}


antlrcpp::Any Java8Parser::ArrayCreationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitArrayCreationExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ArrayCreationExpressionContext* Java8Parser::arrayCreationExpression() {
  ArrayCreationExpressionContext *_localctx = _tracker.createInstance<ArrayCreationExpressionContext>(_ctx, getState());
  enterRule(_localctx, 404, Java8Parser::RuleArrayCreationExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2549);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 288, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2527);
      match(Java8Parser::NEW);
      setState(2528);
      primitiveType();
      setState(2529);
      dimExprs();
      setState(2531);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 286, _ctx)) {
      case 1: {
        setState(2530);
        dims();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2533);
      match(Java8Parser::NEW);
      setState(2534);
      classOrInterfaceType();
      setState(2535);
      dimExprs();
      setState(2537);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 287, _ctx)) {
      case 1: {
        setState(2536);
        dims();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2539);
      match(Java8Parser::NEW);
      setState(2540);
      primitiveType();
      setState(2541);
      dims();
      setState(2542);
      arrayInitializer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2544);
      match(Java8Parser::NEW);
      setState(2545);
      classOrInterfaceType();
      setState(2546);
      dims();
      setState(2547);
      arrayInitializer();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DimExprsContext ------------------------------------------------------------------

Java8Parser::DimExprsContext::DimExprsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Java8Parser::DimExprContext *> Java8Parser::DimExprsContext::dimExpr() {
  return getRuleContexts<Java8Parser::DimExprContext>();
}

Java8Parser::DimExprContext* Java8Parser::DimExprsContext::dimExpr(size_t i) {
  return getRuleContext<Java8Parser::DimExprContext>(i);
}


size_t Java8Parser::DimExprsContext::getRuleIndex() const {
  return Java8Parser::RuleDimExprs;
}

void Java8Parser::DimExprsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDimExprs(this);
}

void Java8Parser::DimExprsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDimExprs(this);
}


antlrcpp::Any Java8Parser::DimExprsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitDimExprs(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::DimExprsContext* Java8Parser::dimExprs() {
  DimExprsContext *_localctx = _tracker.createInstance<DimExprsContext>(_ctx, getState());
  enterRule(_localctx, 406, Java8Parser::RuleDimExprs);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2551);
    dimExpr();
    setState(2555);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 289, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2552);
        dimExpr(); 
      }
      setState(2557);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 289, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DimExprContext ------------------------------------------------------------------

Java8Parser::DimExprContext::DimExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::DimExprContext::LBRACK() {
  return getToken(Java8Parser::LBRACK, 0);
}

Java8Parser::ExpressionContext* Java8Parser::DimExprContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::DimExprContext::RBRACK() {
  return getToken(Java8Parser::RBRACK, 0);
}

std::vector<Java8Parser::AnnotationContext *> Java8Parser::DimExprContext::annotation() {
  return getRuleContexts<Java8Parser::AnnotationContext>();
}

Java8Parser::AnnotationContext* Java8Parser::DimExprContext::annotation(size_t i) {
  return getRuleContext<Java8Parser::AnnotationContext>(i);
}


size_t Java8Parser::DimExprContext::getRuleIndex() const {
  return Java8Parser::RuleDimExpr;
}

void Java8Parser::DimExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDimExpr(this);
}

void Java8Parser::DimExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDimExpr(this);
}


antlrcpp::Any Java8Parser::DimExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitDimExpr(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::DimExprContext* Java8Parser::dimExpr() {
  DimExprContext *_localctx = _tracker.createInstance<DimExprContext>(_ctx, getState());
  enterRule(_localctx, 408, Java8Parser::RuleDimExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2561);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::AT) {
      setState(2558);
      annotation();
      setState(2563);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2564);
    match(Java8Parser::LBRACK);
    setState(2565);
    expression();
    setState(2566);
    match(Java8Parser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantExpressionContext ------------------------------------------------------------------

Java8Parser::ConstantExpressionContext::ConstantExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::ConstantExpressionContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}


size_t Java8Parser::ConstantExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleConstantExpression;
}

void Java8Parser::ConstantExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantExpression(this);
}

void Java8Parser::ConstantExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantExpression(this);
}


antlrcpp::Any Java8Parser::ConstantExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitConstantExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConstantExpressionContext* Java8Parser::constantExpression() {
  ConstantExpressionContext *_localctx = _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 410, Java8Parser::RuleConstantExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2568);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

Java8Parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LambdaExpressionContext* Java8Parser::ExpressionContext::lambdaExpression() {
  return getRuleContext<Java8Parser::LambdaExpressionContext>(0);
}

Java8Parser::AssignmentExpressionContext* Java8Parser::ExpressionContext::assignmentExpression() {
  return getRuleContext<Java8Parser::AssignmentExpressionContext>(0);
}


size_t Java8Parser::ExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleExpression;
}

void Java8Parser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void Java8Parser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any Java8Parser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ExpressionContext* Java8Parser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 412, Java8Parser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2572);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 291, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2570);
      lambdaExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2571);
      assignmentExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaExpressionContext ------------------------------------------------------------------

Java8Parser::LambdaExpressionContext::LambdaExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LambdaParametersContext* Java8Parser::LambdaExpressionContext::lambdaParameters() {
  return getRuleContext<Java8Parser::LambdaParametersContext>(0);
}

tree::TerminalNode* Java8Parser::LambdaExpressionContext::ARROW() {
  return getToken(Java8Parser::ARROW, 0);
}

Java8Parser::LambdaBodyContext* Java8Parser::LambdaExpressionContext::lambdaBody() {
  return getRuleContext<Java8Parser::LambdaBodyContext>(0);
}


size_t Java8Parser::LambdaExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleLambdaExpression;
}

void Java8Parser::LambdaExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaExpression(this);
}

void Java8Parser::LambdaExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaExpression(this);
}


antlrcpp::Any Java8Parser::LambdaExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitLambdaExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LambdaExpressionContext* Java8Parser::lambdaExpression() {
  LambdaExpressionContext *_localctx = _tracker.createInstance<LambdaExpressionContext>(_ctx, getState());
  enterRule(_localctx, 414, Java8Parser::RuleLambdaExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2574);
    lambdaParameters();
    setState(2575);
    match(Java8Parser::ARROW);
    setState(2576);
    lambdaBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaParametersContext ------------------------------------------------------------------

Java8Parser::LambdaParametersContext::LambdaParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::LambdaParametersContext::Identifier() {
  return getToken(Java8Parser::Identifier, 0);
}

tree::TerminalNode* Java8Parser::LambdaParametersContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

tree::TerminalNode* Java8Parser::LambdaParametersContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::FormalParameterListContext* Java8Parser::LambdaParametersContext::formalParameterList() {
  return getRuleContext<Java8Parser::FormalParameterListContext>(0);
}

Java8Parser::InferredFormalParameterListContext* Java8Parser::LambdaParametersContext::inferredFormalParameterList() {
  return getRuleContext<Java8Parser::InferredFormalParameterListContext>(0);
}


size_t Java8Parser::LambdaParametersContext::getRuleIndex() const {
  return Java8Parser::RuleLambdaParameters;
}

void Java8Parser::LambdaParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaParameters(this);
}

void Java8Parser::LambdaParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaParameters(this);
}


antlrcpp::Any Java8Parser::LambdaParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitLambdaParameters(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LambdaParametersContext* Java8Parser::lambdaParameters() {
  LambdaParametersContext *_localctx = _tracker.createInstance<LambdaParametersContext>(_ctx, getState());
  enterRule(_localctx, 416, Java8Parser::RuleLambdaParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2588);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 293, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2578);
      match(Java8Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2579);
      match(Java8Parser::LPAREN);
      setState(2581);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Java8Parser::BOOLEAN)
        | (1ULL << Java8Parser::BYTE)
        | (1ULL << Java8Parser::CHAR)
        | (1ULL << Java8Parser::DOUBLE)
        | (1ULL << Java8Parser::FINAL)
        | (1ULL << Java8Parser::FLOAT)
        | (1ULL << Java8Parser::INT)
        | (1ULL << Java8Parser::LONG)
        | (1ULL << Java8Parser::SHORT))) != 0) || _la == Java8Parser::Identifier

      || _la == Java8Parser::AT) {
        setState(2580);
        formalParameterList();
      }
      setState(2583);
      match(Java8Parser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2584);
      match(Java8Parser::LPAREN);
      setState(2585);
      inferredFormalParameterList();
      setState(2586);
      match(Java8Parser::RPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InferredFormalParameterListContext ------------------------------------------------------------------

Java8Parser::InferredFormalParameterListContext::InferredFormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> Java8Parser::InferredFormalParameterListContext::Identifier() {
  return getTokens(Java8Parser::Identifier);
}

tree::TerminalNode* Java8Parser::InferredFormalParameterListContext::Identifier(size_t i) {
  return getToken(Java8Parser::Identifier, i);
}

std::vector<tree::TerminalNode *> Java8Parser::InferredFormalParameterListContext::COMMA() {
  return getTokens(Java8Parser::COMMA);
}

tree::TerminalNode* Java8Parser::InferredFormalParameterListContext::COMMA(size_t i) {
  return getToken(Java8Parser::COMMA, i);
}


size_t Java8Parser::InferredFormalParameterListContext::getRuleIndex() const {
  return Java8Parser::RuleInferredFormalParameterList;
}

void Java8Parser::InferredFormalParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInferredFormalParameterList(this);
}

void Java8Parser::InferredFormalParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInferredFormalParameterList(this);
}


antlrcpp::Any Java8Parser::InferredFormalParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitInferredFormalParameterList(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::InferredFormalParameterListContext* Java8Parser::inferredFormalParameterList() {
  InferredFormalParameterListContext *_localctx = _tracker.createInstance<InferredFormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 418, Java8Parser::RuleInferredFormalParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2590);
    match(Java8Parser::Identifier);
    setState(2595);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Java8Parser::COMMA) {
      setState(2591);
      match(Java8Parser::COMMA);
      setState(2592);
      match(Java8Parser::Identifier);
      setState(2597);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaBodyContext ------------------------------------------------------------------

Java8Parser::LambdaBodyContext::LambdaBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionContext* Java8Parser::LambdaBodyContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

Java8Parser::BlockContext* Java8Parser::LambdaBodyContext::block() {
  return getRuleContext<Java8Parser::BlockContext>(0);
}


size_t Java8Parser::LambdaBodyContext::getRuleIndex() const {
  return Java8Parser::RuleLambdaBody;
}

void Java8Parser::LambdaBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaBody(this);
}

void Java8Parser::LambdaBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaBody(this);
}


antlrcpp::Any Java8Parser::LambdaBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitLambdaBody(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LambdaBodyContext* Java8Parser::lambdaBody() {
  LambdaBodyContext *_localctx = _tracker.createInstance<LambdaBodyContext>(_ctx, getState());
  enterRule(_localctx, 420, Java8Parser::RuleLambdaBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2600);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::NEW:
      case Java8Parser::SHORT:
      case Java8Parser::SUPER:
      case Java8Parser::THIS:
      case Java8Parser::VOID:
      case Java8Parser::IntegerLiteral:
      case Java8Parser::FloatingPointLiteral:
      case Java8Parser::BooleanLiteral:
      case Java8Parser::CharacterLiteral:
      case Java8Parser::StringLiteral:
      case Java8Parser::NullLiteral:
      case Java8Parser::LPAREN:
      case Java8Parser::BANG:
      case Java8Parser::TILDE:
      case Java8Parser::INC:
      case Java8Parser::DEC:
      case Java8Parser::ADD:
      case Java8Parser::SUB:
      case Java8Parser::Identifier:
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 1);
        setState(2598);
        expression();
        break;
      }

      case Java8Parser::LBRACE: {
        enterOuterAlt(_localctx, 2);
        setState(2599);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

Java8Parser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConditionalExpressionContext* Java8Parser::AssignmentExpressionContext::conditionalExpression() {
  return getRuleContext<Java8Parser::ConditionalExpressionContext>(0);
}

Java8Parser::AssignmentContext* Java8Parser::AssignmentExpressionContext::assignment() {
  return getRuleContext<Java8Parser::AssignmentContext>(0);
}


size_t Java8Parser::AssignmentExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleAssignmentExpression;
}

void Java8Parser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}

void Java8Parser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}


antlrcpp::Any Java8Parser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AssignmentExpressionContext* Java8Parser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 422, Java8Parser::RuleAssignmentExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2604);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 296, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2602);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2603);
      assignment();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

Java8Parser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::LeftHandSideContext* Java8Parser::AssignmentContext::leftHandSide() {
  return getRuleContext<Java8Parser::LeftHandSideContext>(0);
}

Java8Parser::AssignmentOperatorContext* Java8Parser::AssignmentContext::assignmentOperator() {
  return getRuleContext<Java8Parser::AssignmentOperatorContext>(0);
}

Java8Parser::ExpressionContext* Java8Parser::AssignmentContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}


size_t Java8Parser::AssignmentContext::getRuleIndex() const {
  return Java8Parser::RuleAssignment;
}

void Java8Parser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void Java8Parser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


antlrcpp::Any Java8Parser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AssignmentContext* Java8Parser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 424, Java8Parser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2606);
    leftHandSide();
    setState(2607);
    assignmentOperator();
    setState(2608);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeftHandSideContext ------------------------------------------------------------------

Java8Parser::LeftHandSideContext::LeftHandSideContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExpressionNameContext* Java8Parser::LeftHandSideContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

Java8Parser::FieldAccessContext* Java8Parser::LeftHandSideContext::fieldAccess() {
  return getRuleContext<Java8Parser::FieldAccessContext>(0);
}

Java8Parser::ArrayAccessContext* Java8Parser::LeftHandSideContext::arrayAccess() {
  return getRuleContext<Java8Parser::ArrayAccessContext>(0);
}


size_t Java8Parser::LeftHandSideContext::getRuleIndex() const {
  return Java8Parser::RuleLeftHandSide;
}

void Java8Parser::LeftHandSideContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLeftHandSide(this);
}

void Java8Parser::LeftHandSideContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLeftHandSide(this);
}


antlrcpp::Any Java8Parser::LeftHandSideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitLeftHandSide(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::LeftHandSideContext* Java8Parser::leftHandSide() {
  LeftHandSideContext *_localctx = _tracker.createInstance<LeftHandSideContext>(_ctx, getState());
  enterRule(_localctx, 426, Java8Parser::RuleLeftHandSide);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2613);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 297, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2610);
      expressionName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2611);
      fieldAccess();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2612);
      arrayAccess();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

Java8Parser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::ASSIGN() {
  return getToken(Java8Parser::ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::MUL_ASSIGN() {
  return getToken(Java8Parser::MUL_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::DIV_ASSIGN() {
  return getToken(Java8Parser::DIV_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::MOD_ASSIGN() {
  return getToken(Java8Parser::MOD_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::ADD_ASSIGN() {
  return getToken(Java8Parser::ADD_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::SUB_ASSIGN() {
  return getToken(Java8Parser::SUB_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::LSHIFT_ASSIGN() {
  return getToken(Java8Parser::LSHIFT_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::RSHIFT_ASSIGN() {
  return getToken(Java8Parser::RSHIFT_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::URSHIFT_ASSIGN() {
  return getToken(Java8Parser::URSHIFT_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::AND_ASSIGN() {
  return getToken(Java8Parser::AND_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::XOR_ASSIGN() {
  return getToken(Java8Parser::XOR_ASSIGN, 0);
}

tree::TerminalNode* Java8Parser::AssignmentOperatorContext::OR_ASSIGN() {
  return getToken(Java8Parser::OR_ASSIGN, 0);
}


size_t Java8Parser::AssignmentOperatorContext::getRuleIndex() const {
  return Java8Parser::RuleAssignmentOperator;
}

void Java8Parser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void Java8Parser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}


antlrcpp::Any Java8Parser::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::AssignmentOperatorContext* Java8Parser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 428, Java8Parser::RuleAssignmentOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2615);
    _la = _input->LA(1);
    if (!(((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (Java8Parser::ASSIGN - 66))
      | (1ULL << (Java8Parser::ADD_ASSIGN - 66))
      | (1ULL << (Java8Parser::SUB_ASSIGN - 66))
      | (1ULL << (Java8Parser::MUL_ASSIGN - 66))
      | (1ULL << (Java8Parser::DIV_ASSIGN - 66))
      | (1ULL << (Java8Parser::AND_ASSIGN - 66))
      | (1ULL << (Java8Parser::OR_ASSIGN - 66))
      | (1ULL << (Java8Parser::XOR_ASSIGN - 66))
      | (1ULL << (Java8Parser::MOD_ASSIGN - 66))
      | (1ULL << (Java8Parser::LSHIFT_ASSIGN - 66))
      | (1ULL << (Java8Parser::RSHIFT_ASSIGN - 66))
      | (1ULL << (Java8Parser::URSHIFT_ASSIGN - 66)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

Java8Parser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConditionalOrExpressionContext* Java8Parser::ConditionalExpressionContext::conditionalOrExpression() {
  return getRuleContext<Java8Parser::ConditionalOrExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::ConditionalExpressionContext::QUESTION() {
  return getToken(Java8Parser::QUESTION, 0);
}

Java8Parser::ExpressionContext* Java8Parser::ConditionalExpressionContext::expression() {
  return getRuleContext<Java8Parser::ExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::ConditionalExpressionContext::COLON() {
  return getToken(Java8Parser::COLON, 0);
}

Java8Parser::ConditionalExpressionContext* Java8Parser::ConditionalExpressionContext::conditionalExpression() {
  return getRuleContext<Java8Parser::ConditionalExpressionContext>(0);
}


size_t Java8Parser::ConditionalExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleConditionalExpression;
}

void Java8Parser::ConditionalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpression(this);
}

void Java8Parser::ConditionalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpression(this);
}


antlrcpp::Any Java8Parser::ConditionalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitConditionalExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::ConditionalExpressionContext* Java8Parser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 430, Java8Parser::RuleConditionalExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2624);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 298, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2617);
      conditionalOrExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2618);
      conditionalOrExpression(0);
      setState(2619);
      match(Java8Parser::QUESTION);
      setState(2620);
      expression();
      setState(2621);
      match(Java8Parser::COLON);
      setState(2622);
      conditionalExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalOrExpressionContext ------------------------------------------------------------------

Java8Parser::ConditionalOrExpressionContext::ConditionalOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ConditionalAndExpressionContext* Java8Parser::ConditionalOrExpressionContext::conditionalAndExpression() {
  return getRuleContext<Java8Parser::ConditionalAndExpressionContext>(0);
}

Java8Parser::ConditionalOrExpressionContext* Java8Parser::ConditionalOrExpressionContext::conditionalOrExpression() {
  return getRuleContext<Java8Parser::ConditionalOrExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::ConditionalOrExpressionContext::OR() {
  return getToken(Java8Parser::OR, 0);
}


size_t Java8Parser::ConditionalOrExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleConditionalOrExpression;
}

void Java8Parser::ConditionalOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalOrExpression(this);
}

void Java8Parser::ConditionalOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalOrExpression(this);
}


antlrcpp::Any Java8Parser::ConditionalOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitConditionalOrExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::ConditionalOrExpressionContext* Java8Parser::conditionalOrExpression() {
   return conditionalOrExpression(0);
}

Java8Parser::ConditionalOrExpressionContext* Java8Parser::conditionalOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::ConditionalOrExpressionContext *_localctx = _tracker.createInstance<ConditionalOrExpressionContext>(_ctx, parentState);
  Java8Parser::ConditionalOrExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 432;
  enterRecursionRule(_localctx, 432, Java8Parser::RuleConditionalOrExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2627);
    conditionalAndExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2634);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 299, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ConditionalOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleConditionalOrExpression);
        setState(2629);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2630);
        match(Java8Parser::OR);
        setState(2631);
        conditionalAndExpression(0); 
      }
      setState(2636);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 299, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConditionalAndExpressionContext ------------------------------------------------------------------

Java8Parser::ConditionalAndExpressionContext::ConditionalAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::InclusiveOrExpressionContext* Java8Parser::ConditionalAndExpressionContext::inclusiveOrExpression() {
  return getRuleContext<Java8Parser::InclusiveOrExpressionContext>(0);
}

Java8Parser::ConditionalAndExpressionContext* Java8Parser::ConditionalAndExpressionContext::conditionalAndExpression() {
  return getRuleContext<Java8Parser::ConditionalAndExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::ConditionalAndExpressionContext::AND() {
  return getToken(Java8Parser::AND, 0);
}


size_t Java8Parser::ConditionalAndExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleConditionalAndExpression;
}

void Java8Parser::ConditionalAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalAndExpression(this);
}

void Java8Parser::ConditionalAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalAndExpression(this);
}


antlrcpp::Any Java8Parser::ConditionalAndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitConditionalAndExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::ConditionalAndExpressionContext* Java8Parser::conditionalAndExpression() {
   return conditionalAndExpression(0);
}

Java8Parser::ConditionalAndExpressionContext* Java8Parser::conditionalAndExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::ConditionalAndExpressionContext *_localctx = _tracker.createInstance<ConditionalAndExpressionContext>(_ctx, parentState);
  Java8Parser::ConditionalAndExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 434;
  enterRecursionRule(_localctx, 434, Java8Parser::RuleConditionalAndExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2638);
    inclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2645);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 300, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ConditionalAndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleConditionalAndExpression);
        setState(2640);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2641);
        match(Java8Parser::AND);
        setState(2642);
        inclusiveOrExpression(0); 
      }
      setState(2647);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 300, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InclusiveOrExpressionContext ------------------------------------------------------------------

Java8Parser::InclusiveOrExpressionContext::InclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ExclusiveOrExpressionContext* Java8Parser::InclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContext<Java8Parser::ExclusiveOrExpressionContext>(0);
}

Java8Parser::InclusiveOrExpressionContext* Java8Parser::InclusiveOrExpressionContext::inclusiveOrExpression() {
  return getRuleContext<Java8Parser::InclusiveOrExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::InclusiveOrExpressionContext::BITOR() {
  return getToken(Java8Parser::BITOR, 0);
}


size_t Java8Parser::InclusiveOrExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleInclusiveOrExpression;
}

void Java8Parser::InclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclusiveOrExpression(this);
}

void Java8Parser::InclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclusiveOrExpression(this);
}


antlrcpp::Any Java8Parser::InclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitInclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::InclusiveOrExpressionContext* Java8Parser::inclusiveOrExpression() {
   return inclusiveOrExpression(0);
}

Java8Parser::InclusiveOrExpressionContext* Java8Parser::inclusiveOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::InclusiveOrExpressionContext *_localctx = _tracker.createInstance<InclusiveOrExpressionContext>(_ctx, parentState);
  Java8Parser::InclusiveOrExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 436;
  enterRecursionRule(_localctx, 436, Java8Parser::RuleInclusiveOrExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2649);
    exclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2656);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 301, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInclusiveOrExpression);
        setState(2651);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2652);
        match(Java8Parser::BITOR);
        setState(2653);
        exclusiveOrExpression(0); 
      }
      setState(2658);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 301, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExclusiveOrExpressionContext ------------------------------------------------------------------

Java8Parser::ExclusiveOrExpressionContext::ExclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AndExpressionContext* Java8Parser::ExclusiveOrExpressionContext::andExpression() {
  return getRuleContext<Java8Parser::AndExpressionContext>(0);
}

Java8Parser::ExclusiveOrExpressionContext* Java8Parser::ExclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContext<Java8Parser::ExclusiveOrExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::ExclusiveOrExpressionContext::CARET() {
  return getToken(Java8Parser::CARET, 0);
}


size_t Java8Parser::ExclusiveOrExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleExclusiveOrExpression;
}

void Java8Parser::ExclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExclusiveOrExpression(this);
}

void Java8Parser::ExclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExclusiveOrExpression(this);
}


antlrcpp::Any Java8Parser::ExclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitExclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::ExclusiveOrExpressionContext* Java8Parser::exclusiveOrExpression() {
   return exclusiveOrExpression(0);
}

Java8Parser::ExclusiveOrExpressionContext* Java8Parser::exclusiveOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::ExclusiveOrExpressionContext *_localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(_ctx, parentState);
  Java8Parser::ExclusiveOrExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 438;
  enterRecursionRule(_localctx, 438, Java8Parser::RuleExclusiveOrExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2660);
    andExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2667);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 302, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExclusiveOrExpression);
        setState(2662);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2663);
        match(Java8Parser::CARET);
        setState(2664);
        andExpression(0); 
      }
      setState(2669);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 302, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AndExpressionContext ------------------------------------------------------------------

Java8Parser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::EqualityExpressionContext* Java8Parser::AndExpressionContext::equalityExpression() {
  return getRuleContext<Java8Parser::EqualityExpressionContext>(0);
}

Java8Parser::AndExpressionContext* Java8Parser::AndExpressionContext::andExpression() {
  return getRuleContext<Java8Parser::AndExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::AndExpressionContext::BITAND() {
  return getToken(Java8Parser::BITAND, 0);
}


size_t Java8Parser::AndExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleAndExpression;
}

void Java8Parser::AndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExpression(this);
}

void Java8Parser::AndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExpression(this);
}


antlrcpp::Any Java8Parser::AndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitAndExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::AndExpressionContext* Java8Parser::andExpression() {
   return andExpression(0);
}

Java8Parser::AndExpressionContext* Java8Parser::andExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, parentState);
  Java8Parser::AndExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 440;
  enterRecursionRule(_localctx, 440, Java8Parser::RuleAndExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2671);
    equalityExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2678);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 303, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAndExpression);
        setState(2673);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2674);
        match(Java8Parser::BITAND);
        setState(2675);
        equalityExpression(0); 
      }
      setState(2680);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 303, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityExpressionContext ------------------------------------------------------------------

Java8Parser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::RelationalExpressionContext* Java8Parser::EqualityExpressionContext::relationalExpression() {
  return getRuleContext<Java8Parser::RelationalExpressionContext>(0);
}

Java8Parser::EqualityExpressionContext* Java8Parser::EqualityExpressionContext::equalityExpression() {
  return getRuleContext<Java8Parser::EqualityExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::EqualityExpressionContext::EQUAL() {
  return getToken(Java8Parser::EQUAL, 0);
}

tree::TerminalNode* Java8Parser::EqualityExpressionContext::NOTEQUAL() {
  return getToken(Java8Parser::NOTEQUAL, 0);
}


size_t Java8Parser::EqualityExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleEqualityExpression;
}

void Java8Parser::EqualityExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpression(this);
}

void Java8Parser::EqualityExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpression(this);
}


antlrcpp::Any Java8Parser::EqualityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitEqualityExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::EqualityExpressionContext* Java8Parser::equalityExpression() {
   return equalityExpression(0);
}

Java8Parser::EqualityExpressionContext* Java8Parser::equalityExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, parentState);
  Java8Parser::EqualityExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 442;
  enterRecursionRule(_localctx, 442, Java8Parser::RuleEqualityExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2682);
    relationalExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2692);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 305, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2690);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 304, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(2684);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2685);
          match(Java8Parser::EQUAL);
          setState(2686);
          relationalExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(2687);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2688);
          match(Java8Parser::NOTEQUAL);
          setState(2689);
          relationalExpression(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(2694);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 305, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelationalExpressionContext ------------------------------------------------------------------

Java8Parser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::ShiftExpressionContext* Java8Parser::RelationalExpressionContext::shiftExpression() {
  return getRuleContext<Java8Parser::ShiftExpressionContext>(0);
}

Java8Parser::RelationalExpressionContext* Java8Parser::RelationalExpressionContext::relationalExpression() {
  return getRuleContext<Java8Parser::RelationalExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::RelationalExpressionContext::LT() {
  return getToken(Java8Parser::LT, 0);
}

tree::TerminalNode* Java8Parser::RelationalExpressionContext::GT() {
  return getToken(Java8Parser::GT, 0);
}

tree::TerminalNode* Java8Parser::RelationalExpressionContext::LE() {
  return getToken(Java8Parser::LE, 0);
}

tree::TerminalNode* Java8Parser::RelationalExpressionContext::GE() {
  return getToken(Java8Parser::GE, 0);
}

tree::TerminalNode* Java8Parser::RelationalExpressionContext::INSTANCEOF() {
  return getToken(Java8Parser::INSTANCEOF, 0);
}

Java8Parser::ReferenceTypeContext* Java8Parser::RelationalExpressionContext::referenceType() {
  return getRuleContext<Java8Parser::ReferenceTypeContext>(0);
}


size_t Java8Parser::RelationalExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleRelationalExpression;
}

void Java8Parser::RelationalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpression(this);
}

void Java8Parser::RelationalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpression(this);
}


antlrcpp::Any Java8Parser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::RelationalExpressionContext* Java8Parser::relationalExpression() {
   return relationalExpression(0);
}

Java8Parser::RelationalExpressionContext* Java8Parser::relationalExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, parentState);
  Java8Parser::RelationalExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 444;
  enterRecursionRule(_localctx, 444, Java8Parser::RuleRelationalExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2696);
    shiftExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2715);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 307, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2713);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 306, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2698);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(2699);
          match(Java8Parser::LT);
          setState(2700);
          shiftExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2701);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(2702);
          match(Java8Parser::GT);
          setState(2703);
          shiftExpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2704);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(2705);
          match(Java8Parser::LE);
          setState(2706);
          shiftExpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2707);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2708);
          match(Java8Parser::GE);
          setState(2709);
          shiftExpression(0);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(2710);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2711);
          match(Java8Parser::INSTANCEOF);
          setState(2712);
          referenceType();
          break;
        }

        default:
          break;
        } 
      }
      setState(2717);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 307, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftExpressionContext ------------------------------------------------------------------

Java8Parser::ShiftExpressionContext::ShiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::AdditiveExpressionContext* Java8Parser::ShiftExpressionContext::additiveExpression() {
  return getRuleContext<Java8Parser::AdditiveExpressionContext>(0);
}

Java8Parser::ShiftExpressionContext* Java8Parser::ShiftExpressionContext::shiftExpression() {
  return getRuleContext<Java8Parser::ShiftExpressionContext>(0);
}

std::vector<tree::TerminalNode *> Java8Parser::ShiftExpressionContext::LT() {
  return getTokens(Java8Parser::LT);
}

tree::TerminalNode* Java8Parser::ShiftExpressionContext::LT(size_t i) {
  return getToken(Java8Parser::LT, i);
}

std::vector<tree::TerminalNode *> Java8Parser::ShiftExpressionContext::GT() {
  return getTokens(Java8Parser::GT);
}

tree::TerminalNode* Java8Parser::ShiftExpressionContext::GT(size_t i) {
  return getToken(Java8Parser::GT, i);
}


size_t Java8Parser::ShiftExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleShiftExpression;
}

void Java8Parser::ShiftExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftExpression(this);
}

void Java8Parser::ShiftExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftExpression(this);
}


antlrcpp::Any Java8Parser::ShiftExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitShiftExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::ShiftExpressionContext* Java8Parser::shiftExpression() {
   return shiftExpression(0);
}

Java8Parser::ShiftExpressionContext* Java8Parser::shiftExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::ShiftExpressionContext *_localctx = _tracker.createInstance<ShiftExpressionContext>(_ctx, parentState);
  Java8Parser::ShiftExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 446;
  enterRecursionRule(_localctx, 446, Java8Parser::RuleShiftExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2719);
    additiveExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2736);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 309, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2734);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 308, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(2721);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(2722);
          match(Java8Parser::LT);
          setState(2723);
          match(Java8Parser::LT);
          setState(2724);
          additiveExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(2725);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2726);
          match(Java8Parser::GT);
          setState(2727);
          match(Java8Parser::GT);
          setState(2728);
          additiveExpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(2729);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2730);
          match(Java8Parser::GT);
          setState(2731);
          match(Java8Parser::GT);
          setState(2732);
          match(Java8Parser::GT);
          setState(2733);
          additiveExpression(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(2738);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 309, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

Java8Parser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::MultiplicativeExpressionContext* Java8Parser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContext<Java8Parser::MultiplicativeExpressionContext>(0);
}

Java8Parser::AdditiveExpressionContext* Java8Parser::AdditiveExpressionContext::additiveExpression() {
  return getRuleContext<Java8Parser::AdditiveExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::AdditiveExpressionContext::ADD() {
  return getToken(Java8Parser::ADD, 0);
}

tree::TerminalNode* Java8Parser::AdditiveExpressionContext::SUB() {
  return getToken(Java8Parser::SUB, 0);
}


size_t Java8Parser::AdditiveExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleAdditiveExpression;
}

void Java8Parser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}

void Java8Parser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}


antlrcpp::Any Java8Parser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::AdditiveExpressionContext* Java8Parser::additiveExpression() {
   return additiveExpression(0);
}

Java8Parser::AdditiveExpressionContext* Java8Parser::additiveExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, parentState);
  Java8Parser::AdditiveExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 448;
  enterRecursionRule(_localctx, 448, Java8Parser::RuleAdditiveExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2740);
    multiplicativeExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(2750);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 311, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2748);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 310, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(2742);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2743);
          match(Java8Parser::ADD);
          setState(2744);
          multiplicativeExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(2745);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2746);
          match(Java8Parser::SUB);
          setState(2747);
          multiplicativeExpression(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(2752);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 311, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

Java8Parser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::UnaryExpressionContext* Java8Parser::MultiplicativeExpressionContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}

Java8Parser::MultiplicativeExpressionContext* Java8Parser::MultiplicativeExpressionContext::multiplicativeExpression() {
  return getRuleContext<Java8Parser::MultiplicativeExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::MultiplicativeExpressionContext::MUL() {
  return getToken(Java8Parser::MUL, 0);
}

tree::TerminalNode* Java8Parser::MultiplicativeExpressionContext::DIV() {
  return getToken(Java8Parser::DIV, 0);
}

tree::TerminalNode* Java8Parser::MultiplicativeExpressionContext::MOD() {
  return getToken(Java8Parser::MOD, 0);
}


size_t Java8Parser::MultiplicativeExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleMultiplicativeExpression;
}

void Java8Parser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}

void Java8Parser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}


antlrcpp::Any Java8Parser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}


Java8Parser::MultiplicativeExpressionContext* Java8Parser::multiplicativeExpression() {
   return multiplicativeExpression(0);
}

Java8Parser::MultiplicativeExpressionContext* Java8Parser::multiplicativeExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Java8Parser::MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, parentState);
  Java8Parser::MultiplicativeExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 450;
  enterRecursionRule(_localctx, 450, Java8Parser::RuleMultiplicativeExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2754);
    unaryExpression();
    _ctx->stop = _input->LT(-1);
    setState(2767);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 313, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2765);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(2756);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(2757);
          match(Java8Parser::MUL);
          setState(2758);
          unaryExpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(2759);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2760);
          match(Java8Parser::DIV);
          setState(2761);
          unaryExpression();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(2762);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(2763);
          match(Java8Parser::MOD);
          setState(2764);
          unaryExpression();
          break;
        }

        default:
          break;
        } 
      }
      setState(2769);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 313, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

Java8Parser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PreIncrementExpressionContext* Java8Parser::UnaryExpressionContext::preIncrementExpression() {
  return getRuleContext<Java8Parser::PreIncrementExpressionContext>(0);
}

Java8Parser::PreDecrementExpressionContext* Java8Parser::UnaryExpressionContext::preDecrementExpression() {
  return getRuleContext<Java8Parser::PreDecrementExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::UnaryExpressionContext::ADD() {
  return getToken(Java8Parser::ADD, 0);
}

Java8Parser::UnaryExpressionContext* Java8Parser::UnaryExpressionContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::UnaryExpressionContext::SUB() {
  return getToken(Java8Parser::SUB, 0);
}

Java8Parser::UnaryExpressionNotPlusMinusContext* Java8Parser::UnaryExpressionContext::unaryExpressionNotPlusMinus() {
  return getRuleContext<Java8Parser::UnaryExpressionNotPlusMinusContext>(0);
}


size_t Java8Parser::UnaryExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleUnaryExpression;
}

void Java8Parser::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}

void Java8Parser::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}


antlrcpp::Any Java8Parser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnaryExpressionContext* Java8Parser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 452, Java8Parser::RuleUnaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2777);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Java8Parser::INC: {
        enterOuterAlt(_localctx, 1);
        setState(2770);
        preIncrementExpression();
        break;
      }

      case Java8Parser::DEC: {
        enterOuterAlt(_localctx, 2);
        setState(2771);
        preDecrementExpression();
        break;
      }

      case Java8Parser::ADD: {
        enterOuterAlt(_localctx, 3);
        setState(2772);
        match(Java8Parser::ADD);
        setState(2773);
        unaryExpression();
        break;
      }

      case Java8Parser::SUB: {
        enterOuterAlt(_localctx, 4);
        setState(2774);
        match(Java8Parser::SUB);
        setState(2775);
        unaryExpression();
        break;
      }

      case Java8Parser::BOOLEAN:
      case Java8Parser::BYTE:
      case Java8Parser::CHAR:
      case Java8Parser::DOUBLE:
      case Java8Parser::FLOAT:
      case Java8Parser::INT:
      case Java8Parser::LONG:
      case Java8Parser::NEW:
      case Java8Parser::SHORT:
      case Java8Parser::SUPER:
      case Java8Parser::THIS:
      case Java8Parser::VOID:
      case Java8Parser::IntegerLiteral:
      case Java8Parser::FloatingPointLiteral:
      case Java8Parser::BooleanLiteral:
      case Java8Parser::CharacterLiteral:
      case Java8Parser::StringLiteral:
      case Java8Parser::NullLiteral:
      case Java8Parser::LPAREN:
      case Java8Parser::BANG:
      case Java8Parser::TILDE:
      case Java8Parser::Identifier:
      case Java8Parser::AT: {
        enterOuterAlt(_localctx, 5);
        setState(2776);
        unaryExpressionNotPlusMinus();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreIncrementExpressionContext ------------------------------------------------------------------

Java8Parser::PreIncrementExpressionContext::PreIncrementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PreIncrementExpressionContext::INC() {
  return getToken(Java8Parser::INC, 0);
}

Java8Parser::UnaryExpressionContext* Java8Parser::PreIncrementExpressionContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}


size_t Java8Parser::PreIncrementExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePreIncrementExpression;
}

void Java8Parser::PreIncrementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreIncrementExpression(this);
}

void Java8Parser::PreIncrementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreIncrementExpression(this);
}


antlrcpp::Any Java8Parser::PreIncrementExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPreIncrementExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PreIncrementExpressionContext* Java8Parser::preIncrementExpression() {
  PreIncrementExpressionContext *_localctx = _tracker.createInstance<PreIncrementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 454, Java8Parser::RulePreIncrementExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2779);
    match(Java8Parser::INC);
    setState(2780);
    unaryExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreDecrementExpressionContext ------------------------------------------------------------------

Java8Parser::PreDecrementExpressionContext::PreDecrementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PreDecrementExpressionContext::DEC() {
  return getToken(Java8Parser::DEC, 0);
}

Java8Parser::UnaryExpressionContext* Java8Parser::PreDecrementExpressionContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}


size_t Java8Parser::PreDecrementExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePreDecrementExpression;
}

void Java8Parser::PreDecrementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreDecrementExpression(this);
}

void Java8Parser::PreDecrementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreDecrementExpression(this);
}


antlrcpp::Any Java8Parser::PreDecrementExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPreDecrementExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PreDecrementExpressionContext* Java8Parser::preDecrementExpression() {
  PreDecrementExpressionContext *_localctx = _tracker.createInstance<PreDecrementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 456, Java8Parser::RulePreDecrementExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2782);
    match(Java8Parser::DEC);
    setState(2783);
    unaryExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpressionNotPlusMinusContext ------------------------------------------------------------------

Java8Parser::UnaryExpressionNotPlusMinusContext::UnaryExpressionNotPlusMinusContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PostfixExpressionContext* Java8Parser::UnaryExpressionNotPlusMinusContext::postfixExpression() {
  return getRuleContext<Java8Parser::PostfixExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::UnaryExpressionNotPlusMinusContext::TILDE() {
  return getToken(Java8Parser::TILDE, 0);
}

Java8Parser::UnaryExpressionContext* Java8Parser::UnaryExpressionNotPlusMinusContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::UnaryExpressionNotPlusMinusContext::BANG() {
  return getToken(Java8Parser::BANG, 0);
}

Java8Parser::CastExpressionContext* Java8Parser::UnaryExpressionNotPlusMinusContext::castExpression() {
  return getRuleContext<Java8Parser::CastExpressionContext>(0);
}


size_t Java8Parser::UnaryExpressionNotPlusMinusContext::getRuleIndex() const {
  return Java8Parser::RuleUnaryExpressionNotPlusMinus;
}

void Java8Parser::UnaryExpressionNotPlusMinusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpressionNotPlusMinus(this);
}

void Java8Parser::UnaryExpressionNotPlusMinusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpressionNotPlusMinus(this);
}


antlrcpp::Any Java8Parser::UnaryExpressionNotPlusMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitUnaryExpressionNotPlusMinus(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::UnaryExpressionNotPlusMinusContext* Java8Parser::unaryExpressionNotPlusMinus() {
  UnaryExpressionNotPlusMinusContext *_localctx = _tracker.createInstance<UnaryExpressionNotPlusMinusContext>(_ctx, getState());
  enterRule(_localctx, 458, Java8Parser::RuleUnaryExpressionNotPlusMinus);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2791);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 315, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2785);
      postfixExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2786);
      match(Java8Parser::TILDE);
      setState(2787);
      unaryExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2788);
      match(Java8Parser::BANG);
      setState(2789);
      unaryExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2790);
      castExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixExpressionContext ------------------------------------------------------------------

Java8Parser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PrimaryContext* Java8Parser::PostfixExpressionContext::primary() {
  return getRuleContext<Java8Parser::PrimaryContext>(0);
}

Java8Parser::ExpressionNameContext* Java8Parser::PostfixExpressionContext::expressionName() {
  return getRuleContext<Java8Parser::ExpressionNameContext>(0);
}

std::vector<Java8Parser::PostIncrementExpression_lf_postfixExpressionContext *> Java8Parser::PostfixExpressionContext::postIncrementExpression_lf_postfixExpression() {
  return getRuleContexts<Java8Parser::PostIncrementExpression_lf_postfixExpressionContext>();
}

Java8Parser::PostIncrementExpression_lf_postfixExpressionContext* Java8Parser::PostfixExpressionContext::postIncrementExpression_lf_postfixExpression(size_t i) {
  return getRuleContext<Java8Parser::PostIncrementExpression_lf_postfixExpressionContext>(i);
}

std::vector<Java8Parser::PostDecrementExpression_lf_postfixExpressionContext *> Java8Parser::PostfixExpressionContext::postDecrementExpression_lf_postfixExpression() {
  return getRuleContexts<Java8Parser::PostDecrementExpression_lf_postfixExpressionContext>();
}

Java8Parser::PostDecrementExpression_lf_postfixExpressionContext* Java8Parser::PostfixExpressionContext::postDecrementExpression_lf_postfixExpression(size_t i) {
  return getRuleContext<Java8Parser::PostDecrementExpression_lf_postfixExpressionContext>(i);
}


size_t Java8Parser::PostfixExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePostfixExpression;
}

void Java8Parser::PostfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixExpression(this);
}

void Java8Parser::PostfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixExpression(this);
}


antlrcpp::Any Java8Parser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PostfixExpressionContext* Java8Parser::postfixExpression() {
  PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 460, Java8Parser::RulePostfixExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2795);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 316, _ctx)) {
    case 1: {
      setState(2793);
      primary();
      break;
    }

    case 2: {
      setState(2794);
      expressionName();
      break;
    }

    default:
      break;
    }
    setState(2801);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 318, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2799);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case Java8Parser::INC: {
            setState(2797);
            postIncrementExpression_lf_postfixExpression();
            break;
          }

          case Java8Parser::DEC: {
            setState(2798);
            postDecrementExpression_lf_postfixExpression();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(2803);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 318, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostIncrementExpressionContext ------------------------------------------------------------------

Java8Parser::PostIncrementExpressionContext::PostIncrementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PostfixExpressionContext* Java8Parser::PostIncrementExpressionContext::postfixExpression() {
  return getRuleContext<Java8Parser::PostfixExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::PostIncrementExpressionContext::INC() {
  return getToken(Java8Parser::INC, 0);
}


size_t Java8Parser::PostIncrementExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePostIncrementExpression;
}

void Java8Parser::PostIncrementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostIncrementExpression(this);
}

void Java8Parser::PostIncrementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostIncrementExpression(this);
}


antlrcpp::Any Java8Parser::PostIncrementExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPostIncrementExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PostIncrementExpressionContext* Java8Parser::postIncrementExpression() {
  PostIncrementExpressionContext *_localctx = _tracker.createInstance<PostIncrementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 462, Java8Parser::RulePostIncrementExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2804);
    postfixExpression();
    setState(2805);
    match(Java8Parser::INC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostIncrementExpression_lf_postfixExpressionContext ------------------------------------------------------------------

Java8Parser::PostIncrementExpression_lf_postfixExpressionContext::PostIncrementExpression_lf_postfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PostIncrementExpression_lf_postfixExpressionContext::INC() {
  return getToken(Java8Parser::INC, 0);
}


size_t Java8Parser::PostIncrementExpression_lf_postfixExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePostIncrementExpression_lf_postfixExpression;
}

void Java8Parser::PostIncrementExpression_lf_postfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostIncrementExpression_lf_postfixExpression(this);
}

void Java8Parser::PostIncrementExpression_lf_postfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostIncrementExpression_lf_postfixExpression(this);
}


antlrcpp::Any Java8Parser::PostIncrementExpression_lf_postfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPostIncrementExpression_lf_postfixExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PostIncrementExpression_lf_postfixExpressionContext* Java8Parser::postIncrementExpression_lf_postfixExpression() {
  PostIncrementExpression_lf_postfixExpressionContext *_localctx = _tracker.createInstance<PostIncrementExpression_lf_postfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 464, Java8Parser::RulePostIncrementExpression_lf_postfixExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2807);
    match(Java8Parser::INC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostDecrementExpressionContext ------------------------------------------------------------------

Java8Parser::PostDecrementExpressionContext::PostDecrementExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Java8Parser::PostfixExpressionContext* Java8Parser::PostDecrementExpressionContext::postfixExpression() {
  return getRuleContext<Java8Parser::PostfixExpressionContext>(0);
}

tree::TerminalNode* Java8Parser::PostDecrementExpressionContext::DEC() {
  return getToken(Java8Parser::DEC, 0);
}


size_t Java8Parser::PostDecrementExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePostDecrementExpression;
}

void Java8Parser::PostDecrementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostDecrementExpression(this);
}

void Java8Parser::PostDecrementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostDecrementExpression(this);
}


antlrcpp::Any Java8Parser::PostDecrementExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPostDecrementExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PostDecrementExpressionContext* Java8Parser::postDecrementExpression() {
  PostDecrementExpressionContext *_localctx = _tracker.createInstance<PostDecrementExpressionContext>(_ctx, getState());
  enterRule(_localctx, 466, Java8Parser::RulePostDecrementExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2809);
    postfixExpression();
    setState(2810);
    match(Java8Parser::DEC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostDecrementExpression_lf_postfixExpressionContext ------------------------------------------------------------------

Java8Parser::PostDecrementExpression_lf_postfixExpressionContext::PostDecrementExpression_lf_postfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::PostDecrementExpression_lf_postfixExpressionContext::DEC() {
  return getToken(Java8Parser::DEC, 0);
}


size_t Java8Parser::PostDecrementExpression_lf_postfixExpressionContext::getRuleIndex() const {
  return Java8Parser::RulePostDecrementExpression_lf_postfixExpression;
}

void Java8Parser::PostDecrementExpression_lf_postfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostDecrementExpression_lf_postfixExpression(this);
}

void Java8Parser::PostDecrementExpression_lf_postfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostDecrementExpression_lf_postfixExpression(this);
}


antlrcpp::Any Java8Parser::PostDecrementExpression_lf_postfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitPostDecrementExpression_lf_postfixExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::PostDecrementExpression_lf_postfixExpressionContext* Java8Parser::postDecrementExpression_lf_postfixExpression() {
  PostDecrementExpression_lf_postfixExpressionContext *_localctx = _tracker.createInstance<PostDecrementExpression_lf_postfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 468, Java8Parser::RulePostDecrementExpression_lf_postfixExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2812);
    match(Java8Parser::DEC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastExpressionContext ------------------------------------------------------------------

Java8Parser::CastExpressionContext::CastExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Java8Parser::CastExpressionContext::LPAREN() {
  return getToken(Java8Parser::LPAREN, 0);
}

Java8Parser::PrimitiveTypeContext* Java8Parser::CastExpressionContext::primitiveType() {
  return getRuleContext<Java8Parser::PrimitiveTypeContext>(0);
}

tree::TerminalNode* Java8Parser::CastExpressionContext::RPAREN() {
  return getToken(Java8Parser::RPAREN, 0);
}

Java8Parser::UnaryExpressionContext* Java8Parser::CastExpressionContext::unaryExpression() {
  return getRuleContext<Java8Parser::UnaryExpressionContext>(0);
}

Java8Parser::ReferenceTypeContext* Java8Parser::CastExpressionContext::referenceType() {
  return getRuleContext<Java8Parser::ReferenceTypeContext>(0);
}

Java8Parser::UnaryExpressionNotPlusMinusContext* Java8Parser::CastExpressionContext::unaryExpressionNotPlusMinus() {
  return getRuleContext<Java8Parser::UnaryExpressionNotPlusMinusContext>(0);
}

std::vector<Java8Parser::AdditionalBoundContext *> Java8Parser::CastExpressionContext::additionalBound() {
  return getRuleContexts<Java8Parser::AdditionalBoundContext>();
}

Java8Parser::AdditionalBoundContext* Java8Parser::CastExpressionContext::additionalBound(size_t i) {
  return getRuleContext<Java8Parser::AdditionalBoundContext>(i);
}

Java8Parser::LambdaExpressionContext* Java8Parser::CastExpressionContext::lambdaExpression() {
  return getRuleContext<Java8Parser::LambdaExpressionContext>(0);
}


size_t Java8Parser::CastExpressionContext::getRuleIndex() const {
  return Java8Parser::RuleCastExpression;
}

void Java8Parser::CastExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastExpression(this);
}

void Java8Parser::CastExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Java8ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastExpression(this);
}


antlrcpp::Any Java8Parser::CastExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Java8ParserVisitor*>(visitor))
    return parserVisitor->visitCastExpression(this);
  else
    return visitor->visitChildren(this);
}

Java8Parser::CastExpressionContext* Java8Parser::castExpression() {
  CastExpressionContext *_localctx = _tracker.createInstance<CastExpressionContext>(_ctx, getState());
  enterRule(_localctx, 470, Java8Parser::RuleCastExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2841);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 321, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2814);
      match(Java8Parser::LPAREN);
      setState(2815);
      primitiveType();
      setState(2816);
      match(Java8Parser::RPAREN);
      setState(2817);
      unaryExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2819);
      match(Java8Parser::LPAREN);
      setState(2820);
      referenceType();
      setState(2824);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::BITAND) {
        setState(2821);
        additionalBound();
        setState(2826);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2827);
      match(Java8Parser::RPAREN);
      setState(2828);
      unaryExpressionNotPlusMinus();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2830);
      match(Java8Parser::LPAREN);
      setState(2831);
      referenceType();
      setState(2835);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Java8Parser::BITAND) {
        setState(2832);
        additionalBound();
        setState(2837);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2838);
      match(Java8Parser::RPAREN);
      setState(2839);
      lambdaExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool Java8Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 25: return packageNameSempred(dynamic_cast<PackageNameContext *>(context), predicateIndex);
    case 27: return packageOrTypeNameSempred(dynamic_cast<PackageOrTypeNameContext *>(context), predicateIndex);
    case 30: return ambiguousNameSempred(dynamic_cast<AmbiguousNameContext *>(context), predicateIndex);
    case 216: return conditionalOrExpressionSempred(dynamic_cast<ConditionalOrExpressionContext *>(context), predicateIndex);
    case 217: return conditionalAndExpressionSempred(dynamic_cast<ConditionalAndExpressionContext *>(context), predicateIndex);
    case 218: return inclusiveOrExpressionSempred(dynamic_cast<InclusiveOrExpressionContext *>(context), predicateIndex);
    case 219: return exclusiveOrExpressionSempred(dynamic_cast<ExclusiveOrExpressionContext *>(context), predicateIndex);
    case 220: return andExpressionSempred(dynamic_cast<AndExpressionContext *>(context), predicateIndex);
    case 221: return equalityExpressionSempred(dynamic_cast<EqualityExpressionContext *>(context), predicateIndex);
    case 222: return relationalExpressionSempred(dynamic_cast<RelationalExpressionContext *>(context), predicateIndex);
    case 223: return shiftExpressionSempred(dynamic_cast<ShiftExpressionContext *>(context), predicateIndex);
    case 224: return additiveExpressionSempred(dynamic_cast<AdditiveExpressionContext *>(context), predicateIndex);
    case 225: return multiplicativeExpressionSempred(dynamic_cast<MultiplicativeExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool Java8Parser::packageNameSempred(PackageNameContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::packageOrTypeNameSempred(PackageOrTypeNameContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::ambiguousNameSempred(AmbiguousNameContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::conditionalOrExpressionSempred(ConditionalOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::conditionalAndExpressionSempred(ConditionalAndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::inclusiveOrExpressionSempred(InclusiveOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::exclusiveOrExpressionSempred(ExclusiveOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::andExpressionSempred(AndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::equalityExpressionSempred(EqualityExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 2);
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::relationalExpressionSempred(RelationalExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 5);
    case 11: return precpred(_ctx, 4);
    case 12: return precpred(_ctx, 3);
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::shiftExpressionSempred(ShiftExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 15: return precpred(_ctx, 3);
    case 16: return precpred(_ctx, 2);
    case 17: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::additiveExpressionSempred(AdditiveExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 18: return precpred(_ctx, 2);
    case 19: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Java8Parser::multiplicativeExpressionSempred(MultiplicativeExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 20: return precpred(_ctx, 3);
    case 21: return precpred(_ctx, 2);
    case 22: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> Java8Parser::_decisionToDFA;
atn::PredictionContextCache Java8Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Java8Parser::_atn;
std::vector<uint16_t> Java8Parser::_serializedATN;

std::vector<std::string> Java8Parser::_ruleNames = {
  "literal", "primitiveType", "numericType", "integralType", "floatingPointType", 
  "referenceType", "classOrInterfaceType", "classType", "classType_lf_classOrInterfaceType", 
  "classType_lfno_classOrInterfaceType", "interfaceType", "interfaceType_lf_classOrInterfaceType", 
  "interfaceType_lfno_classOrInterfaceType", "typeVariable", "arrayType", 
  "dims", "typeParameter", "typeParameterModifier", "typeBound", "additionalBound", 
  "typeArguments", "typeArgumentList", "typeArgument", "wildcard", "wildcardBounds", 
  "packageName", "typeName", "packageOrTypeName", "expressionName", "methodName", 
  "ambiguousName", "compilationUnit", "packageDeclaration", "packageModifier", 
  "importDeclaration", "singleTypeImportDeclaration", "typeImportOnDemandDeclaration", 
  "singleStaticImportDeclaration", "staticImportOnDemandDeclaration", "typeDeclaration", 
  "classDeclaration", "normalClassDeclaration", "classModifier", "typeParameters", 
  "typeParameterList", "superclass", "superinterfaces", "interfaceTypeList", 
  "classBody", "classBodyDeclaration", "classMemberDeclaration", "fieldDeclaration", 
  "fieldModifier", "variableDeclaratorList", "variableDeclarator", "variableDeclaratorId", 
  "variableInitializer", "unannType", "unannPrimitiveType", "unannReferenceType", 
  "unannClassOrInterfaceType", "unannClassType", "unannClassType_lf_unannClassOrInterfaceType", 
  "unannClassType_lfno_unannClassOrInterfaceType", "unannInterfaceType", 
  "unannInterfaceType_lf_unannClassOrInterfaceType", "unannInterfaceType_lfno_unannClassOrInterfaceType", 
  "unannTypeVariable", "unannArrayType", "methodDeclaration", "methodModifier", 
  "methodHeader", "result", "methodDeclarator", "formalParameterList", "formalParameters", 
  "formalParameter", "variableModifier", "lastFormalParameter", "receiverParameter", 
  "throws_", "exceptionTypeList", "exceptionType", "methodBody", "instanceInitializer", 
  "staticInitializer", "constructorDeclaration", "constructorModifier", 
  "constructorDeclarator", "simpleTypeName", "constructorBody", "explicitConstructorInvocation", 
  "enumDeclaration", "enumBody", "enumConstantList", "enumConstant", "enumConstantModifier", 
  "enumBodyDeclarations", "interfaceDeclaration", "normalInterfaceDeclaration", 
  "interfaceModifier", "extendsInterfaces", "interfaceBody", "interfaceMemberDeclaration", 
  "constantDeclaration", "constantModifier", "interfaceMethodDeclaration", 
  "interfaceMethodModifier", "annotationTypeDeclaration", "annotationTypeBody", 
  "annotationTypeMemberDeclaration", "annotationTypeElementDeclaration", 
  "annotationTypeElementModifier", "defaultValue", "annotation", "normalAnnotation", 
  "elementValuePairList", "elementValuePair", "elementValue", "elementValueArrayInitializer", 
  "elementValueList", "markerAnnotation", "singleElementAnnotation", "arrayInitializer", 
  "variableInitializerList", "block", "blockStatements", "blockStatement", 
  "localVariableDeclarationStatement", "localVariableDeclaration", "statement", 
  "statementNoShortIf", "statementWithoutTrailingSubstatement", "emptyStatement", 
  "labeledStatement", "labeledStatementNoShortIf", "expressionStatement", 
  "statementExpression", "ifThenStatement", "ifThenElseStatement", "ifThenElseStatementNoShortIf", 
  "assertStatement", "switchStatement", "switchBlock", "switchBlockStatementGroup", 
  "switchLabels", "switchLabel", "enumConstantName", "whileStatement", "whileStatementNoShortIf", 
  "doStatement", "forStatement", "forStatementNoShortIf", "basicForStatement", 
  "basicForStatementNoShortIf", "forInit", "forUpdate", "statementExpressionList", 
  "enhancedForStatement", "enhancedForStatementNoShortIf", "breakStatement", 
  "continueStatement", "returnStatement", "throwStatement", "synchronizedStatement", 
  "tryStatement", "catches", "catchClause", "catchFormalParameter", "catchType", 
  "finally_", "tryWithResourcesStatement", "resourceSpecification", "resourceList", 
  "resource", "primary", "primaryNoNewArray", "primaryNoNewArray_lf_arrayAccess", 
  "primaryNoNewArray_lfno_arrayAccess", "primaryNoNewArray_lf_primary", 
  "primaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary", "primaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary", 
  "primaryNoNewArray_lfno_primary", "primaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary", 
  "primaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary", "classInstanceCreationExpression", 
  "classInstanceCreationExpression_lf_primary", "classInstanceCreationExpression_lfno_primary", 
  "typeArgumentsOrDiamond", "fieldAccess", "fieldAccess_lf_primary", "fieldAccess_lfno_primary", 
  "arrayAccess", "arrayAccess_lf_primary", "arrayAccess_lfno_primary", "methodInvocation", 
  "methodInvocation_lf_primary", "methodInvocation_lfno_primary", "argumentList", 
  "methodReference", "methodReference_lf_primary", "methodReference_lfno_primary", 
  "arrayCreationExpression", "dimExprs", "dimExpr", "constantExpression", 
  "expression", "lambdaExpression", "lambdaParameters", "inferredFormalParameterList", 
  "lambdaBody", "assignmentExpression", "assignment", "leftHandSide", "assignmentOperator", 
  "conditionalExpression", "conditionalOrExpression", "conditionalAndExpression", 
  "inclusiveOrExpression", "exclusiveOrExpression", "andExpression", "equalityExpression", 
  "relationalExpression", "shiftExpression", "additiveExpression", "multiplicativeExpression", 
  "unaryExpression", "preIncrementExpression", "preDecrementExpression", 
  "unaryExpressionNotPlusMinus", "postfixExpression", "postIncrementExpression", 
  "postIncrementExpression_lf_postfixExpression", "postDecrementExpression", 
  "postDecrementExpression_lf_postfixExpression", "castExpression"
};

std::vector<std::string> Java8Parser::_literalNames = {
  "", "'abstract'", "'assert'", "'boolean'", "'break'", "'byte'", "'case'", 
  "'catch'", "'char'", "'class'", "'const'", "'continue'", "'default'", 
  "'do'", "'double'", "'else'", "'enum'", "'extends'", "'final'", "'finally'", 
  "'float'", "'for'", "'if'", "'goto'", "'implements'", "'import'", "'instanceof'", 
  "'int'", "'interface'", "'long'", "'native'", "'new'", "'package'", "'private'", 
  "'protected'", "'public'", "'return'", "'short'", "'static'", "'strictfp'", 
  "'super'", "'switch'", "'synchronized'", "'this'", "'throw'", "'throws'", 
  "'transient'", "'try'", "'void'", "'volatile'", "'while'", "", "", "", 
  "", "", "'null'", "'('", "')'", "'{'", "'}'", "'['", "']'", "';'", "','", 
  "'.'", "'='", "'>'", "'<'", "'!'", "'~'", "'\u003F'", "':'", "'=='", "'<='", 
  "'>='", "'!='", "'&&'", "'||'", "'++'", "'--'", "'+'", "'-'", "'*'", "'/'", 
  "'&'", "'|'", "'^'", "'%'", "'->'", "'::'", "'+='", "'-='", "'*='", "'/='", 
  "'&='", "'|='", "'^='", "'%='", "'<<='", "'>>='", "'>>>='", "", "'@'", 
  "'...'"
};

std::vector<std::string> Java8Parser::_symbolicNames = {
  "", "ABSTRACT", "ASSERT", "BOOLEAN", "BREAK", "BYTE", "CASE", "CATCH", 
  "CHAR", "CLASS", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", 
  "ENUM", "EXTENDS", "FINAL", "FINALLY", "FLOAT", "FOR", "IF", "GOTO", "IMPLEMENTS", 
  "IMPORT", "INSTANCEOF", "INT", "INTERFACE", "LONG", "NATIVE", "NEW", "PACKAGE", 
  "PRIVATE", "PROTECTED", "PUBLIC", "RETURN", "SHORT", "STATIC", "STRICTFP", 
  "SUPER", "SWITCH", "SYNCHRONIZED", "THIS", "THROW", "THROWS", "TRANSIENT", 
  "TRY", "VOID", "VOLATILE", "WHILE", "IntegerLiteral", "FloatingPointLiteral", 
  "BooleanLiteral", "CharacterLiteral", "StringLiteral", "NullLiteral", 
  "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "SEMI", "COMMA", 
  "DOT", "ASSIGN", "GT", "LT", "BANG", "TILDE", "QUESTION", "COLON", "EQUAL", 
  "LE", "GE", "NOTEQUAL", "AND", "OR", "INC", "DEC", "ADD", "SUB", "MUL", 
  "DIV", "BITAND", "BITOR", "CARET", "MOD", "ARROW", "COLONCOLON", "ADD_ASSIGN", 
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", 
  "MOD_ASSIGN", "LSHIFT_ASSIGN", "RSHIFT_ASSIGN", "URSHIFT_ASSIGN", "Identifier", 
  "AT", "ELLIPSIS", "WS", "COMMENT", "LINE_COMMENT"
};

dfa::Vocabulary Java8Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Java8Parser::_tokenNames;

Java8Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x6d, 0xb1e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 0x6d, 0x9, 0x6d, 0x4, 0x6e, 
       0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 0x9, 0x70, 0x4, 0x71, 
       0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 0x73, 0x4, 0x74, 
       0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 0x4, 0x77, 
       0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 0x7a, 
       0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
       0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 
       0x9, 0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 
       0x9, 0x83, 0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 
       0x9, 0x86, 0x4, 0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 
       0x9, 0x89, 0x4, 0x8a, 0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 
       0x9, 0x8c, 0x4, 0x8d, 0x9, 0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 
       0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 
       0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 0x94, 0x9, 0x94, 0x4, 0x95, 
       0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 0x9, 0x97, 0x4, 0x98, 
       0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 0x9a, 0x4, 0x9b, 
       0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 0x4, 0x9e, 
       0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 0xa1, 
       0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
       0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 
       0x9, 0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 
       0x9, 0xaa, 0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 
       0x9, 0xad, 0x4, 0xae, 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 
       0x9, 0xb0, 0x4, 0xb1, 0x9, 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 
       0x9, 0xb3, 0x4, 0xb4, 0x9, 0xb4, 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 
       0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 0x4, 0xb8, 0x9, 0xb8, 0x4, 0xb9, 
       0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 0xbb, 0x9, 0xbb, 0x4, 0xbc, 
       0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x4, 0xbe, 0x9, 0xbe, 0x4, 0xbf, 
       0x9, 0xbf, 0x4, 0xc0, 0x9, 0xc0, 0x4, 0xc1, 0x9, 0xc1, 0x4, 0xc2, 
       0x9, 0xc2, 0x4, 0xc3, 0x9, 0xc3, 0x4, 0xc4, 0x9, 0xc4, 0x4, 0xc5, 
       0x9, 0xc5, 0x4, 0xc6, 0x9, 0xc6, 0x4, 0xc7, 0x9, 0xc7, 0x4, 0xc8, 
       0x9, 0xc8, 0x4, 0xc9, 0x9, 0xc9, 0x4, 0xca, 0x9, 0xca, 0x4, 0xcb, 
       0x9, 0xcb, 0x4, 0xcc, 0x9, 0xcc, 0x4, 0xcd, 0x9, 0xcd, 0x4, 0xce, 
       0x9, 0xce, 0x4, 0xcf, 0x9, 0xcf, 0x4, 0xd0, 0x9, 0xd0, 0x4, 0xd1, 
       0x9, 0xd1, 0x4, 0xd2, 0x9, 0xd2, 0x4, 0xd3, 0x9, 0xd3, 0x4, 0xd4, 
       0x9, 0xd4, 0x4, 0xd5, 0x9, 0xd5, 0x4, 0xd6, 0x9, 0xd6, 0x4, 0xd7, 
       0x9, 0xd7, 0x4, 0xd8, 0x9, 0xd8, 0x4, 0xd9, 0x9, 0xd9, 0x4, 0xda, 
       0x9, 0xda, 0x4, 0xdb, 0x9, 0xdb, 0x4, 0xdc, 0x9, 0xdc, 0x4, 0xdd, 
       0x9, 0xdd, 0x4, 0xde, 0x9, 0xde, 0x4, 0xdf, 0x9, 0xdf, 0x4, 0xe0, 
       0x9, 0xe0, 0x4, 0xe1, 0x9, 0xe1, 0x4, 0xe2, 0x9, 0xe2, 0x4, 0xe3, 
       0x9, 0xe3, 0x4, 0xe4, 0x9, 0xe4, 0x4, 0xe5, 0x9, 0xe5, 0x4, 0xe6, 
       0x9, 0xe6, 0x4, 0xe7, 0x9, 0xe7, 0x4, 0xe8, 0x9, 0xe8, 0x4, 0xe9, 
       0x9, 0xe9, 0x4, 0xea, 0x9, 0xea, 0x4, 0xeb, 0x9, 0xeb, 0x4, 0xec, 
       0x9, 0xec, 0x4, 0xed, 0x9, 0xed, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x7, 
       0x3, 0x1de, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x1e1, 0xb, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x7, 0x3, 0x1e5, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x1e8, 0xb, 
       0x3, 0x3, 0x3, 0x5, 0x3, 0x1eb, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 
       0x4, 0x1ef, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x1f8, 0xa, 0x7, 0x3, 0x8, 0x3, 
       0x8, 0x5, 0x8, 0x1fc, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x200, 
       0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x203, 0xb, 0x8, 0x3, 0x9, 0x7, 0x9, 
       0x206, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x209, 0xb, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x5, 0x9, 0x20d, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 
       0x9, 0x212, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x215, 0xb, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x5, 0x9, 0x219, 0xa, 0x9, 0x5, 0x9, 0x21b, 0xa, 0x9, 0x3, 
       0xa, 0x3, 0xa, 0x7, 0xa, 0x21f, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x222, 
       0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x226, 0xa, 0xa, 0x3, 0xb, 
       0x7, 0xb, 0x229, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x22c, 0xb, 0xb, 0x3, 
       0xb, 0x3, 0xb, 0x5, 0xb, 0x230, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x7, 0xf, 0x239, 0xa, 
       0xf, 0xc, 0xf, 0xe, 0xf, 0x23c, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x249, 0xa, 0x10, 0x3, 0x11, 
       0x7, 0x11, 0x24c, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x24f, 0xb, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x254, 0xa, 0x11, 0xc, 
       0x11, 0xe, 0x11, 0x257, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 
       0x25b, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x25e, 0xb, 0x11, 0x3, 0x12, 
       0x7, 0x12, 0x261, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x264, 0xb, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x268, 0xa, 0x12, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 
       0x14, 0x271, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x274, 0xb, 0x14, 0x5, 
       0x14, 0x276, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x7, 0x17, 0x282, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x285, 0xb, 0x17, 
       0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x289, 0xa, 0x18, 0x3, 0x19, 0x7, 
       0x19, 0x28c, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x28f, 0xb, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x5, 0x19, 0x293, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
       0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x299, 0xa, 0x1a, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x2a1, 
       0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x2a4, 0xb, 0x1b, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x2ab, 0xa, 0x1c, 
       0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
       0x7, 0x1d, 0x2b3, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x2b6, 0xb, 0x1d, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 
       0x2bd, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x2c7, 0xa, 0x20, 
       0xc, 0x20, 0xe, 0x20, 0x2ca, 0xb, 0x20, 0x3, 0x21, 0x5, 0x21, 0x2cd, 
       0xa, 0x21, 0x3, 0x21, 0x7, 0x21, 0x2d0, 0xa, 0x21, 0xc, 0x21, 0xe, 
       0x21, 0x2d3, 0xb, 0x21, 0x3, 0x21, 0x7, 0x21, 0x2d6, 0xa, 0x21, 0xc, 
       0x21, 0xe, 0x21, 0x2d9, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 
       0x7, 0x22, 0x2de, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x2e1, 0xb, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x2ed, 0xa, 
       0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 
       0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x30a, 0xa, 0x29, 
       0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x30e, 0xa, 0x2a, 0x3, 0x2b, 0x7, 
       0x2b, 0x311, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x314, 0xb, 0x2b, 0x3, 
       0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x319, 0xa, 0x2b, 0x3, 0x2b, 
       0x5, 0x2b, 0x31c, 0xa, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x31f, 0xa, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
       0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x32b, 0xa, 
       0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x334, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 
       0x337, 0xb, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 
       0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x7, 0x31, 0x342, 
       0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 0x345, 0xb, 0x31, 0x3, 0x32, 0x3, 
       0x32, 0x7, 0x32, 0x349, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x34c, 0xb, 
       0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x33, 0x5, 0x33, 0x354, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
       0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x35b, 0xa, 0x34, 0x3, 0x35, 0x7, 
       0x35, 0x35e, 0xa, 0x35, 0xc, 0x35, 0xe, 0x35, 0x361, 0xb, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 
       0x36, 0x36f, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x7, 0x37, 
       0x374, 0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 0x377, 0xb, 0x37, 0x3, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x37c, 0xa, 0x38, 0x3, 0x39, 0x3, 
       0x39, 0x5, 0x39, 0x380, 0xa, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 
       0x384, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x388, 0xa, 0x3b, 
       0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x38c, 0xa, 0x3c, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x391, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 
       0x5, 0x3e, 0x395, 0xa, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x7, 0x3e, 0x399, 
       0xa, 0x3e, 0xc, 0x3e, 0xe, 0x3e, 0x39c, 0xb, 0x3e, 0x3, 0x3f, 0x3, 
       0x3f, 0x5, 0x3f, 0x3a0, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
       0x7, 0x3f, 0x3a5, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x3a8, 0xb, 0x3f, 
       0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x3ac, 0xa, 0x3f, 0x5, 0x3f, 0x3ae, 
       0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x7, 0x40, 0x3b2, 0xa, 0x40, 0xc, 
       0x40, 0xe, 0x40, 0x3b5, 0xb, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 
       0x3b9, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x3bd, 0xa, 0x41, 
       0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 
       0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
       0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 
       0x3d0, 0xa, 0x46, 0x3, 0x47, 0x7, 0x47, 0x3d3, 0xa, 0x47, 0xc, 0x47, 
       0xe, 0x47, 0x3d6, 0xb, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
       0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
       0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 0x3e5, 0xa, 0x48, 
       0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x3ea, 0xa, 0x49, 0x3, 
       0x49, 0x3, 0x49, 0x7, 0x49, 0x3ee, 0xa, 0x49, 0xc, 0x49, 0xe, 0x49, 
       0x3f1, 0xb, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x3f6, 
       0xa, 0x49, 0x5, 0x49, 0x3f8, 0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x5, 
       0x4a, 0x3fc, 0xa, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 
       0x401, 0xa, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x405, 0xa, 0x4b, 
       0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
       0x5, 0x4c, 0x40d, 0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x7, 
       0x4d, 0x412, 0xa, 0x4d, 0xc, 0x4d, 0xe, 0x4d, 0x415, 0xb, 0x4d, 0x3, 
       0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x7, 0x4d, 0x41a, 0xa, 0x4d, 0xc, 0x4d, 
       0xe, 0x4d, 0x41d, 0xb, 0x4d, 0x5, 0x4d, 0x41f, 0xa, 0x4d, 0x3, 0x4e, 
       0x7, 0x4e, 0x422, 0xa, 0x4e, 0xc, 0x4e, 0xe, 0x4e, 0x425, 0xb, 0x4e, 
       0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 
       0x42c, 0xa, 0x4f, 0x3, 0x50, 0x7, 0x50, 0x42f, 0xa, 0x50, 0xc, 0x50, 
       0xe, 0x50, 0x432, 0xb, 0x50, 0x3, 0x50, 0x3, 0x50, 0x7, 0x50, 0x436, 
       0xa, 0x50, 0xc, 0x50, 0xe, 0x50, 0x439, 0xb, 0x50, 0x3, 0x50, 0x3, 
       0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x43f, 0xa, 0x50, 0x3, 0x51, 
       0x7, 0x51, 0x442, 0xa, 0x51, 0xc, 0x51, 0xe, 0x51, 0x445, 0xb, 0x51, 
       0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x44a, 0xa, 0x51, 0x3, 
       0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 
       0x53, 0x3, 0x53, 0x7, 0x53, 0x454, 0xa, 0x53, 0xc, 0x53, 0xe, 0x53, 
       0x457, 0xb, 0x53, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x45b, 0xa, 0x54, 
       0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x45f, 0xa, 0x55, 0x3, 0x56, 0x3, 
       0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 0x7, 0x58, 0x467, 
       0xa, 0x58, 0xc, 0x58, 0xe, 0x58, 0x46a, 0xb, 0x58, 0x3, 0x58, 0x3, 
       0x58, 0x5, 0x58, 0x46e, 0xa, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x59, 
       0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 0x476, 0xa, 0x59, 0x3, 
       0x5a, 0x5, 0x5a, 0x479, 0xa, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 
       0x5, 0x5a, 0x47e, 0xa, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x3, 
       0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x486, 0xa, 0x5c, 0x3, 0x5c, 
       0x5, 0x5c, 0x489, 0xa, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x5, 
       0x5d, 0x48e, 0xa, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 
       0x493, 0xa, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x498, 
       0xa, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x49d, 0xa, 
       0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x5, 
       0x5d, 0x4a4, 0xa, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 
       0x4a9, 0xa, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 
       0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x4b1, 0xa, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 
       0x3, 0x5d, 0x5, 0x5d, 0x4b6, 0xa, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 
       0x5d, 0x5, 0x5d, 0x4bb, 0xa, 0x5d, 0x3, 0x5e, 0x7, 0x5e, 0x4be, 0xa, 
       0x5e, 0xc, 0x5e, 0xe, 0x5e, 0x4c1, 0xb, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
       0x3, 0x5e, 0x5, 0x5e, 0x4c6, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
       0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x4cc, 0xa, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 
       0x4cf, 0xa, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x4d2, 0xa, 0x5f, 0x3, 0x5f, 
       0x3, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x7, 0x60, 0x4d9, 0xa, 
       0x60, 0xc, 0x60, 0xe, 0x60, 0x4dc, 0xb, 0x60, 0x3, 0x61, 0x7, 0x61, 
       0x4df, 0xa, 0x61, 0xc, 0x61, 0xe, 0x61, 0x4e2, 0xb, 0x61, 0x3, 0x61, 
       0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 0x4e7, 0xa, 0x61, 0x3, 0x61, 0x5, 
       0x61, 0x4ea, 0xa, 0x61, 0x3, 0x61, 0x5, 0x61, 0x4ed, 0xa, 0x61, 0x3, 
       0x62, 0x3, 0x62, 0x3, 0x63, 0x3, 0x63, 0x7, 0x63, 0x4f3, 0xa, 0x63, 
       0xc, 0x63, 0xe, 0x63, 0x4f6, 0xb, 0x63, 0x3, 0x64, 0x3, 0x64, 0x5, 
       0x64, 0x4fa, 0xa, 0x64, 0x3, 0x65, 0x7, 0x65, 0x4fd, 0xa, 0x65, 0xc, 
       0x65, 0xe, 0x65, 0x500, 0xb, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
       0x5, 0x65, 0x505, 0xa, 0x65, 0x3, 0x65, 0x5, 0x65, 0x508, 0xa, 0x65, 
       0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
       0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x513, 0xa, 0x66, 0x3, 
       0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x68, 0x3, 0x68, 0x7, 0x68, 0x51a, 
       0xa, 0x68, 0xc, 0x68, 0xe, 0x68, 0x51d, 0xb, 0x68, 0x3, 0x68, 0x3, 
       0x68, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x5, 
       0x69, 0x526, 0xa, 0x69, 0x3, 0x6a, 0x7, 0x6a, 0x529, 0xa, 0x6a, 0xc, 
       0x6a, 0xe, 0x6a, 0x52c, 0xb, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
       0x3, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 
       0x536, 0xa, 0x6b, 0x3, 0x6c, 0x7, 0x6c, 0x539, 0xa, 0x6c, 0xc, 0x6c, 
       0xe, 0x6c, 0x53c, 0xb, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 
       0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x5, 
       0x6d, 0x547, 0xa, 0x6d, 0x3, 0x6e, 0x7, 0x6e, 0x54a, 0xa, 0x6e, 0xc, 
       0x6e, 0xe, 0x6e, 0x54d, 0xb, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 
       0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x7, 0x6f, 0x556, 0xa, 
       0x6f, 0xc, 0x6f, 0xe, 0x6f, 0x559, 0xb, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 
       0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x5, 0x70, 
       0x562, 0xa, 0x70, 0x3, 0x71, 0x7, 0x71, 0x565, 0xa, 0x71, 0xc, 0x71, 
       0xe, 0x71, 0x568, 0xb, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 
       0x71, 0x3, 0x71, 0x5, 0x71, 0x56f, 0xa, 0x71, 0x3, 0x71, 0x5, 0x71, 
       0x572, 0xa, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 
       0x72, 0x5, 0x72, 0x579, 0xa, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 
       0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x581, 0xa, 0x74, 0x3, 
       0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x5, 0x75, 0x587, 0xa, 0x75, 
       0x3, 0x75, 0x3, 0x75, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x7, 0x76, 
       0x58e, 0xa, 0x76, 0xc, 0x76, 0xe, 0x76, 0x591, 0xb, 0x76, 0x3, 0x77, 
       0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 
       0x5, 0x78, 0x59a, 0xa, 0x78, 0x3, 0x79, 0x3, 0x79, 0x5, 0x79, 0x59e, 
       0xa, 0x79, 0x3, 0x79, 0x5, 0x79, 0x5a1, 0xa, 0x79, 0x3, 0x79, 0x3, 
       0x79, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x7, 0x7a, 0x5a8, 0xa, 0x7a, 
       0xc, 0x7a, 0xe, 0x7a, 0x5ab, 0xb, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x3, 
       0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 
       0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 0x5b8, 0xa, 0x7d, 0x3, 0x7d, 
       0x5, 0x7d, 0x5bb, 0xa, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7e, 0x3, 
       0x7e, 0x3, 0x7e, 0x7, 0x7e, 0x5c2, 0xa, 0x7e, 0xc, 0x7e, 0xe, 0x7e, 
       0x5c5, 0xb, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x5, 0x7f, 0x5c9, 0xa, 0x7f, 
       0x3, 0x7f, 0x3, 0x7f, 0x3, 0x80, 0x6, 0x80, 0x5ce, 0xa, 0x80, 0xd, 
       0x80, 0xe, 0x80, 0x5cf, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x5, 0x81, 
       0x5d5, 0xa, 0x81, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x83, 0x7, 
       0x83, 0x5db, 0xa, 0x83, 0xc, 0x83, 0xe, 0x83, 0x5de, 0xb, 0x83, 0x3, 
       0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 
       0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 0x5e9, 0xa, 0x84, 0x3, 0x85, 
       0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x5f0, 0xa, 
       0x85, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 
       0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 
       0x86, 0x5, 0x86, 0x5fe, 0xa, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x88, 
       0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 
       0x3, 0x89, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 
       0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 
       0x614, 0xa, 0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 
       0x8c, 0x3, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 
       0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 0x3, 
       0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 
       0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 
       0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x636, 0xa, 0x8f, 
       0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 
       0x3, 0x91, 0x3, 0x91, 0x7, 0x91, 0x640, 0xa, 0x91, 0xc, 0x91, 0xe, 
       0x91, 0x643, 0xb, 0x91, 0x3, 0x91, 0x7, 0x91, 0x646, 0xa, 0x91, 0xc, 
       0x91, 0xe, 0x91, 0x649, 0xb, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x92, 
       0x3, 0x92, 0x3, 0x92, 0x3, 0x93, 0x3, 0x93, 0x7, 0x93, 0x652, 0xa, 
       0x93, 0xc, 0x93, 0xe, 0x93, 0x655, 0xb, 0x93, 0x3, 0x94, 0x3, 0x94, 
       0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 
       0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x661, 0xa, 0x94, 0x3, 0x95, 0x3, 
       0x95, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 
       0x96, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 
       0x97, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 
       0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x67b, 
       0xa, 0x99, 0x3, 0x9a, 0x3, 0x9a, 0x5, 0x9a, 0x67f, 0xa, 0x9a, 0x3, 
       0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x5, 0x9b, 0x684, 0xa, 0x9b, 0x3, 0x9b, 
       0x3, 0x9b, 0x5, 0x9b, 0x688, 0xa, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x5, 
       0x9b, 0x68c, 0xa, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9c, 
       0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x694, 0xa, 0x9c, 0x3, 0x9c, 0x3, 
       0x9c, 0x5, 0x9c, 0x698, 0xa, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 
       0x69c, 0xa, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9d, 0x3, 
       0x9d, 0x5, 0x9d, 0x6a3, 0xa, 0x9d, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9f, 
       0x3, 0x9f, 0x3, 0x9f, 0x7, 0x9f, 0x6aa, 0xa, 0x9f, 0xc, 0x9f, 0xe, 
       0x9f, 0x6ad, 0xb, 0x9f, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x7, 0xa0, 
       0x6b2, 0xa, 0xa0, 0xc, 0xa0, 0xe, 0xa0, 0x6b5, 0xb, 0xa0, 0x3, 0xa0, 
       0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 
       0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x7, 0xa1, 0x6c1, 0xa, 0xa1, 0xc, 
       0xa1, 0xe, 0xa1, 0x6c4, 0xb, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 
       0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa2, 0x3, 0xa2, 
       0x5, 0xa2, 0x6cf, 0xa, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa3, 0x3, 
       0xa3, 0x5, 0xa3, 0x6d5, 0xa, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa4, 
       0x3, 0xa4, 0x5, 0xa4, 0x6db, 0xa, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 
       0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x3, 
       0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x3, 
       0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x5, 0xa7, 0x6f0, 
       0xa, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x5, 0xa7, 0x6f5, 0xa, 
       0xa7, 0x3, 0xa8, 0x3, 0xa8, 0x7, 0xa8, 0x6f9, 0xa, 0xa8, 0xc, 0xa8, 
       0xe, 0xa8, 0x6fc, 0xb, 0xa8, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 
       0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xaa, 0x7, 0xaa, 0x705, 0xa, 0xaa, 
       0xc, 0xaa, 0xe, 0xaa, 0x708, 0xb, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 
       0xaa, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x7, 0xab, 0x710, 0xa, 0xab, 
       0xc, 0xab, 0xe, 0xab, 0x713, 0xb, 0xab, 0x3, 0xac, 0x3, 0xac, 0x3, 
       0xac, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x5, 0xad, 0x71c, 
       0xa, 0xad, 0x3, 0xad, 0x5, 0xad, 0x71f, 0xa, 0xad, 0x3, 0xae, 0x3, 
       0xae, 0x3, 0xae, 0x5, 0xae, 0x724, 0xa, 0xae, 0x3, 0xae, 0x3, 0xae, 
       0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x7, 0xaf, 0x72b, 0xa, 0xaf, 0xc, 
       0xaf, 0xe, 0xaf, 0x72e, 0xb, 0xaf, 0x3, 0xb0, 0x7, 0xb0, 0x731, 0xa, 
       0xb0, 0xc, 0xb0, 0xe, 0xb0, 0x734, 0xb, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 
       0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb1, 0x3, 0xb1, 0x5, 0xb1, 
       0x73d, 0xa, 0xb1, 0x3, 0xb1, 0x7, 0xb1, 0x740, 0xa, 0xb1, 0xc, 0xb1, 
       0xe, 0xb1, 0x743, 0xb, 0xb1, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 
       0xb2, 0x7, 0xb2, 0x749, 0xa, 0xb2, 0xc, 0xb2, 0xe, 0xb2, 0x74c, 0xb, 
       0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 
       0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 
       0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 
       0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x762, 0xa, 0xb2, 0x3, 0xb3, 
       0x3, 0xb3, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x7, 0xb4, 
       0x76a, 0xa, 0xb4, 0xc, 0xb4, 0xe, 0xb4, 0x76d, 0xb, 0xb4, 0x3, 0xb4, 
       0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 
       0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 
       0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 
       0x5, 0xb4, 0x782, 0xa, 0xb4, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 
       0xb5, 0x3, 0xb5, 0x5, 0xb5, 0x789, 0xa, 0xb5, 0x3, 0xb6, 0x3, 0xb6, 
       0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x791, 0xa, 
       0xb7, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x7, 0xb8, 0x797, 
       0xa, 0xb8, 0xc, 0xb8, 0xe, 0xb8, 0x79a, 0xb, 0xb8, 0x3, 0xb8, 0x3, 
       0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x7, 0xb8, 0x7a2, 
       0xa, 0xb8, 0xc, 0xb8, 0xe, 0xb8, 0x7a5, 0xb, 0xb8, 0x3, 0xb8, 0x3, 
       0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 
       0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 
       0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 
       0xb8, 0x5, 0xb8, 0x7bb, 0xa, 0xb8, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xba, 
       0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x7, 0xba, 0x7c3, 0xa, 0xba, 0xc, 
       0xba, 0xe, 0xba, 0x7c6, 0xb, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 
       0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x7, 0xba, 0x7ce, 0xa, 0xba, 0xc, 
       0xba, 0xe, 0xba, 0x7d1, 0xb, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 
       0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 
       0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 
       0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x5, 0xba, 0x7e6, 0xa, 
       0xba, 0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x7ea, 0xa, 0xbb, 0x3, 0xbb, 
       0x7, 0xbb, 0x7ed, 0xa, 0xbb, 0xc, 0xbb, 0xe, 0xbb, 0x7f0, 0xb, 0xbb, 
       0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x7, 0xbb, 0x7f5, 0xa, 0xbb, 0xc, 
       0xbb, 0xe, 0xbb, 0x7f8, 0xb, 0xbb, 0x3, 0xbb, 0x7, 0xbb, 0x7fb, 0xa, 
       0xbb, 0xc, 0xbb, 0xe, 0xbb, 0x7fe, 0xb, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 
       0x801, 0xa, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x805, 0xa, 0xbb, 
       0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x809, 0xa, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x80f, 0xa, 0xbb, 0x3, 0xbb, 
       0x7, 0xbb, 0x812, 0xa, 0xbb, 0xc, 0xbb, 0xe, 0xbb, 0x815, 0xb, 0xbb, 
       0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x819, 0xa, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x5, 0xbb, 0x81d, 0xa, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 
       0x821, 0xa, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 
       0xbb, 0x827, 0xa, 0xbb, 0x3, 0xbb, 0x7, 0xbb, 0x82a, 0xa, 0xbb, 0xc, 
       0xbb, 0xe, 0xbb, 0x82d, 0xb, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 
       0x831, 0xa, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x835, 0xa, 0xbb, 
       0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x839, 0xa, 0xbb, 0x5, 0xbb, 0x83b, 
       0xa, 0xbb, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x840, 0xa, 
       0xbc, 0x3, 0xbc, 0x7, 0xbc, 0x843, 0xa, 0xbc, 0xc, 0xbc, 0xe, 0xbc, 
       0x846, 0xb, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x84a, 0xa, 0xbc, 
       0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x84e, 0xa, 0xbc, 0x3, 0xbc, 0x3, 
       0xbc, 0x5, 0xbc, 0x852, 0xa, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 
       0x856, 0xa, 0xbd, 0x3, 0xbd, 0x7, 0xbd, 0x859, 0xa, 0xbd, 0xc, 0xbd, 
       0xe, 0xbd, 0x85c, 0xb, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x7, 
       0xbd, 0x861, 0xa, 0xbd, 0xc, 0xbd, 0xe, 0xbd, 0x864, 0xb, 0xbd, 0x3, 
       0xbd, 0x7, 0xbd, 0x867, 0xa, 0xbd, 0xc, 0xbd, 0xe, 0xbd, 0x86a, 0xb, 
       0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x86d, 0xa, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 
       0x5, 0xbd, 0x871, 0xa, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x875, 
       0xa, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 
       0x87b, 0xa, 0xbd, 0x3, 0xbd, 0x7, 0xbd, 0x87e, 0xa, 0xbd, 0xc, 0xbd, 
       0xe, 0xbd, 0x881, 0xb, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x885, 
       0xa, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x889, 0xa, 0xbd, 0x3, 
       0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x88d, 0xa, 0xbd, 0x5, 0xbd, 0x88f, 0xa, 
       0xbd, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x894, 0xa, 0xbe, 
       0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 
       0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 
       0x3, 0xbf, 0x5, 0xbf, 0x8a3, 0xa, 0xbf, 0x3, 0xc0, 0x3, 0xc0, 0x3, 
       0xc0, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 
       0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x5, 0xc1, 0x8b1, 0xa, 0xc1, 
       0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 
       0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x5, 0xc2, 0x8bd, 0xa, 
       0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x7, 
       0xc2, 0x8c4, 0xa, 0xc2, 0xc, 0xc2, 0xe, 0xc2, 0x8c7, 0xb, 0xc2, 0x3, 
       0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 
       0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x7, 0xc3, 0x8d3, 0xa, 0xc3, 
       0xc, 0xc3, 0xe, 0xc3, 0x8d6, 0xb, 0xc3, 0x3, 0xc4, 0x3, 0xc4, 0x3, 
       0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 
       0xc4, 0x3, 0xc4, 0x5, 0xc4, 0x8e2, 0xa, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x7, 0xc4, 0x8e9, 0xa, 0xc4, 0xc, 
       0xc4, 0xe, 0xc4, 0x8ec, 0xb, 0xc4, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 
       0x5, 0xc5, 0x8f1, 0xa, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x8f8, 0xa, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 
       0x3, 0xc5, 0x5, 0xc5, 0x8fd, 0xa, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x904, 0xa, 0xc5, 0x3, 0xc5, 
       0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x909, 0xa, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x910, 0xa, 0xc5, 
       0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x915, 0xa, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x91c, 
       0xa, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x921, 0xa, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x5, 0xc5, 0x929, 0xa, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 
       0x5, 0xc5, 0x92e, 0xa, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x932, 
       0xa, 0xc5, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x936, 0xa, 0xc6, 0x3, 
       0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x93b, 0xa, 0xc6, 0x3, 0xc6, 
       0x3, 0xc6, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x5, 0xc7, 0x942, 0xa, 
       0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x5, 
       0xc7, 0x949, 0xa, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x5, 0xc7, 
       0x94e, 0xa, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 
       0xc7, 0x5, 0xc7, 0x955, 0xa, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 
       0x5, 0xc7, 0x95a, 0xa, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 
       0xc7, 0x3, 0xc7, 0x5, 0xc7, 0x961, 0xa, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 
       0x3, 0xc7, 0x5, 0xc7, 0x966, 0xa, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 
       0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x5, 0xc7, 0x96e, 0xa, 0xc7, 
       0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x5, 0xc7, 0x973, 0xa, 0xc7, 0x3, 
       0xc7, 0x3, 0xc7, 0x5, 0xc7, 0x977, 0xa, 0xc7, 0x3, 0xc8, 0x3, 0xc8, 
       0x3, 0xc8, 0x7, 0xc8, 0x97c, 0xa, 0xc8, 0xc, 0xc8, 0xe, 0xc8, 0x97f, 
       0xb, 0xc8, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x5, 0xc9, 0x984, 0xa, 
       0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x5, 
       0xc9, 0x98b, 0xa, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 
       0x3, 0xc9, 0x5, 0xc9, 0x992, 0xa, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 
       0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x5, 0xc9, 0x999, 0xa, 0xc9, 0x3, 0xc9, 
       0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x5, 0xc9, 
       0x9a1, 0xa, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 
       0xc9, 0x5, 0xc9, 0x9a8, 0xa, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 
       0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x5, 0xc9, 0x9b0, 0xa, 0xc9, 0x3, 
       0xca, 0x3, 0xca, 0x5, 0xca, 0x9b4, 0xa, 0xca, 0x3, 0xca, 0x3, 0xca, 
       0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x5, 0xcb, 0x9bb, 0xa, 0xcb, 0x3, 
       0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x5, 0xcb, 0x9c2, 
       0xa, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 
       0x5, 0xcb, 0x9c9, 0xa, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 
       0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x5, 0xcb, 0x9d1, 0xa, 0xcb, 0x3, 0xcb, 
       0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x5, 0xcb, 0x9d8, 0xa, 
       0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 
       0xcb, 0x5, 0xcb, 0x9e0, 0xa, 0xcb, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 
       0x3, 0xcc, 0x5, 0xcc, 0x9e6, 0xa, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 
       0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x9ec, 0xa, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 
       0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 
       0x3, 0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x9f8, 0xa, 0xcc, 0x3, 0xcd, 0x3, 
       0xcd, 0x7, 0xcd, 0x9fc, 0xa, 0xcd, 0xc, 0xcd, 0xe, 0xcd, 0x9ff, 0xb, 
       0xcd, 0x3, 0xce, 0x7, 0xce, 0xa02, 0xa, 0xce, 0xc, 0xce, 0xe, 0xce, 
       0xa05, 0xb, 0xce, 0x3, 0xce, 0x3, 0xce, 0x3, 0xce, 0x3, 0xce, 0x3, 
       0xcf, 0x3, 0xcf, 0x3, 0xd0, 0x3, 0xd0, 0x5, 0xd0, 0xa0f, 0xa, 0xd0, 
       0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd2, 0x3, 0xd2, 
       0x3, 0xd2, 0x5, 0xd2, 0xa18, 0xa, 0xd2, 0x3, 0xd2, 0x3, 0xd2, 0x3, 
       0xd2, 0x3, 0xd2, 0x3, 0xd2, 0x5, 0xd2, 0xa1f, 0xa, 0xd2, 0x3, 0xd3, 
       0x3, 0xd3, 0x3, 0xd3, 0x7, 0xd3, 0xa24, 0xa, 0xd3, 0xc, 0xd3, 0xe, 
       0xd3, 0xa27, 0xb, 0xd3, 0x3, 0xd4, 0x3, 0xd4, 0x5, 0xd4, 0xa2b, 0xa, 
       0xd4, 0x3, 0xd5, 0x3, 0xd5, 0x5, 0xd5, 0xa2f, 0xa, 0xd5, 0x3, 0xd6, 
       0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd6, 0x3, 0xd7, 0x3, 0xd7, 0x3, 0xd7, 
       0x5, 0xd7, 0xa38, 0xa, 0xd7, 0x3, 0xd8, 0x3, 0xd8, 0x3, 0xd9, 0x3, 
       0xd9, 0x3, 0xd9, 0x3, 0xd9, 0x3, 0xd9, 0x3, 0xd9, 0x3, 0xd9, 0x5, 
       0xd9, 0xa43, 0xa, 0xd9, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 
       0x3, 0xda, 0x3, 0xda, 0x7, 0xda, 0xa4b, 0xa, 0xda, 0xc, 0xda, 0xe, 
       0xda, 0xa4e, 0xb, 0xda, 0x3, 0xdb, 0x3, 0xdb, 0x3, 0xdb, 0x3, 0xdb, 
       0x3, 0xdb, 0x3, 0xdb, 0x7, 0xdb, 0xa56, 0xa, 0xdb, 0xc, 0xdb, 0xe, 
       0xdb, 0xa59, 0xb, 0xdb, 0x3, 0xdc, 0x3, 0xdc, 0x3, 0xdc, 0x3, 0xdc, 
       0x3, 0xdc, 0x3, 0xdc, 0x7, 0xdc, 0xa61, 0xa, 0xdc, 0xc, 0xdc, 0xe, 
       0xdc, 0xa64, 0xb, 0xdc, 0x3, 0xdd, 0x3, 0xdd, 0x3, 0xdd, 0x3, 0xdd, 
       0x3, 0xdd, 0x3, 0xdd, 0x7, 0xdd, 0xa6c, 0xa, 0xdd, 0xc, 0xdd, 0xe, 
       0xdd, 0xa6f, 0xb, 0xdd, 0x3, 0xde, 0x3, 0xde, 0x3, 0xde, 0x3, 0xde, 
       0x3, 0xde, 0x3, 0xde, 0x7, 0xde, 0xa77, 0xa, 0xde, 0xc, 0xde, 0xe, 
       0xde, 0xa7a, 0xb, 0xde, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 
       0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x3, 0xdf, 0x7, 0xdf, 
       0xa85, 0xa, 0xdf, 0xc, 0xdf, 0xe, 0xdf, 0xa88, 0xb, 0xdf, 0x3, 0xe0, 
       0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 
       0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 
       0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe0, 0x7, 0xe0, 
       0xa9c, 0xa, 0xe0, 0xc, 0xe0, 0xe, 0xe0, 0xa9f, 0xb, 0xe0, 0x3, 0xe1, 
       0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 
       0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 
       0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe1, 0x7, 0xe1, 0xab1, 0xa, 0xe1, 0xc, 
       0xe1, 0xe, 0xe1, 0xab4, 0xb, 0xe1, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 
       0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 0x3, 0xe2, 
       0x7, 0xe2, 0xabf, 0xa, 0xe2, 0xc, 0xe2, 0xe, 0xe2, 0xac2, 0xb, 0xe2, 
       0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 
       0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe3, 
       0x7, 0xe3, 0xad0, 0xa, 0xe3, 0xc, 0xe3, 0xe, 0xe3, 0xad3, 0xb, 0xe3, 
       0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe4, 
       0x3, 0xe4, 0x5, 0xe4, 0xadc, 0xa, 0xe4, 0x3, 0xe5, 0x3, 0xe5, 0x3, 
       0xe5, 0x3, 0xe6, 0x3, 0xe6, 0x3, 0xe6, 0x3, 0xe7, 0x3, 0xe7, 0x3, 
       0xe7, 0x3, 0xe7, 0x3, 0xe7, 0x3, 0xe7, 0x5, 0xe7, 0xaea, 0xa, 0xe7, 
       0x3, 0xe8, 0x3, 0xe8, 0x5, 0xe8, 0xaee, 0xa, 0xe8, 0x3, 0xe8, 0x3, 
       0xe8, 0x7, 0xe8, 0xaf2, 0xa, 0xe8, 0xc, 0xe8, 0xe, 0xe8, 0xaf5, 0xb, 
       0xe8, 0x3, 0xe9, 0x3, 0xe9, 0x3, 0xe9, 0x3, 0xea, 0x3, 0xea, 0x3, 
       0xeb, 0x3, 0xeb, 0x3, 0xeb, 0x3, 0xec, 0x3, 0xec, 0x3, 0xed, 0x3, 
       0xed, 0x3, 0xed, 0x3, 0xed, 0x3, 0xed, 0x3, 0xed, 0x3, 0xed, 0x3, 
       0xed, 0x7, 0xed, 0xb09, 0xa, 0xed, 0xc, 0xed, 0xe, 0xed, 0xb0c, 0xb, 
       0xed, 0x3, 0xed, 0x3, 0xed, 0x3, 0xed, 0x3, 0xed, 0x3, 0xed, 0x3, 
       0xed, 0x7, 0xed, 0xb14, 0xa, 0xed, 0xc, 0xed, 0xe, 0xed, 0xb17, 0xb, 
       0xed, 0x3, 0xed, 0x3, 0xed, 0x3, 0xed, 0x5, 0xed, 0xb1c, 0xa, 0xed, 
       0x3, 0xed, 0x2, 0xf, 0x34, 0x38, 0x3e, 0x1b2, 0x1b4, 0x1b6, 0x1b8, 
       0x1ba, 0x1bc, 0x1be, 0x1c0, 0x1c2, 0x1c4, 0xee, 0x2, 0x4, 0x6, 0x8, 
       0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
       0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
       0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 
       0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 
       0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 
       0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 
       0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 
       0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 
       0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 
       0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 
       0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 
       0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 
       0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 0x11e, 0x120, 0x122, 0x124, 
       0x126, 0x128, 0x12a, 0x12c, 0x12e, 0x130, 0x132, 0x134, 0x136, 0x138, 
       0x13a, 0x13c, 0x13e, 0x140, 0x142, 0x144, 0x146, 0x148, 0x14a, 0x14c, 
       0x14e, 0x150, 0x152, 0x154, 0x156, 0x158, 0x15a, 0x15c, 0x15e, 0x160, 
       0x162, 0x164, 0x166, 0x168, 0x16a, 0x16c, 0x16e, 0x170, 0x172, 0x174, 
       0x176, 0x178, 0x17a, 0x17c, 0x17e, 0x180, 0x182, 0x184, 0x186, 0x188, 
       0x18a, 0x18c, 0x18e, 0x190, 0x192, 0x194, 0x196, 0x198, 0x19a, 0x19c, 
       0x19e, 0x1a0, 0x1a2, 0x1a4, 0x1a6, 0x1a8, 0x1aa, 0x1ac, 0x1ae, 0x1b0, 
       0x1b2, 0x1b4, 0x1b6, 0x1b8, 0x1ba, 0x1bc, 0x1be, 0x1c0, 0x1c2, 0x1c4, 
       0x1c6, 0x1c8, 0x1ca, 0x1cc, 0x1ce, 0x1d0, 0x1d2, 0x1d4, 0x1d6, 0x1d8, 
       0x2, 0x6, 0x3, 0x2, 0x35, 0x3a, 0x7, 0x2, 0x7, 0x7, 0xa, 0xa, 0x1d, 
       0x1d, 0x1f, 0x1f, 0x27, 0x27, 0x4, 0x2, 0x10, 0x10, 0x16, 0x16, 0x4, 
       0x2, 0x44, 0x44, 0x5d, 0x67, 0x2, 0xc0f, 0x2, 0x1da, 0x3, 0x2, 0x2, 
       0x2, 0x4, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1ee, 0x3, 0x2, 0x2, 0x2, 
       0x8, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0xa, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0xc, 
       0x1f7, 0x3, 0x2, 0x2, 0x2, 0xe, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x10, 
       0x21a, 0x3, 0x2, 0x2, 0x2, 0x12, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x14, 
       0x22a, 0x3, 0x2, 0x2, 0x2, 0x16, 0x231, 0x3, 0x2, 0x2, 0x2, 0x18, 
       0x233, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x235, 0x3, 0x2, 0x2, 0x2, 0x1c, 
       0x23a, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x248, 0x3, 0x2, 0x2, 0x2, 0x20, 
       0x24d, 0x3, 0x2, 0x2, 0x2, 0x22, 0x262, 0x3, 0x2, 0x2, 0x2, 0x24, 
       0x269, 0x3, 0x2, 0x2, 0x2, 0x26, 0x275, 0x3, 0x2, 0x2, 0x2, 0x28, 
       0x277, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x2c, 
       0x27e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x288, 0x3, 0x2, 0x2, 0x2, 0x30, 
       0x28d, 0x3, 0x2, 0x2, 0x2, 0x32, 0x298, 0x3, 0x2, 0x2, 0x2, 0x34, 
       0x29a, 0x3, 0x2, 0x2, 0x2, 0x36, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x38, 
       0x2ac, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0x3c, 
       0x2be, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x40, 
       0x2cc, 0x3, 0x2, 0x2, 0x2, 0x42, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x44, 
       0x2e6, 0x3, 0x2, 0x2, 0x2, 0x46, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x48, 
       0x2ee, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x4c, 
       0x2f8, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x50, 
       0x309, 0x3, 0x2, 0x2, 0x2, 0x52, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x54, 
       0x312, 0x3, 0x2, 0x2, 0x2, 0x56, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x58, 
       0x32c, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x330, 0x3, 0x2, 0x2, 0x2, 0x5c, 
       0x338, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x60, 
       0x33e, 0x3, 0x2, 0x2, 0x2, 0x62, 0x346, 0x3, 0x2, 0x2, 0x2, 0x64, 
       0x353, 0x3, 0x2, 0x2, 0x2, 0x66, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x68, 
       0x35f, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x6c, 
       0x370, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x378, 0x3, 0x2, 0x2, 0x2, 0x70, 
       0x37d, 0x3, 0x2, 0x2, 0x2, 0x72, 0x383, 0x3, 0x2, 0x2, 0x2, 0x74, 
       0x387, 0x3, 0x2, 0x2, 0x2, 0x76, 0x38b, 0x3, 0x2, 0x2, 0x2, 0x78, 
       0x390, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x394, 0x3, 0x2, 0x2, 0x2, 0x7c, 
       0x3ad, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x80, 
       0x3ba, 0x3, 0x2, 0x2, 0x2, 0x82, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x84, 
       0x3c0, 0x3, 0x2, 0x2, 0x2, 0x86, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x88, 
       0x3c4, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x8c, 
       0x3d4, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x90, 
       0x3f7, 0x3, 0x2, 0x2, 0x2, 0x92, 0x3fb, 0x3, 0x2, 0x2, 0x2, 0x94, 
       0x3fd, 0x3, 0x2, 0x2, 0x2, 0x96, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x98, 
       0x41e, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x423, 0x3, 0x2, 0x2, 0x2, 0x9c, 
       0x42b, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x43e, 0x3, 0x2, 0x2, 0x2, 0xa0, 
       0x443, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x44d, 0x3, 0x2, 0x2, 0x2, 0xa4, 
       0x450, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x45a, 0x3, 0x2, 0x2, 0x2, 0xa8, 
       0x45e, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x460, 0x3, 0x2, 0x2, 0x2, 0xac, 
       0x462, 0x3, 0x2, 0x2, 0x2, 0xae, 0x468, 0x3, 0x2, 0x2, 0x2, 0xb0, 
       0x475, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x478, 0x3, 0x2, 0x2, 0x2, 0xb4, 
       0x481, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x483, 0x3, 0x2, 0x2, 0x2, 0xb8, 
       0x4ba, 0x3, 0x2, 0x2, 0x2, 0xba, 0x4bf, 0x3, 0x2, 0x2, 0x2, 0xbc, 
       0x4c9, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0xc0, 
       0x4e0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x4ee, 0x3, 0x2, 0x2, 0x2, 0xc4, 
       0x4f0, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x4f9, 0x3, 0x2, 0x2, 0x2, 0xc8, 
       0x4fe, 0x3, 0x2, 0x2, 0x2, 0xca, 0x512, 0x3, 0x2, 0x2, 0x2, 0xcc, 
       0x514, 0x3, 0x2, 0x2, 0x2, 0xce, 0x517, 0x3, 0x2, 0x2, 0x2, 0xd0, 
       0x525, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x52a, 0x3, 0x2, 0x2, 0x2, 0xd4, 
       0x535, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x53a, 0x3, 0x2, 0x2, 0x2, 0xd8, 
       0x546, 0x3, 0x2, 0x2, 0x2, 0xda, 0x54b, 0x3, 0x2, 0x2, 0x2, 0xdc, 
       0x553, 0x3, 0x2, 0x2, 0x2, 0xde, 0x561, 0x3, 0x2, 0x2, 0x2, 0xe0, 
       0x566, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x578, 0x3, 0x2, 0x2, 0x2, 0xe4, 
       0x57a, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x580, 0x3, 0x2, 0x2, 0x2, 0xe8, 
       0x582, 0x3, 0x2, 0x2, 0x2, 0xea, 0x58a, 0x3, 0x2, 0x2, 0x2, 0xec, 
       0x592, 0x3, 0x2, 0x2, 0x2, 0xee, 0x599, 0x3, 0x2, 0x2, 0x2, 0xf0, 
       0x59b, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0xf4, 
       0x5ac, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x5af, 0x3, 0x2, 0x2, 0x2, 0xf8, 
       0x5b5, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x5be, 0x3, 0x2, 0x2, 0x2, 0xfc, 
       0x5c6, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x5cd, 0x3, 0x2, 0x2, 0x2, 0x100, 
       0x5d4, 0x3, 0x2, 0x2, 0x2, 0x102, 0x5d6, 0x3, 0x2, 0x2, 0x2, 0x104, 
       0x5dc, 0x3, 0x2, 0x2, 0x2, 0x106, 0x5e8, 0x3, 0x2, 0x2, 0x2, 0x108, 
       0x5ef, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x5fd, 0x3, 0x2, 0x2, 0x2, 0x10c, 
       0x5ff, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x601, 0x3, 0x2, 0x2, 0x2, 0x110, 
       0x605, 0x3, 0x2, 0x2, 0x2, 0x112, 0x609, 0x3, 0x2, 0x2, 0x2, 0x114, 
       0x613, 0x3, 0x2, 0x2, 0x2, 0x116, 0x615, 0x3, 0x2, 0x2, 0x2, 0x118, 
       0x61b, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x623, 0x3, 0x2, 0x2, 0x2, 0x11c, 
       0x635, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x637, 0x3, 0x2, 0x2, 0x2, 0x120, 
       0x63d, 0x3, 0x2, 0x2, 0x2, 0x122, 0x64c, 0x3, 0x2, 0x2, 0x2, 0x124, 
       0x64f, 0x3, 0x2, 0x2, 0x2, 0x126, 0x660, 0x3, 0x2, 0x2, 0x2, 0x128, 
       0x662, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x664, 0x3, 0x2, 0x2, 0x2, 0x12c, 
       0x66a, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x670, 0x3, 0x2, 0x2, 0x2, 0x130, 
       0x67a, 0x3, 0x2, 0x2, 0x2, 0x132, 0x67e, 0x3, 0x2, 0x2, 0x2, 0x134, 
       0x680, 0x3, 0x2, 0x2, 0x2, 0x136, 0x690, 0x3, 0x2, 0x2, 0x2, 0x138, 
       0x6a2, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x6a4, 0x3, 0x2, 0x2, 0x2, 0x13c, 
       0x6a6, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x6ae, 0x3, 0x2, 0x2, 0x2, 0x140, 
       0x6bd, 0x3, 0x2, 0x2, 0x2, 0x142, 0x6cc, 0x3, 0x2, 0x2, 0x2, 0x144, 
       0x6d2, 0x3, 0x2, 0x2, 0x2, 0x146, 0x6d8, 0x3, 0x2, 0x2, 0x2, 0x148, 
       0x6de, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x6e2, 0x3, 0x2, 0x2, 0x2, 0x14c, 
       0x6f4, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x6f6, 0x3, 0x2, 0x2, 0x2, 0x150, 
       0x6fd, 0x3, 0x2, 0x2, 0x2, 0x152, 0x706, 0x3, 0x2, 0x2, 0x2, 0x154, 
       0x70c, 0x3, 0x2, 0x2, 0x2, 0x156, 0x714, 0x3, 0x2, 0x2, 0x2, 0x158, 
       0x717, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x720, 0x3, 0x2, 0x2, 0x2, 0x15c, 
       0x727, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x732, 0x3, 0x2, 0x2, 0x2, 0x160, 
       0x73c, 0x3, 0x2, 0x2, 0x2, 0x162, 0x761, 0x3, 0x2, 0x2, 0x2, 0x164, 
       0x763, 0x3, 0x2, 0x2, 0x2, 0x166, 0x781, 0x3, 0x2, 0x2, 0x2, 0x168, 
       0x788, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x78a, 0x3, 0x2, 0x2, 0x2, 0x16c, 
       0x790, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x7ba, 0x3, 0x2, 0x2, 0x2, 0x170, 
       0x7bc, 0x3, 0x2, 0x2, 0x2, 0x172, 0x7e5, 0x3, 0x2, 0x2, 0x2, 0x174, 
       0x83a, 0x3, 0x2, 0x2, 0x2, 0x176, 0x83c, 0x3, 0x2, 0x2, 0x2, 0x178, 
       0x88e, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x893, 0x3, 0x2, 0x2, 0x2, 0x17c, 
       0x8a2, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x8a4, 0x3, 0x2, 0x2, 0x2, 0x180, 
       0x8b0, 0x3, 0x2, 0x2, 0x2, 0x182, 0x8bc, 0x3, 0x2, 0x2, 0x2, 0x184, 
       0x8c8, 0x3, 0x2, 0x2, 0x2, 0x186, 0x8e1, 0x3, 0x2, 0x2, 0x2, 0x188, 
       0x931, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x933, 0x3, 0x2, 0x2, 0x2, 0x18c, 
       0x976, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x978, 0x3, 0x2, 0x2, 0x2, 0x190, 
       0x9af, 0x3, 0x2, 0x2, 0x2, 0x192, 0x9b1, 0x3, 0x2, 0x2, 0x2, 0x194, 
       0x9df, 0x3, 0x2, 0x2, 0x2, 0x196, 0x9f7, 0x3, 0x2, 0x2, 0x2, 0x198, 
       0x9f9, 0x3, 0x2, 0x2, 0x2, 0x19a, 0xa03, 0x3, 0x2, 0x2, 0x2, 0x19c, 
       0xa0a, 0x3, 0x2, 0x2, 0x2, 0x19e, 0xa0e, 0x3, 0x2, 0x2, 0x2, 0x1a0, 
       0xa10, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0xa1e, 0x3, 0x2, 0x2, 0x2, 0x1a4, 
       0xa20, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0xa2a, 0x3, 0x2, 0x2, 0x2, 0x1a8, 
       0xa2e, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0xa30, 0x3, 0x2, 0x2, 0x2, 0x1ac, 
       0xa37, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0xa39, 0x3, 0x2, 0x2, 0x2, 0x1b0, 
       0xa42, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0xa44, 0x3, 0x2, 0x2, 0x2, 0x1b4, 
       0xa4f, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0xa5a, 0x3, 0x2, 0x2, 0x2, 0x1b8, 
       0xa65, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0xa70, 0x3, 0x2, 0x2, 0x2, 0x1bc, 
       0xa7b, 0x3, 0x2, 0x2, 0x2, 0x1be, 0xa89, 0x3, 0x2, 0x2, 0x2, 0x1c0, 
       0xaa0, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0xab5, 0x3, 0x2, 0x2, 0x2, 0x1c4, 
       0xac3, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0xadb, 0x3, 0x2, 0x2, 0x2, 0x1c8, 
       0xadd, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0xae0, 0x3, 0x2, 0x2, 0x2, 0x1cc, 
       0xae9, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0xaed, 0x3, 0x2, 0x2, 0x2, 0x1d0, 
       0xaf6, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0xaf9, 0x3, 0x2, 0x2, 0x2, 0x1d4, 
       0xafb, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0xafe, 0x3, 0x2, 0x2, 0x2, 0x1d8, 
       0xb1b, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1db, 0x9, 0x2, 0x2, 0x2, 0x1db, 
       0x3, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1de, 0x5, 0xe6, 0x74, 0x2, 0x1dd, 
       0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1df, 
       0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e0, 
       0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e2, 
       0x1eb, 0x5, 0x6, 0x4, 0x2, 0x1e3, 0x1e5, 0x5, 0xe6, 0x74, 0x2, 0x1e4, 
       0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
       0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e7, 
       0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e9, 
       0x1eb, 0x7, 0x5, 0x2, 0x2, 0x1ea, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1ea, 
       0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1ec, 
       0x1ef, 0x5, 0x8, 0x5, 0x2, 0x1ed, 0x1ef, 0x5, 0xa, 0x6, 0x2, 0x1ee, 
       0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ef, 
       0x7, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f1, 0x9, 0x3, 0x2, 0x2, 0x1f1, 
       0x9, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f3, 0x9, 0x4, 0x2, 0x2, 0x1f3, 
       0xb, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f8, 0x5, 0xe, 0x8, 0x2, 0x1f5, 
       0x1f8, 0x5, 0x1c, 0xf, 0x2, 0x1f6, 0x1f8, 0x5, 0x1e, 0x10, 0x2, 0x1f7, 
       0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f7, 
       0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0xd, 0x3, 0x2, 0x2, 0x2, 0x1f9, 
       0x1fc, 0x5, 0x14, 0xb, 0x2, 0x1fa, 0x1fc, 0x5, 0x1a, 0xe, 0x2, 0x1fb, 
       0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
       0x201, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x200, 0x5, 0x12, 0xa, 0x2, 0x1fe, 
       0x200, 0x5, 0x18, 0xd, 0x2, 0x1ff, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1ff, 
       0x1fe, 0x3, 0x2, 0x2, 0x2, 0x200, 0x203, 0x3, 0x2, 0x2, 0x2, 0x201, 
       0x1ff, 0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 0x3, 0x2, 0x2, 0x2, 0x202, 
       0xf, 0x3, 0x2, 0x2, 0x2, 0x203, 0x201, 0x3, 0x2, 0x2, 0x2, 0x204, 
       0x206, 0x5, 0xe6, 0x74, 0x2, 0x205, 0x204, 0x3, 0x2, 0x2, 0x2, 0x206, 
       0x209, 0x3, 0x2, 0x2, 0x2, 0x207, 0x205, 0x3, 0x2, 0x2, 0x2, 0x207, 
       0x208, 0x3, 0x2, 0x2, 0x2, 0x208, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x209, 
       0x207, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20c, 0x7, 0x68, 0x2, 0x2, 0x20b, 
       0x20d, 0x5, 0x2a, 0x16, 0x2, 0x20c, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20c, 
       0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x20e, 
       0x20f, 0x5, 0xe, 0x8, 0x2, 0x20f, 0x213, 0x7, 0x43, 0x2, 0x2, 0x210, 
       0x212, 0x5, 0xe6, 0x74, 0x2, 0x211, 0x210, 0x3, 0x2, 0x2, 0x2, 0x212, 
       0x215, 0x3, 0x2, 0x2, 0x2, 0x213, 0x211, 0x3, 0x2, 0x2, 0x2, 0x213, 
       0x214, 0x3, 0x2, 0x2, 0x2, 0x214, 0x216, 0x3, 0x2, 0x2, 0x2, 0x215, 
       0x213, 0x3, 0x2, 0x2, 0x2, 0x216, 0x218, 0x7, 0x68, 0x2, 0x2, 0x217, 
       0x219, 0x5, 0x2a, 0x16, 0x2, 0x218, 0x217, 0x3, 0x2, 0x2, 0x2, 0x218, 
       0x219, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21a, 
       0x207, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x21b, 
       0x11, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x220, 0x7, 0x43, 0x2, 0x2, 0x21d, 
       0x21f, 0x5, 0xe6, 0x74, 0x2, 0x21e, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21f, 
       0x222, 0x3, 0x2, 0x2, 0x2, 0x220, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x220, 
       0x221, 0x3, 0x2, 0x2, 0x2, 0x221, 0x223, 0x3, 0x2, 0x2, 0x2, 0x222, 
       0x220, 0x3, 0x2, 0x2, 0x2, 0x223, 0x225, 0x7, 0x68, 0x2, 0x2, 0x224, 
       0x226, 0x5, 0x2a, 0x16, 0x2, 0x225, 0x224, 0x3, 0x2, 0x2, 0x2, 0x225, 
       0x226, 0x3, 0x2, 0x2, 0x2, 0x226, 0x13, 0x3, 0x2, 0x2, 0x2, 0x227, 
       0x229, 0x5, 0xe6, 0x74, 0x2, 0x228, 0x227, 0x3, 0x2, 0x2, 0x2, 0x229, 
       0x22c, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x228, 0x3, 0x2, 0x2, 0x2, 0x22a, 
       0x22b, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22c, 
       0x22a, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22f, 0x7, 0x68, 0x2, 0x2, 0x22e, 
       0x230, 0x5, 0x2a, 0x16, 0x2, 0x22f, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x22f, 
       0x230, 0x3, 0x2, 0x2, 0x2, 0x230, 0x15, 0x3, 0x2, 0x2, 0x2, 0x231, 
       0x232, 0x5, 0x10, 0x9, 0x2, 0x232, 0x17, 0x3, 0x2, 0x2, 0x2, 0x233, 
       0x234, 0x5, 0x12, 0xa, 0x2, 0x234, 0x19, 0x3, 0x2, 0x2, 0x2, 0x235, 
       0x236, 0x5, 0x14, 0xb, 0x2, 0x236, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x237, 
       0x239, 0x5, 0xe6, 0x74, 0x2, 0x238, 0x237, 0x3, 0x2, 0x2, 0x2, 0x239, 
       0x23c, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x238, 0x3, 0x2, 0x2, 0x2, 0x23a, 
       0x23b, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23c, 
       0x23a, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23e, 0x7, 0x68, 0x2, 0x2, 0x23e, 
       0x1d, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x240, 0x5, 0x4, 0x3, 0x2, 0x240, 
       0x241, 0x5, 0x20, 0x11, 0x2, 0x241, 0x249, 0x3, 0x2, 0x2, 0x2, 0x242, 
       0x243, 0x5, 0xe, 0x8, 0x2, 0x243, 0x244, 0x5, 0x20, 0x11, 0x2, 0x244, 
       0x249, 0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 0x5, 0x1c, 0xf, 0x2, 0x246, 
       0x247, 0x5, 0x20, 0x11, 0x2, 0x247, 0x249, 0x3, 0x2, 0x2, 0x2, 0x248, 
       0x23f, 0x3, 0x2, 0x2, 0x2, 0x248, 0x242, 0x3, 0x2, 0x2, 0x2, 0x248, 
       0x245, 0x3, 0x2, 0x2, 0x2, 0x249, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x24a, 
       0x24c, 0x5, 0xe6, 0x74, 0x2, 0x24b, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24c, 
       0x24f, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24d, 
       0x24e, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x250, 0x3, 0x2, 0x2, 0x2, 0x24f, 
       0x24d, 0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x7, 0x3f, 0x2, 0x2, 0x251, 
       0x25c, 0x7, 0x40, 0x2, 0x2, 0x252, 0x254, 0x5, 0xe6, 0x74, 0x2, 0x253, 
       0x252, 0x3, 0x2, 0x2, 0x2, 0x254, 0x257, 0x3, 0x2, 0x2, 0x2, 0x255, 
       0x253, 0x3, 0x2, 0x2, 0x2, 0x255, 0x256, 0x3, 0x2, 0x2, 0x2, 0x256, 
       0x258, 0x3, 0x2, 0x2, 0x2, 0x257, 0x255, 0x3, 0x2, 0x2, 0x2, 0x258, 
       0x259, 0x7, 0x3f, 0x2, 0x2, 0x259, 0x25b, 0x7, 0x40, 0x2, 0x2, 0x25a, 
       0x255, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x25c, 
       0x25a, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x25d, 
       0x21, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x25f, 
       0x261, 0x5, 0x24, 0x13, 0x2, 0x260, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x261, 
       0x264, 0x3, 0x2, 0x2, 0x2, 0x262, 0x260, 0x3, 0x2, 0x2, 0x2, 0x262, 
       0x263, 0x3, 0x2, 0x2, 0x2, 0x263, 0x265, 0x3, 0x2, 0x2, 0x2, 0x264, 
       0x262, 0x3, 0x2, 0x2, 0x2, 0x265, 0x267, 0x7, 0x68, 0x2, 0x2, 0x266, 
       0x268, 0x5, 0x26, 0x14, 0x2, 0x267, 0x266, 0x3, 0x2, 0x2, 0x2, 0x267, 
       0x268, 0x3, 0x2, 0x2, 0x2, 0x268, 0x23, 0x3, 0x2, 0x2, 0x2, 0x269, 
       0x26a, 0x5, 0xe6, 0x74, 0x2, 0x26a, 0x25, 0x3, 0x2, 0x2, 0x2, 0x26b, 
       0x26c, 0x7, 0x13, 0x2, 0x2, 0x26c, 0x276, 0x5, 0x1c, 0xf, 0x2, 0x26d, 
       0x26e, 0x7, 0x13, 0x2, 0x2, 0x26e, 0x272, 0x5, 0xe, 0x8, 0x2, 0x26f, 
       0x271, 0x5, 0x28, 0x15, 0x2, 0x270, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x271, 
       0x274, 0x3, 0x2, 0x2, 0x2, 0x272, 0x270, 0x3, 0x2, 0x2, 0x2, 0x272, 
       0x273, 0x3, 0x2, 0x2, 0x2, 0x273, 0x276, 0x3, 0x2, 0x2, 0x2, 0x274, 
       0x272, 0x3, 0x2, 0x2, 0x2, 0x275, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x275, 
       0x26d, 0x3, 0x2, 0x2, 0x2, 0x276, 0x27, 0x3, 0x2, 0x2, 0x2, 0x277, 
       0x278, 0x7, 0x57, 0x2, 0x2, 0x278, 0x279, 0x5, 0x16, 0xc, 0x2, 0x279, 
       0x29, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x7, 0x46, 0x2, 0x2, 0x27b, 
       0x27c, 0x5, 0x2c, 0x17, 0x2, 0x27c, 0x27d, 0x7, 0x45, 0x2, 0x2, 0x27d, 
       0x2b, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x283, 0x5, 0x2e, 0x18, 0x2, 0x27f, 
       0x280, 0x7, 0x42, 0x2, 0x2, 0x280, 0x282, 0x5, 0x2e, 0x18, 0x2, 0x281, 
       0x27f, 0x3, 0x2, 0x2, 0x2, 0x282, 0x285, 0x3, 0x2, 0x2, 0x2, 0x283, 
       0x281, 0x3, 0x2, 0x2, 0x2, 0x283, 0x284, 0x3, 0x2, 0x2, 0x2, 0x284, 
       0x2d, 0x3, 0x2, 0x2, 0x2, 0x285, 0x283, 0x3, 0x2, 0x2, 0x2, 0x286, 
       0x289, 0x5, 0xc, 0x7, 0x2, 0x287, 0x289, 0x5, 0x30, 0x19, 0x2, 0x288, 
       0x286, 0x3, 0x2, 0x2, 0x2, 0x288, 0x287, 0x3, 0x2, 0x2, 0x2, 0x289, 
       0x2f, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28c, 0x5, 0xe6, 0x74, 0x2, 0x28b, 
       0x28a, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x28d, 
       0x28b, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x28e, 
       0x290, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x290, 
       0x292, 0x7, 0x49, 0x2, 0x2, 0x291, 0x293, 0x5, 0x32, 0x1a, 0x2, 0x292, 
       0x291, 0x3, 0x2, 0x2, 0x2, 0x292, 0x293, 0x3, 0x2, 0x2, 0x2, 0x293, 
       0x31, 0x3, 0x2, 0x2, 0x2, 0x294, 0x295, 0x7, 0x13, 0x2, 0x2, 0x295, 
       0x299, 0x5, 0xc, 0x7, 0x2, 0x296, 0x297, 0x7, 0x2a, 0x2, 0x2, 0x297, 
       0x299, 0x5, 0xc, 0x7, 0x2, 0x298, 0x294, 0x3, 0x2, 0x2, 0x2, 0x298, 
       0x296, 0x3, 0x2, 0x2, 0x2, 0x299, 0x33, 0x3, 0x2, 0x2, 0x2, 0x29a, 
       0x29b, 0x8, 0x1b, 0x1, 0x2, 0x29b, 0x29c, 0x7, 0x68, 0x2, 0x2, 0x29c, 
       0x2a2, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29e, 0xc, 0x3, 0x2, 0x2, 0x29e, 
       0x29f, 0x7, 0x43, 0x2, 0x2, 0x29f, 0x2a1, 0x7, 0x68, 0x2, 0x2, 0x2a0, 
       0x29d, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a2, 
       0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a3, 
       0x35, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a5, 
       0x2ab, 0x7, 0x68, 0x2, 0x2, 0x2a6, 0x2a7, 0x5, 0x38, 0x1d, 0x2, 0x2a7, 
       0x2a8, 0x7, 0x43, 0x2, 0x2, 0x2a8, 0x2a9, 0x7, 0x68, 0x2, 0x2, 0x2a9, 
       0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2aa, 
       0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x37, 0x3, 0x2, 0x2, 0x2, 0x2ac, 
       0x2ad, 0x8, 0x1d, 0x1, 0x2, 0x2ad, 0x2ae, 0x7, 0x68, 0x2, 0x2, 0x2ae, 
       0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b0, 0xc, 0x3, 0x2, 0x2, 0x2b0, 
       0x2b1, 0x7, 0x43, 0x2, 0x2, 0x2b1, 0x2b3, 0x7, 0x68, 0x2, 0x2, 0x2b2, 
       0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2b4, 
       0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b5, 
       0x39, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2b7, 
       0x2bd, 0x7, 0x68, 0x2, 0x2, 0x2b8, 0x2b9, 0x5, 0x3e, 0x20, 0x2, 0x2b9, 
       0x2ba, 0x7, 0x43, 0x2, 0x2, 0x2ba, 0x2bb, 0x7, 0x68, 0x2, 0x2, 0x2bb, 
       0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2bc, 
       0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x2be, 
       0x2bf, 0x7, 0x68, 0x2, 0x2, 0x2bf, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x2c0, 
       0x2c1, 0x8, 0x20, 0x1, 0x2, 0x2c1, 0x2c2, 0x7, 0x68, 0x2, 0x2, 0x2c2, 
       0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0xc, 0x3, 0x2, 0x2, 0x2c4, 
       0x2c5, 0x7, 0x43, 0x2, 0x2, 0x2c5, 0x2c7, 0x7, 0x68, 0x2, 0x2, 0x2c6, 
       0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2c8, 
       0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2c9, 
       0x3f, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2cb, 
       0x2cd, 0x5, 0x42, 0x22, 0x2, 0x2cc, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2cc, 
       0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2ce, 
       0x2d0, 0x5, 0x46, 0x24, 0x2, 0x2cf, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d0, 
       0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d1, 
       0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d3, 
       0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d6, 0x5, 0x50, 0x29, 0x2, 0x2d5, 
       0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2d7, 
       0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2d8, 
       0x2da, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2da, 
       0x2db, 0x7, 0x2, 0x2, 0x3, 0x2db, 0x41, 0x3, 0x2, 0x2, 0x2, 0x2dc, 
       0x2de, 0x5, 0x44, 0x23, 0x2, 0x2dd, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2de, 
       0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2df, 
       0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e1, 
       0x2df, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e3, 0x7, 0x22, 0x2, 0x2, 0x2e3, 
       0x2e4, 0x5, 0x34, 0x1b, 0x2, 0x2e4, 0x2e5, 0x7, 0x41, 0x2, 0x2, 0x2e5, 
       0x43, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e7, 0x5, 0xe6, 0x74, 0x2, 0x2e7, 
       0x45, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2ed, 0x5, 0x48, 0x25, 0x2, 0x2e9, 
       0x2ed, 0x5, 0x4a, 0x26, 0x2, 0x2ea, 0x2ed, 0x5, 0x4c, 0x27, 0x2, 
       0x2eb, 0x2ed, 0x5, 0x4e, 0x28, 0x2, 0x2ec, 0x2e8, 0x3, 0x2, 0x2, 
       0x2, 0x2ec, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ea, 0x3, 0x2, 0x2, 
       0x2, 0x2ec, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x47, 0x3, 0x2, 0x2, 
       0x2, 0x2ee, 0x2ef, 0x7, 0x1b, 0x2, 0x2, 0x2ef, 0x2f0, 0x5, 0x36, 
       0x1c, 0x2, 0x2f0, 0x2f1, 0x7, 0x41, 0x2, 0x2, 0x2f1, 0x49, 0x3, 0x2, 
       0x2, 0x2, 0x2f2, 0x2f3, 0x7, 0x1b, 0x2, 0x2, 0x2f3, 0x2f4, 0x5, 0x38, 
       0x1d, 0x2, 0x2f4, 0x2f5, 0x7, 0x43, 0x2, 0x2, 0x2f5, 0x2f6, 0x7, 
       0x55, 0x2, 0x2, 0x2f6, 0x2f7, 0x7, 0x41, 0x2, 0x2, 0x2f7, 0x4b, 0x3, 
       0x2, 0x2, 0x2, 0x2f8, 0x2f9, 0x7, 0x1b, 0x2, 0x2, 0x2f9, 0x2fa, 0x7, 
       0x28, 0x2, 0x2, 0x2fa, 0x2fb, 0x5, 0x36, 0x1c, 0x2, 0x2fb, 0x2fc, 
       0x7, 0x43, 0x2, 0x2, 0x2fc, 0x2fd, 0x7, 0x68, 0x2, 0x2, 0x2fd, 0x2fe, 
       0x7, 0x41, 0x2, 0x2, 0x2fe, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x300, 
       0x7, 0x1b, 0x2, 0x2, 0x300, 0x301, 0x7, 0x28, 0x2, 0x2, 0x301, 0x302, 
       0x5, 0x36, 0x1c, 0x2, 0x302, 0x303, 0x7, 0x43, 0x2, 0x2, 0x303, 0x304, 
       0x7, 0x55, 0x2, 0x2, 0x304, 0x305, 0x7, 0x41, 0x2, 0x2, 0x305, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x306, 0x30a, 0x5, 0x52, 0x2a, 0x2, 0x307, 0x30a, 
       0x5, 0xc6, 0x64, 0x2, 0x308, 0x30a, 0x7, 0x41, 0x2, 0x2, 0x309, 0x306, 
       0x3, 0x2, 0x2, 0x2, 0x309, 0x307, 0x3, 0x2, 0x2, 0x2, 0x309, 0x308, 
       0x3, 0x2, 0x2, 0x2, 0x30a, 0x51, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30e, 
       0x5, 0x54, 0x2b, 0x2, 0x30c, 0x30e, 0x5, 0xba, 0x5e, 0x2, 0x30d, 
       0x30b, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x30e, 
       0x53, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x311, 0x5, 0x56, 0x2c, 0x2, 0x310, 
       0x30f, 0x3, 0x2, 0x2, 0x2, 0x311, 0x314, 0x3, 0x2, 0x2, 0x2, 0x312, 
       0x310, 0x3, 0x2, 0x2, 0x2, 0x312, 0x313, 0x3, 0x2, 0x2, 0x2, 0x313, 
       0x315, 0x3, 0x2, 0x2, 0x2, 0x314, 0x312, 0x3, 0x2, 0x2, 0x2, 0x315, 
       0x316, 0x7, 0xb, 0x2, 0x2, 0x316, 0x318, 0x7, 0x68, 0x2, 0x2, 0x317, 
       0x319, 0x5, 0x58, 0x2d, 0x2, 0x318, 0x317, 0x3, 0x2, 0x2, 0x2, 0x318, 
       0x319, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x31a, 
       0x31c, 0x5, 0x5c, 0x2f, 0x2, 0x31b, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x31b, 
       0x31c, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x31d, 
       0x31f, 0x5, 0x5e, 0x30, 0x2, 0x31e, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x31e, 
       0x31f, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x320, 0x3, 0x2, 0x2, 0x2, 0x320, 
       0x321, 0x5, 0x62, 0x32, 0x2, 0x321, 0x55, 0x3, 0x2, 0x2, 0x2, 0x322, 
       0x32b, 0x5, 0xe6, 0x74, 0x2, 0x323, 0x32b, 0x7, 0x25, 0x2, 0x2, 0x324, 
       0x32b, 0x7, 0x24, 0x2, 0x2, 0x325, 0x32b, 0x7, 0x23, 0x2, 0x2, 0x326, 
       0x32b, 0x7, 0x3, 0x2, 0x2, 0x327, 0x32b, 0x7, 0x28, 0x2, 0x2, 0x328, 
       0x32b, 0x7, 0x14, 0x2, 0x2, 0x329, 0x32b, 0x7, 0x29, 0x2, 0x2, 0x32a, 
       0x322, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x323, 0x3, 0x2, 0x2, 0x2, 0x32a, 
       0x324, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x325, 0x3, 0x2, 0x2, 0x2, 0x32a, 
       0x326, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x327, 0x3, 0x2, 0x2, 0x2, 0x32a, 
       0x328, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x329, 0x3, 0x2, 0x2, 0x2, 0x32b, 
       0x57, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32d, 0x7, 0x46, 0x2, 0x2, 0x32d, 
       0x32e, 0x5, 0x5a, 0x2e, 0x2, 0x32e, 0x32f, 0x7, 0x45, 0x2, 0x2, 0x32f, 
       0x59, 0x3, 0x2, 0x2, 0x2, 0x330, 0x335, 0x5, 0x22, 0x12, 0x2, 0x331, 
       0x332, 0x7, 0x42, 0x2, 0x2, 0x332, 0x334, 0x5, 0x22, 0x12, 0x2, 0x333, 
       0x331, 0x3, 0x2, 0x2, 0x2, 0x334, 0x337, 0x3, 0x2, 0x2, 0x2, 0x335, 
       0x333, 0x3, 0x2, 0x2, 0x2, 0x335, 0x336, 0x3, 0x2, 0x2, 0x2, 0x336, 
       0x5b, 0x3, 0x2, 0x2, 0x2, 0x337, 0x335, 0x3, 0x2, 0x2, 0x2, 0x338, 
       0x339, 0x7, 0x13, 0x2, 0x2, 0x339, 0x33a, 0x5, 0x10, 0x9, 0x2, 0x33a, 
       0x5d, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33c, 0x7, 0x1a, 0x2, 0x2, 0x33c, 
       0x33d, 0x5, 0x60, 0x31, 0x2, 0x33d, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x33e, 
       0x343, 0x5, 0x16, 0xc, 0x2, 0x33f, 0x340, 0x7, 0x42, 0x2, 0x2, 0x340, 
       0x342, 0x5, 0x16, 0xc, 0x2, 0x341, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x342, 
       0x345, 0x3, 0x2, 0x2, 0x2, 0x343, 0x341, 0x3, 0x2, 0x2, 0x2, 0x343, 
       0x344, 0x3, 0x2, 0x2, 0x2, 0x344, 0x61, 0x3, 0x2, 0x2, 0x2, 0x345, 
       0x343, 0x3, 0x2, 0x2, 0x2, 0x346, 0x34a, 0x7, 0x3d, 0x2, 0x2, 0x347, 
       0x349, 0x5, 0x64, 0x33, 0x2, 0x348, 0x347, 0x3, 0x2, 0x2, 0x2, 0x349, 
       0x34c, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x348, 0x3, 0x2, 0x2, 0x2, 0x34a, 
       0x34b, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x34c, 
       0x34a, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x34e, 0x7, 0x3e, 0x2, 0x2, 0x34e, 
       0x63, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x354, 0x5, 0x66, 0x34, 0x2, 0x350, 
       0x354, 0x5, 0xaa, 0x56, 0x2, 0x351, 0x354, 0x5, 0xac, 0x57, 0x2, 
       0x352, 0x354, 0x5, 0xae, 0x58, 0x2, 0x353, 0x34f, 0x3, 0x2, 0x2, 
       0x2, 0x353, 0x350, 0x3, 0x2, 0x2, 0x2, 0x353, 0x351, 0x3, 0x2, 0x2, 
       0x2, 0x353, 0x352, 0x3, 0x2, 0x2, 0x2, 0x354, 0x65, 0x3, 0x2, 0x2, 
       0x2, 0x355, 0x35b, 0x5, 0x68, 0x35, 0x2, 0x356, 0x35b, 0x5, 0x8c, 
       0x47, 0x2, 0x357, 0x35b, 0x5, 0x52, 0x2a, 0x2, 0x358, 0x35b, 0x5, 
       0xc6, 0x64, 0x2, 0x359, 0x35b, 0x7, 0x41, 0x2, 0x2, 0x35a, 0x355, 
       0x3, 0x2, 0x2, 0x2, 0x35a, 0x356, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x357, 
       0x3, 0x2, 0x2, 0x2, 0x35a, 0x358, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x359, 
       0x3, 0x2, 0x2, 0x2, 0x35b, 0x67, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x35e, 
       0x5, 0x6a, 0x36, 0x2, 0x35d, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x361, 
       0x3, 0x2, 0x2, 0x2, 0x35f, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x360, 
       0x3, 0x2, 0x2, 0x2, 0x360, 0x362, 0x3, 0x2, 0x2, 0x2, 0x361, 0x35f, 
       0x3, 0x2, 0x2, 0x2, 0x362, 0x363, 0x5, 0x74, 0x3b, 0x2, 0x363, 0x364, 
       0x5, 0x6c, 0x37, 0x2, 0x364, 0x365, 0x7, 0x41, 0x2, 0x2, 0x365, 0x69, 
       0x3, 0x2, 0x2, 0x2, 0x366, 0x36f, 0x5, 0xe6, 0x74, 0x2, 0x367, 0x36f, 
       0x7, 0x25, 0x2, 0x2, 0x368, 0x36f, 0x7, 0x24, 0x2, 0x2, 0x369, 0x36f, 
       0x7, 0x23, 0x2, 0x2, 0x36a, 0x36f, 0x7, 0x28, 0x2, 0x2, 0x36b, 0x36f, 
       0x7, 0x14, 0x2, 0x2, 0x36c, 0x36f, 0x7, 0x30, 0x2, 0x2, 0x36d, 0x36f, 
       0x7, 0x33, 0x2, 0x2, 0x36e, 0x366, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x367, 
       0x3, 0x2, 0x2, 0x2, 0x36e, 0x368, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x369, 
       0x3, 0x2, 0x2, 0x2, 0x36e, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x36b, 
       0x3, 0x2, 0x2, 0x2, 0x36e, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x36d, 
       0x3, 0x2, 0x2, 0x2, 0x36f, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x370, 0x375, 
       0x5, 0x6e, 0x38, 0x2, 0x371, 0x372, 0x7, 0x42, 0x2, 0x2, 0x372, 0x374, 
       0x5, 0x6e, 0x38, 0x2, 0x373, 0x371, 0x3, 0x2, 0x2, 0x2, 0x374, 0x377, 
       0x3, 0x2, 0x2, 0x2, 0x375, 0x373, 0x3, 0x2, 0x2, 0x2, 0x375, 0x376, 
       0x3, 0x2, 0x2, 0x2, 0x376, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x377, 0x375, 
       0x3, 0x2, 0x2, 0x2, 0x378, 0x37b, 0x5, 0x70, 0x39, 0x2, 0x379, 0x37a, 
       0x7, 0x44, 0x2, 0x2, 0x37a, 0x37c, 0x5, 0x72, 0x3a, 0x2, 0x37b, 0x379, 
       0x3, 0x2, 0x2, 0x2, 0x37b, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x6f, 
       0x3, 0x2, 0x2, 0x2, 0x37d, 0x37f, 0x7, 0x68, 0x2, 0x2, 0x37e, 0x380, 
       0x5, 0x20, 0x11, 0x2, 0x37f, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x380, 
       0x3, 0x2, 0x2, 0x2, 0x380, 0x71, 0x3, 0x2, 0x2, 0x2, 0x381, 0x384, 
       0x5, 0x19e, 0xd0, 0x2, 0x382, 0x384, 0x5, 0xf8, 0x7d, 0x2, 0x383, 
       0x381, 0x3, 0x2, 0x2, 0x2, 0x383, 0x382, 0x3, 0x2, 0x2, 0x2, 0x384, 
       0x73, 0x3, 0x2, 0x2, 0x2, 0x385, 0x388, 0x5, 0x76, 0x3c, 0x2, 0x386, 
       0x388, 0x5, 0x78, 0x3d, 0x2, 0x387, 0x385, 0x3, 0x2, 0x2, 0x2, 0x387, 
       0x386, 0x3, 0x2, 0x2, 0x2, 0x388, 0x75, 0x3, 0x2, 0x2, 0x2, 0x389, 
       0x38c, 0x5, 0x6, 0x4, 0x2, 0x38a, 0x38c, 0x7, 0x5, 0x2, 0x2, 0x38b, 
       0x389, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x38c, 
       0x77, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x391, 0x5, 0x7a, 0x3e, 0x2, 0x38e, 
       0x391, 0x5, 0x88, 0x45, 0x2, 0x38f, 0x391, 0x5, 0x8a, 0x46, 0x2, 
       0x390, 0x38d, 0x3, 0x2, 0x2, 0x2, 0x390, 0x38e, 0x3, 0x2, 0x2, 0x2, 
       0x390, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x391, 0x79, 0x3, 0x2, 0x2, 0x2, 
       0x392, 0x395, 0x5, 0x80, 0x41, 0x2, 0x393, 0x395, 0x5, 0x86, 0x44, 
       0x2, 0x394, 0x392, 0x3, 0x2, 0x2, 0x2, 0x394, 0x393, 0x3, 0x2, 0x2, 
       0x2, 0x395, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x396, 0x399, 0x5, 0x7e, 0x40, 
       0x2, 0x397, 0x399, 0x5, 0x84, 0x43, 0x2, 0x398, 0x396, 0x3, 0x2, 
       0x2, 0x2, 0x398, 0x397, 0x3, 0x2, 0x2, 0x2, 0x399, 0x39c, 0x3, 0x2, 
       0x2, 0x2, 0x39a, 0x398, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39b, 0x3, 0x2, 
       0x2, 0x2, 0x39b, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x39a, 0x3, 0x2, 
       0x2, 0x2, 0x39d, 0x39f, 0x7, 0x68, 0x2, 0x2, 0x39e, 0x3a0, 0x5, 0x2a, 
       0x16, 0x2, 0x39f, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x3a0, 0x3, 0x2, 
       0x2, 0x2, 0x3a0, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x3a2, 0x5, 0x7a, 
       0x3e, 0x2, 0x3a2, 0x3a6, 0x7, 0x43, 0x2, 0x2, 0x3a3, 0x3a5, 0x5, 
       0xe6, 0x74, 0x2, 0x3a4, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x3a8, 
       0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3a7, 
       0x3, 0x2, 0x2, 0x2, 0x3a7, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3a6, 
       0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3ab, 0x7, 0x68, 0x2, 0x2, 0x3aa, 0x3ac, 
       0x5, 0x2a, 0x16, 0x2, 0x3ab, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3ac, 
       0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x39d, 
       0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x7d, 
       0x3, 0x2, 0x2, 0x2, 0x3af, 0x3b3, 0x7, 0x43, 0x2, 0x2, 0x3b0, 0x3b2, 
       0x5, 0xe6, 0x74, 0x2, 0x3b1, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b5, 
       0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b4, 
       0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b3, 
       0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b8, 0x7, 0x68, 0x2, 0x2, 0x3b7, 0x3b9, 
       0x5, 0x2a, 0x16, 0x2, 0x3b8, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b9, 
       0x3, 0x2, 0x2, 0x2, 0x3b9, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3bc, 
       0x7, 0x68, 0x2, 0x2, 0x3bb, 0x3bd, 0x5, 0x2a, 0x16, 0x2, 0x3bc, 0x3bb, 
       0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x81, 
       0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bf, 0x5, 0x7c, 0x3f, 0x2, 0x3bf, 0x83, 
       0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3c1, 0x5, 0x7e, 0x40, 0x2, 0x3c1, 0x85, 
       0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3c3, 0x5, 0x80, 0x41, 0x2, 0x3c3, 0x87, 
       0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3c5, 0x7, 0x68, 0x2, 0x2, 0x3c5, 0x89, 
       0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3c7, 0x5, 0x76, 0x3c, 0x2, 0x3c7, 0x3c8, 
       0x5, 0x20, 0x11, 0x2, 0x3c8, 0x3d0, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3ca, 
       0x5, 0x7a, 0x3e, 0x2, 0x3ca, 0x3cb, 0x5, 0x20, 0x11, 0x2, 0x3cb, 
       0x3d0, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3cd, 0x5, 0x88, 0x45, 0x2, 0x3cd, 
       0x3ce, 0x5, 0x20, 0x11, 0x2, 0x3ce, 0x3d0, 0x3, 0x2, 0x2, 0x2, 0x3cf, 
       0x3c6, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3cf, 
       0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x3d1, 
       0x3d3, 0x5, 0x8e, 0x48, 0x2, 0x3d2, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3d3, 
       0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d4, 
       0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d6, 
       0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d8, 0x5, 0x90, 0x49, 0x2, 0x3d8, 
       0x3d9, 0x5, 0xa8, 0x55, 0x2, 0x3d9, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x3da, 
       0x3e5, 0x5, 0xe6, 0x74, 0x2, 0x3db, 0x3e5, 0x7, 0x25, 0x2, 0x2, 0x3dc, 
       0x3e5, 0x7, 0x24, 0x2, 0x2, 0x3dd, 0x3e5, 0x7, 0x23, 0x2, 0x2, 0x3de, 
       0x3e5, 0x7, 0x3, 0x2, 0x2, 0x3df, 0x3e5, 0x7, 0x28, 0x2, 0x2, 0x3e0, 
       0x3e5, 0x7, 0x14, 0x2, 0x2, 0x3e1, 0x3e5, 0x7, 0x2c, 0x2, 0x2, 0x3e2, 
       0x3e5, 0x7, 0x20, 0x2, 0x2, 0x3e3, 0x3e5, 0x7, 0x29, 0x2, 0x2, 0x3e4, 
       0x3da, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3e4, 
       0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3e4, 
       0x3de, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3e4, 
       0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e4, 
       0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e5, 
       0x8f, 0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e7, 0x5, 0x92, 0x4a, 0x2, 0x3e7, 
       0x3e9, 0x5, 0x94, 0x4b, 0x2, 0x3e8, 0x3ea, 0x5, 0xa2, 0x52, 0x2, 
       0x3e9, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3ea, 0x3, 0x2, 0x2, 0x2, 
       0x3ea, 0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3ef, 0x5, 0x58, 0x2d, 
       0x2, 0x3ec, 0x3ee, 0x5, 0xe6, 0x74, 0x2, 0x3ed, 0x3ec, 0x3, 0x2, 
       0x2, 0x2, 0x3ee, 0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3ed, 0x3, 0x2, 
       0x2, 0x2, 0x3ef, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3f2, 0x3, 0x2, 
       0x2, 0x2, 0x3f1, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3f3, 0x5, 0x92, 
       0x4a, 0x2, 0x3f3, 0x3f5, 0x5, 0x94, 0x4b, 0x2, 0x3f4, 0x3f6, 0x5, 
       0xa2, 0x52, 0x2, 0x3f5, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f6, 
       0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3e6, 
       0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x91, 
       0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3fc, 0x5, 0x74, 0x3b, 0x2, 0x3fa, 0x3fc, 
       0x7, 0x32, 0x2, 0x2, 0x3fb, 0x3f9, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fa, 
       0x3, 0x2, 0x2, 0x2, 0x3fc, 0x93, 0x3, 0x2, 0x2, 0x2, 0x3fd, 0x3fe, 
       0x7, 0x68, 0x2, 0x2, 0x3fe, 0x400, 0x7, 0x3b, 0x2, 0x2, 0x3ff, 0x401, 
       0x5, 0x96, 0x4c, 0x2, 0x400, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x400, 0x401, 
       0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 0x3, 0x2, 0x2, 0x2, 0x402, 0x404, 
       0x7, 0x3c, 0x2, 0x2, 0x403, 0x405, 0x5, 0x20, 0x11, 0x2, 0x404, 0x403, 
       0x3, 0x2, 0x2, 0x2, 0x404, 0x405, 0x3, 0x2, 0x2, 0x2, 0x405, 0x95, 
       0x3, 0x2, 0x2, 0x2, 0x406, 0x40d, 0x5, 0xa0, 0x51, 0x2, 0x407, 0x408, 
       0x5, 0x98, 0x4d, 0x2, 0x408, 0x409, 0x7, 0x42, 0x2, 0x2, 0x409, 0x40a, 
       0x5, 0x9e, 0x50, 0x2, 0x40a, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x40d, 
       0x5, 0x9e, 0x50, 0x2, 0x40c, 0x406, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x407, 
       0x3, 0x2, 0x2, 0x2, 0x40c, 0x40b, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x97, 
       0x3, 0x2, 0x2, 0x2, 0x40e, 0x413, 0x5, 0x9a, 0x4e, 0x2, 0x40f, 0x410, 
       0x7, 0x42, 0x2, 0x2, 0x410, 0x412, 0x5, 0x9a, 0x4e, 0x2, 0x411, 0x40f, 
       0x3, 0x2, 0x2, 0x2, 0x412, 0x415, 0x3, 0x2, 0x2, 0x2, 0x413, 0x411, 
       0x3, 0x2, 0x2, 0x2, 0x413, 0x414, 0x3, 0x2, 0x2, 0x2, 0x414, 0x41f, 
       0x3, 0x2, 0x2, 0x2, 0x415, 0x413, 0x3, 0x2, 0x2, 0x2, 0x416, 0x41b, 
       0x5, 0xa0, 0x51, 0x2, 0x417, 0x418, 0x7, 0x42, 0x2, 0x2, 0x418, 0x41a, 
       0x5, 0x9a, 0x4e, 0x2, 0x419, 0x417, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x41d, 
       0x3, 0x2, 0x2, 0x2, 0x41b, 0x419, 0x3, 0x2, 0x2, 0x2, 0x41b, 0x41c, 
       0x3, 0x2, 0x2, 0x2, 0x41c, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x41b, 
       0x3, 0x2, 0x2, 0x2, 0x41e, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x41e, 0x416, 
       0x3, 0x2, 0x2, 0x2, 0x41f, 0x99, 0x3, 0x2, 0x2, 0x2, 0x420, 0x422, 
       0x5, 0x9c, 0x4f, 0x2, 0x421, 0x420, 0x3, 0x2, 0x2, 0x2, 0x422, 0x425, 
       0x3, 0x2, 0x2, 0x2, 0x423, 0x421, 0x3, 0x2, 0x2, 0x2, 0x423, 0x424, 
       0x3, 0x2, 0x2, 0x2, 0x424, 0x426, 0x3, 0x2, 0x2, 0x2, 0x425, 0x423, 
       0x3, 0x2, 0x2, 0x2, 0x426, 0x427, 0x5, 0x74, 0x3b, 0x2, 0x427, 0x428, 
       0x5, 0x70, 0x39, 0x2, 0x428, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x429, 0x42c, 
       0x5, 0xe6, 0x74, 0x2, 0x42a, 0x42c, 0x7, 0x14, 0x2, 0x2, 0x42b, 0x429, 
       0x3, 0x2, 0x2, 0x2, 0x42b, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x9d, 
       0x3, 0x2, 0x2, 0x2, 0x42d, 0x42f, 0x5, 0x9c, 0x4f, 0x2, 0x42e, 0x42d, 
       0x3, 0x2, 0x2, 0x2, 0x42f, 0x432, 0x3, 0x2, 0x2, 0x2, 0x430, 0x42e, 
       0x3, 0x2, 0x2, 0x2, 0x430, 0x431, 0x3, 0x2, 0x2, 0x2, 0x431, 0x433, 
       0x3, 0x2, 0x2, 0x2, 0x432, 0x430, 0x3, 0x2, 0x2, 0x2, 0x433, 0x437, 
       0x5, 0x74, 0x3b, 0x2, 0x434, 0x436, 0x5, 0xe6, 0x74, 0x2, 0x435, 
       0x434, 0x3, 0x2, 0x2, 0x2, 0x436, 0x439, 0x3, 0x2, 0x2, 0x2, 0x437, 
       0x435, 0x3, 0x2, 0x2, 0x2, 0x437, 0x438, 0x3, 0x2, 0x2, 0x2, 0x438, 
       0x43a, 0x3, 0x2, 0x2, 0x2, 0x439, 0x437, 0x3, 0x2, 0x2, 0x2, 0x43a, 
       0x43b, 0x7, 0x6a, 0x2, 0x2, 0x43b, 0x43c, 0x5, 0x70, 0x39, 0x2, 0x43c, 
       0x43f, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43f, 0x5, 0x9a, 0x4e, 0x2, 0x43e, 
       0x430, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x43f, 
       0x9f, 0x3, 0x2, 0x2, 0x2, 0x440, 0x442, 0x5, 0xe6, 0x74, 0x2, 0x441, 
       0x440, 0x3, 0x2, 0x2, 0x2, 0x442, 0x445, 0x3, 0x2, 0x2, 0x2, 0x443, 
       0x441, 0x3, 0x2, 0x2, 0x2, 0x443, 0x444, 0x3, 0x2, 0x2, 0x2, 0x444, 
       0x446, 0x3, 0x2, 0x2, 0x2, 0x445, 0x443, 0x3, 0x2, 0x2, 0x2, 0x446, 
       0x449, 0x5, 0x74, 0x3b, 0x2, 0x447, 0x448, 0x7, 0x68, 0x2, 0x2, 0x448, 
       0x44a, 0x7, 0x43, 0x2, 0x2, 0x449, 0x447, 0x3, 0x2, 0x2, 0x2, 0x449, 
       0x44a, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x44b, 
       0x44c, 0x7, 0x2d, 0x2, 0x2, 0x44c, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x44d, 
       0x44e, 0x7, 0x2f, 0x2, 0x2, 0x44e, 0x44f, 0x5, 0xa4, 0x53, 0x2, 0x44f, 
       0xa3, 0x3, 0x2, 0x2, 0x2, 0x450, 0x455, 0x5, 0xa6, 0x54, 0x2, 0x451, 
       0x452, 0x7, 0x42, 0x2, 0x2, 0x452, 0x454, 0x5, 0xa6, 0x54, 0x2, 0x453, 
       0x451, 0x3, 0x2, 0x2, 0x2, 0x454, 0x457, 0x3, 0x2, 0x2, 0x2, 0x455, 
       0x453, 0x3, 0x2, 0x2, 0x2, 0x455, 0x456, 0x3, 0x2, 0x2, 0x2, 0x456, 
       0xa5, 0x3, 0x2, 0x2, 0x2, 0x457, 0x455, 0x3, 0x2, 0x2, 0x2, 0x458, 
       0x45b, 0x5, 0x10, 0x9, 0x2, 0x459, 0x45b, 0x5, 0x1c, 0xf, 0x2, 0x45a, 
       0x458, 0x3, 0x2, 0x2, 0x2, 0x45a, 0x459, 0x3, 0x2, 0x2, 0x2, 0x45b, 
       0xa7, 0x3, 0x2, 0x2, 0x2, 0x45c, 0x45f, 0x5, 0xfc, 0x7f, 0x2, 0x45d, 
       0x45f, 0x7, 0x41, 0x2, 0x2, 0x45e, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x45e, 
       0x45d, 0x3, 0x2, 0x2, 0x2, 0x45f, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x460, 
       0x461, 0x5, 0xfc, 0x7f, 0x2, 0x461, 0xab, 0x3, 0x2, 0x2, 0x2, 0x462, 
       0x463, 0x7, 0x28, 0x2, 0x2, 0x463, 0x464, 0x5, 0xfc, 0x7f, 0x2, 0x464, 
       0xad, 0x3, 0x2, 0x2, 0x2, 0x465, 0x467, 0x5, 0xb0, 0x59, 0x2, 0x466, 
       0x465, 0x3, 0x2, 0x2, 0x2, 0x467, 0x46a, 0x3, 0x2, 0x2, 0x2, 0x468, 
       0x466, 0x3, 0x2, 0x2, 0x2, 0x468, 0x469, 0x3, 0x2, 0x2, 0x2, 0x469, 
       0x46b, 0x3, 0x2, 0x2, 0x2, 0x46a, 0x468, 0x3, 0x2, 0x2, 0x2, 0x46b, 
       0x46d, 0x5, 0xb2, 0x5a, 0x2, 0x46c, 0x46e, 0x5, 0xa2, 0x52, 0x2, 
       0x46d, 0x46c, 0x3, 0x2, 0x2, 0x2, 0x46d, 0x46e, 0x3, 0x2, 0x2, 0x2, 
       0x46e, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x46f, 0x470, 0x5, 0xb6, 0x5c, 
       0x2, 0x470, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x471, 0x476, 0x5, 0xe6, 0x74, 
       0x2, 0x472, 0x476, 0x7, 0x25, 0x2, 0x2, 0x473, 0x476, 0x7, 0x24, 
       0x2, 0x2, 0x474, 0x476, 0x7, 0x23, 0x2, 0x2, 0x475, 0x471, 0x3, 0x2, 
       0x2, 0x2, 0x475, 0x472, 0x3, 0x2, 0x2, 0x2, 0x475, 0x473, 0x3, 0x2, 
       0x2, 0x2, 0x475, 0x474, 0x3, 0x2, 0x2, 0x2, 0x476, 0xb1, 0x3, 0x2, 
       0x2, 0x2, 0x477, 0x479, 0x5, 0x58, 0x2d, 0x2, 0x478, 0x477, 0x3, 
       0x2, 0x2, 0x2, 0x478, 0x479, 0x3, 0x2, 0x2, 0x2, 0x479, 0x47a, 0x3, 
       0x2, 0x2, 0x2, 0x47a, 0x47b, 0x5, 0xb4, 0x5b, 0x2, 0x47b, 0x47d, 
       0x7, 0x3b, 0x2, 0x2, 0x47c, 0x47e, 0x5, 0x96, 0x4c, 0x2, 0x47d, 0x47c, 
       0x3, 0x2, 0x2, 0x2, 0x47d, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x47e, 0x47f, 
       0x3, 0x2, 0x2, 0x2, 0x47f, 0x480, 0x7, 0x3c, 0x2, 0x2, 0x480, 0xb3, 
       0x3, 0x2, 0x2, 0x2, 0x481, 0x482, 0x7, 0x68, 0x2, 0x2, 0x482, 0xb5, 
       0x3, 0x2, 0x2, 0x2, 0x483, 0x485, 0x7, 0x3d, 0x2, 0x2, 0x484, 0x486, 
       0x5, 0xb8, 0x5d, 0x2, 0x485, 0x484, 0x3, 0x2, 0x2, 0x2, 0x485, 0x486, 
       0x3, 0x2, 0x2, 0x2, 0x486, 0x488, 0x3, 0x2, 0x2, 0x2, 0x487, 0x489, 
       0x5, 0xfe, 0x80, 0x2, 0x488, 0x487, 0x3, 0x2, 0x2, 0x2, 0x488, 0x489, 
       0x3, 0x2, 0x2, 0x2, 0x489, 0x48a, 0x3, 0x2, 0x2, 0x2, 0x48a, 0x48b, 
       0x7, 0x3e, 0x2, 0x2, 0x48b, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x48c, 0x48e, 
       0x5, 0x2a, 0x16, 0x2, 0x48d, 0x48c, 0x3, 0x2, 0x2, 0x2, 0x48d, 0x48e, 
       0x3, 0x2, 0x2, 0x2, 0x48e, 0x48f, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x490, 
       0x7, 0x2d, 0x2, 0x2, 0x490, 0x492, 0x7, 0x3b, 0x2, 0x2, 0x491, 0x493, 
       0x5, 0x18e, 0xc8, 0x2, 0x492, 0x491, 0x3, 0x2, 0x2, 0x2, 0x492, 0x493, 
       0x3, 0x2, 0x2, 0x2, 0x493, 0x494, 0x3, 0x2, 0x2, 0x2, 0x494, 0x495, 
       0x7, 0x3c, 0x2, 0x2, 0x495, 0x4bb, 0x7, 0x41, 0x2, 0x2, 0x496, 0x498, 
       0x5, 0x2a, 0x16, 0x2, 0x497, 0x496, 0x3, 0x2, 0x2, 0x2, 0x497, 0x498, 
       0x3, 0x2, 0x2, 0x2, 0x498, 0x499, 0x3, 0x2, 0x2, 0x2, 0x499, 0x49a, 
       0x7, 0x2a, 0x2, 0x2, 0x49a, 0x49c, 0x7, 0x3b, 0x2, 0x2, 0x49b, 0x49d, 
       0x5, 0x18e, 0xc8, 0x2, 0x49c, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x49c, 0x49d, 
       0x3, 0x2, 0x2, 0x2, 0x49d, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x49e, 0x49f, 
       0x7, 0x3c, 0x2, 0x2, 0x49f, 0x4bb, 0x7, 0x41, 0x2, 0x2, 0x4a0, 0x4a1, 
       0x5, 0x3a, 0x1e, 0x2, 0x4a1, 0x4a3, 0x7, 0x43, 0x2, 0x2, 0x4a2, 0x4a4, 
       0x5, 0x2a, 0x16, 0x2, 0x4a3, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4a3, 0x4a4, 
       0x3, 0x2, 0x2, 0x2, 0x4a4, 0x4a5, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a6, 
       0x7, 0x2a, 0x2, 0x2, 0x4a6, 0x4a8, 0x7, 0x3b, 0x2, 0x2, 0x4a7, 0x4a9, 
       0x5, 0x18e, 0xc8, 0x2, 0x4a8, 0x4a7, 0x3, 0x2, 0x2, 0x2, 0x4a8, 0x4a9, 
       0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4aa, 0x3, 0x2, 0x2, 0x2, 0x4aa, 0x4ab, 
       0x7, 0x3c, 0x2, 0x2, 0x4ab, 0x4ac, 0x7, 0x41, 0x2, 0x2, 0x4ac, 0x4bb, 
       0x3, 0x2, 0x2, 0x2, 0x4ad, 0x4ae, 0x5, 0x160, 0xb1, 0x2, 0x4ae, 0x4b0, 
       0x7, 0x43, 0x2, 0x2, 0x4af, 0x4b1, 0x5, 0x2a, 0x16, 0x2, 0x4b0, 0x4af, 
       0x3, 0x2, 0x2, 0x2, 0x4b0, 0x4b1, 0x3, 0x2, 0x2, 0x2, 0x4b1, 0x4b2, 
       0x3, 0x2, 0x2, 0x2, 0x4b2, 0x4b3, 0x7, 0x2a, 0x2, 0x2, 0x4b3, 0x4b5, 
       0x7, 0x3b, 0x2, 0x2, 0x4b4, 0x4b6, 0x5, 0x18e, 0xc8, 0x2, 0x4b5, 
       0x4b4, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b6, 0x3, 0x2, 0x2, 0x2, 0x4b6, 
       0x4b7, 0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b8, 0x7, 0x3c, 0x2, 0x2, 0x4b8, 
       0x4b9, 0x7, 0x41, 0x2, 0x2, 0x4b9, 0x4bb, 0x3, 0x2, 0x2, 0x2, 0x4ba, 
       0x48d, 0x3, 0x2, 0x2, 0x2, 0x4ba, 0x497, 0x3, 0x2, 0x2, 0x2, 0x4ba, 
       0x4a0, 0x3, 0x2, 0x2, 0x2, 0x4ba, 0x4ad, 0x3, 0x2, 0x2, 0x2, 0x4bb, 
       0xb9, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4be, 0x5, 0x56, 0x2c, 0x2, 0x4bd, 
       0x4bc, 0x3, 0x2, 0x2, 0x2, 0x4be, 0x4c1, 0x3, 0x2, 0x2, 0x2, 0x4bf, 
       0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4bf, 0x4c0, 0x3, 0x2, 0x2, 0x2, 0x4c0, 
       0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4bf, 0x3, 0x2, 0x2, 0x2, 0x4c2, 
       0x4c3, 0x7, 0x12, 0x2, 0x2, 0x4c3, 0x4c5, 0x7, 0x68, 0x2, 0x2, 0x4c4, 
       0x4c6, 0x5, 0x5e, 0x30, 0x2, 0x4c5, 0x4c4, 0x3, 0x2, 0x2, 0x2, 0x4c5, 
       0x4c6, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4c7, 
       0x4c8, 0x5, 0xbc, 0x5f, 0x2, 0x4c8, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x4c9, 
       0x4cb, 0x7, 0x3d, 0x2, 0x2, 0x4ca, 0x4cc, 0x5, 0xbe, 0x60, 0x2, 0x4cb, 
       0x4ca, 0x3, 0x2, 0x2, 0x2, 0x4cb, 0x4cc, 0x3, 0x2, 0x2, 0x2, 0x4cc, 
       0x4ce, 0x3, 0x2, 0x2, 0x2, 0x4cd, 0x4cf, 0x7, 0x42, 0x2, 0x2, 0x4ce, 
       0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4ce, 0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4cf, 
       0x4d1, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4d2, 0x5, 0xc4, 0x63, 0x2, 0x4d1, 
       0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d1, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x4d2, 
       0x4d3, 0x3, 0x2, 0x2, 0x2, 0x4d3, 0x4d4, 0x7, 0x3e, 0x2, 0x2, 0x4d4, 
       0xbd, 0x3, 0x2, 0x2, 0x2, 0x4d5, 0x4da, 0x5, 0xc0, 0x61, 0x2, 0x4d6, 
       0x4d7, 0x7, 0x42, 0x2, 0x2, 0x4d7, 0x4d9, 0x5, 0xc0, 0x61, 0x2, 0x4d8, 
       0x4d6, 0x3, 0x2, 0x2, 0x2, 0x4d9, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0x4da, 
       0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4da, 0x4db, 0x3, 0x2, 0x2, 0x2, 0x4db, 
       0xbf, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x4da, 0x3, 0x2, 0x2, 0x2, 0x4dd, 
       0x4df, 0x5, 0xc2, 0x62, 0x2, 0x4de, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x4df, 
       0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e0, 0x4de, 0x3, 0x2, 0x2, 0x2, 0x4e0, 
       0x4e1, 0x3, 0x2, 0x2, 0x2, 0x4e1, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0x4e2, 
       0x4e0, 0x3, 0x2, 0x2, 0x2, 0x4e3, 0x4e9, 0x7, 0x68, 0x2, 0x2, 0x4e4, 
       0x4e6, 0x7, 0x3b, 0x2, 0x2, 0x4e5, 0x4e7, 0x5, 0x18e, 0xc8, 0x2, 
       0x4e6, 0x4e5, 0x3, 0x2, 0x2, 0x2, 0x4e6, 0x4e7, 0x3, 0x2, 0x2, 0x2, 
       0x4e7, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4ea, 0x7, 0x3c, 0x2, 0x2, 
       0x4e9, 0x4e4, 0x3, 0x2, 0x2, 0x2, 0x4e9, 0x4ea, 0x3, 0x2, 0x2, 0x2, 
       0x4ea, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x4eb, 0x4ed, 0x5, 0x62, 0x32, 
       0x2, 0x4ec, 0x4eb, 0x3, 0x2, 0x2, 0x2, 0x4ec, 0x4ed, 0x3, 0x2, 0x2, 
       0x2, 0x4ed, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x4ee, 0x4ef, 0x5, 0xe6, 0x74, 
       0x2, 0x4ef, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x4f0, 0x4f4, 0x7, 0x41, 0x2, 
       0x2, 0x4f1, 0x4f3, 0x5, 0x64, 0x33, 0x2, 0x4f2, 0x4f1, 0x3, 0x2, 
       0x2, 0x2, 0x4f3, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4f2, 0x3, 0x2, 
       0x2, 0x2, 0x4f4, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4f5, 0xc5, 0x3, 0x2, 
       0x2, 0x2, 0x4f6, 0x4f4, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4fa, 0x5, 0xc8, 
       0x65, 0x2, 0x4f8, 0x4fa, 0x5, 0xda, 0x6e, 0x2, 0x4f9, 0x4f7, 0x3, 
       0x2, 0x2, 0x2, 0x4f9, 0x4f8, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0xc7, 0x3, 
       0x2, 0x2, 0x2, 0x4fb, 0x4fd, 0x5, 0xca, 0x66, 0x2, 0x4fc, 0x4fb, 
       0x3, 0x2, 0x2, 0x2, 0x4fd, 0x500, 0x3, 0x2, 0x2, 0x2, 0x4fe, 0x4fc, 
       0x3, 0x2, 0x2, 0x2, 0x4fe, 0x4ff, 0x3, 0x2, 0x2, 0x2, 0x4ff, 0x501, 
       0x3, 0x2, 0x2, 0x2, 0x500, 0x4fe, 0x3, 0x2, 0x2, 0x2, 0x501, 0x502, 
       0x7, 0x1e, 0x2, 0x2, 0x502, 0x504, 0x7, 0x68, 0x2, 0x2, 0x503, 0x505, 
       0x5, 0x58, 0x2d, 0x2, 0x504, 0x503, 0x3, 0x2, 0x2, 0x2, 0x504, 0x505, 
       0x3, 0x2, 0x2, 0x2, 0x505, 0x507, 0x3, 0x2, 0x2, 0x2, 0x506, 0x508, 
       0x5, 0xcc, 0x67, 0x2, 0x507, 0x506, 0x3, 0x2, 0x2, 0x2, 0x507, 0x508, 
       0x3, 0x2, 0x2, 0x2, 0x508, 0x509, 0x3, 0x2, 0x2, 0x2, 0x509, 0x50a, 
       0x5, 0xce, 0x68, 0x2, 0x50a, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x513, 
       0x5, 0xe6, 0x74, 0x2, 0x50c, 0x513, 0x7, 0x25, 0x2, 0x2, 0x50d, 0x513, 
       0x7, 0x24, 0x2, 0x2, 0x50e, 0x513, 0x7, 0x23, 0x2, 0x2, 0x50f, 0x513, 
       0x7, 0x3, 0x2, 0x2, 0x510, 0x513, 0x7, 0x28, 0x2, 0x2, 0x511, 0x513, 
       0x7, 0x29, 0x2, 0x2, 0x512, 0x50b, 0x3, 0x2, 0x2, 0x2, 0x512, 0x50c, 
       0x3, 0x2, 0x2, 0x2, 0x512, 0x50d, 0x3, 0x2, 0x2, 0x2, 0x512, 0x50e, 
       0x3, 0x2, 0x2, 0x2, 0x512, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x512, 0x510, 
       0x3, 0x2, 0x2, 0x2, 0x512, 0x511, 0x3, 0x2, 0x2, 0x2, 0x513, 0xcb, 
       0x3, 0x2, 0x2, 0x2, 0x514, 0x515, 0x7, 0x13, 0x2, 0x2, 0x515, 0x516, 
       0x5, 0x60, 0x31, 0x2, 0x516, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x517, 0x51b, 
       0x7, 0x3d, 0x2, 0x2, 0x518, 0x51a, 0x5, 0xd0, 0x69, 0x2, 0x519, 0x518, 
       0x3, 0x2, 0x2, 0x2, 0x51a, 0x51d, 0x3, 0x2, 0x2, 0x2, 0x51b, 0x519, 
       0x3, 0x2, 0x2, 0x2, 0x51b, 0x51c, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x51e, 
       0x3, 0x2, 0x2, 0x2, 0x51d, 0x51b, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x51f, 
       0x7, 0x3e, 0x2, 0x2, 0x51f, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x520, 0x526, 
       0x5, 0xd2, 0x6a, 0x2, 0x521, 0x526, 0x5, 0xd6, 0x6c, 0x2, 0x522, 
       0x526, 0x5, 0x52, 0x2a, 0x2, 0x523, 0x526, 0x5, 0xc6, 0x64, 0x2, 
       0x524, 0x526, 0x7, 0x41, 0x2, 0x2, 0x525, 0x520, 0x3, 0x2, 0x2, 0x2, 
       0x525, 0x521, 0x3, 0x2, 0x2, 0x2, 0x525, 0x522, 0x3, 0x2, 0x2, 0x2, 
       0x525, 0x523, 0x3, 0x2, 0x2, 0x2, 0x525, 0x524, 0x3, 0x2, 0x2, 0x2, 
       0x526, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x527, 0x529, 0x5, 0xd4, 0x6b, 0x2, 
       0x528, 0x527, 0x3, 0x2, 0x2, 0x2, 0x529, 0x52c, 0x3, 0x2, 0x2, 0x2, 
       0x52a, 0x528, 0x3, 0x2, 0x2, 0x2, 0x52a, 0x52b, 0x3, 0x2, 0x2, 0x2, 
       0x52b, 0x52d, 0x3, 0x2, 0x2, 0x2, 0x52c, 0x52a, 0x3, 0x2, 0x2, 0x2, 
       0x52d, 0x52e, 0x5, 0x74, 0x3b, 0x2, 0x52e, 0x52f, 0x5, 0x6c, 0x37, 
       0x2, 0x52f, 0x530, 0x7, 0x41, 0x2, 0x2, 0x530, 0xd3, 0x3, 0x2, 0x2, 
       0x2, 0x531, 0x536, 0x5, 0xe6, 0x74, 0x2, 0x532, 0x536, 0x7, 0x25, 
       0x2, 0x2, 0x533, 0x536, 0x7, 0x28, 0x2, 0x2, 0x534, 0x536, 0x7, 0x14, 
       0x2, 0x2, 0x535, 0x531, 0x3, 0x2, 0x2, 0x2, 0x535, 0x532, 0x3, 0x2, 
       0x2, 0x2, 0x535, 0x533, 0x3, 0x2, 0x2, 0x2, 0x535, 0x534, 0x3, 0x2, 
       0x2, 0x2, 0x536, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x537, 0x539, 0x5, 0xd8, 
       0x6d, 0x2, 0x538, 0x537, 0x3, 0x2, 0x2, 0x2, 0x539, 0x53c, 0x3, 0x2, 
       0x2, 0x2, 0x53a, 0x538, 0x3, 0x2, 0x2, 0x2, 0x53a, 0x53b, 0x3, 0x2, 
       0x2, 0x2, 0x53b, 0x53d, 0x3, 0x2, 0x2, 0x2, 0x53c, 0x53a, 0x3, 0x2, 
       0x2, 0x2, 0x53d, 0x53e, 0x5, 0x90, 0x49, 0x2, 0x53e, 0x53f, 0x5, 
       0xa8, 0x55, 0x2, 0x53f, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x540, 0x547, 0x5, 
       0xe6, 0x74, 0x2, 0x541, 0x547, 0x7, 0x25, 0x2, 0x2, 0x542, 0x547, 
       0x7, 0x3, 0x2, 0x2, 0x543, 0x547, 0x7, 0xe, 0x2, 0x2, 0x544, 0x547, 
       0x7, 0x28, 0x2, 0x2, 0x545, 0x547, 0x7, 0x29, 0x2, 0x2, 0x546, 0x540, 
       0x3, 0x2, 0x2, 0x2, 0x546, 0x541, 0x3, 0x2, 0x2, 0x2, 0x546, 0x542, 
       0x3, 0x2, 0x2, 0x2, 0x546, 0x543, 0x3, 0x2, 0x2, 0x2, 0x546, 0x544, 
       0x3, 0x2, 0x2, 0x2, 0x546, 0x545, 0x3, 0x2, 0x2, 0x2, 0x547, 0xd9, 
       0x3, 0x2, 0x2, 0x2, 0x548, 0x54a, 0x5, 0xca, 0x66, 0x2, 0x549, 0x548, 
       0x3, 0x2, 0x2, 0x2, 0x54a, 0x54d, 0x3, 0x2, 0x2, 0x2, 0x54b, 0x549, 
       0x3, 0x2, 0x2, 0x2, 0x54b, 0x54c, 0x3, 0x2, 0x2, 0x2, 0x54c, 0x54e, 
       0x3, 0x2, 0x2, 0x2, 0x54d, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x54e, 0x54f, 
       0x7, 0x69, 0x2, 0x2, 0x54f, 0x550, 0x7, 0x1e, 0x2, 0x2, 0x550, 0x551, 
       0x7, 0x68, 0x2, 0x2, 0x551, 0x552, 0x5, 0xdc, 0x6f, 0x2, 0x552, 0xdb, 
       0x3, 0x2, 0x2, 0x2, 0x553, 0x557, 0x7, 0x3d, 0x2, 0x2, 0x554, 0x556, 
       0x5, 0xde, 0x70, 0x2, 0x555, 0x554, 0x3, 0x2, 0x2, 0x2, 0x556, 0x559, 
       0x3, 0x2, 0x2, 0x2, 0x557, 0x555, 0x3, 0x2, 0x2, 0x2, 0x557, 0x558, 
       0x3, 0x2, 0x2, 0x2, 0x558, 0x55a, 0x3, 0x2, 0x2, 0x2, 0x559, 0x557, 
       0x3, 0x2, 0x2, 0x2, 0x55a, 0x55b, 0x7, 0x3e, 0x2, 0x2, 0x55b, 0xdd, 
       0x3, 0x2, 0x2, 0x2, 0x55c, 0x562, 0x5, 0xe0, 0x71, 0x2, 0x55d, 0x562, 
       0x5, 0xd2, 0x6a, 0x2, 0x55e, 0x562, 0x5, 0x52, 0x2a, 0x2, 0x55f, 
       0x562, 0x5, 0xc6, 0x64, 0x2, 0x560, 0x562, 0x7, 0x41, 0x2, 0x2, 0x561, 
       0x55c, 0x3, 0x2, 0x2, 0x2, 0x561, 0x55d, 0x3, 0x2, 0x2, 0x2, 0x561, 
       0x55e, 0x3, 0x2, 0x2, 0x2, 0x561, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x561, 
       0x560, 0x3, 0x2, 0x2, 0x2, 0x562, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x563, 
       0x565, 0x5, 0xe2, 0x72, 0x2, 0x564, 0x563, 0x3, 0x2, 0x2, 0x2, 0x565, 
       0x568, 0x3, 0x2, 0x2, 0x2, 0x566, 0x564, 0x3, 0x2, 0x2, 0x2, 0x566, 
       0x567, 0x3, 0x2, 0x2, 0x2, 0x567, 0x569, 0x3, 0x2, 0x2, 0x2, 0x568, 
       0x566, 0x3, 0x2, 0x2, 0x2, 0x569, 0x56a, 0x5, 0x74, 0x3b, 0x2, 0x56a, 
       0x56b, 0x7, 0x68, 0x2, 0x2, 0x56b, 0x56c, 0x7, 0x3b, 0x2, 0x2, 0x56c, 
       0x56e, 0x7, 0x3c, 0x2, 0x2, 0x56d, 0x56f, 0x5, 0x20, 0x11, 0x2, 0x56e, 
       0x56d, 0x3, 0x2, 0x2, 0x2, 0x56e, 0x56f, 0x3, 0x2, 0x2, 0x2, 0x56f, 
       0x571, 0x3, 0x2, 0x2, 0x2, 0x570, 0x572, 0x5, 0xe4, 0x73, 0x2, 0x571, 
       0x570, 0x3, 0x2, 0x2, 0x2, 0x571, 0x572, 0x3, 0x2, 0x2, 0x2, 0x572, 
       0x573, 0x3, 0x2, 0x2, 0x2, 0x573, 0x574, 0x7, 0x41, 0x2, 0x2, 0x574, 
       0xe1, 0x3, 0x2, 0x2, 0x2, 0x575, 0x579, 0x5, 0xe6, 0x74, 0x2, 0x576, 
       0x579, 0x7, 0x25, 0x2, 0x2, 0x577, 0x579, 0x7, 0x3, 0x2, 0x2, 0x578, 
       0x575, 0x3, 0x2, 0x2, 0x2, 0x578, 0x576, 0x3, 0x2, 0x2, 0x2, 0x578, 
       0x577, 0x3, 0x2, 0x2, 0x2, 0x579, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x57a, 
       0x57b, 0x7, 0xe, 0x2, 0x2, 0x57b, 0x57c, 0x5, 0xee, 0x78, 0x2, 0x57c, 
       0xe5, 0x3, 0x2, 0x2, 0x2, 0x57d, 0x581, 0x5, 0xe8, 0x75, 0x2, 0x57e, 
       0x581, 0x5, 0xf4, 0x7b, 0x2, 0x57f, 0x581, 0x5, 0xf6, 0x7c, 0x2, 
       0x580, 0x57d, 0x3, 0x2, 0x2, 0x2, 0x580, 0x57e, 0x3, 0x2, 0x2, 0x2, 
       0x580, 0x57f, 0x3, 0x2, 0x2, 0x2, 0x581, 0xe7, 0x3, 0x2, 0x2, 0x2, 
       0x582, 0x583, 0x7, 0x69, 0x2, 0x2, 0x583, 0x584, 0x5, 0x36, 0x1c, 
       0x2, 0x584, 0x586, 0x7, 0x3b, 0x2, 0x2, 0x585, 0x587, 0x5, 0xea, 
       0x76, 0x2, 0x586, 0x585, 0x3, 0x2, 0x2, 0x2, 0x586, 0x587, 0x3, 0x2, 
       0x2, 0x2, 0x587, 0x588, 0x3, 0x2, 0x2, 0x2, 0x588, 0x589, 0x7, 0x3c, 
       0x2, 0x2, 0x589, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x58a, 0x58f, 0x5, 0xec, 
       0x77, 0x2, 0x58b, 0x58c, 0x7, 0x42, 0x2, 0x2, 0x58c, 0x58e, 0x5, 
       0xec, 0x77, 0x2, 0x58d, 0x58b, 0x3, 0x2, 0x2, 0x2, 0x58e, 0x591, 
       0x3, 0x2, 0x2, 0x2, 0x58f, 0x58d, 0x3, 0x2, 0x2, 0x2, 0x58f, 0x590, 
       0x3, 0x2, 0x2, 0x2, 0x590, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x591, 0x58f, 
       0x3, 0x2, 0x2, 0x2, 0x592, 0x593, 0x7, 0x68, 0x2, 0x2, 0x593, 0x594, 
       0x7, 0x44, 0x2, 0x2, 0x594, 0x595, 0x5, 0xee, 0x78, 0x2, 0x595, 0xed, 
       0x3, 0x2, 0x2, 0x2, 0x596, 0x59a, 0x5, 0x1b0, 0xd9, 0x2, 0x597, 0x59a, 
       0x5, 0xf0, 0x79, 0x2, 0x598, 0x59a, 0x5, 0xe6, 0x74, 0x2, 0x599, 
       0x596, 0x3, 0x2, 0x2, 0x2, 0x599, 0x597, 0x3, 0x2, 0x2, 0x2, 0x599, 
       0x598, 0x3, 0x2, 0x2, 0x2, 0x59a, 0xef, 0x3, 0x2, 0x2, 0x2, 0x59b, 
       0x59d, 0x7, 0x3d, 0x2, 0x2, 0x59c, 0x59e, 0x5, 0xf2, 0x7a, 0x2, 0x59d, 
       0x59c, 0x3, 0x2, 0x2, 0x2, 0x59d, 0x59e, 0x3, 0x2, 0x2, 0x2, 0x59e, 
       0x5a0, 0x3, 0x2, 0x2, 0x2, 0x59f, 0x5a1, 0x7, 0x42, 0x2, 0x2, 0x5a0, 
       0x59f, 0x3, 0x2, 0x2, 0x2, 0x5a0, 0x5a1, 0x3, 0x2, 0x2, 0x2, 0x5a1, 
       0x5a2, 0x3, 0x2, 0x2, 0x2, 0x5a2, 0x5a3, 0x7, 0x3e, 0x2, 0x2, 0x5a3, 
       0xf1, 0x3, 0x2, 0x2, 0x2, 0x5a4, 0x5a9, 0x5, 0xee, 0x78, 0x2, 0x5a5, 
       0x5a6, 0x7, 0x42, 0x2, 0x2, 0x5a6, 0x5a8, 0x5, 0xee, 0x78, 0x2, 0x5a7, 
       0x5a5, 0x3, 0x2, 0x2, 0x2, 0x5a8, 0x5ab, 0x3, 0x2, 0x2, 0x2, 0x5a9, 
       0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5a9, 0x5aa, 0x3, 0x2, 0x2, 0x2, 0x5aa, 
       0xf3, 0x3, 0x2, 0x2, 0x2, 0x5ab, 0x5a9, 0x3, 0x2, 0x2, 0x2, 0x5ac, 
       0x5ad, 0x7, 0x69, 0x2, 0x2, 0x5ad, 0x5ae, 0x5, 0x36, 0x1c, 0x2, 0x5ae, 
       0xf5, 0x3, 0x2, 0x2, 0x2, 0x5af, 0x5b0, 0x7, 0x69, 0x2, 0x2, 0x5b0, 
       0x5b1, 0x5, 0x36, 0x1c, 0x2, 0x5b1, 0x5b2, 0x7, 0x3b, 0x2, 0x2, 0x5b2, 
       0x5b3, 0x5, 0xee, 0x78, 0x2, 0x5b3, 0x5b4, 0x7, 0x3c, 0x2, 0x2, 0x5b4, 
       0xf7, 0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5b7, 0x7, 0x3d, 0x2, 0x2, 0x5b6, 
       0x5b8, 0x5, 0xfa, 0x7e, 0x2, 0x5b7, 0x5b6, 0x3, 0x2, 0x2, 0x2, 0x5b7, 
       0x5b8, 0x3, 0x2, 0x2, 0x2, 0x5b8, 0x5ba, 0x3, 0x2, 0x2, 0x2, 0x5b9, 
       0x5bb, 0x7, 0x42, 0x2, 0x2, 0x5ba, 0x5b9, 0x3, 0x2, 0x2, 0x2, 0x5ba, 
       0x5bb, 0x3, 0x2, 0x2, 0x2, 0x5bb, 0x5bc, 0x3, 0x2, 0x2, 0x2, 0x5bc, 
       0x5bd, 0x7, 0x3e, 0x2, 0x2, 0x5bd, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x5be, 
       0x5c3, 0x5, 0x72, 0x3a, 0x2, 0x5bf, 0x5c0, 0x7, 0x42, 0x2, 0x2, 0x5c0, 
       0x5c2, 0x5, 0x72, 0x3a, 0x2, 0x5c1, 0x5bf, 0x3, 0x2, 0x2, 0x2, 0x5c2, 
       0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c3, 0x5c1, 0x3, 0x2, 0x2, 0x2, 0x5c3, 
       0x5c4, 0x3, 0x2, 0x2, 0x2, 0x5c4, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x5c5, 
       0x5c3, 0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5c8, 0x7, 0x3d, 0x2, 0x2, 0x5c7, 
       0x5c9, 0x5, 0xfe, 0x80, 0x2, 0x5c8, 0x5c7, 0x3, 0x2, 0x2, 0x2, 0x5c8, 
       0x5c9, 0x3, 0x2, 0x2, 0x2, 0x5c9, 0x5ca, 0x3, 0x2, 0x2, 0x2, 0x5ca, 
       0x5cb, 0x7, 0x3e, 0x2, 0x2, 0x5cb, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x5cc, 
       0x5ce, 0x5, 0x100, 0x81, 0x2, 0x5cd, 0x5cc, 0x3, 0x2, 0x2, 0x2, 0x5ce, 
       0x5cf, 0x3, 0x2, 0x2, 0x2, 0x5cf, 0x5cd, 0x3, 0x2, 0x2, 0x2, 0x5cf, 
       0x5d0, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0xff, 0x3, 0x2, 0x2, 0x2, 0x5d1, 
       0x5d5, 0x5, 0x102, 0x82, 0x2, 0x5d2, 0x5d5, 0x5, 0x52, 0x2a, 0x2, 
       0x5d3, 0x5d5, 0x5, 0x106, 0x84, 0x2, 0x5d4, 0x5d1, 0x3, 0x2, 0x2, 
       0x2, 0x5d4, 0x5d2, 0x3, 0x2, 0x2, 0x2, 0x5d4, 0x5d3, 0x3, 0x2, 0x2, 
       0x2, 0x5d5, 0x101, 0x3, 0x2, 0x2, 0x2, 0x5d6, 0x5d7, 0x5, 0x104, 
       0x83, 0x2, 0x5d7, 0x5d8, 0x7, 0x41, 0x2, 0x2, 0x5d8, 0x103, 0x3, 
       0x2, 0x2, 0x2, 0x5d9, 0x5db, 0x5, 0x9c, 0x4f, 0x2, 0x5da, 0x5d9, 
       0x3, 0x2, 0x2, 0x2, 0x5db, 0x5de, 0x3, 0x2, 0x2, 0x2, 0x5dc, 0x5da, 
       0x3, 0x2, 0x2, 0x2, 0x5dc, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5df, 
       0x3, 0x2, 0x2, 0x2, 0x5de, 0x5dc, 0x3, 0x2, 0x2, 0x2, 0x5df, 0x5e0, 
       0x5, 0x74, 0x3b, 0x2, 0x5e0, 0x5e1, 0x5, 0x6c, 0x37, 0x2, 0x5e1, 
       0x105, 0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5e9, 0x5, 0x10a, 0x86, 0x2, 0x5e3, 
       0x5e9, 0x5, 0x10e, 0x88, 0x2, 0x5e4, 0x5e9, 0x5, 0x116, 0x8c, 0x2, 
       0x5e5, 0x5e9, 0x5, 0x118, 0x8d, 0x2, 0x5e6, 0x5e9, 0x5, 0x12a, 0x96, 
       0x2, 0x5e7, 0x5e9, 0x5, 0x130, 0x99, 0x2, 0x5e8, 0x5e2, 0x3, 0x2, 
       0x2, 0x2, 0x5e8, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5e8, 0x5e4, 0x3, 0x2, 
       0x2, 0x2, 0x5e8, 0x5e5, 0x3, 0x2, 0x2, 0x2, 0x5e8, 0x5e6, 0x3, 0x2, 
       0x2, 0x2, 0x5e8, 0x5e7, 0x3, 0x2, 0x2, 0x2, 0x5e9, 0x107, 0x3, 0x2, 
       0x2, 0x2, 0x5ea, 0x5f0, 0x5, 0x10a, 0x86, 0x2, 0x5eb, 0x5f0, 0x5, 
       0x110, 0x89, 0x2, 0x5ec, 0x5f0, 0x5, 0x11a, 0x8e, 0x2, 0x5ed, 0x5f0, 
       0x5, 0x12c, 0x97, 0x2, 0x5ee, 0x5f0, 0x5, 0x132, 0x9a, 0x2, 0x5ef, 
       0x5ea, 0x3, 0x2, 0x2, 0x2, 0x5ef, 0x5eb, 0x3, 0x2, 0x2, 0x2, 0x5ef, 
       0x5ec, 0x3, 0x2, 0x2, 0x2, 0x5ef, 0x5ed, 0x3, 0x2, 0x2, 0x2, 0x5ef, 
       0x5ee, 0x3, 0x2, 0x2, 0x2, 0x5f0, 0x109, 0x3, 0x2, 0x2, 0x2, 0x5f1, 
       0x5fe, 0x5, 0xfc, 0x7f, 0x2, 0x5f2, 0x5fe, 0x5, 0x10c, 0x87, 0x2, 
       0x5f3, 0x5fe, 0x5, 0x112, 0x8a, 0x2, 0x5f4, 0x5fe, 0x5, 0x11c, 0x8f, 
       0x2, 0x5f5, 0x5fe, 0x5, 0x11e, 0x90, 0x2, 0x5f6, 0x5fe, 0x5, 0x12e, 
       0x98, 0x2, 0x5f7, 0x5fe, 0x5, 0x142, 0xa2, 0x2, 0x5f8, 0x5fe, 0x5, 
       0x144, 0xa3, 0x2, 0x5f9, 0x5fe, 0x5, 0x146, 0xa4, 0x2, 0x5fa, 0x5fe, 
       0x5, 0x14a, 0xa6, 0x2, 0x5fb, 0x5fe, 0x5, 0x148, 0xa5, 0x2, 0x5fc, 
       0x5fe, 0x5, 0x14c, 0xa7, 0x2, 0x5fd, 0x5f1, 0x3, 0x2, 0x2, 0x2, 0x5fd, 
       0x5f2, 0x3, 0x2, 0x2, 0x2, 0x5fd, 0x5f3, 0x3, 0x2, 0x2, 0x2, 0x5fd, 
       0x5f4, 0x3, 0x2, 0x2, 0x2, 0x5fd, 0x5f5, 0x3, 0x2, 0x2, 0x2, 0x5fd, 
       0x5f6, 0x3, 0x2, 0x2, 0x2, 0x5fd, 0x5f7, 0x3, 0x2, 0x2, 0x2, 0x5fd, 
       0x5f8, 0x3, 0x2, 0x2, 0x2, 0x5fd, 0x5f9, 0x3, 0x2, 0x2, 0x2, 0x5fd, 
       0x5fa, 0x3, 0x2, 0x2, 0x2, 0x5fd, 0x5fb, 0x3, 0x2, 0x2, 0x2, 0x5fd, 
       0x5fc, 0x3, 0x2, 0x2, 0x2, 0x5fe, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x5ff, 
       0x600, 0x7, 0x41, 0x2, 0x2, 0x600, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x601, 
       0x602, 0x7, 0x68, 0x2, 0x2, 0x602, 0x603, 0x7, 0x4a, 0x2, 0x2, 0x603, 
       0x604, 0x5, 0x106, 0x84, 0x2, 0x604, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x605, 
       0x606, 0x7, 0x68, 0x2, 0x2, 0x606, 0x607, 0x7, 0x4a, 0x2, 0x2, 0x607, 
       0x608, 0x5, 0x108, 0x85, 0x2, 0x608, 0x111, 0x3, 0x2, 0x2, 0x2, 0x609, 
       0x60a, 0x5, 0x114, 0x8b, 0x2, 0x60a, 0x60b, 0x7, 0x41, 0x2, 0x2, 
       0x60b, 0x113, 0x3, 0x2, 0x2, 0x2, 0x60c, 0x614, 0x5, 0x1aa, 0xd6, 
       0x2, 0x60d, 0x614, 0x5, 0x1c8, 0xe5, 0x2, 0x60e, 0x614, 0x5, 0x1ca, 
       0xe6, 0x2, 0x60f, 0x614, 0x5, 0x1d0, 0xe9, 0x2, 0x610, 0x614, 0x5, 
       0x1d4, 0xeb, 0x2, 0x611, 0x614, 0x5, 0x188, 0xc5, 0x2, 0x612, 0x614, 
       0x5, 0x174, 0xbb, 0x2, 0x613, 0x60c, 0x3, 0x2, 0x2, 0x2, 0x613, 0x60d, 
       0x3, 0x2, 0x2, 0x2, 0x613, 0x60e, 0x3, 0x2, 0x2, 0x2, 0x613, 0x60f, 
       0x3, 0x2, 0x2, 0x2, 0x613, 0x610, 0x3, 0x2, 0x2, 0x2, 0x613, 0x611, 
       0x3, 0x2, 0x2, 0x2, 0x613, 0x612, 0x3, 0x2, 0x2, 0x2, 0x614, 0x115, 
       0x3, 0x2, 0x2, 0x2, 0x615, 0x616, 0x7, 0x18, 0x2, 0x2, 0x616, 0x617, 
       0x7, 0x3b, 0x2, 0x2, 0x617, 0x618, 0x5, 0x19e, 0xd0, 0x2, 0x618, 
       0x619, 0x7, 0x3c, 0x2, 0x2, 0x619, 0x61a, 0x5, 0x106, 0x84, 0x2, 
       0x61a, 0x117, 0x3, 0x2, 0x2, 0x2, 0x61b, 0x61c, 0x7, 0x18, 0x2, 0x2, 
       0x61c, 0x61d, 0x7, 0x3b, 0x2, 0x2, 0x61d, 0x61e, 0x5, 0x19e, 0xd0, 
       0x2, 0x61e, 0x61f, 0x7, 0x3c, 0x2, 0x2, 0x61f, 0x620, 0x5, 0x108, 
       0x85, 0x2, 0x620, 0x621, 0x7, 0x11, 0x2, 0x2, 0x621, 0x622, 0x5, 
       0x106, 0x84, 0x2, 0x622, 0x119, 0x3, 0x2, 0x2, 0x2, 0x623, 0x624, 
       0x7, 0x18, 0x2, 0x2, 0x624, 0x625, 0x7, 0x3b, 0x2, 0x2, 0x625, 0x626, 
       0x5, 0x19e, 0xd0, 0x2, 0x626, 0x627, 0x7, 0x3c, 0x2, 0x2, 0x627, 
       0x628, 0x5, 0x108, 0x85, 0x2, 0x628, 0x629, 0x7, 0x11, 0x2, 0x2, 
       0x629, 0x62a, 0x5, 0x108, 0x85, 0x2, 0x62a, 0x11b, 0x3, 0x2, 0x2, 
       0x2, 0x62b, 0x62c, 0x7, 0x4, 0x2, 0x2, 0x62c, 0x62d, 0x5, 0x19e, 
       0xd0, 0x2, 0x62d, 0x62e, 0x7, 0x41, 0x2, 0x2, 0x62e, 0x636, 0x3, 
       0x2, 0x2, 0x2, 0x62f, 0x630, 0x7, 0x4, 0x2, 0x2, 0x630, 0x631, 0x5, 
       0x19e, 0xd0, 0x2, 0x631, 0x632, 0x7, 0x4a, 0x2, 0x2, 0x632, 0x633, 
       0x5, 0x19e, 0xd0, 0x2, 0x633, 0x634, 0x7, 0x41, 0x2, 0x2, 0x634, 
       0x636, 0x3, 0x2, 0x2, 0x2, 0x635, 0x62b, 0x3, 0x2, 0x2, 0x2, 0x635, 
       0x62f, 0x3, 0x2, 0x2, 0x2, 0x636, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x637, 
       0x638, 0x7, 0x2b, 0x2, 0x2, 0x638, 0x639, 0x7, 0x3b, 0x2, 0x2, 0x639, 
       0x63a, 0x5, 0x19e, 0xd0, 0x2, 0x63a, 0x63b, 0x7, 0x3c, 0x2, 0x2, 
       0x63b, 0x63c, 0x5, 0x120, 0x91, 0x2, 0x63c, 0x11f, 0x3, 0x2, 0x2, 
       0x2, 0x63d, 0x641, 0x7, 0x3d, 0x2, 0x2, 0x63e, 0x640, 0x5, 0x122, 
       0x92, 0x2, 0x63f, 0x63e, 0x3, 0x2, 0x2, 0x2, 0x640, 0x643, 0x3, 0x2, 
       0x2, 0x2, 0x641, 0x63f, 0x3, 0x2, 0x2, 0x2, 0x641, 0x642, 0x3, 0x2, 
       0x2, 0x2, 0x642, 0x647, 0x3, 0x2, 0x2, 0x2, 0x643, 0x641, 0x3, 0x2, 
       0x2, 0x2, 0x644, 0x646, 0x5, 0x126, 0x94, 0x2, 0x645, 0x644, 0x3, 
       0x2, 0x2, 0x2, 0x646, 0x649, 0x3, 0x2, 0x2, 0x2, 0x647, 0x645, 0x3, 
       0x2, 0x2, 0x2, 0x647, 0x648, 0x3, 0x2, 0x2, 0x2, 0x648, 0x64a, 0x3, 
       0x2, 0x2, 0x2, 0x649, 0x647, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x64b, 0x7, 
       0x3e, 0x2, 0x2, 0x64b, 0x121, 0x3, 0x2, 0x2, 0x2, 0x64c, 0x64d, 0x5, 
       0x124, 0x93, 0x2, 0x64d, 0x64e, 0x5, 0xfe, 0x80, 0x2, 0x64e, 0x123, 
       0x3, 0x2, 0x2, 0x2, 0x64f, 0x653, 0x5, 0x126, 0x94, 0x2, 0x650, 0x652, 
       0x5, 0x126, 0x94, 0x2, 0x651, 0x650, 0x3, 0x2, 0x2, 0x2, 0x652, 0x655, 
       0x3, 0x2, 0x2, 0x2, 0x653, 0x651, 0x3, 0x2, 0x2, 0x2, 0x653, 0x654, 
       0x3, 0x2, 0x2, 0x2, 0x654, 0x125, 0x3, 0x2, 0x2, 0x2, 0x655, 0x653, 
       0x3, 0x2, 0x2, 0x2, 0x656, 0x657, 0x7, 0x8, 0x2, 0x2, 0x657, 0x658, 
       0x5, 0x19c, 0xcf, 0x2, 0x658, 0x659, 0x7, 0x4a, 0x2, 0x2, 0x659, 
       0x661, 0x3, 0x2, 0x2, 0x2, 0x65a, 0x65b, 0x7, 0x8, 0x2, 0x2, 0x65b, 
       0x65c, 0x5, 0x128, 0x95, 0x2, 0x65c, 0x65d, 0x7, 0x4a, 0x2, 0x2, 
       0x65d, 0x661, 0x3, 0x2, 0x2, 0x2, 0x65e, 0x65f, 0x7, 0xe, 0x2, 0x2, 
       0x65f, 0x661, 0x7, 0x4a, 0x2, 0x2, 0x660, 0x656, 0x3, 0x2, 0x2, 0x2, 
       0x660, 0x65a, 0x3, 0x2, 0x2, 0x2, 0x660, 0x65e, 0x3, 0x2, 0x2, 0x2, 
       0x661, 0x127, 0x3, 0x2, 0x2, 0x2, 0x662, 0x663, 0x7, 0x68, 0x2, 0x2, 
       0x663, 0x129, 0x3, 0x2, 0x2, 0x2, 0x664, 0x665, 0x7, 0x34, 0x2, 0x2, 
       0x665, 0x666, 0x7, 0x3b, 0x2, 0x2, 0x666, 0x667, 0x5, 0x19e, 0xd0, 
       0x2, 0x667, 0x668, 0x7, 0x3c, 0x2, 0x2, 0x668, 0x669, 0x5, 0x106, 
       0x84, 0x2, 0x669, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x66a, 0x66b, 0x7, 0x34, 
       0x2, 0x2, 0x66b, 0x66c, 0x7, 0x3b, 0x2, 0x2, 0x66c, 0x66d, 0x5, 0x19e, 
       0xd0, 0x2, 0x66d, 0x66e, 0x7, 0x3c, 0x2, 0x2, 0x66e, 0x66f, 0x5, 
       0x108, 0x85, 0x2, 0x66f, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x670, 0x671, 
       0x7, 0xf, 0x2, 0x2, 0x671, 0x672, 0x5, 0x106, 0x84, 0x2, 0x672, 0x673, 
       0x7, 0x34, 0x2, 0x2, 0x673, 0x674, 0x7, 0x3b, 0x2, 0x2, 0x674, 0x675, 
       0x5, 0x19e, 0xd0, 0x2, 0x675, 0x676, 0x7, 0x3c, 0x2, 0x2, 0x676, 
       0x677, 0x7, 0x41, 0x2, 0x2, 0x677, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x678, 
       0x67b, 0x5, 0x134, 0x9b, 0x2, 0x679, 0x67b, 0x5, 0x13e, 0xa0, 0x2, 
       0x67a, 0x678, 0x3, 0x2, 0x2, 0x2, 0x67a, 0x679, 0x3, 0x2, 0x2, 0x2, 
       0x67b, 0x131, 0x3, 0x2, 0x2, 0x2, 0x67c, 0x67f, 0x5, 0x136, 0x9c, 
       0x2, 0x67d, 0x67f, 0x5, 0x140, 0xa1, 0x2, 0x67e, 0x67c, 0x3, 0x2, 
       0x2, 0x2, 0x67e, 0x67d, 0x3, 0x2, 0x2, 0x2, 0x67f, 0x133, 0x3, 0x2, 
       0x2, 0x2, 0x680, 0x681, 0x7, 0x17, 0x2, 0x2, 0x681, 0x683, 0x7, 0x3b, 
       0x2, 0x2, 0x682, 0x684, 0x5, 0x138, 0x9d, 0x2, 0x683, 0x682, 0x3, 
       0x2, 0x2, 0x2, 0x683, 0x684, 0x3, 0x2, 0x2, 0x2, 0x684, 0x685, 0x3, 
       0x2, 0x2, 0x2, 0x685, 0x687, 0x7, 0x41, 0x2, 0x2, 0x686, 0x688, 0x5, 
       0x19e, 0xd0, 0x2, 0x687, 0x686, 0x3, 0x2, 0x2, 0x2, 0x687, 0x688, 
       0x3, 0x2, 0x2, 0x2, 0x688, 0x689, 0x3, 0x2, 0x2, 0x2, 0x689, 0x68b, 
       0x7, 0x41, 0x2, 0x2, 0x68a, 0x68c, 0x5, 0x13a, 0x9e, 0x2, 0x68b, 
       0x68a, 0x3, 0x2, 0x2, 0x2, 0x68b, 0x68c, 0x3, 0x2, 0x2, 0x2, 0x68c, 
       0x68d, 0x3, 0x2, 0x2, 0x2, 0x68d, 0x68e, 0x7, 0x3c, 0x2, 0x2, 0x68e, 
       0x68f, 0x5, 0x106, 0x84, 0x2, 0x68f, 0x135, 0x3, 0x2, 0x2, 0x2, 0x690, 
       0x691, 0x7, 0x17, 0x2, 0x2, 0x691, 0x693, 0x7, 0x3b, 0x2, 0x2, 0x692, 
       0x694, 0x5, 0x138, 0x9d, 0x2, 0x693, 0x692, 0x3, 0x2, 0x2, 0x2, 0x693, 
       0x694, 0x3, 0x2, 0x2, 0x2, 0x694, 0x695, 0x3, 0x2, 0x2, 0x2, 0x695, 
       0x697, 0x7, 0x41, 0x2, 0x2, 0x696, 0x698, 0x5, 0x19e, 0xd0, 0x2, 
       0x697, 0x696, 0x3, 0x2, 0x2, 0x2, 0x697, 0x698, 0x3, 0x2, 0x2, 0x2, 
       0x698, 0x699, 0x3, 0x2, 0x2, 0x2, 0x699, 0x69b, 0x7, 0x41, 0x2, 0x2, 
       0x69a, 0x69c, 0x5, 0x13a, 0x9e, 0x2, 0x69b, 0x69a, 0x3, 0x2, 0x2, 
       0x2, 0x69b, 0x69c, 0x3, 0x2, 0x2, 0x2, 0x69c, 0x69d, 0x3, 0x2, 0x2, 
       0x2, 0x69d, 0x69e, 0x7, 0x3c, 0x2, 0x2, 0x69e, 0x69f, 0x5, 0x108, 
       0x85, 0x2, 0x69f, 0x137, 0x3, 0x2, 0x2, 0x2, 0x6a0, 0x6a3, 0x5, 0x13c, 
       0x9f, 0x2, 0x6a1, 0x6a3, 0x5, 0x104, 0x83, 0x2, 0x6a2, 0x6a0, 0x3, 
       0x2, 0x2, 0x2, 0x6a2, 0x6a1, 0x3, 0x2, 0x2, 0x2, 0x6a3, 0x139, 0x3, 
       0x2, 0x2, 0x2, 0x6a4, 0x6a5, 0x5, 0x13c, 0x9f, 0x2, 0x6a5, 0x13b, 
       0x3, 0x2, 0x2, 0x2, 0x6a6, 0x6ab, 0x5, 0x114, 0x8b, 0x2, 0x6a7, 0x6a8, 
       0x7, 0x42, 0x2, 0x2, 0x6a8, 0x6aa, 0x5, 0x114, 0x8b, 0x2, 0x6a9, 
       0x6a7, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6ad, 0x3, 0x2, 0x2, 0x2, 0x6ab, 
       0x6a9, 0x3, 0x2, 0x2, 0x2, 0x6ab, 0x6ac, 0x3, 0x2, 0x2, 0x2, 0x6ac, 
       0x13d, 0x3, 0x2, 0x2, 0x2, 0x6ad, 0x6ab, 0x3, 0x2, 0x2, 0x2, 0x6ae, 
       0x6af, 0x7, 0x17, 0x2, 0x2, 0x6af, 0x6b3, 0x7, 0x3b, 0x2, 0x2, 0x6b0, 
       0x6b2, 0x5, 0x9c, 0x4f, 0x2, 0x6b1, 0x6b0, 0x3, 0x2, 0x2, 0x2, 0x6b2, 
       0x6b5, 0x3, 0x2, 0x2, 0x2, 0x6b3, 0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6b3, 
       0x6b4, 0x3, 0x2, 0x2, 0x2, 0x6b4, 0x6b6, 0x3, 0x2, 0x2, 0x2, 0x6b5, 
       0x6b3, 0x3, 0x2, 0x2, 0x2, 0x6b6, 0x6b7, 0x5, 0x74, 0x3b, 0x2, 0x6b7, 
       0x6b8, 0x5, 0x70, 0x39, 0x2, 0x6b8, 0x6b9, 0x7, 0x4a, 0x2, 0x2, 0x6b9, 
       0x6ba, 0x5, 0x19e, 0xd0, 0x2, 0x6ba, 0x6bb, 0x7, 0x3c, 0x2, 0x2, 
       0x6bb, 0x6bc, 0x5, 0x106, 0x84, 0x2, 0x6bc, 0x13f, 0x3, 0x2, 0x2, 
       0x2, 0x6bd, 0x6be, 0x7, 0x17, 0x2, 0x2, 0x6be, 0x6c2, 0x7, 0x3b, 
       0x2, 0x2, 0x6bf, 0x6c1, 0x5, 0x9c, 0x4f, 0x2, 0x6c0, 0x6bf, 0x3, 
       0x2, 0x2, 0x2, 0x6c1, 0x6c4, 0x3, 0x2, 0x2, 0x2, 0x6c2, 0x6c0, 0x3, 
       0x2, 0x2, 0x2, 0x6c2, 0x6c3, 0x3, 0x2, 0x2, 0x2, 0x6c3, 0x6c5, 0x3, 
       0x2, 0x2, 0x2, 0x6c4, 0x6c2, 0x3, 0x2, 0x2, 0x2, 0x6c5, 0x6c6, 0x5, 
       0x74, 0x3b, 0x2, 0x6c6, 0x6c7, 0x5, 0x70, 0x39, 0x2, 0x6c7, 0x6c8, 
       0x7, 0x4a, 0x2, 0x2, 0x6c8, 0x6c9, 0x5, 0x19e, 0xd0, 0x2, 0x6c9, 
       0x6ca, 0x7, 0x3c, 0x2, 0x2, 0x6ca, 0x6cb, 0x5, 0x108, 0x85, 0x2, 
       0x6cb, 0x141, 0x3, 0x2, 0x2, 0x2, 0x6cc, 0x6ce, 0x7, 0x6, 0x2, 0x2, 
       0x6cd, 0x6cf, 0x7, 0x68, 0x2, 0x2, 0x6ce, 0x6cd, 0x3, 0x2, 0x2, 0x2, 
       0x6ce, 0x6cf, 0x3, 0x2, 0x2, 0x2, 0x6cf, 0x6d0, 0x3, 0x2, 0x2, 0x2, 
       0x6d0, 0x6d1, 0x7, 0x41, 0x2, 0x2, 0x6d1, 0x143, 0x3, 0x2, 0x2, 0x2, 
       0x6d2, 0x6d4, 0x7, 0xd, 0x2, 0x2, 0x6d3, 0x6d5, 0x7, 0x68, 0x2, 0x2, 
       0x6d4, 0x6d3, 0x3, 0x2, 0x2, 0x2, 0x6d4, 0x6d5, 0x3, 0x2, 0x2, 0x2, 
       0x6d5, 0x6d6, 0x3, 0x2, 0x2, 0x2, 0x6d6, 0x6d7, 0x7, 0x41, 0x2, 0x2, 
       0x6d7, 0x145, 0x3, 0x2, 0x2, 0x2, 0x6d8, 0x6da, 0x7, 0x26, 0x2, 0x2, 
       0x6d9, 0x6db, 0x5, 0x19e, 0xd0, 0x2, 0x6da, 0x6d9, 0x3, 0x2, 0x2, 
       0x2, 0x6da, 0x6db, 0x3, 0x2, 0x2, 0x2, 0x6db, 0x6dc, 0x3, 0x2, 0x2, 
       0x2, 0x6dc, 0x6dd, 0x7, 0x41, 0x2, 0x2, 0x6dd, 0x147, 0x3, 0x2, 0x2, 
       0x2, 0x6de, 0x6df, 0x7, 0x2e, 0x2, 0x2, 0x6df, 0x6e0, 0x5, 0x19e, 
       0xd0, 0x2, 0x6e0, 0x6e1, 0x7, 0x41, 0x2, 0x2, 0x6e1, 0x149, 0x3, 
       0x2, 0x2, 0x2, 0x6e2, 0x6e3, 0x7, 0x2c, 0x2, 0x2, 0x6e3, 0x6e4, 0x7, 
       0x3b, 0x2, 0x2, 0x6e4, 0x6e5, 0x5, 0x19e, 0xd0, 0x2, 0x6e5, 0x6e6, 
       0x7, 0x3c, 0x2, 0x2, 0x6e6, 0x6e7, 0x5, 0xfc, 0x7f, 0x2, 0x6e7, 0x14b, 
       0x3, 0x2, 0x2, 0x2, 0x6e8, 0x6e9, 0x7, 0x31, 0x2, 0x2, 0x6e9, 0x6ea, 
       0x5, 0xfc, 0x7f, 0x2, 0x6ea, 0x6eb, 0x5, 0x14e, 0xa8, 0x2, 0x6eb, 
       0x6f5, 0x3, 0x2, 0x2, 0x2, 0x6ec, 0x6ed, 0x7, 0x31, 0x2, 0x2, 0x6ed, 
       0x6ef, 0x5, 0xfc, 0x7f, 0x2, 0x6ee, 0x6f0, 0x5, 0x14e, 0xa8, 0x2, 
       0x6ef, 0x6ee, 0x3, 0x2, 0x2, 0x2, 0x6ef, 0x6f0, 0x3, 0x2, 0x2, 0x2, 
       0x6f0, 0x6f1, 0x3, 0x2, 0x2, 0x2, 0x6f1, 0x6f2, 0x5, 0x156, 0xac, 
       0x2, 0x6f2, 0x6f5, 0x3, 0x2, 0x2, 0x2, 0x6f3, 0x6f5, 0x5, 0x158, 
       0xad, 0x2, 0x6f4, 0x6e8, 0x3, 0x2, 0x2, 0x2, 0x6f4, 0x6ec, 0x3, 0x2, 
       0x2, 0x2, 0x6f4, 0x6f3, 0x3, 0x2, 0x2, 0x2, 0x6f5, 0x14d, 0x3, 0x2, 
       0x2, 0x2, 0x6f6, 0x6fa, 0x5, 0x150, 0xa9, 0x2, 0x6f7, 0x6f9, 0x5, 
       0x150, 0xa9, 0x2, 0x6f8, 0x6f7, 0x3, 0x2, 0x2, 0x2, 0x6f9, 0x6fc, 
       0x3, 0x2, 0x2, 0x2, 0x6fa, 0x6f8, 0x3, 0x2, 0x2, 0x2, 0x6fa, 0x6fb, 
       0x3, 0x2, 0x2, 0x2, 0x6fb, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x6fc, 0x6fa, 
       0x3, 0x2, 0x2, 0x2, 0x6fd, 0x6fe, 0x7, 0x9, 0x2, 0x2, 0x6fe, 0x6ff, 
       0x7, 0x3b, 0x2, 0x2, 0x6ff, 0x700, 0x5, 0x152, 0xaa, 0x2, 0x700, 
       0x701, 0x7, 0x3c, 0x2, 0x2, 0x701, 0x702, 0x5, 0xfc, 0x7f, 0x2, 0x702, 
       0x151, 0x3, 0x2, 0x2, 0x2, 0x703, 0x705, 0x5, 0x9c, 0x4f, 0x2, 0x704, 
       0x703, 0x3, 0x2, 0x2, 0x2, 0x705, 0x708, 0x3, 0x2, 0x2, 0x2, 0x706, 
       0x704, 0x3, 0x2, 0x2, 0x2, 0x706, 0x707, 0x3, 0x2, 0x2, 0x2, 0x707, 
       0x709, 0x3, 0x2, 0x2, 0x2, 0x708, 0x706, 0x3, 0x2, 0x2, 0x2, 0x709, 
       0x70a, 0x5, 0x154, 0xab, 0x2, 0x70a, 0x70b, 0x5, 0x70, 0x39, 0x2, 
       0x70b, 0x153, 0x3, 0x2, 0x2, 0x2, 0x70c, 0x711, 0x5, 0x7c, 0x3f, 
       0x2, 0x70d, 0x70e, 0x7, 0x58, 0x2, 0x2, 0x70e, 0x710, 0x5, 0x10, 
       0x9, 0x2, 0x70f, 0x70d, 0x3, 0x2, 0x2, 0x2, 0x710, 0x713, 0x3, 0x2, 
       0x2, 0x2, 0x711, 0x70f, 0x3, 0x2, 0x2, 0x2, 0x711, 0x712, 0x3, 0x2, 
       0x2, 0x2, 0x712, 0x155, 0x3, 0x2, 0x2, 0x2, 0x713, 0x711, 0x3, 0x2, 
       0x2, 0x2, 0x714, 0x715, 0x7, 0x15, 0x2, 0x2, 0x715, 0x716, 0x5, 0xfc, 
       0x7f, 0x2, 0x716, 0x157, 0x3, 0x2, 0x2, 0x2, 0x717, 0x718, 0x7, 0x31, 
       0x2, 0x2, 0x718, 0x719, 0x5, 0x15a, 0xae, 0x2, 0x719, 0x71b, 0x5, 
       0xfc, 0x7f, 0x2, 0x71a, 0x71c, 0x5, 0x14e, 0xa8, 0x2, 0x71b, 0x71a, 
       0x3, 0x2, 0x2, 0x2, 0x71b, 0x71c, 0x3, 0x2, 0x2, 0x2, 0x71c, 0x71e, 
       0x3, 0x2, 0x2, 0x2, 0x71d, 0x71f, 0x5, 0x156, 0xac, 0x2, 0x71e, 0x71d, 
       0x3, 0x2, 0x2, 0x2, 0x71e, 0x71f, 0x3, 0x2, 0x2, 0x2, 0x71f, 0x159, 
       0x3, 0x2, 0x2, 0x2, 0x720, 0x721, 0x7, 0x3b, 0x2, 0x2, 0x721, 0x723, 
       0x5, 0x15c, 0xaf, 0x2, 0x722, 0x724, 0x7, 0x41, 0x2, 0x2, 0x723, 
       0x722, 0x3, 0x2, 0x2, 0x2, 0x723, 0x724, 0x3, 0x2, 0x2, 0x2, 0x724, 
       0x725, 0x3, 0x2, 0x2, 0x2, 0x725, 0x726, 0x7, 0x3c, 0x2, 0x2, 0x726, 
       0x15b, 0x3, 0x2, 0x2, 0x2, 0x727, 0x72c, 0x5, 0x15e, 0xb0, 0x2, 0x728, 
       0x729, 0x7, 0x41, 0x2, 0x2, 0x729, 0x72b, 0x5, 0x15e, 0xb0, 0x2, 
       0x72a, 0x728, 0x3, 0x2, 0x2, 0x2, 0x72b, 0x72e, 0x3, 0x2, 0x2, 0x2, 
       0x72c, 0x72a, 0x3, 0x2, 0x2, 0x2, 0x72c, 0x72d, 0x3, 0x2, 0x2, 0x2, 
       0x72d, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x72e, 0x72c, 0x3, 0x2, 0x2, 0x2, 
       0x72f, 0x731, 0x5, 0x9c, 0x4f, 0x2, 0x730, 0x72f, 0x3, 0x2, 0x2, 
       0x2, 0x731, 0x734, 0x3, 0x2, 0x2, 0x2, 0x732, 0x730, 0x3, 0x2, 0x2, 
       0x2, 0x732, 0x733, 0x3, 0x2, 0x2, 0x2, 0x733, 0x735, 0x3, 0x2, 0x2, 
       0x2, 0x734, 0x732, 0x3, 0x2, 0x2, 0x2, 0x735, 0x736, 0x5, 0x74, 0x3b, 
       0x2, 0x736, 0x737, 0x5, 0x70, 0x39, 0x2, 0x737, 0x738, 0x7, 0x44, 
       0x2, 0x2, 0x738, 0x739, 0x5, 0x19e, 0xd0, 0x2, 0x739, 0x15f, 0x3, 
       0x2, 0x2, 0x2, 0x73a, 0x73d, 0x5, 0x16e, 0xb8, 0x2, 0x73b, 0x73d, 
       0x5, 0x196, 0xcc, 0x2, 0x73c, 0x73a, 0x3, 0x2, 0x2, 0x2, 0x73c, 0x73b, 
       0x3, 0x2, 0x2, 0x2, 0x73d, 0x741, 0x3, 0x2, 0x2, 0x2, 0x73e, 0x740, 
       0x5, 0x168, 0xb5, 0x2, 0x73f, 0x73e, 0x3, 0x2, 0x2, 0x2, 0x740, 0x743, 
       0x3, 0x2, 0x2, 0x2, 0x741, 0x73f, 0x3, 0x2, 0x2, 0x2, 0x741, 0x742, 
       0x3, 0x2, 0x2, 0x2, 0x742, 0x161, 0x3, 0x2, 0x2, 0x2, 0x743, 0x741, 
       0x3, 0x2, 0x2, 0x2, 0x744, 0x762, 0x5, 0x2, 0x2, 0x2, 0x745, 0x74a, 
       0x5, 0x36, 0x1c, 0x2, 0x746, 0x747, 0x7, 0x3f, 0x2, 0x2, 0x747, 0x749, 
       0x7, 0x40, 0x2, 0x2, 0x748, 0x746, 0x3, 0x2, 0x2, 0x2, 0x749, 0x74c, 
       0x3, 0x2, 0x2, 0x2, 0x74a, 0x748, 0x3, 0x2, 0x2, 0x2, 0x74a, 0x74b, 
       0x3, 0x2, 0x2, 0x2, 0x74b, 0x74d, 0x3, 0x2, 0x2, 0x2, 0x74c, 0x74a, 
       0x3, 0x2, 0x2, 0x2, 0x74d, 0x74e, 0x7, 0x43, 0x2, 0x2, 0x74e, 0x74f, 
       0x7, 0xb, 0x2, 0x2, 0x74f, 0x762, 0x3, 0x2, 0x2, 0x2, 0x750, 0x751, 
       0x7, 0x32, 0x2, 0x2, 0x751, 0x752, 0x7, 0x43, 0x2, 0x2, 0x752, 0x762, 
       0x7, 0xb, 0x2, 0x2, 0x753, 0x762, 0x7, 0x2d, 0x2, 0x2, 0x754, 0x755, 
       0x5, 0x36, 0x1c, 0x2, 0x755, 0x756, 0x7, 0x43, 0x2, 0x2, 0x756, 0x757, 
       0x7, 0x2d, 0x2, 0x2, 0x757, 0x762, 0x3, 0x2, 0x2, 0x2, 0x758, 0x759, 
       0x7, 0x3b, 0x2, 0x2, 0x759, 0x75a, 0x5, 0x19e, 0xd0, 0x2, 0x75a, 
       0x75b, 0x7, 0x3c, 0x2, 0x2, 0x75b, 0x762, 0x3, 0x2, 0x2, 0x2, 0x75c, 
       0x762, 0x5, 0x174, 0xbb, 0x2, 0x75d, 0x762, 0x5, 0x17c, 0xbf, 0x2, 
       0x75e, 0x762, 0x5, 0x182, 0xc2, 0x2, 0x75f, 0x762, 0x5, 0x188, 0xc5, 
       0x2, 0x760, 0x762, 0x5, 0x190, 0xc9, 0x2, 0x761, 0x744, 0x3, 0x2, 
       0x2, 0x2, 0x761, 0x745, 0x3, 0x2, 0x2, 0x2, 0x761, 0x750, 0x3, 0x2, 
       0x2, 0x2, 0x761, 0x753, 0x3, 0x2, 0x2, 0x2, 0x761, 0x754, 0x3, 0x2, 
       0x2, 0x2, 0x761, 0x758, 0x3, 0x2, 0x2, 0x2, 0x761, 0x75c, 0x3, 0x2, 
       0x2, 0x2, 0x761, 0x75d, 0x3, 0x2, 0x2, 0x2, 0x761, 0x75e, 0x3, 0x2, 
       0x2, 0x2, 0x761, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x761, 0x760, 0x3, 0x2, 
       0x2, 0x2, 0x762, 0x163, 0x3, 0x2, 0x2, 0x2, 0x763, 0x764, 0x3, 0x2, 
       0x2, 0x2, 0x764, 0x165, 0x3, 0x2, 0x2, 0x2, 0x765, 0x782, 0x5, 0x2, 
       0x2, 0x2, 0x766, 0x76b, 0x5, 0x36, 0x1c, 0x2, 0x767, 0x768, 0x7, 
       0x3f, 0x2, 0x2, 0x768, 0x76a, 0x7, 0x40, 0x2, 0x2, 0x769, 0x767, 
       0x3, 0x2, 0x2, 0x2, 0x76a, 0x76d, 0x3, 0x2, 0x2, 0x2, 0x76b, 0x769, 
       0x3, 0x2, 0x2, 0x2, 0x76b, 0x76c, 0x3, 0x2, 0x2, 0x2, 0x76c, 0x76e, 
       0x3, 0x2, 0x2, 0x2, 0x76d, 0x76b, 0x3, 0x2, 0x2, 0x2, 0x76e, 0x76f, 
       0x7, 0x43, 0x2, 0x2, 0x76f, 0x770, 0x7, 0xb, 0x2, 0x2, 0x770, 0x782, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x772, 0x7, 0x32, 0x2, 0x2, 0x772, 0x773, 
       0x7, 0x43, 0x2, 0x2, 0x773, 0x782, 0x7, 0xb, 0x2, 0x2, 0x774, 0x782, 
       0x7, 0x2d, 0x2, 0x2, 0x775, 0x776, 0x5, 0x36, 0x1c, 0x2, 0x776, 0x777, 
       0x7, 0x43, 0x2, 0x2, 0x777, 0x778, 0x7, 0x2d, 0x2, 0x2, 0x778, 0x782, 
       0x3, 0x2, 0x2, 0x2, 0x779, 0x77a, 0x7, 0x3b, 0x2, 0x2, 0x77a, 0x77b, 
       0x5, 0x19e, 0xd0, 0x2, 0x77b, 0x77c, 0x7, 0x3c, 0x2, 0x2, 0x77c, 
       0x782, 0x3, 0x2, 0x2, 0x2, 0x77d, 0x782, 0x5, 0x174, 0xbb, 0x2, 0x77e, 
       0x782, 0x5, 0x17c, 0xbf, 0x2, 0x77f, 0x782, 0x5, 0x188, 0xc5, 0x2, 
       0x780, 0x782, 0x5, 0x190, 0xc9, 0x2, 0x781, 0x765, 0x3, 0x2, 0x2, 
       0x2, 0x781, 0x766, 0x3, 0x2, 0x2, 0x2, 0x781, 0x771, 0x3, 0x2, 0x2, 
       0x2, 0x781, 0x774, 0x3, 0x2, 0x2, 0x2, 0x781, 0x775, 0x3, 0x2, 0x2, 
       0x2, 0x781, 0x779, 0x3, 0x2, 0x2, 0x2, 0x781, 0x77d, 0x3, 0x2, 0x2, 
       0x2, 0x781, 0x77e, 0x3, 0x2, 0x2, 0x2, 0x781, 0x77f, 0x3, 0x2, 0x2, 
       0x2, 0x781, 0x780, 0x3, 0x2, 0x2, 0x2, 0x782, 0x167, 0x3, 0x2, 0x2, 
       0x2, 0x783, 0x789, 0x5, 0x176, 0xbc, 0x2, 0x784, 0x789, 0x5, 0x17e, 
       0xc0, 0x2, 0x785, 0x789, 0x5, 0x184, 0xc3, 0x2, 0x786, 0x789, 0x5, 
       0x18a, 0xc6, 0x2, 0x787, 0x789, 0x5, 0x192, 0xca, 0x2, 0x788, 0x783, 
       0x3, 0x2, 0x2, 0x2, 0x788, 0x784, 0x3, 0x2, 0x2, 0x2, 0x788, 0x785, 
       0x3, 0x2, 0x2, 0x2, 0x788, 0x786, 0x3, 0x2, 0x2, 0x2, 0x788, 0x787, 
       0x3, 0x2, 0x2, 0x2, 0x789, 0x169, 0x3, 0x2, 0x2, 0x2, 0x78a, 0x78b, 
       0x3, 0x2, 0x2, 0x2, 0x78b, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x78c, 0x791, 
       0x5, 0x176, 0xbc, 0x2, 0x78d, 0x791, 0x5, 0x17e, 0xc0, 0x2, 0x78e, 
       0x791, 0x5, 0x18a, 0xc6, 0x2, 0x78f, 0x791, 0x5, 0x192, 0xca, 0x2, 
       0x790, 0x78c, 0x3, 0x2, 0x2, 0x2, 0x790, 0x78d, 0x3, 0x2, 0x2, 0x2, 
       0x790, 0x78e, 0x3, 0x2, 0x2, 0x2, 0x790, 0x78f, 0x3, 0x2, 0x2, 0x2, 
       0x791, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x792, 0x7bb, 0x5, 0x2, 0x2, 0x2, 
       0x793, 0x798, 0x5, 0x36, 0x1c, 0x2, 0x794, 0x795, 0x7, 0x3f, 0x2, 
       0x2, 0x795, 0x797, 0x7, 0x40, 0x2, 0x2, 0x796, 0x794, 0x3, 0x2, 0x2, 
       0x2, 0x797, 0x79a, 0x3, 0x2, 0x2, 0x2, 0x798, 0x796, 0x3, 0x2, 0x2, 
       0x2, 0x798, 0x799, 0x3, 0x2, 0x2, 0x2, 0x799, 0x79b, 0x3, 0x2, 0x2, 
       0x2, 0x79a, 0x798, 0x3, 0x2, 0x2, 0x2, 0x79b, 0x79c, 0x7, 0x43, 0x2, 
       0x2, 0x79c, 0x79d, 0x7, 0xb, 0x2, 0x2, 0x79d, 0x7bb, 0x3, 0x2, 0x2, 
       0x2, 0x79e, 0x7a3, 0x5, 0x76, 0x3c, 0x2, 0x79f, 0x7a0, 0x7, 0x3f, 
       0x2, 0x2, 0x7a0, 0x7a2, 0x7, 0x40, 0x2, 0x2, 0x7a1, 0x79f, 0x3, 0x2, 
       0x2, 0x2, 0x7a2, 0x7a5, 0x3, 0x2, 0x2, 0x2, 0x7a3, 0x7a1, 0x3, 0x2, 
       0x2, 0x2, 0x7a3, 0x7a4, 0x3, 0x2, 0x2, 0x2, 0x7a4, 0x7a6, 0x3, 0x2, 
       0x2, 0x2, 0x7a5, 0x7a3, 0x3, 0x2, 0x2, 0x2, 0x7a6, 0x7a7, 0x7, 0x43, 
       0x2, 0x2, 0x7a7, 0x7a8, 0x7, 0xb, 0x2, 0x2, 0x7a8, 0x7bb, 0x3, 0x2, 
       0x2, 0x2, 0x7a9, 0x7aa, 0x7, 0x32, 0x2, 0x2, 0x7aa, 0x7ab, 0x7, 0x43, 
       0x2, 0x2, 0x7ab, 0x7bb, 0x7, 0xb, 0x2, 0x2, 0x7ac, 0x7bb, 0x7, 0x2d, 
       0x2, 0x2, 0x7ad, 0x7ae, 0x5, 0x36, 0x1c, 0x2, 0x7ae, 0x7af, 0x7, 
       0x43, 0x2, 0x2, 0x7af, 0x7b0, 0x7, 0x2d, 0x2, 0x2, 0x7b0, 0x7bb, 
       0x3, 0x2, 0x2, 0x2, 0x7b1, 0x7b2, 0x7, 0x3b, 0x2, 0x2, 0x7b2, 0x7b3, 
       0x5, 0x19e, 0xd0, 0x2, 0x7b3, 0x7b4, 0x7, 0x3c, 0x2, 0x2, 0x7b4, 
       0x7bb, 0x3, 0x2, 0x2, 0x2, 0x7b5, 0x7bb, 0x5, 0x178, 0xbd, 0x2, 0x7b6, 
       0x7bb, 0x5, 0x180, 0xc1, 0x2, 0x7b7, 0x7bb, 0x5, 0x186, 0xc4, 0x2, 
       0x7b8, 0x7bb, 0x5, 0x18c, 0xc7, 0x2, 0x7b9, 0x7bb, 0x5, 0x194, 0xcb, 
       0x2, 0x7ba, 0x792, 0x3, 0x2, 0x2, 0x2, 0x7ba, 0x793, 0x3, 0x2, 0x2, 
       0x2, 0x7ba, 0x79e, 0x3, 0x2, 0x2, 0x2, 0x7ba, 0x7a9, 0x3, 0x2, 0x2, 
       0x2, 0x7ba, 0x7ac, 0x3, 0x2, 0x2, 0x2, 0x7ba, 0x7ad, 0x3, 0x2, 0x2, 
       0x2, 0x7ba, 0x7b1, 0x3, 0x2, 0x2, 0x2, 0x7ba, 0x7b5, 0x3, 0x2, 0x2, 
       0x2, 0x7ba, 0x7b6, 0x3, 0x2, 0x2, 0x2, 0x7ba, 0x7b7, 0x3, 0x2, 0x2, 
       0x2, 0x7ba, 0x7b8, 0x3, 0x2, 0x2, 0x2, 0x7ba, 0x7b9, 0x3, 0x2, 0x2, 
       0x2, 0x7bb, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x7bc, 0x7bd, 0x3, 0x2, 0x2, 
       0x2, 0x7bd, 0x171, 0x3, 0x2, 0x2, 0x2, 0x7be, 0x7e6, 0x5, 0x2, 0x2, 
       0x2, 0x7bf, 0x7c4, 0x5, 0x36, 0x1c, 0x2, 0x7c0, 0x7c1, 0x7, 0x3f, 
       0x2, 0x2, 0x7c1, 0x7c3, 0x7, 0x40, 0x2, 0x2, 0x7c2, 0x7c0, 0x3, 0x2, 
       0x2, 0x2, 0x7c3, 0x7c6, 0x3, 0x2, 0x2, 0x2, 0x7c4, 0x7c2, 0x3, 0x2, 
       0x2, 0x2, 0x7c4, 0x7c5, 0x3, 0x2, 0x2, 0x2, 0x7c5, 0x7c7, 0x3, 0x2, 
       0x2, 0x2, 0x7c6, 0x7c4, 0x3, 0x2, 0x2, 0x2, 0x7c7, 0x7c8, 0x7, 0x43, 
       0x2, 0x2, 0x7c8, 0x7c9, 0x7, 0xb, 0x2, 0x2, 0x7c9, 0x7e6, 0x3, 0x2, 
       0x2, 0x2, 0x7ca, 0x7cf, 0x5, 0x76, 0x3c, 0x2, 0x7cb, 0x7cc, 0x7, 
       0x3f, 0x2, 0x2, 0x7cc, 0x7ce, 0x7, 0x40, 0x2, 0x2, 0x7cd, 0x7cb, 
       0x3, 0x2, 0x2, 0x2, 0x7ce, 0x7d1, 0x3, 0x2, 0x2, 0x2, 0x7cf, 0x7cd, 
       0x3, 0x2, 0x2, 0x2, 0x7cf, 0x7d0, 0x3, 0x2, 0x2, 0x2, 0x7d0, 0x7d2, 
       0x3, 0x2, 0x2, 0x2, 0x7d1, 0x7cf, 0x3, 0x2, 0x2, 0x2, 0x7d2, 0x7d3, 
       0x7, 0x43, 0x2, 0x2, 0x7d3, 0x7d4, 0x7, 0xb, 0x2, 0x2, 0x7d4, 0x7e6, 
       0x3, 0x2, 0x2, 0x2, 0x7d5, 0x7d6, 0x7, 0x32, 0x2, 0x2, 0x7d6, 0x7d7, 
       0x7, 0x43, 0x2, 0x2, 0x7d7, 0x7e6, 0x7, 0xb, 0x2, 0x2, 0x7d8, 0x7e6, 
       0x7, 0x2d, 0x2, 0x2, 0x7d9, 0x7da, 0x5, 0x36, 0x1c, 0x2, 0x7da, 0x7db, 
       0x7, 0x43, 0x2, 0x2, 0x7db, 0x7dc, 0x7, 0x2d, 0x2, 0x2, 0x7dc, 0x7e6, 
       0x3, 0x2, 0x2, 0x2, 0x7dd, 0x7de, 0x7, 0x3b, 0x2, 0x2, 0x7de, 0x7df, 
       0x5, 0x19e, 0xd0, 0x2, 0x7df, 0x7e0, 0x7, 0x3c, 0x2, 0x2, 0x7e0, 
       0x7e6, 0x3, 0x2, 0x2, 0x2, 0x7e1, 0x7e6, 0x5, 0x178, 0xbd, 0x2, 0x7e2, 
       0x7e6, 0x5, 0x180, 0xc1, 0x2, 0x7e3, 0x7e6, 0x5, 0x18c, 0xc7, 0x2, 
       0x7e4, 0x7e6, 0x5, 0x194, 0xcb, 0x2, 0x7e5, 0x7be, 0x3, 0x2, 0x2, 
       0x2, 0x7e5, 0x7bf, 0x3, 0x2, 0x2, 0x2, 0x7e5, 0x7ca, 0x3, 0x2, 0x2, 
       0x2, 0x7e5, 0x7d5, 0x3, 0x2, 0x2, 0x2, 0x7e5, 0x7d8, 0x3, 0x2, 0x2, 
       0x2, 0x7e5, 0x7d9, 0x3, 0x2, 0x2, 0x2, 0x7e5, 0x7dd, 0x3, 0x2, 0x2, 
       0x2, 0x7e5, 0x7e1, 0x3, 0x2, 0x2, 0x2, 0x7e5, 0x7e2, 0x3, 0x2, 0x2, 
       0x2, 0x7e5, 0x7e3, 0x3, 0x2, 0x2, 0x2, 0x7e5, 0x7e4, 0x3, 0x2, 0x2, 
       0x2, 0x7e6, 0x173, 0x3, 0x2, 0x2, 0x2, 0x7e7, 0x7e9, 0x7, 0x21, 0x2, 
       0x2, 0x7e8, 0x7ea, 0x5, 0x2a, 0x16, 0x2, 0x7e9, 0x7e8, 0x3, 0x2, 
       0x2, 0x2, 0x7e9, 0x7ea, 0x3, 0x2, 0x2, 0x2, 0x7ea, 0x7ee, 0x3, 0x2, 
       0x2, 0x2, 0x7eb, 0x7ed, 0x5, 0xe6, 0x74, 0x2, 0x7ec, 0x7eb, 0x3, 
       0x2, 0x2, 0x2, 0x7ed, 0x7f0, 0x3, 0x2, 0x2, 0x2, 0x7ee, 0x7ec, 0x3, 
       0x2, 0x2, 0x2, 0x7ee, 0x7ef, 0x3, 0x2, 0x2, 0x2, 0x7ef, 0x7f1, 0x3, 
       0x2, 0x2, 0x2, 0x7f0, 0x7ee, 0x3, 0x2, 0x2, 0x2, 0x7f1, 0x7fc, 0x7, 
       0x68, 0x2, 0x2, 0x7f2, 0x7f6, 0x7, 0x43, 0x2, 0x2, 0x7f3, 0x7f5, 
       0x5, 0xe6, 0x74, 0x2, 0x7f4, 0x7f3, 0x3, 0x2, 0x2, 0x2, 0x7f5, 0x7f8, 
       0x3, 0x2, 0x2, 0x2, 0x7f6, 0x7f4, 0x3, 0x2, 0x2, 0x2, 0x7f6, 0x7f7, 
       0x3, 0x2, 0x2, 0x2, 0x7f7, 0x7f9, 0x3, 0x2, 0x2, 0x2, 0x7f8, 0x7f6, 
       0x3, 0x2, 0x2, 0x2, 0x7f9, 0x7fb, 0x7, 0x68, 0x2, 0x2, 0x7fa, 0x7f2, 
       0x3, 0x2, 0x2, 0x2, 0x7fb, 0x7fe, 0x3, 0x2, 0x2, 0x2, 0x7fc, 0x7fa, 
       0x3, 0x2, 0x2, 0x2, 0x7fc, 0x7fd, 0x3, 0x2, 0x2, 0x2, 0x7fd, 0x800, 
       0x3, 0x2, 0x2, 0x2, 0x7fe, 0x7fc, 0x3, 0x2, 0x2, 0x2, 0x7ff, 0x801, 
       0x5, 0x17a, 0xbe, 0x2, 0x800, 0x7ff, 0x3, 0x2, 0x2, 0x2, 0x800, 0x801, 
       0x3, 0x2, 0x2, 0x2, 0x801, 0x802, 0x3, 0x2, 0x2, 0x2, 0x802, 0x804, 
       0x7, 0x3b, 0x2, 0x2, 0x803, 0x805, 0x5, 0x18e, 0xc8, 0x2, 0x804, 
       0x803, 0x3, 0x2, 0x2, 0x2, 0x804, 0x805, 0x3, 0x2, 0x2, 0x2, 0x805, 
       0x806, 0x3, 0x2, 0x2, 0x2, 0x806, 0x808, 0x7, 0x3c, 0x2, 0x2, 0x807, 
       0x809, 0x5, 0x62, 0x32, 0x2, 0x808, 0x807, 0x3, 0x2, 0x2, 0x2, 0x808, 
       0x809, 0x3, 0x2, 0x2, 0x2, 0x809, 0x83b, 0x3, 0x2, 0x2, 0x2, 0x80a, 
       0x80b, 0x5, 0x3a, 0x1e, 0x2, 0x80b, 0x80c, 0x7, 0x43, 0x2, 0x2, 0x80c, 
       0x80e, 0x7, 0x21, 0x2, 0x2, 0x80d, 0x80f, 0x5, 0x2a, 0x16, 0x2, 0x80e, 
       0x80d, 0x3, 0x2, 0x2, 0x2, 0x80e, 0x80f, 0x3, 0x2, 0x2, 0x2, 0x80f, 
       0x813, 0x3, 0x2, 0x2, 0x2, 0x810, 0x812, 0x5, 0xe6, 0x74, 0x2, 0x811, 
       0x810, 0x3, 0x2, 0x2, 0x2, 0x812, 0x815, 0x3, 0x2, 0x2, 0x2, 0x813, 
       0x811, 0x3, 0x2, 0x2, 0x2, 0x813, 0x814, 0x3, 0x2, 0x2, 0x2, 0x814, 
       0x816, 0x3, 0x2, 0x2, 0x2, 0x815, 0x813, 0x3, 0x2, 0x2, 0x2, 0x816, 
       0x818, 0x7, 0x68, 0x2, 0x2, 0x817, 0x819, 0x5, 0x17a, 0xbe, 0x2, 
       0x818, 0x817, 0x3, 0x2, 0x2, 0x2, 0x818, 0x819, 0x3, 0x2, 0x2, 0x2, 
       0x819, 0x81a, 0x3, 0x2, 0x2, 0x2, 0x81a, 0x81c, 0x7, 0x3b, 0x2, 0x2, 
       0x81b, 0x81d, 0x5, 0x18e, 0xc8, 0x2, 0x81c, 0x81b, 0x3, 0x2, 0x2, 
       0x2, 0x81c, 0x81d, 0x3, 0x2, 0x2, 0x2, 0x81d, 0x81e, 0x3, 0x2, 0x2, 
       0x2, 0x81e, 0x820, 0x7, 0x3c, 0x2, 0x2, 0x81f, 0x821, 0x5, 0x62, 
       0x32, 0x2, 0x820, 0x81f, 0x3, 0x2, 0x2, 0x2, 0x820, 0x821, 0x3, 0x2, 
       0x2, 0x2, 0x821, 0x83b, 0x3, 0x2, 0x2, 0x2, 0x822, 0x823, 0x5, 0x160, 
       0xb1, 0x2, 0x823, 0x824, 0x7, 0x43, 0x2, 0x2, 0x824, 0x826, 0x7, 
       0x21, 0x2, 0x2, 0x825, 0x827, 0x5, 0x2a, 0x16, 0x2, 0x826, 0x825, 
       0x3, 0x2, 0x2, 0x2, 0x826, 0x827, 0x3, 0x2, 0x2, 0x2, 0x827, 0x82b, 
       0x3, 0x2, 0x2, 0x2, 0x828, 0x82a, 0x5, 0xe6, 0x74, 0x2, 0x829, 0x828, 
       0x3, 0x2, 0x2, 0x2, 0x82a, 0x82d, 0x3, 0x2, 0x2, 0x2, 0x82b, 0x829, 
       0x3, 0x2, 0x2, 0x2, 0x82b, 0x82c, 0x3, 0x2, 0x2, 0x2, 0x82c, 0x82e, 
       0x3, 0x2, 0x2, 0x2, 0x82d, 0x82b, 0x3, 0x2, 0x2, 0x2, 0x82e, 0x830, 
       0x7, 0x68, 0x2, 0x2, 0x82f, 0x831, 0x5, 0x17a, 0xbe, 0x2, 0x830, 
       0x82f, 0x3, 0x2, 0x2, 0x2, 0x830, 0x831, 0x3, 0x2, 0x2, 0x2, 0x831, 
       0x832, 0x3, 0x2, 0x2, 0x2, 0x832, 0x834, 0x7, 0x3b, 0x2, 0x2, 0x833, 
       0x835, 0x5, 0x18e, 0xc8, 0x2, 0x834, 0x833, 0x3, 0x2, 0x2, 0x2, 0x834, 
       0x835, 0x3, 0x2, 0x2, 0x2, 0x835, 0x836, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x838, 0x7, 0x3c, 0x2, 0x2, 0x837, 0x839, 0x5, 0x62, 0x32, 0x2, 0x838, 
       0x837, 0x3, 0x2, 0x2, 0x2, 0x838, 0x839, 0x3, 0x2, 0x2, 0x2, 0x839, 
       0x83b, 0x3, 0x2, 0x2, 0x2, 0x83a, 0x7e7, 0x3, 0x2, 0x2, 0x2, 0x83a, 
       0x80a, 0x3, 0x2, 0x2, 0x2, 0x83a, 0x822, 0x3, 0x2, 0x2, 0x2, 0x83b, 
       0x175, 0x3, 0x2, 0x2, 0x2, 0x83c, 0x83d, 0x7, 0x43, 0x2, 0x2, 0x83d, 
       0x83f, 0x7, 0x21, 0x2, 0x2, 0x83e, 0x840, 0x5, 0x2a, 0x16, 0x2, 0x83f, 
       0x83e, 0x3, 0x2, 0x2, 0x2, 0x83f, 0x840, 0x3, 0x2, 0x2, 0x2, 0x840, 
       0x844, 0x3, 0x2, 0x2, 0x2, 0x841, 0x843, 0x5, 0xe6, 0x74, 0x2, 0x842, 
       0x841, 0x3, 0x2, 0x2, 0x2, 0x843, 0x846, 0x3, 0x2, 0x2, 0x2, 0x844, 
       0x842, 0x3, 0x2, 0x2, 0x2, 0x844, 0x845, 0x3, 0x2, 0x2, 0x2, 0x845, 
       0x847, 0x3, 0x2, 0x2, 0x2, 0x846, 0x844, 0x3, 0x2, 0x2, 0x2, 0x847, 
       0x849, 0x7, 0x68, 0x2, 0x2, 0x848, 0x84a, 0x5, 0x17a, 0xbe, 0x2, 
       0x849, 0x848, 0x3, 0x2, 0x2, 0x2, 0x849, 0x84a, 0x3, 0x2, 0x2, 0x2, 
       0x84a, 0x84b, 0x3, 0x2, 0x2, 0x2, 0x84b, 0x84d, 0x7, 0x3b, 0x2, 0x2, 
       0x84c, 0x84e, 0x5, 0x18e, 0xc8, 0x2, 0x84d, 0x84c, 0x3, 0x2, 0x2, 
       0x2, 0x84d, 0x84e, 0x3, 0x2, 0x2, 0x2, 0x84e, 0x84f, 0x3, 0x2, 0x2, 
       0x2, 0x84f, 0x851, 0x7, 0x3c, 0x2, 0x2, 0x850, 0x852, 0x5, 0x62, 
       0x32, 0x2, 0x851, 0x850, 0x3, 0x2, 0x2, 0x2, 0x851, 0x852, 0x3, 0x2, 
       0x2, 0x2, 0x852, 0x177, 0x3, 0x2, 0x2, 0x2, 0x853, 0x855, 0x7, 0x21, 
       0x2, 0x2, 0x854, 0x856, 0x5, 0x2a, 0x16, 0x2, 0x855, 0x854, 0x3, 
       0x2, 0x2, 0x2, 0x855, 0x856, 0x3, 0x2, 0x2, 0x2, 0x856, 0x85a, 0x3, 
       0x2, 0x2, 0x2, 0x857, 0x859, 0x5, 0xe6, 0x74, 0x2, 0x858, 0x857, 
       0x3, 0x2, 0x2, 0x2, 0x859, 0x85c, 0x3, 0x2, 0x2, 0x2, 0x85a, 0x858, 
       0x3, 0x2, 0x2, 0x2, 0x85a, 0x85b, 0x3, 0x2, 0x2, 0x2, 0x85b, 0x85d, 
       0x3, 0x2, 0x2, 0x2, 0x85c, 0x85a, 0x3, 0x2, 0x2, 0x2, 0x85d, 0x868, 
       0x7, 0x68, 0x2, 0x2, 0x85e, 0x862, 0x7, 0x43, 0x2, 0x2, 0x85f, 0x861, 
       0x5, 0xe6, 0x74, 0x2, 0x860, 0x85f, 0x3, 0x2, 0x2, 0x2, 0x861, 0x864, 
       0x3, 0x2, 0x2, 0x2, 0x862, 0x860, 0x3, 0x2, 0x2, 0x2, 0x862, 0x863, 
       0x3, 0x2, 0x2, 0x2, 0x863, 0x865, 0x3, 0x2, 0x2, 0x2, 0x864, 0x862, 
       0x3, 0x2, 0x2, 0x2, 0x865, 0x867, 0x7, 0x68, 0x2, 0x2, 0x866, 0x85e, 
       0x3, 0x2, 0x2, 0x2, 0x867, 0x86a, 0x3, 0x2, 0x2, 0x2, 0x868, 0x866, 
       0x3, 0x2, 0x2, 0x2, 0x868, 0x869, 0x3, 0x2, 0x2, 0x2, 0x869, 0x86c, 
       0x3, 0x2, 0x2, 0x2, 0x86a, 0x868, 0x3, 0x2, 0x2, 0x2, 0x86b, 0x86d, 
       0x5, 0x17a, 0xbe, 0x2, 0x86c, 0x86b, 0x3, 0x2, 0x2, 0x2, 0x86c, 0x86d, 
       0x3, 0x2, 0x2, 0x2, 0x86d, 0x86e, 0x3, 0x2, 0x2, 0x2, 0x86e, 0x870, 
       0x7, 0x3b, 0x2, 0x2, 0x86f, 0x871, 0x5, 0x18e, 0xc8, 0x2, 0x870, 
       0x86f, 0x3, 0x2, 0x2, 0x2, 0x870, 0x871, 0x3, 0x2, 0x2, 0x2, 0x871, 
       0x872, 0x3, 0x2, 0x2, 0x2, 0x872, 0x874, 0x7, 0x3c, 0x2, 0x2, 0x873, 
       0x875, 0x5, 0x62, 0x32, 0x2, 0x874, 0x873, 0x3, 0x2, 0x2, 0x2, 0x874, 
       0x875, 0x3, 0x2, 0x2, 0x2, 0x875, 0x88f, 0x3, 0x2, 0x2, 0x2, 0x876, 
       0x877, 0x5, 0x3a, 0x1e, 0x2, 0x877, 0x878, 0x7, 0x43, 0x2, 0x2, 0x878, 
       0x87a, 0x7, 0x21, 0x2, 0x2, 0x879, 0x87b, 0x5, 0x2a, 0x16, 0x2, 0x87a, 
       0x879, 0x3, 0x2, 0x2, 0x2, 0x87a, 0x87b, 0x3, 0x2, 0x2, 0x2, 0x87b, 
       0x87f, 0x3, 0x2, 0x2, 0x2, 0x87c, 0x87e, 0x5, 0xe6, 0x74, 0x2, 0x87d, 
       0x87c, 0x3, 0x2, 0x2, 0x2, 0x87e, 0x881, 0x3, 0x2, 0x2, 0x2, 0x87f, 
       0x87d, 0x3, 0x2, 0x2, 0x2, 0x87f, 0x880, 0x3, 0x2, 0x2, 0x2, 0x880, 
       0x882, 0x3, 0x2, 0x2, 0x2, 0x881, 0x87f, 0x3, 0x2, 0x2, 0x2, 0x882, 
       0x884, 0x7, 0x68, 0x2, 0x2, 0x883, 0x885, 0x5, 0x17a, 0xbe, 0x2, 
       0x884, 0x883, 0x3, 0x2, 0x2, 0x2, 0x884, 0x885, 0x3, 0x2, 0x2, 0x2, 
       0x885, 0x886, 0x3, 0x2, 0x2, 0x2, 0x886, 0x888, 0x7, 0x3b, 0x2, 0x2, 
       0x887, 0x889, 0x5, 0x18e, 0xc8, 0x2, 0x888, 0x887, 0x3, 0x2, 0x2, 
       0x2, 0x888, 0x889, 0x3, 0x2, 0x2, 0x2, 0x889, 0x88a, 0x3, 0x2, 0x2, 
       0x2, 0x88a, 0x88c, 0x7, 0x3c, 0x2, 0x2, 0x88b, 0x88d, 0x5, 0x62, 
       0x32, 0x2, 0x88c, 0x88b, 0x3, 0x2, 0x2, 0x2, 0x88c, 0x88d, 0x3, 0x2, 
       0x2, 0x2, 0x88d, 0x88f, 0x3, 0x2, 0x2, 0x2, 0x88e, 0x853, 0x3, 0x2, 
       0x2, 0x2, 0x88e, 0x876, 0x3, 0x2, 0x2, 0x2, 0x88f, 0x179, 0x3, 0x2, 
       0x2, 0x2, 0x890, 0x894, 0x5, 0x2a, 0x16, 0x2, 0x891, 0x892, 0x7, 
       0x46, 0x2, 0x2, 0x892, 0x894, 0x7, 0x45, 0x2, 0x2, 0x893, 0x890, 
       0x3, 0x2, 0x2, 0x2, 0x893, 0x891, 0x3, 0x2, 0x2, 0x2, 0x894, 0x17b, 
       0x3, 0x2, 0x2, 0x2, 0x895, 0x896, 0x5, 0x160, 0xb1, 0x2, 0x896, 0x897, 
       0x7, 0x43, 0x2, 0x2, 0x897, 0x898, 0x7, 0x68, 0x2, 0x2, 0x898, 0x8a3, 
       0x3, 0x2, 0x2, 0x2, 0x899, 0x89a, 0x7, 0x2a, 0x2, 0x2, 0x89a, 0x89b, 
       0x7, 0x43, 0x2, 0x2, 0x89b, 0x8a3, 0x7, 0x68, 0x2, 0x2, 0x89c, 0x89d, 
       0x5, 0x36, 0x1c, 0x2, 0x89d, 0x89e, 0x7, 0x43, 0x2, 0x2, 0x89e, 0x89f, 
       0x7, 0x2a, 0x2, 0x2, 0x89f, 0x8a0, 0x7, 0x43, 0x2, 0x2, 0x8a0, 0x8a1, 
       0x7, 0x68, 0x2, 0x2, 0x8a1, 0x8a3, 0x3, 0x2, 0x2, 0x2, 0x8a2, 0x895, 
       0x3, 0x2, 0x2, 0x2, 0x8a2, 0x899, 0x3, 0x2, 0x2, 0x2, 0x8a2, 0x89c, 
       0x3, 0x2, 0x2, 0x2, 0x8a3, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x8a4, 0x8a5, 
       0x7, 0x43, 0x2, 0x2, 0x8a5, 0x8a6, 0x7, 0x68, 0x2, 0x2, 0x8a6, 0x17f, 
       0x3, 0x2, 0x2, 0x2, 0x8a7, 0x8a8, 0x7, 0x2a, 0x2, 0x2, 0x8a8, 0x8a9, 
       0x7, 0x43, 0x2, 0x2, 0x8a9, 0x8b1, 0x7, 0x68, 0x2, 0x2, 0x8aa, 0x8ab, 
       0x5, 0x36, 0x1c, 0x2, 0x8ab, 0x8ac, 0x7, 0x43, 0x2, 0x2, 0x8ac, 0x8ad, 
       0x7, 0x2a, 0x2, 0x2, 0x8ad, 0x8ae, 0x7, 0x43, 0x2, 0x2, 0x8ae, 0x8af, 
       0x7, 0x68, 0x2, 0x2, 0x8af, 0x8b1, 0x3, 0x2, 0x2, 0x2, 0x8b0, 0x8a7, 
       0x3, 0x2, 0x2, 0x2, 0x8b0, 0x8aa, 0x3, 0x2, 0x2, 0x2, 0x8b1, 0x181, 
       0x3, 0x2, 0x2, 0x2, 0x8b2, 0x8b3, 0x5, 0x3a, 0x1e, 0x2, 0x8b3, 0x8b4, 
       0x7, 0x3f, 0x2, 0x2, 0x8b4, 0x8b5, 0x5, 0x19e, 0xd0, 0x2, 0x8b5, 
       0x8b6, 0x7, 0x40, 0x2, 0x2, 0x8b6, 0x8bd, 0x3, 0x2, 0x2, 0x2, 0x8b7, 
       0x8b8, 0x5, 0x166, 0xb4, 0x2, 0x8b8, 0x8b9, 0x7, 0x3f, 0x2, 0x2, 
       0x8b9, 0x8ba, 0x5, 0x19e, 0xd0, 0x2, 0x8ba, 0x8bb, 0x7, 0x40, 0x2, 
       0x2, 0x8bb, 0x8bd, 0x3, 0x2, 0x2, 0x2, 0x8bc, 0x8b2, 0x3, 0x2, 0x2, 
       0x2, 0x8bc, 0x8b7, 0x3, 0x2, 0x2, 0x2, 0x8bd, 0x8c5, 0x3, 0x2, 0x2, 
       0x2, 0x8be, 0x8bf, 0x5, 0x164, 0xb3, 0x2, 0x8bf, 0x8c0, 0x7, 0x3f, 
       0x2, 0x2, 0x8c0, 0x8c1, 0x5, 0x19e, 0xd0, 0x2, 0x8c1, 0x8c2, 0x7, 
       0x40, 0x2, 0x2, 0x8c2, 0x8c4, 0x3, 0x2, 0x2, 0x2, 0x8c3, 0x8be, 0x3, 
       0x2, 0x2, 0x2, 0x8c4, 0x8c7, 0x3, 0x2, 0x2, 0x2, 0x8c5, 0x8c3, 0x3, 
       0x2, 0x2, 0x2, 0x8c5, 0x8c6, 0x3, 0x2, 0x2, 0x2, 0x8c6, 0x183, 0x3, 
       0x2, 0x2, 0x2, 0x8c7, 0x8c5, 0x3, 0x2, 0x2, 0x2, 0x8c8, 0x8c9, 0x5, 
       0x16c, 0xb7, 0x2, 0x8c9, 0x8ca, 0x7, 0x3f, 0x2, 0x2, 0x8ca, 0x8cb, 
       0x5, 0x19e, 0xd0, 0x2, 0x8cb, 0x8cc, 0x7, 0x40, 0x2, 0x2, 0x8cc, 
       0x8d4, 0x3, 0x2, 0x2, 0x2, 0x8cd, 0x8ce, 0x5, 0x16a, 0xb6, 0x2, 0x8ce, 
       0x8cf, 0x7, 0x3f, 0x2, 0x2, 0x8cf, 0x8d0, 0x5, 0x19e, 0xd0, 0x2, 
       0x8d0, 0x8d1, 0x7, 0x40, 0x2, 0x2, 0x8d1, 0x8d3, 0x3, 0x2, 0x2, 0x2, 
       0x8d2, 0x8cd, 0x3, 0x2, 0x2, 0x2, 0x8d3, 0x8d6, 0x3, 0x2, 0x2, 0x2, 
       0x8d4, 0x8d2, 0x3, 0x2, 0x2, 0x2, 0x8d4, 0x8d5, 0x3, 0x2, 0x2, 0x2, 
       0x8d5, 0x185, 0x3, 0x2, 0x2, 0x2, 0x8d6, 0x8d4, 0x3, 0x2, 0x2, 0x2, 
       0x8d7, 0x8d8, 0x5, 0x3a, 0x1e, 0x2, 0x8d8, 0x8d9, 0x7, 0x3f, 0x2, 
       0x2, 0x8d9, 0x8da, 0x5, 0x19e, 0xd0, 0x2, 0x8da, 0x8db, 0x7, 0x40, 
       0x2, 0x2, 0x8db, 0x8e2, 0x3, 0x2, 0x2, 0x2, 0x8dc, 0x8dd, 0x5, 0x172, 
       0xba, 0x2, 0x8dd, 0x8de, 0x7, 0x3f, 0x2, 0x2, 0x8de, 0x8df, 0x5, 
       0x19e, 0xd0, 0x2, 0x8df, 0x8e0, 0x7, 0x40, 0x2, 0x2, 0x8e0, 0x8e2, 
       0x3, 0x2, 0x2, 0x2, 0x8e1, 0x8d7, 0x3, 0x2, 0x2, 0x2, 0x8e1, 0x8dc, 
       0x3, 0x2, 0x2, 0x2, 0x8e2, 0x8ea, 0x3, 0x2, 0x2, 0x2, 0x8e3, 0x8e4, 
       0x5, 0x170, 0xb9, 0x2, 0x8e4, 0x8e5, 0x7, 0x3f, 0x2, 0x2, 0x8e5, 
       0x8e6, 0x5, 0x19e, 0xd0, 0x2, 0x8e6, 0x8e7, 0x7, 0x40, 0x2, 0x2, 
       0x8e7, 0x8e9, 0x3, 0x2, 0x2, 0x2, 0x8e8, 0x8e3, 0x3, 0x2, 0x2, 0x2, 
       0x8e9, 0x8ec, 0x3, 0x2, 0x2, 0x2, 0x8ea, 0x8e8, 0x3, 0x2, 0x2, 0x2, 
       0x8ea, 0x8eb, 0x3, 0x2, 0x2, 0x2, 0x8eb, 0x187, 0x3, 0x2, 0x2, 0x2, 
       0x8ec, 0x8ea, 0x3, 0x2, 0x2, 0x2, 0x8ed, 0x8ee, 0x5, 0x3c, 0x1f, 
       0x2, 0x8ee, 0x8f0, 0x7, 0x3b, 0x2, 0x2, 0x8ef, 0x8f1, 0x5, 0x18e, 
       0xc8, 0x2, 0x8f0, 0x8ef, 0x3, 0x2, 0x2, 0x2, 0x8f0, 0x8f1, 0x3, 0x2, 
       0x2, 0x2, 0x8f1, 0x8f2, 0x3, 0x2, 0x2, 0x2, 0x8f2, 0x8f3, 0x7, 0x3c, 
       0x2, 0x2, 0x8f3, 0x932, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8f5, 0x5, 0x36, 
       0x1c, 0x2, 0x8f5, 0x8f7, 0x7, 0x43, 0x2, 0x2, 0x8f6, 0x8f8, 0x5, 
       0x2a, 0x16, 0x2, 0x8f7, 0x8f6, 0x3, 0x2, 0x2, 0x2, 0x8f7, 0x8f8, 
       0x3, 0x2, 0x2, 0x2, 0x8f8, 0x8f9, 0x3, 0x2, 0x2, 0x2, 0x8f9, 0x8fa, 
       0x7, 0x68, 0x2, 0x2, 0x8fa, 0x8fc, 0x7, 0x3b, 0x2, 0x2, 0x8fb, 0x8fd, 
       0x5, 0x18e, 0xc8, 0x2, 0x8fc, 0x8fb, 0x3, 0x2, 0x2, 0x2, 0x8fc, 0x8fd, 
       0x3, 0x2, 0x2, 0x2, 0x8fd, 0x8fe, 0x3, 0x2, 0x2, 0x2, 0x8fe, 0x8ff, 
       0x7, 0x3c, 0x2, 0x2, 0x8ff, 0x932, 0x3, 0x2, 0x2, 0x2, 0x900, 0x901, 
       0x5, 0x3a, 0x1e, 0x2, 0x901, 0x903, 0x7, 0x43, 0x2, 0x2, 0x902, 0x904, 
       0x5, 0x2a, 0x16, 0x2, 0x903, 0x902, 0x3, 0x2, 0x2, 0x2, 0x903, 0x904, 
       0x3, 0x2, 0x2, 0x2, 0x904, 0x905, 0x3, 0x2, 0x2, 0x2, 0x905, 0x906, 
       0x7, 0x68, 0x2, 0x2, 0x906, 0x908, 0x7, 0x3b, 0x2, 0x2, 0x907, 0x909, 
       0x5, 0x18e, 0xc8, 0x2, 0x908, 0x907, 0x3, 0x2, 0x2, 0x2, 0x908, 0x909, 
       0x3, 0x2, 0x2, 0x2, 0x909, 0x90a, 0x3, 0x2, 0x2, 0x2, 0x90a, 0x90b, 
       0x7, 0x3c, 0x2, 0x2, 0x90b, 0x932, 0x3, 0x2, 0x2, 0x2, 0x90c, 0x90d, 
       0x5, 0x160, 0xb1, 0x2, 0x90d, 0x90f, 0x7, 0x43, 0x2, 0x2, 0x90e, 
       0x910, 0x5, 0x2a, 0x16, 0x2, 0x90f, 0x90e, 0x3, 0x2, 0x2, 0x2, 0x90f, 
       0x910, 0x3, 0x2, 0x2, 0x2, 0x910, 0x911, 0x3, 0x2, 0x2, 0x2, 0x911, 
       0x912, 0x7, 0x68, 0x2, 0x2, 0x912, 0x914, 0x7, 0x3b, 0x2, 0x2, 0x913, 
       0x915, 0x5, 0x18e, 0xc8, 0x2, 0x914, 0x913, 0x3, 0x2, 0x2, 0x2, 0x914, 
       0x915, 0x3, 0x2, 0x2, 0x2, 0x915, 0x916, 0x3, 0x2, 0x2, 0x2, 0x916, 
       0x917, 0x7, 0x3c, 0x2, 0x2, 0x917, 0x932, 0x3, 0x2, 0x2, 0x2, 0x918, 
       0x919, 0x7, 0x2a, 0x2, 0x2, 0x919, 0x91b, 0x7, 0x43, 0x2, 0x2, 0x91a, 
       0x91c, 0x5, 0x2a, 0x16, 0x2, 0x91b, 0x91a, 0x3, 0x2, 0x2, 0x2, 0x91b, 
       0x91c, 0x3, 0x2, 0x2, 0x2, 0x91c, 0x91d, 0x3, 0x2, 0x2, 0x2, 0x91d, 
       0x91e, 0x7, 0x68, 0x2, 0x2, 0x91e, 0x920, 0x7, 0x3b, 0x2, 0x2, 0x91f, 
       0x921, 0x5, 0x18e, 0xc8, 0x2, 0x920, 0x91f, 0x3, 0x2, 0x2, 0x2, 0x920, 
       0x921, 0x3, 0x2, 0x2, 0x2, 0x921, 0x922, 0x3, 0x2, 0x2, 0x2, 0x922, 
       0x932, 0x7, 0x3c, 0x2, 0x2, 0x923, 0x924, 0x5, 0x36, 0x1c, 0x2, 0x924, 
       0x925, 0x7, 0x43, 0x2, 0x2, 0x925, 0x926, 0x7, 0x2a, 0x2, 0x2, 0x926, 
       0x928, 0x7, 0x43, 0x2, 0x2, 0x927, 0x929, 0x5, 0x2a, 0x16, 0x2, 0x928, 
       0x927, 0x3, 0x2, 0x2, 0x2, 0x928, 0x929, 0x3, 0x2, 0x2, 0x2, 0x929, 
       0x92a, 0x3, 0x2, 0x2, 0x2, 0x92a, 0x92b, 0x7, 0x68, 0x2, 0x2, 0x92b, 
       0x92d, 0x7, 0x3b, 0x2, 0x2, 0x92c, 0x92e, 0x5, 0x18e, 0xc8, 0x2, 
       0x92d, 0x92c, 0x3, 0x2, 0x2, 0x2, 0x92d, 0x92e, 0x3, 0x2, 0x2, 0x2, 
       0x92e, 0x92f, 0x3, 0x2, 0x2, 0x2, 0x92f, 0x930, 0x7, 0x3c, 0x2, 0x2, 
       0x930, 0x932, 0x3, 0x2, 0x2, 0x2, 0x931, 0x8ed, 0x3, 0x2, 0x2, 0x2, 
       0x931, 0x8f4, 0x3, 0x2, 0x2, 0x2, 0x931, 0x900, 0x3, 0x2, 0x2, 0x2, 
       0x931, 0x90c, 0x3, 0x2, 0x2, 0x2, 0x931, 0x918, 0x3, 0x2, 0x2, 0x2, 
       0x931, 0x923, 0x3, 0x2, 0x2, 0x2, 0x932, 0x189, 0x3, 0x2, 0x2, 0x2, 
       0x933, 0x935, 0x7, 0x43, 0x2, 0x2, 0x934, 0x936, 0x5, 0x2a, 0x16, 
       0x2, 0x935, 0x934, 0x3, 0x2, 0x2, 0x2, 0x935, 0x936, 0x3, 0x2, 0x2, 
       0x2, 0x936, 0x937, 0x3, 0x2, 0x2, 0x2, 0x937, 0x938, 0x7, 0x68, 0x2, 
       0x2, 0x938, 0x93a, 0x7, 0x3b, 0x2, 0x2, 0x939, 0x93b, 0x5, 0x18e, 
       0xc8, 0x2, 0x93a, 0x939, 0x3, 0x2, 0x2, 0x2, 0x93a, 0x93b, 0x3, 0x2, 
       0x2, 0x2, 0x93b, 0x93c, 0x3, 0x2, 0x2, 0x2, 0x93c, 0x93d, 0x7, 0x3c, 
       0x2, 0x2, 0x93d, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x93e, 0x93f, 0x5, 0x3c, 
       0x1f, 0x2, 0x93f, 0x941, 0x7, 0x3b, 0x2, 0x2, 0x940, 0x942, 0x5, 
       0x18e, 0xc8, 0x2, 0x941, 0x940, 0x3, 0x2, 0x2, 0x2, 0x941, 0x942, 
       0x3, 0x2, 0x2, 0x2, 0x942, 0x943, 0x3, 0x2, 0x2, 0x2, 0x943, 0x944, 
       0x7, 0x3c, 0x2, 0x2, 0x944, 0x977, 0x3, 0x2, 0x2, 0x2, 0x945, 0x946, 
       0x5, 0x36, 0x1c, 0x2, 0x946, 0x948, 0x7, 0x43, 0x2, 0x2, 0x947, 0x949, 
       0x5, 0x2a, 0x16, 0x2, 0x948, 0x947, 0x3, 0x2, 0x2, 0x2, 0x948, 0x949, 
       0x3, 0x2, 0x2, 0x2, 0x949, 0x94a, 0x3, 0x2, 0x2, 0x2, 0x94a, 0x94b, 
       0x7, 0x68, 0x2, 0x2, 0x94b, 0x94d, 0x7, 0x3b, 0x2, 0x2, 0x94c, 0x94e, 
       0x5, 0x18e, 0xc8, 0x2, 0x94d, 0x94c, 0x3, 0x2, 0x2, 0x2, 0x94d, 0x94e, 
       0x3, 0x2, 0x2, 0x2, 0x94e, 0x94f, 0x3, 0x2, 0x2, 0x2, 0x94f, 0x950, 
       0x7, 0x3c, 0x2, 0x2, 0x950, 0x977, 0x3, 0x2, 0x2, 0x2, 0x951, 0x952, 
       0x5, 0x3a, 0x1e, 0x2, 0x952, 0x954, 0x7, 0x43, 0x2, 0x2, 0x953, 0x955, 
       0x5, 0x2a, 0x16, 0x2, 0x954, 0x953, 0x3, 0x2, 0x2, 0x2, 0x954, 0x955, 
       0x3, 0x2, 0x2, 0x2, 0x955, 0x956, 0x3, 0x2, 0x2, 0x2, 0x956, 0x957, 
       0x7, 0x68, 0x2, 0x2, 0x957, 0x959, 0x7, 0x3b, 0x2, 0x2, 0x958, 0x95a, 
       0x5, 0x18e, 0xc8, 0x2, 0x959, 0x958, 0x3, 0x2, 0x2, 0x2, 0x959, 0x95a, 
       0x3, 0x2, 0x2, 0x2, 0x95a, 0x95b, 0x3, 0x2, 0x2, 0x2, 0x95b, 0x95c, 
       0x7, 0x3c, 0x2, 0x2, 0x95c, 0x977, 0x3, 0x2, 0x2, 0x2, 0x95d, 0x95e, 
       0x7, 0x2a, 0x2, 0x2, 0x95e, 0x960, 0x7, 0x43, 0x2, 0x2, 0x95f, 0x961, 
       0x5, 0x2a, 0x16, 0x2, 0x960, 0x95f, 0x3, 0x2, 0x2, 0x2, 0x960, 0x961, 
       0x3, 0x2, 0x2, 0x2, 0x961, 0x962, 0x3, 0x2, 0x2, 0x2, 0x962, 0x963, 
       0x7, 0x68, 0x2, 0x2, 0x963, 0x965, 0x7, 0x3b, 0x2, 0x2, 0x964, 0x966, 
       0x5, 0x18e, 0xc8, 0x2, 0x965, 0x964, 0x3, 0x2, 0x2, 0x2, 0x965, 0x966, 
       0x3, 0x2, 0x2, 0x2, 0x966, 0x967, 0x3, 0x2, 0x2, 0x2, 0x967, 0x977, 
       0x7, 0x3c, 0x2, 0x2, 0x968, 0x969, 0x5, 0x36, 0x1c, 0x2, 0x969, 0x96a, 
       0x7, 0x43, 0x2, 0x2, 0x96a, 0x96b, 0x7, 0x2a, 0x2, 0x2, 0x96b, 0x96d, 
       0x7, 0x43, 0x2, 0x2, 0x96c, 0x96e, 0x5, 0x2a, 0x16, 0x2, 0x96d, 0x96c, 
       0x3, 0x2, 0x2, 0x2, 0x96d, 0x96e, 0x3, 0x2, 0x2, 
  };
  static const uint16_t serializedATNSegment1[] = {
    0x2, 0x96e, 0x96f, 0x3, 0x2, 0x2, 0x2, 0x96f, 0x970, 0x7, 0x68, 0x2, 
       0x2, 0x970, 0x972, 0x7, 0x3b, 0x2, 0x2, 0x971, 0x973, 0x5, 0x18e, 
       0xc8, 0x2, 0x972, 0x971, 0x3, 0x2, 0x2, 0x2, 0x972, 0x973, 0x3, 0x2, 
       0x2, 0x2, 0x973, 0x974, 0x3, 0x2, 0x2, 0x2, 0x974, 0x975, 0x7, 0x3c, 
       0x2, 0x2, 0x975, 0x977, 0x3, 0x2, 0x2, 0x2, 0x976, 0x93e, 0x3, 0x2, 
       0x2, 0x2, 0x976, 0x945, 0x3, 0x2, 0x2, 0x2, 0x976, 0x951, 0x3, 0x2, 
       0x2, 0x2, 0x976, 0x95d, 0x3, 0x2, 0x2, 0x2, 0x976, 0x968, 0x3, 0x2, 
       0x2, 0x2, 0x977, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x978, 0x97d, 0x5, 0x19e, 
       0xd0, 0x2, 0x979, 0x97a, 0x7, 0x42, 0x2, 0x2, 0x97a, 0x97c, 0x5, 
       0x19e, 0xd0, 0x2, 0x97b, 0x979, 0x3, 0x2, 0x2, 0x2, 0x97c, 0x97f, 
       0x3, 0x2, 0x2, 0x2, 0x97d, 0x97b, 0x3, 0x2, 0x2, 0x2, 0x97d, 0x97e, 
       0x3, 0x2, 0x2, 0x2, 0x97e, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x97f, 0x97d, 
       0x3, 0x2, 0x2, 0x2, 0x980, 0x981, 0x5, 0x3a, 0x1e, 0x2, 0x981, 0x983, 
       0x7, 0x5c, 0x2, 0x2, 0x982, 0x984, 0x5, 0x2a, 0x16, 0x2, 0x983, 0x982, 
       0x3, 0x2, 0x2, 0x2, 0x983, 0x984, 0x3, 0x2, 0x2, 0x2, 0x984, 0x985, 
       0x3, 0x2, 0x2, 0x2, 0x985, 0x986, 0x7, 0x68, 0x2, 0x2, 0x986, 0x9b0, 
       0x3, 0x2, 0x2, 0x2, 0x987, 0x988, 0x5, 0xc, 0x7, 0x2, 0x988, 0x98a, 
       0x7, 0x5c, 0x2, 0x2, 0x989, 0x98b, 0x5, 0x2a, 0x16, 0x2, 0x98a, 0x989, 
       0x3, 0x2, 0x2, 0x2, 0x98a, 0x98b, 0x3, 0x2, 0x2, 0x2, 0x98b, 0x98c, 
       0x3, 0x2, 0x2, 0x2, 0x98c, 0x98d, 0x7, 0x68, 0x2, 0x2, 0x98d, 0x9b0, 
       0x3, 0x2, 0x2, 0x2, 0x98e, 0x98f, 0x5, 0x160, 0xb1, 0x2, 0x98f, 0x991, 
       0x7, 0x5c, 0x2, 0x2, 0x990, 0x992, 0x5, 0x2a, 0x16, 0x2, 0x991, 0x990, 
       0x3, 0x2, 0x2, 0x2, 0x991, 0x992, 0x3, 0x2, 0x2, 0x2, 0x992, 0x993, 
       0x3, 0x2, 0x2, 0x2, 0x993, 0x994, 0x7, 0x68, 0x2, 0x2, 0x994, 0x9b0, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x996, 0x7, 0x2a, 0x2, 0x2, 0x996, 0x998, 
       0x7, 0x5c, 0x2, 0x2, 0x997, 0x999, 0x5, 0x2a, 0x16, 0x2, 0x998, 0x997, 
       0x3, 0x2, 0x2, 0x2, 0x998, 0x999, 0x3, 0x2, 0x2, 0x2, 0x999, 0x99a, 
       0x3, 0x2, 0x2, 0x2, 0x99a, 0x9b0, 0x7, 0x68, 0x2, 0x2, 0x99b, 0x99c, 
       0x5, 0x36, 0x1c, 0x2, 0x99c, 0x99d, 0x7, 0x43, 0x2, 0x2, 0x99d, 0x99e, 
       0x7, 0x2a, 0x2, 0x2, 0x99e, 0x9a0, 0x7, 0x5c, 0x2, 0x2, 0x99f, 0x9a1, 
       0x5, 0x2a, 0x16, 0x2, 0x9a0, 0x99f, 0x3, 0x2, 0x2, 0x2, 0x9a0, 0x9a1, 
       0x3, 0x2, 0x2, 0x2, 0x9a1, 0x9a2, 0x3, 0x2, 0x2, 0x2, 0x9a2, 0x9a3, 
       0x7, 0x68, 0x2, 0x2, 0x9a3, 0x9b0, 0x3, 0x2, 0x2, 0x2, 0x9a4, 0x9a5, 
       0x5, 0x10, 0x9, 0x2, 0x9a5, 0x9a7, 0x7, 0x5c, 0x2, 0x2, 0x9a6, 0x9a8, 
       0x5, 0x2a, 0x16, 0x2, 0x9a7, 0x9a6, 0x3, 0x2, 0x2, 0x2, 0x9a7, 0x9a8, 
       0x3, 0x2, 0x2, 0x2, 0x9a8, 0x9a9, 0x3, 0x2, 0x2, 0x2, 0x9a9, 0x9aa, 
       0x7, 0x21, 0x2, 0x2, 0x9aa, 0x9b0, 0x3, 0x2, 0x2, 0x2, 0x9ab, 0x9ac, 
       0x5, 0x1e, 0x10, 0x2, 0x9ac, 0x9ad, 0x7, 0x5c, 0x2, 0x2, 0x9ad, 0x9ae, 
       0x7, 0x21, 0x2, 0x2, 0x9ae, 0x9b0, 0x3, 0x2, 0x2, 0x2, 0x9af, 0x980, 
       0x3, 0x2, 0x2, 0x2, 0x9af, 0x987, 0x3, 0x2, 0x2, 0x2, 0x9af, 0x98e, 
       0x3, 0x2, 0x2, 0x2, 0x9af, 0x995, 0x3, 0x2, 0x2, 0x2, 0x9af, 0x99b, 
       0x3, 0x2, 0x2, 0x2, 0x9af, 0x9a4, 0x3, 0x2, 0x2, 0x2, 0x9af, 0x9ab, 
       0x3, 0x2, 0x2, 0x2, 0x9b0, 0x191, 0x3, 0x2, 0x2, 0x2, 0x9b1, 0x9b3, 
       0x7, 0x5c, 0x2, 0x2, 0x9b2, 0x9b4, 0x5, 0x2a, 0x16, 0x2, 0x9b3, 0x9b2, 
       0x3, 0x2, 0x2, 0x2, 0x9b3, 0x9b4, 0x3, 0x2, 0x2, 0x2, 0x9b4, 0x9b5, 
       0x3, 0x2, 0x2, 0x2, 0x9b5, 0x9b6, 0x7, 0x68, 0x2, 0x2, 0x9b6, 0x193, 
       0x3, 0x2, 0x2, 0x2, 0x9b7, 0x9b8, 0x5, 0x3a, 0x1e, 0x2, 0x9b8, 0x9ba, 
       0x7, 0x5c, 0x2, 0x2, 0x9b9, 0x9bb, 0x5, 0x2a, 0x16, 0x2, 0x9ba, 0x9b9, 
       0x3, 0x2, 0x2, 0x2, 0x9ba, 0x9bb, 0x3, 0x2, 0x2, 0x2, 0x9bb, 0x9bc, 
       0x3, 0x2, 0x2, 0x2, 0x9bc, 0x9bd, 0x7, 0x68, 0x2, 0x2, 0x9bd, 0x9e0, 
       0x3, 0x2, 0x2, 0x2, 0x9be, 0x9bf, 0x5, 0xc, 0x7, 0x2, 0x9bf, 0x9c1, 
       0x7, 0x5c, 0x2, 0x2, 0x9c0, 0x9c2, 0x5, 0x2a, 0x16, 0x2, 0x9c1, 0x9c0, 
       0x3, 0x2, 0x2, 0x2, 0x9c1, 0x9c2, 0x3, 0x2, 0x2, 0x2, 0x9c2, 0x9c3, 
       0x3, 0x2, 0x2, 0x2, 0x9c3, 0x9c4, 0x7, 0x68, 0x2, 0x2, 0x9c4, 0x9e0, 
       0x3, 0x2, 0x2, 0x2, 0x9c5, 0x9c6, 0x7, 0x2a, 0x2, 0x2, 0x9c6, 0x9c8, 
       0x7, 0x5c, 0x2, 0x2, 0x9c7, 0x9c9, 0x5, 0x2a, 0x16, 0x2, 0x9c8, 0x9c7, 
       0x3, 0x2, 0x2, 0x2, 0x9c8, 0x9c9, 0x3, 0x2, 0x2, 0x2, 0x9c9, 0x9ca, 
       0x3, 0x2, 0x2, 0x2, 0x9ca, 0x9e0, 0x7, 0x68, 0x2, 0x2, 0x9cb, 0x9cc, 
       0x5, 0x36, 0x1c, 0x2, 0x9cc, 0x9cd, 0x7, 0x43, 0x2, 0x2, 0x9cd, 0x9ce, 
       0x7, 0x2a, 0x2, 0x2, 0x9ce, 0x9d0, 0x7, 0x5c, 0x2, 0x2, 0x9cf, 0x9d1, 
       0x5, 0x2a, 0x16, 0x2, 0x9d0, 0x9cf, 0x3, 0x2, 0x2, 0x2, 0x9d0, 0x9d1, 
       0x3, 0x2, 0x2, 0x2, 0x9d1, 0x9d2, 0x3, 0x2, 0x2, 0x2, 0x9d2, 0x9d3, 
       0x7, 0x68, 0x2, 0x2, 0x9d3, 0x9e0, 0x3, 0x2, 0x2, 0x2, 0x9d4, 0x9d5, 
       0x5, 0x10, 0x9, 0x2, 0x9d5, 0x9d7, 0x7, 0x5c, 0x2, 0x2, 0x9d6, 0x9d8, 
       0x5, 0x2a, 0x16, 0x2, 0x9d7, 0x9d6, 0x3, 0x2, 0x2, 0x2, 0x9d7, 0x9d8, 
       0x3, 0x2, 0x2, 0x2, 0x9d8, 0x9d9, 0x3, 0x2, 0x2, 0x2, 0x9d9, 0x9da, 
       0x7, 0x21, 0x2, 0x2, 0x9da, 0x9e0, 0x3, 0x2, 0x2, 0x2, 0x9db, 0x9dc, 
       0x5, 0x1e, 0x10, 0x2, 0x9dc, 0x9dd, 0x7, 0x5c, 0x2, 0x2, 0x9dd, 0x9de, 
       0x7, 0x21, 0x2, 0x2, 0x9de, 0x9e0, 0x3, 0x2, 0x2, 0x2, 0x9df, 0x9b7, 
       0x3, 0x2, 0x2, 0x2, 0x9df, 0x9be, 0x3, 0x2, 0x2, 0x2, 0x9df, 0x9c5, 
       0x3, 0x2, 0x2, 0x2, 0x9df, 0x9cb, 0x3, 0x2, 0x2, 0x2, 0x9df, 0x9d4, 
       0x3, 0x2, 0x2, 0x2, 0x9df, 0x9db, 0x3, 0x2, 0x2, 0x2, 0x9e0, 0x195, 
       0x3, 0x2, 0x2, 0x2, 0x9e1, 0x9e2, 0x7, 0x21, 0x2, 0x2, 0x9e2, 0x9e3, 
       0x5, 0x4, 0x3, 0x2, 0x9e3, 0x9e5, 0x5, 0x198, 0xcd, 0x2, 0x9e4, 0x9e6, 
       0x5, 0x20, 0x11, 0x2, 0x9e5, 0x9e4, 0x3, 0x2, 0x2, 0x2, 0x9e5, 0x9e6, 
       0x3, 0x2, 0x2, 0x2, 0x9e6, 0x9f8, 0x3, 0x2, 0x2, 0x2, 0x9e7, 0x9e8, 
       0x7, 0x21, 0x2, 0x2, 0x9e8, 0x9e9, 0x5, 0xe, 0x8, 0x2, 0x9e9, 0x9eb, 
       0x5, 0x198, 0xcd, 0x2, 0x9ea, 0x9ec, 0x5, 0x20, 0x11, 0x2, 0x9eb, 
       0x9ea, 0x3, 0x2, 0x2, 0x2, 0x9eb, 0x9ec, 0x3, 0x2, 0x2, 0x2, 0x9ec, 
       0x9f8, 0x3, 0x2, 0x2, 0x2, 0x9ed, 0x9ee, 0x7, 0x21, 0x2, 0x2, 0x9ee, 
       0x9ef, 0x5, 0x4, 0x3, 0x2, 0x9ef, 0x9f0, 0x5, 0x20, 0x11, 0x2, 0x9f0, 
       0x9f1, 0x5, 0xf8, 0x7d, 0x2, 0x9f1, 0x9f8, 0x3, 0x2, 0x2, 0x2, 0x9f2, 
       0x9f3, 0x7, 0x21, 0x2, 0x2, 0x9f3, 0x9f4, 0x5, 0xe, 0x8, 0x2, 0x9f4, 
       0x9f5, 0x5, 0x20, 0x11, 0x2, 0x9f5, 0x9f6, 0x5, 0xf8, 0x7d, 0x2, 
       0x9f6, 0x9f8, 0x3, 0x2, 0x2, 0x2, 0x9f7, 0x9e1, 0x3, 0x2, 0x2, 0x2, 
       0x9f7, 0x9e7, 0x3, 0x2, 0x2, 0x2, 0x9f7, 0x9ed, 0x3, 0x2, 0x2, 0x2, 
       0x9f7, 0x9f2, 0x3, 0x2, 0x2, 0x2, 0x9f8, 0x197, 0x3, 0x2, 0x2, 0x2, 
       0x9f9, 0x9fd, 0x5, 0x19a, 0xce, 0x2, 0x9fa, 0x9fc, 0x5, 0x19a, 0xce, 
       0x2, 0x9fb, 0x9fa, 0x3, 0x2, 0x2, 0x2, 0x9fc, 0x9ff, 0x3, 0x2, 0x2, 
       0x2, 0x9fd, 0x9fb, 0x3, 0x2, 0x2, 0x2, 0x9fd, 0x9fe, 0x3, 0x2, 0x2, 
       0x2, 0x9fe, 0x199, 0x3, 0x2, 0x2, 0x2, 0x9ff, 0x9fd, 0x3, 0x2, 0x2, 
       0x2, 0xa00, 0xa02, 0x5, 0xe6, 0x74, 0x2, 0xa01, 0xa00, 0x3, 0x2, 
       0x2, 0x2, 0xa02, 0xa05, 0x3, 0x2, 0x2, 0x2, 0xa03, 0xa01, 0x3, 0x2, 
       0x2, 0x2, 0xa03, 0xa04, 0x3, 0x2, 0x2, 0x2, 0xa04, 0xa06, 0x3, 0x2, 
       0x2, 0x2, 0xa05, 0xa03, 0x3, 0x2, 0x2, 0x2, 0xa06, 0xa07, 0x7, 0x3f, 
       0x2, 0x2, 0xa07, 0xa08, 0x5, 0x19e, 0xd0, 0x2, 0xa08, 0xa09, 0x7, 
       0x40, 0x2, 0x2, 0xa09, 0x19b, 0x3, 0x2, 0x2, 0x2, 0xa0a, 0xa0b, 0x5, 
       0x19e, 0xd0, 0x2, 0xa0b, 0x19d, 0x3, 0x2, 0x2, 0x2, 0xa0c, 0xa0f, 
       0x5, 0x1a0, 0xd1, 0x2, 0xa0d, 0xa0f, 0x5, 0x1a8, 0xd5, 0x2, 0xa0e, 
       0xa0c, 0x3, 0x2, 0x2, 0x2, 0xa0e, 0xa0d, 0x3, 0x2, 0x2, 0x2, 0xa0f, 
       0x19f, 0x3, 0x2, 0x2, 0x2, 0xa10, 0xa11, 0x5, 0x1a2, 0xd2, 0x2, 0xa11, 
       0xa12, 0x7, 0x5b, 0x2, 0x2, 0xa12, 0xa13, 0x5, 0x1a6, 0xd4, 0x2, 
       0xa13, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0xa14, 0xa1f, 0x7, 0x68, 0x2, 0x2, 
       0xa15, 0xa17, 0x7, 0x3b, 0x2, 0x2, 0xa16, 0xa18, 0x5, 0x96, 0x4c, 
       0x2, 0xa17, 0xa16, 0x3, 0x2, 0x2, 0x2, 0xa17, 0xa18, 0x3, 0x2, 0x2, 
       0x2, 0xa18, 0xa19, 0x3, 0x2, 0x2, 0x2, 0xa19, 0xa1f, 0x7, 0x3c, 0x2, 
       0x2, 0xa1a, 0xa1b, 0x7, 0x3b, 0x2, 0x2, 0xa1b, 0xa1c, 0x5, 0x1a4, 
       0xd3, 0x2, 0xa1c, 0xa1d, 0x7, 0x3c, 0x2, 0x2, 0xa1d, 0xa1f, 0x3, 
       0x2, 0x2, 0x2, 0xa1e, 0xa14, 0x3, 0x2, 0x2, 0x2, 0xa1e, 0xa15, 0x3, 
       0x2, 0x2, 0x2, 0xa1e, 0xa1a, 0x3, 0x2, 0x2, 0x2, 0xa1f, 0x1a3, 0x3, 
       0x2, 0x2, 0x2, 0xa20, 0xa25, 0x7, 0x68, 0x2, 0x2, 0xa21, 0xa22, 0x7, 
       0x42, 0x2, 0x2, 0xa22, 0xa24, 0x7, 0x68, 0x2, 0x2, 0xa23, 0xa21, 
       0x3, 0x2, 0x2, 0x2, 0xa24, 0xa27, 0x3, 0x2, 0x2, 0x2, 0xa25, 0xa23, 
       0x3, 0x2, 0x2, 0x2, 0xa25, 0xa26, 0x3, 0x2, 0x2, 0x2, 0xa26, 0x1a5, 
       0x3, 0x2, 0x2, 0x2, 0xa27, 0xa25, 0x3, 0x2, 0x2, 0x2, 0xa28, 0xa2b, 
       0x5, 0x19e, 0xd0, 0x2, 0xa29, 0xa2b, 0x5, 0xfc, 0x7f, 0x2, 0xa2a, 
       0xa28, 0x3, 0x2, 0x2, 0x2, 0xa2a, 0xa29, 0x3, 0x2, 0x2, 0x2, 0xa2b, 
       0x1a7, 0x3, 0x2, 0x2, 0x2, 0xa2c, 0xa2f, 0x5, 0x1b0, 0xd9, 0x2, 0xa2d, 
       0xa2f, 0x5, 0x1aa, 0xd6, 0x2, 0xa2e, 0xa2c, 0x3, 0x2, 0x2, 0x2, 0xa2e, 
       0xa2d, 0x3, 0x2, 0x2, 0x2, 0xa2f, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0xa30, 
       0xa31, 0x5, 0x1ac, 0xd7, 0x2, 0xa31, 0xa32, 0x5, 0x1ae, 0xd8, 0x2, 
       0xa32, 0xa33, 0x5, 0x19e, 0xd0, 0x2, 0xa33, 0x1ab, 0x3, 0x2, 0x2, 
       0x2, 0xa34, 0xa38, 0x5, 0x3a, 0x1e, 0x2, 0xa35, 0xa38, 0x5, 0x17c, 
       0xbf, 0x2, 0xa36, 0xa38, 0x5, 0x182, 0xc2, 0x2, 0xa37, 0xa34, 0x3, 
       0x2, 0x2, 0x2, 0xa37, 0xa35, 0x3, 0x2, 0x2, 0x2, 0xa37, 0xa36, 0x3, 
       0x2, 0x2, 0x2, 0xa38, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0xa39, 0xa3a, 0x9, 
       0x5, 0x2, 0x2, 0xa3a, 0x1af, 0x3, 0x2, 0x2, 0x2, 0xa3b, 0xa43, 0x5, 
       0x1b2, 0xda, 0x2, 0xa3c, 0xa3d, 0x5, 0x1b2, 0xda, 0x2, 0xa3d, 0xa3e, 
       0x7, 0x49, 0x2, 0x2, 0xa3e, 0xa3f, 0x5, 0x19e, 0xd0, 0x2, 0xa3f, 
       0xa40, 0x7, 0x4a, 0x2, 0x2, 0xa40, 0xa41, 0x5, 0x1b0, 0xd9, 0x2, 
       0xa41, 0xa43, 0x3, 0x2, 0x2, 0x2, 0xa42, 0xa3b, 0x3, 0x2, 0x2, 0x2, 
       0xa42, 0xa3c, 0x3, 0x2, 0x2, 0x2, 0xa43, 0x1b1, 0x3, 0x2, 0x2, 0x2, 
       0xa44, 0xa45, 0x8, 0xda, 0x1, 0x2, 0xa45, 0xa46, 0x5, 0x1b4, 0xdb, 
       0x2, 0xa46, 0xa4c, 0x3, 0x2, 0x2, 0x2, 0xa47, 0xa48, 0xc, 0x3, 0x2, 
       0x2, 0xa48, 0xa49, 0x7, 0x50, 0x2, 0x2, 0xa49, 0xa4b, 0x5, 0x1b4, 
       0xdb, 0x2, 0xa4a, 0xa47, 0x3, 0x2, 0x2, 0x2, 0xa4b, 0xa4e, 0x3, 0x2, 
       0x2, 0x2, 0xa4c, 0xa4a, 0x3, 0x2, 0x2, 0x2, 0xa4c, 0xa4d, 0x3, 0x2, 
       0x2, 0x2, 0xa4d, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0xa4e, 0xa4c, 0x3, 0x2, 
       0x2, 0x2, 0xa4f, 0xa50, 0x8, 0xdb, 0x1, 0x2, 0xa50, 0xa51, 0x5, 0x1b6, 
       0xdc, 0x2, 0xa51, 0xa57, 0x3, 0x2, 0x2, 0x2, 0xa52, 0xa53, 0xc, 0x3, 
       0x2, 0x2, 0xa53, 0xa54, 0x7, 0x4f, 0x2, 0x2, 0xa54, 0xa56, 0x5, 0x1b6, 
       0xdc, 0x2, 0xa55, 0xa52, 0x3, 0x2, 0x2, 0x2, 0xa56, 0xa59, 0x3, 0x2, 
       0x2, 0x2, 0xa57, 0xa55, 0x3, 0x2, 0x2, 0x2, 0xa57, 0xa58, 0x3, 0x2, 
       0x2, 0x2, 0xa58, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0xa59, 0xa57, 0x3, 0x2, 
       0x2, 0x2, 0xa5a, 0xa5b, 0x8, 0xdc, 0x1, 0x2, 0xa5b, 0xa5c, 0x5, 0x1b8, 
       0xdd, 0x2, 0xa5c, 0xa62, 0x3, 0x2, 0x2, 0x2, 0xa5d, 0xa5e, 0xc, 0x3, 
       0x2, 0x2, 0xa5e, 0xa5f, 0x7, 0x58, 0x2, 0x2, 0xa5f, 0xa61, 0x5, 0x1b8, 
       0xdd, 0x2, 0xa60, 0xa5d, 0x3, 0x2, 0x2, 0x2, 0xa61, 0xa64, 0x3, 0x2, 
       0x2, 0x2, 0xa62, 0xa60, 0x3, 0x2, 0x2, 0x2, 0xa62, 0xa63, 0x3, 0x2, 
       0x2, 0x2, 0xa63, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0xa64, 0xa62, 0x3, 0x2, 
       0x2, 0x2, 0xa65, 0xa66, 0x8, 0xdd, 0x1, 0x2, 0xa66, 0xa67, 0x5, 0x1ba, 
       0xde, 0x2, 0xa67, 0xa6d, 0x3, 0x2, 0x2, 0x2, 0xa68, 0xa69, 0xc, 0x3, 
       0x2, 0x2, 0xa69, 0xa6a, 0x7, 0x59, 0x2, 0x2, 0xa6a, 0xa6c, 0x5, 0x1ba, 
       0xde, 0x2, 0xa6b, 0xa68, 0x3, 0x2, 0x2, 0x2, 0xa6c, 0xa6f, 0x3, 0x2, 
       0x2, 0x2, 0xa6d, 0xa6b, 0x3, 0x2, 0x2, 0x2, 0xa6d, 0xa6e, 0x3, 0x2, 
       0x2, 0x2, 0xa6e, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0xa6f, 0xa6d, 0x3, 0x2, 
       0x2, 0x2, 0xa70, 0xa71, 0x8, 0xde, 0x1, 0x2, 0xa71, 0xa72, 0x5, 0x1bc, 
       0xdf, 0x2, 0xa72, 0xa78, 0x3, 0x2, 0x2, 0x2, 0xa73, 0xa74, 0xc, 0x3, 
       0x2, 0x2, 0xa74, 0xa75, 0x7, 0x57, 0x2, 0x2, 0xa75, 0xa77, 0x5, 0x1bc, 
       0xdf, 0x2, 0xa76, 0xa73, 0x3, 0x2, 0x2, 0x2, 0xa77, 0xa7a, 0x3, 0x2, 
       0x2, 0x2, 0xa78, 0xa76, 0x3, 0x2, 0x2, 0x2, 0xa78, 0xa79, 0x3, 0x2, 
       0x2, 0x2, 0xa79, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0xa7a, 0xa78, 0x3, 0x2, 
       0x2, 0x2, 0xa7b, 0xa7c, 0x8, 0xdf, 0x1, 0x2, 0xa7c, 0xa7d, 0x5, 0x1be, 
       0xe0, 0x2, 0xa7d, 0xa86, 0x3, 0x2, 0x2, 0x2, 0xa7e, 0xa7f, 0xc, 0x4, 
       0x2, 0x2, 0xa7f, 0xa80, 0x7, 0x4b, 0x2, 0x2, 0xa80, 0xa85, 0x5, 0x1be, 
       0xe0, 0x2, 0xa81, 0xa82, 0xc, 0x3, 0x2, 0x2, 0xa82, 0xa83, 0x7, 0x4e, 
       0x2, 0x2, 0xa83, 0xa85, 0x5, 0x1be, 0xe0, 0x2, 0xa84, 0xa7e, 0x3, 
       0x2, 0x2, 0x2, 0xa84, 0xa81, 0x3, 0x2, 0x2, 0x2, 0xa85, 0xa88, 0x3, 
       0x2, 0x2, 0x2, 0xa86, 0xa84, 0x3, 0x2, 0x2, 0x2, 0xa86, 0xa87, 0x3, 
       0x2, 0x2, 0x2, 0xa87, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0xa88, 0xa86, 0x3, 
       0x2, 0x2, 0x2, 0xa89, 0xa8a, 0x8, 0xe0, 0x1, 0x2, 0xa8a, 0xa8b, 0x5, 
       0x1c0, 0xe1, 0x2, 0xa8b, 0xa9d, 0x3, 0x2, 0x2, 0x2, 0xa8c, 0xa8d, 
       0xc, 0x7, 0x2, 0x2, 0xa8d, 0xa8e, 0x7, 0x46, 0x2, 0x2, 0xa8e, 0xa9c, 
       0x5, 0x1c0, 0xe1, 0x2, 0xa8f, 0xa90, 0xc, 0x6, 0x2, 0x2, 0xa90, 0xa91, 
       0x7, 0x45, 0x2, 0x2, 0xa91, 0xa9c, 0x5, 0x1c0, 0xe1, 0x2, 0xa92, 
       0xa93, 0xc, 0x5, 0x2, 0x2, 0xa93, 0xa94, 0x7, 0x4c, 0x2, 0x2, 0xa94, 
       0xa9c, 0x5, 0x1c0, 0xe1, 0x2, 0xa95, 0xa96, 0xc, 0x4, 0x2, 0x2, 0xa96, 
       0xa97, 0x7, 0x4d, 0x2, 0x2, 0xa97, 0xa9c, 0x5, 0x1c0, 0xe1, 0x2, 
       0xa98, 0xa99, 0xc, 0x3, 0x2, 0x2, 0xa99, 0xa9a, 0x7, 0x1c, 0x2, 0x2, 
       0xa9a, 0xa9c, 0x5, 0xc, 0x7, 0x2, 0xa9b, 0xa8c, 0x3, 0x2, 0x2, 0x2, 
       0xa9b, 0xa8f, 0x3, 0x2, 0x2, 0x2, 0xa9b, 0xa92, 0x3, 0x2, 0x2, 0x2, 
       0xa9b, 0xa95, 0x3, 0x2, 0x2, 0x2, 0xa9b, 0xa98, 0x3, 0x2, 0x2, 0x2, 
       0xa9c, 0xa9f, 0x3, 0x2, 0x2, 0x2, 0xa9d, 0xa9b, 0x3, 0x2, 0x2, 0x2, 
       0xa9d, 0xa9e, 0x3, 0x2, 0x2, 0x2, 0xa9e, 0x1bf, 0x3, 0x2, 0x2, 0x2, 
       0xa9f, 0xa9d, 0x3, 0x2, 0x2, 0x2, 0xaa0, 0xaa1, 0x8, 0xe1, 0x1, 0x2, 
       0xaa1, 0xaa2, 0x5, 0x1c2, 0xe2, 0x2, 0xaa2, 0xab2, 0x3, 0x2, 0x2, 
       0x2, 0xaa3, 0xaa4, 0xc, 0x5, 0x2, 0x2, 0xaa4, 0xaa5, 0x7, 0x46, 0x2, 
       0x2, 0xaa5, 0xaa6, 0x7, 0x46, 0x2, 0x2, 0xaa6, 0xab1, 0x5, 0x1c2, 
       0xe2, 0x2, 0xaa7, 0xaa8, 0xc, 0x4, 0x2, 0x2, 0xaa8, 0xaa9, 0x7, 0x45, 
       0x2, 0x2, 0xaa9, 0xaaa, 0x7, 0x45, 0x2, 0x2, 0xaaa, 0xab1, 0x5, 0x1c2, 
       0xe2, 0x2, 0xaab, 0xaac, 0xc, 0x3, 0x2, 0x2, 0xaac, 0xaad, 0x7, 0x45, 
       0x2, 0x2, 0xaad, 0xaae, 0x7, 0x45, 0x2, 0x2, 0xaae, 0xaaf, 0x7, 0x45, 
       0x2, 0x2, 0xaaf, 0xab1, 0x5, 0x1c2, 0xe2, 0x2, 0xab0, 0xaa3, 0x3, 
       0x2, 0x2, 0x2, 0xab0, 0xaa7, 0x3, 0x2, 0x2, 0x2, 0xab0, 0xaab, 0x3, 
       0x2, 0x2, 0x2, 0xab1, 0xab4, 0x3, 0x2, 0x2, 0x2, 0xab2, 0xab0, 0x3, 
       0x2, 0x2, 0x2, 0xab2, 0xab3, 0x3, 0x2, 0x2, 0x2, 0xab3, 0x1c1, 0x3, 
       0x2, 0x2, 0x2, 0xab4, 0xab2, 0x3, 0x2, 0x2, 0x2, 0xab5, 0xab6, 0x8, 
       0xe2, 0x1, 0x2, 0xab6, 0xab7, 0x5, 0x1c4, 0xe3, 0x2, 0xab7, 0xac0, 
       0x3, 0x2, 0x2, 0x2, 0xab8, 0xab9, 0xc, 0x4, 0x2, 0x2, 0xab9, 0xaba, 
       0x7, 0x53, 0x2, 0x2, 0xaba, 0xabf, 0x5, 0x1c4, 0xe3, 0x2, 0xabb, 
       0xabc, 0xc, 0x3, 0x2, 0x2, 0xabc, 0xabd, 0x7, 0x54, 0x2, 0x2, 0xabd, 
       0xabf, 0x5, 0x1c4, 0xe3, 0x2, 0xabe, 0xab8, 0x3, 0x2, 0x2, 0x2, 0xabe, 
       0xabb, 0x3, 0x2, 0x2, 0x2, 0xabf, 0xac2, 0x3, 0x2, 0x2, 0x2, 0xac0, 
       0xabe, 0x3, 0x2, 0x2, 0x2, 0xac0, 0xac1, 0x3, 0x2, 0x2, 0x2, 0xac1, 
       0x1c3, 0x3, 0x2, 0x2, 0x2, 0xac2, 0xac0, 0x3, 0x2, 0x2, 0x2, 0xac3, 
       0xac4, 0x8, 0xe3, 0x1, 0x2, 0xac4, 0xac5, 0x5, 0x1c6, 0xe4, 0x2, 
       0xac5, 0xad1, 0x3, 0x2, 0x2, 0x2, 0xac6, 0xac7, 0xc, 0x5, 0x2, 0x2, 
       0xac7, 0xac8, 0x7, 0x55, 0x2, 0x2, 0xac8, 0xad0, 0x5, 0x1c6, 0xe4, 
       0x2, 0xac9, 0xaca, 0xc, 0x4, 0x2, 0x2, 0xaca, 0xacb, 0x7, 0x56, 0x2, 
       0x2, 0xacb, 0xad0, 0x5, 0x1c6, 0xe4, 0x2, 0xacc, 0xacd, 0xc, 0x3, 
       0x2, 0x2, 0xacd, 0xace, 0x7, 0x5a, 0x2, 0x2, 0xace, 0xad0, 0x5, 0x1c6, 
       0xe4, 0x2, 0xacf, 0xac6, 0x3, 0x2, 0x2, 0x2, 0xacf, 0xac9, 0x3, 0x2, 
       0x2, 0x2, 0xacf, 0xacc, 0x3, 0x2, 0x2, 0x2, 0xad0, 0xad3, 0x3, 0x2, 
       0x2, 0x2, 0xad1, 0xacf, 0x3, 0x2, 0x2, 0x2, 0xad1, 0xad2, 0x3, 0x2, 
       0x2, 0x2, 0xad2, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0xad3, 0xad1, 0x3, 0x2, 
       0x2, 0x2, 0xad4, 0xadc, 0x5, 0x1c8, 0xe5, 0x2, 0xad5, 0xadc, 0x5, 
       0x1ca, 0xe6, 0x2, 0xad6, 0xad7, 0x7, 0x53, 0x2, 0x2, 0xad7, 0xadc, 
       0x5, 0x1c6, 0xe4, 0x2, 0xad8, 0xad9, 0x7, 0x54, 0x2, 0x2, 0xad9, 
       0xadc, 0x5, 0x1c6, 0xe4, 0x2, 0xada, 0xadc, 0x5, 0x1cc, 0xe7, 0x2, 
       0xadb, 0xad4, 0x3, 0x2, 0x2, 0x2, 0xadb, 0xad5, 0x3, 0x2, 0x2, 0x2, 
       0xadb, 0xad6, 0x3, 0x2, 0x2, 0x2, 0xadb, 0xad8, 0x3, 0x2, 0x2, 0x2, 
       0xadb, 0xada, 0x3, 0x2, 0x2, 0x2, 0xadc, 0x1c7, 0x3, 0x2, 0x2, 0x2, 
       0xadd, 0xade, 0x7, 0x51, 0x2, 0x2, 0xade, 0xadf, 0x5, 0x1c6, 0xe4, 
       0x2, 0xadf, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0xae0, 0xae1, 0x7, 0x52, 0x2, 
       0x2, 0xae1, 0xae2, 0x5, 0x1c6, 0xe4, 0x2, 0xae2, 0x1cb, 0x3, 0x2, 
       0x2, 0x2, 0xae3, 0xaea, 0x5, 0x1ce, 0xe8, 0x2, 0xae4, 0xae5, 0x7, 
       0x48, 0x2, 0x2, 0xae5, 0xaea, 0x5, 0x1c6, 0xe4, 0x2, 0xae6, 0xae7, 
       0x7, 0x47, 0x2, 0x2, 0xae7, 0xaea, 0x5, 0x1c6, 0xe4, 0x2, 0xae8, 
       0xaea, 0x5, 0x1d8, 0xed, 0x2, 0xae9, 0xae3, 0x3, 0x2, 0x2, 0x2, 0xae9, 
       0xae4, 0x3, 0x2, 0x2, 0x2, 0xae9, 0xae6, 0x3, 0x2, 0x2, 0x2, 0xae9, 
       0xae8, 0x3, 0x2, 0x2, 0x2, 0xaea, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0xaeb, 
       0xaee, 0x5, 0x160, 0xb1, 0x2, 0xaec, 0xaee, 0x5, 0x3a, 0x1e, 0x2, 
       0xaed, 0xaeb, 0x3, 0x2, 0x2, 0x2, 0xaed, 0xaec, 0x3, 0x2, 0x2, 0x2, 
       0xaee, 0xaf3, 0x3, 0x2, 0x2, 0x2, 0xaef, 0xaf2, 0x5, 0x1d2, 0xea, 
       0x2, 0xaf0, 0xaf2, 0x5, 0x1d6, 0xec, 0x2, 0xaf1, 0xaef, 0x3, 0x2, 
       0x2, 0x2, 0xaf1, 0xaf0, 0x3, 0x2, 0x2, 0x2, 0xaf2, 0xaf5, 0x3, 0x2, 
       0x2, 0x2, 0xaf3, 0xaf1, 0x3, 0x2, 0x2, 0x2, 0xaf3, 0xaf4, 0x3, 0x2, 
       0x2, 0x2, 0xaf4, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0xaf5, 0xaf3, 0x3, 0x2, 
       0x2, 0x2, 0xaf6, 0xaf7, 0x5, 0x1ce, 0xe8, 0x2, 0xaf7, 0xaf8, 0x7, 
       0x51, 0x2, 0x2, 0xaf8, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0xaf9, 0xafa, 0x7, 
       0x51, 0x2, 0x2, 0xafa, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0xafb, 0xafc, 0x5, 
       0x1ce, 0xe8, 0x2, 0xafc, 0xafd, 0x7, 0x52, 0x2, 0x2, 0xafd, 0x1d5, 
       0x3, 0x2, 0x2, 0x2, 0xafe, 0xaff, 0x7, 0x52, 0x2, 0x2, 0xaff, 0x1d7, 
       0x3, 0x2, 0x2, 0x2, 0xb00, 0xb01, 0x7, 0x3b, 0x2, 0x2, 0xb01, 0xb02, 
       0x5, 0x4, 0x3, 0x2, 0xb02, 0xb03, 0x7, 0x3c, 0x2, 0x2, 0xb03, 0xb04, 
       0x5, 0x1c6, 0xe4, 0x2, 0xb04, 0xb1c, 0x3, 0x2, 0x2, 0x2, 0xb05, 0xb06, 
       0x7, 0x3b, 0x2, 0x2, 0xb06, 0xb0a, 0x5, 0xc, 0x7, 0x2, 0xb07, 0xb09, 
       0x5, 0x28, 0x15, 0x2, 0xb08, 0xb07, 0x3, 0x2, 0x2, 0x2, 0xb09, 0xb0c, 
       0x3, 0x2, 0x2, 0x2, 0xb0a, 0xb08, 0x3, 0x2, 0x2, 0x2, 0xb0a, 0xb0b, 
       0x3, 0x2, 0x2, 0x2, 0xb0b, 0xb0d, 0x3, 0x2, 0x2, 0x2, 0xb0c, 0xb0a, 
       0x3, 0x2, 0x2, 0x2, 0xb0d, 0xb0e, 0x7, 0x3c, 0x2, 0x2, 0xb0e, 0xb0f, 
       0x5, 0x1cc, 0xe7, 0x2, 0xb0f, 0xb1c, 0x3, 0x2, 0x2, 0x2, 0xb10, 0xb11, 
       0x7, 0x3b, 0x2, 0x2, 0xb11, 0xb15, 0x5, 0xc, 0x7, 0x2, 0xb12, 0xb14, 
       0x5, 0x28, 0x15, 0x2, 0xb13, 0xb12, 0x3, 0x2, 0x2, 0x2, 0xb14, 0xb17, 
       0x3, 0x2, 0x2, 0x2, 0xb15, 0xb13, 0x3, 0x2, 0x2, 0x2, 0xb15, 0xb16, 
       0x3, 0x2, 0x2, 0x2, 0xb16, 0xb18, 0x3, 0x2, 0x2, 0x2, 0xb17, 0xb15, 
       0x3, 0x2, 0x2, 0x2, 0xb18, 0xb19, 0x7, 0x3c, 0x2, 0x2, 0xb19, 0xb1a, 
       0x5, 0x1a0, 0xd1, 0x2, 0xb1a, 0xb1c, 0x3, 0x2, 0x2, 0x2, 0xb1b, 0xb00, 
       0x3, 0x2, 0x2, 0x2, 0xb1b, 0xb05, 0x3, 0x2, 0x2, 0x2, 0xb1b, 0xb10, 
       0x3, 0x2, 0x2, 0x2, 0xb1c, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x144, 0x1df, 
       0x1e6, 0x1ea, 0x1ee, 0x1f7, 0x1fb, 0x1ff, 0x201, 0x207, 0x20c, 0x213, 
       0x218, 0x21a, 0x220, 0x225, 0x22a, 0x22f, 0x23a, 0x248, 0x24d, 0x255, 
       0x25c, 0x262, 0x267, 0x272, 0x275, 0x283, 0x288, 0x28d, 0x292, 0x298, 
       0x2a2, 0x2aa, 0x2b4, 0x2bc, 0x2c8, 0x2cc, 0x2d1, 0x2d7, 0x2df, 0x2ec, 
       0x309, 0x30d, 0x312, 0x318, 0x31b, 0x31e, 0x32a, 0x335, 0x343, 0x34a, 
       0x353, 0x35a, 0x35f, 0x36e, 0x375, 0x37b, 0x37f, 0x383, 0x387, 0x38b, 
       0x390, 0x394, 0x398, 0x39a, 0x39f, 0x3a6, 0x3ab, 0x3ad, 0x3b3, 0x3b8, 
       0x3bc, 0x3cf, 0x3d4, 0x3e4, 0x3e9, 0x3ef, 0x3f5, 0x3f7, 0x3fb, 0x400, 
       0x404, 0x40c, 0x413, 0x41b, 0x41e, 0x423, 0x42b, 0x430, 0x437, 0x43e, 
       0x443, 0x449, 0x455, 0x45a, 0x45e, 0x468, 0x46d, 0x475, 0x478, 0x47d, 
       0x485, 0x488, 0x48d, 0x492, 0x497, 0x49c, 0x4a3, 0x4a8, 0x4b0, 0x4b5, 
       0x4ba, 0x4bf, 0x4c5, 0x4cb, 0x4ce, 0x4d1, 0x4da, 0x4e0, 0x4e6, 0x4e9, 
       0x4ec, 0x4f4, 0x4f9, 0x4fe, 0x504, 0x507, 0x512, 0x51b, 0x525, 0x52a, 
       0x535, 0x53a, 0x546, 0x54b, 0x557, 0x561, 0x566, 0x56e, 0x571, 0x578, 
       0x580, 0x586, 0x58f, 0x599, 0x59d, 0x5a0, 0x5a9, 0x5b7, 0x5ba, 0x5c3, 
       0x5c8, 0x5cf, 0x5d4, 0x5dc, 0x5e8, 0x5ef, 0x5fd, 0x613, 0x635, 0x641, 
       0x647, 0x653, 0x660, 0x67a, 0x67e, 0x683, 0x687, 0x68b, 0x693, 0x697, 
       0x69b, 0x6a2, 0x6ab, 0x6b3, 0x6c2, 0x6ce, 0x6d4, 0x6da, 0x6ef, 0x6f4, 
       0x6fa, 0x706, 0x711, 0x71b, 0x71e, 0x723, 0x72c, 0x732, 0x73c, 0x741, 
       0x74a, 0x761, 0x76b, 0x781, 0x788, 0x790, 0x798, 0x7a3, 0x7ba, 0x7c4, 
       0x7cf, 0x7e5, 0x7e9, 0x7ee, 0x7f6, 0x7fc, 0x800, 0x804, 0x808, 0x80e, 
       0x813, 0x818, 0x81c, 0x820, 0x826, 0x82b, 0x830, 0x834, 0x838, 0x83a, 
       0x83f, 0x844, 0x849, 0x84d, 0x851, 0x855, 0x85a, 0x862, 0x868, 0x86c, 
       0x870, 0x874, 0x87a, 0x87f, 0x884, 0x888, 0x88c, 0x88e, 0x893, 0x8a2, 
       0x8b0, 0x8bc, 0x8c5, 0x8d4, 0x8e1, 0x8ea, 0x8f0, 0x8f7, 0x8fc, 0x903, 
       0x908, 0x90f, 0x914, 0x91b, 0x920, 0x928, 0x92d, 0x931, 0x935, 0x93a, 
       0x941, 0x948, 0x94d, 0x954, 0x959, 0x960, 0x965, 0x96d, 0x972, 0x976, 
       0x97d, 0x983, 0x98a, 0x991, 0x998, 0x9a0, 0x9a7, 0x9af, 0x9b3, 0x9ba, 
       0x9c1, 0x9c8, 0x9d0, 0x9d7, 0x9df, 0x9e5, 0x9eb, 0x9f7, 0x9fd, 0xa03, 
       0xa0e, 0xa17, 0xa1e, 0xa25, 0xa2a, 0xa2e, 0xa37, 0xa42, 0xa4c, 0xa57, 
       0xa62, 0xa6d, 0xa78, 0xa84, 0xa86, 0xa9b, 0xa9d, 0xab0, 0xab2, 0xabe, 
       0xac0, 0xacf, 0xad1, 0xadb, 0xae9, 0xaed, 0xaf1, 0xaf3, 0xb0a, 0xb15, 
       0xb1b, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));
  _serializedATN.insert(_serializedATN.end(), serializedATNSegment1,
    serializedATNSegment1 + sizeof(serializedATNSegment1) / sizeof(serializedATNSegment1[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

Java8Parser::Initializer Java8Parser::_init;
