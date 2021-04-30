
// Generated from grammar/Java8Parser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "Java8Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Java8Parser.
 */
class  Java8ParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterLiteral(Java8Parser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(Java8Parser::LiteralContext *ctx) = 0;

  virtual void enterPrimitiveType(Java8Parser::PrimitiveTypeContext *ctx) = 0;
  virtual void exitPrimitiveType(Java8Parser::PrimitiveTypeContext *ctx) = 0;

  virtual void enterNumericType(Java8Parser::NumericTypeContext *ctx) = 0;
  virtual void exitNumericType(Java8Parser::NumericTypeContext *ctx) = 0;

  virtual void enterIntegralType(Java8Parser::IntegralTypeContext *ctx) = 0;
  virtual void exitIntegralType(Java8Parser::IntegralTypeContext *ctx) = 0;

  virtual void enterFloatingPointType(Java8Parser::FloatingPointTypeContext *ctx) = 0;
  virtual void exitFloatingPointType(Java8Parser::FloatingPointTypeContext *ctx) = 0;

  virtual void enterReferenceType(Java8Parser::ReferenceTypeContext *ctx) = 0;
  virtual void exitReferenceType(Java8Parser::ReferenceTypeContext *ctx) = 0;

  virtual void enterClassOrInterfaceType(Java8Parser::ClassOrInterfaceTypeContext *ctx) = 0;
  virtual void exitClassOrInterfaceType(Java8Parser::ClassOrInterfaceTypeContext *ctx) = 0;

  virtual void enterClassType(Java8Parser::ClassTypeContext *ctx) = 0;
  virtual void exitClassType(Java8Parser::ClassTypeContext *ctx) = 0;

  virtual void enterClassType_lf_classOrInterfaceType(Java8Parser::ClassType_lf_classOrInterfaceTypeContext *ctx) = 0;
  virtual void exitClassType_lf_classOrInterfaceType(Java8Parser::ClassType_lf_classOrInterfaceTypeContext *ctx) = 0;

  virtual void enterClassType_lfno_classOrInterfaceType(Java8Parser::ClassType_lfno_classOrInterfaceTypeContext *ctx) = 0;
  virtual void exitClassType_lfno_classOrInterfaceType(Java8Parser::ClassType_lfno_classOrInterfaceTypeContext *ctx) = 0;

  virtual void enterInterfaceType(Java8Parser::InterfaceTypeContext *ctx) = 0;
  virtual void exitInterfaceType(Java8Parser::InterfaceTypeContext *ctx) = 0;

  virtual void enterInterfaceType_lf_classOrInterfaceType(Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext *ctx) = 0;
  virtual void exitInterfaceType_lf_classOrInterfaceType(Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext *ctx) = 0;

  virtual void enterInterfaceType_lfno_classOrInterfaceType(Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext *ctx) = 0;
  virtual void exitInterfaceType_lfno_classOrInterfaceType(Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext *ctx) = 0;

  virtual void enterTypeVariable(Java8Parser::TypeVariableContext *ctx) = 0;
  virtual void exitTypeVariable(Java8Parser::TypeVariableContext *ctx) = 0;

  virtual void enterArrayType(Java8Parser::ArrayTypeContext *ctx) = 0;
  virtual void exitArrayType(Java8Parser::ArrayTypeContext *ctx) = 0;

  virtual void enterDims(Java8Parser::DimsContext *ctx) = 0;
  virtual void exitDims(Java8Parser::DimsContext *ctx) = 0;

  virtual void enterTypeParameter(Java8Parser::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(Java8Parser::TypeParameterContext *ctx) = 0;

  virtual void enterTypeParameterModifier(Java8Parser::TypeParameterModifierContext *ctx) = 0;
  virtual void exitTypeParameterModifier(Java8Parser::TypeParameterModifierContext *ctx) = 0;

  virtual void enterTypeBound(Java8Parser::TypeBoundContext *ctx) = 0;
  virtual void exitTypeBound(Java8Parser::TypeBoundContext *ctx) = 0;

  virtual void enterAdditionalBound(Java8Parser::AdditionalBoundContext *ctx) = 0;
  virtual void exitAdditionalBound(Java8Parser::AdditionalBoundContext *ctx) = 0;

  virtual void enterTypeArguments(Java8Parser::TypeArgumentsContext *ctx) = 0;
  virtual void exitTypeArguments(Java8Parser::TypeArgumentsContext *ctx) = 0;

  virtual void enterTypeArgumentList(Java8Parser::TypeArgumentListContext *ctx) = 0;
  virtual void exitTypeArgumentList(Java8Parser::TypeArgumentListContext *ctx) = 0;

  virtual void enterTypeArgument(Java8Parser::TypeArgumentContext *ctx) = 0;
  virtual void exitTypeArgument(Java8Parser::TypeArgumentContext *ctx) = 0;

  virtual void enterWildcard(Java8Parser::WildcardContext *ctx) = 0;
  virtual void exitWildcard(Java8Parser::WildcardContext *ctx) = 0;

  virtual void enterWildcardBounds(Java8Parser::WildcardBoundsContext *ctx) = 0;
  virtual void exitWildcardBounds(Java8Parser::WildcardBoundsContext *ctx) = 0;

  virtual void enterPackageName(Java8Parser::PackageNameContext *ctx) = 0;
  virtual void exitPackageName(Java8Parser::PackageNameContext *ctx) = 0;

  virtual void enterTypeName(Java8Parser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(Java8Parser::TypeNameContext *ctx) = 0;

  virtual void enterPackageOrTypeName(Java8Parser::PackageOrTypeNameContext *ctx) = 0;
  virtual void exitPackageOrTypeName(Java8Parser::PackageOrTypeNameContext *ctx) = 0;

  virtual void enterExpressionName(Java8Parser::ExpressionNameContext *ctx) = 0;
  virtual void exitExpressionName(Java8Parser::ExpressionNameContext *ctx) = 0;

  virtual void enterMethodName(Java8Parser::MethodNameContext *ctx) = 0;
  virtual void exitMethodName(Java8Parser::MethodNameContext *ctx) = 0;

  virtual void enterAmbiguousName(Java8Parser::AmbiguousNameContext *ctx) = 0;
  virtual void exitAmbiguousName(Java8Parser::AmbiguousNameContext *ctx) = 0;

  virtual void enterCompilationUnit(Java8Parser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(Java8Parser::CompilationUnitContext *ctx) = 0;

  virtual void enterPackageDeclaration(Java8Parser::PackageDeclarationContext *ctx) = 0;
  virtual void exitPackageDeclaration(Java8Parser::PackageDeclarationContext *ctx) = 0;

  virtual void enterPackageModifier(Java8Parser::PackageModifierContext *ctx) = 0;
  virtual void exitPackageModifier(Java8Parser::PackageModifierContext *ctx) = 0;

  virtual void enterImportDeclaration(Java8Parser::ImportDeclarationContext *ctx) = 0;
  virtual void exitImportDeclaration(Java8Parser::ImportDeclarationContext *ctx) = 0;

  virtual void enterSingleTypeImportDeclaration(Java8Parser::SingleTypeImportDeclarationContext *ctx) = 0;
  virtual void exitSingleTypeImportDeclaration(Java8Parser::SingleTypeImportDeclarationContext *ctx) = 0;

  virtual void enterTypeImportOnDemandDeclaration(Java8Parser::TypeImportOnDemandDeclarationContext *ctx) = 0;
  virtual void exitTypeImportOnDemandDeclaration(Java8Parser::TypeImportOnDemandDeclarationContext *ctx) = 0;

  virtual void enterSingleStaticImportDeclaration(Java8Parser::SingleStaticImportDeclarationContext *ctx) = 0;
  virtual void exitSingleStaticImportDeclaration(Java8Parser::SingleStaticImportDeclarationContext *ctx) = 0;

  virtual void enterStaticImportOnDemandDeclaration(Java8Parser::StaticImportOnDemandDeclarationContext *ctx) = 0;
  virtual void exitStaticImportOnDemandDeclaration(Java8Parser::StaticImportOnDemandDeclarationContext *ctx) = 0;

  virtual void enterTypeDeclaration(Java8Parser::TypeDeclarationContext *ctx) = 0;
  virtual void exitTypeDeclaration(Java8Parser::TypeDeclarationContext *ctx) = 0;

  virtual void enterClassDeclaration(Java8Parser::ClassDeclarationContext *ctx) = 0;
  virtual void exitClassDeclaration(Java8Parser::ClassDeclarationContext *ctx) = 0;

  virtual void enterNormalClassDeclaration(Java8Parser::NormalClassDeclarationContext *ctx) = 0;
  virtual void exitNormalClassDeclaration(Java8Parser::NormalClassDeclarationContext *ctx) = 0;

  virtual void enterClassModifier(Java8Parser::ClassModifierContext *ctx) = 0;
  virtual void exitClassModifier(Java8Parser::ClassModifierContext *ctx) = 0;

  virtual void enterTypeParameters(Java8Parser::TypeParametersContext *ctx) = 0;
  virtual void exitTypeParameters(Java8Parser::TypeParametersContext *ctx) = 0;

  virtual void enterTypeParameterList(Java8Parser::TypeParameterListContext *ctx) = 0;
  virtual void exitTypeParameterList(Java8Parser::TypeParameterListContext *ctx) = 0;

  virtual void enterSuperclass(Java8Parser::SuperclassContext *ctx) = 0;
  virtual void exitSuperclass(Java8Parser::SuperclassContext *ctx) = 0;

  virtual void enterSuperinterfaces(Java8Parser::SuperinterfacesContext *ctx) = 0;
  virtual void exitSuperinterfaces(Java8Parser::SuperinterfacesContext *ctx) = 0;

  virtual void enterInterfaceTypeList(Java8Parser::InterfaceTypeListContext *ctx) = 0;
  virtual void exitInterfaceTypeList(Java8Parser::InterfaceTypeListContext *ctx) = 0;

  virtual void enterClassBody(Java8Parser::ClassBodyContext *ctx) = 0;
  virtual void exitClassBody(Java8Parser::ClassBodyContext *ctx) = 0;

  virtual void enterClassBodyDeclaration(Java8Parser::ClassBodyDeclarationContext *ctx) = 0;
  virtual void exitClassBodyDeclaration(Java8Parser::ClassBodyDeclarationContext *ctx) = 0;

  virtual void enterClassMemberDeclaration(Java8Parser::ClassMemberDeclarationContext *ctx) = 0;
  virtual void exitClassMemberDeclaration(Java8Parser::ClassMemberDeclarationContext *ctx) = 0;

  virtual void enterFieldDeclaration(Java8Parser::FieldDeclarationContext *ctx) = 0;
  virtual void exitFieldDeclaration(Java8Parser::FieldDeclarationContext *ctx) = 0;

  virtual void enterFieldModifier(Java8Parser::FieldModifierContext *ctx) = 0;
  virtual void exitFieldModifier(Java8Parser::FieldModifierContext *ctx) = 0;

  virtual void enterVariableDeclaratorList(Java8Parser::VariableDeclaratorListContext *ctx) = 0;
  virtual void exitVariableDeclaratorList(Java8Parser::VariableDeclaratorListContext *ctx) = 0;

  virtual void enterVariableDeclarator(Java8Parser::VariableDeclaratorContext *ctx) = 0;
  virtual void exitVariableDeclarator(Java8Parser::VariableDeclaratorContext *ctx) = 0;

  virtual void enterVariableDeclaratorId(Java8Parser::VariableDeclaratorIdContext *ctx) = 0;
  virtual void exitVariableDeclaratorId(Java8Parser::VariableDeclaratorIdContext *ctx) = 0;

  virtual void enterVariableInitializer(Java8Parser::VariableInitializerContext *ctx) = 0;
  virtual void exitVariableInitializer(Java8Parser::VariableInitializerContext *ctx) = 0;

  virtual void enterUnannType(Java8Parser::UnannTypeContext *ctx) = 0;
  virtual void exitUnannType(Java8Parser::UnannTypeContext *ctx) = 0;

  virtual void enterUnannPrimitiveType(Java8Parser::UnannPrimitiveTypeContext *ctx) = 0;
  virtual void exitUnannPrimitiveType(Java8Parser::UnannPrimitiveTypeContext *ctx) = 0;

  virtual void enterUnannReferenceType(Java8Parser::UnannReferenceTypeContext *ctx) = 0;
  virtual void exitUnannReferenceType(Java8Parser::UnannReferenceTypeContext *ctx) = 0;

  virtual void enterUnannClassOrInterfaceType(Java8Parser::UnannClassOrInterfaceTypeContext *ctx) = 0;
  virtual void exitUnannClassOrInterfaceType(Java8Parser::UnannClassOrInterfaceTypeContext *ctx) = 0;

  virtual void enterUnannClassType(Java8Parser::UnannClassTypeContext *ctx) = 0;
  virtual void exitUnannClassType(Java8Parser::UnannClassTypeContext *ctx) = 0;

  virtual void enterUnannClassType_lf_unannClassOrInterfaceType(Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext *ctx) = 0;
  virtual void exitUnannClassType_lf_unannClassOrInterfaceType(Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext *ctx) = 0;

  virtual void enterUnannClassType_lfno_unannClassOrInterfaceType(Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext *ctx) = 0;
  virtual void exitUnannClassType_lfno_unannClassOrInterfaceType(Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext *ctx) = 0;

  virtual void enterUnannInterfaceType(Java8Parser::UnannInterfaceTypeContext *ctx) = 0;
  virtual void exitUnannInterfaceType(Java8Parser::UnannInterfaceTypeContext *ctx) = 0;

  virtual void enterUnannInterfaceType_lf_unannClassOrInterfaceType(Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext *ctx) = 0;
  virtual void exitUnannInterfaceType_lf_unannClassOrInterfaceType(Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext *ctx) = 0;

  virtual void enterUnannInterfaceType_lfno_unannClassOrInterfaceType(Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext *ctx) = 0;
  virtual void exitUnannInterfaceType_lfno_unannClassOrInterfaceType(Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext *ctx) = 0;

  virtual void enterUnannTypeVariable(Java8Parser::UnannTypeVariableContext *ctx) = 0;
  virtual void exitUnannTypeVariable(Java8Parser::UnannTypeVariableContext *ctx) = 0;

  virtual void enterUnannArrayType(Java8Parser::UnannArrayTypeContext *ctx) = 0;
  virtual void exitUnannArrayType(Java8Parser::UnannArrayTypeContext *ctx) = 0;

  virtual void enterMethodDeclaration(Java8Parser::MethodDeclarationContext *ctx) = 0;
  virtual void exitMethodDeclaration(Java8Parser::MethodDeclarationContext *ctx) = 0;

  virtual void enterMethodModifier(Java8Parser::MethodModifierContext *ctx) = 0;
  virtual void exitMethodModifier(Java8Parser::MethodModifierContext *ctx) = 0;

  virtual void enterMethodHeader(Java8Parser::MethodHeaderContext *ctx) = 0;
  virtual void exitMethodHeader(Java8Parser::MethodHeaderContext *ctx) = 0;

  virtual void enterResult(Java8Parser::ResultContext *ctx) = 0;
  virtual void exitResult(Java8Parser::ResultContext *ctx) = 0;

  virtual void enterMethodDeclarator(Java8Parser::MethodDeclaratorContext *ctx) = 0;
  virtual void exitMethodDeclarator(Java8Parser::MethodDeclaratorContext *ctx) = 0;

  virtual void enterFormalParameterList(Java8Parser::FormalParameterListContext *ctx) = 0;
  virtual void exitFormalParameterList(Java8Parser::FormalParameterListContext *ctx) = 0;

  virtual void enterFormalParameters(Java8Parser::FormalParametersContext *ctx) = 0;
  virtual void exitFormalParameters(Java8Parser::FormalParametersContext *ctx) = 0;

  virtual void enterFormalParameter(Java8Parser::FormalParameterContext *ctx) = 0;
  virtual void exitFormalParameter(Java8Parser::FormalParameterContext *ctx) = 0;

  virtual void enterVariableModifier(Java8Parser::VariableModifierContext *ctx) = 0;
  virtual void exitVariableModifier(Java8Parser::VariableModifierContext *ctx) = 0;

  virtual void enterLastFormalParameter(Java8Parser::LastFormalParameterContext *ctx) = 0;
  virtual void exitLastFormalParameter(Java8Parser::LastFormalParameterContext *ctx) = 0;

  virtual void enterReceiverParameter(Java8Parser::ReceiverParameterContext *ctx) = 0;
  virtual void exitReceiverParameter(Java8Parser::ReceiverParameterContext *ctx) = 0;

  virtual void enterThrows_(Java8Parser::Throws_Context *ctx) = 0;
  virtual void exitThrows_(Java8Parser::Throws_Context *ctx) = 0;

  virtual void enterExceptionTypeList(Java8Parser::ExceptionTypeListContext *ctx) = 0;
  virtual void exitExceptionTypeList(Java8Parser::ExceptionTypeListContext *ctx) = 0;

  virtual void enterExceptionType(Java8Parser::ExceptionTypeContext *ctx) = 0;
  virtual void exitExceptionType(Java8Parser::ExceptionTypeContext *ctx) = 0;

  virtual void enterMethodBody(Java8Parser::MethodBodyContext *ctx) = 0;
  virtual void exitMethodBody(Java8Parser::MethodBodyContext *ctx) = 0;

  virtual void enterInstanceInitializer(Java8Parser::InstanceInitializerContext *ctx) = 0;
  virtual void exitInstanceInitializer(Java8Parser::InstanceInitializerContext *ctx) = 0;

  virtual void enterStaticInitializer(Java8Parser::StaticInitializerContext *ctx) = 0;
  virtual void exitStaticInitializer(Java8Parser::StaticInitializerContext *ctx) = 0;

  virtual void enterConstructorDeclaration(Java8Parser::ConstructorDeclarationContext *ctx) = 0;
  virtual void exitConstructorDeclaration(Java8Parser::ConstructorDeclarationContext *ctx) = 0;

  virtual void enterConstructorModifier(Java8Parser::ConstructorModifierContext *ctx) = 0;
  virtual void exitConstructorModifier(Java8Parser::ConstructorModifierContext *ctx) = 0;

  virtual void enterConstructorDeclarator(Java8Parser::ConstructorDeclaratorContext *ctx) = 0;
  virtual void exitConstructorDeclarator(Java8Parser::ConstructorDeclaratorContext *ctx) = 0;

  virtual void enterSimpleTypeName(Java8Parser::SimpleTypeNameContext *ctx) = 0;
  virtual void exitSimpleTypeName(Java8Parser::SimpleTypeNameContext *ctx) = 0;

  virtual void enterConstructorBody(Java8Parser::ConstructorBodyContext *ctx) = 0;
  virtual void exitConstructorBody(Java8Parser::ConstructorBodyContext *ctx) = 0;

  virtual void enterExplicitConstructorInvocation(Java8Parser::ExplicitConstructorInvocationContext *ctx) = 0;
  virtual void exitExplicitConstructorInvocation(Java8Parser::ExplicitConstructorInvocationContext *ctx) = 0;

  virtual void enterEnumDeclaration(Java8Parser::EnumDeclarationContext *ctx) = 0;
  virtual void exitEnumDeclaration(Java8Parser::EnumDeclarationContext *ctx) = 0;

  virtual void enterEnumBody(Java8Parser::EnumBodyContext *ctx) = 0;
  virtual void exitEnumBody(Java8Parser::EnumBodyContext *ctx) = 0;

  virtual void enterEnumConstantList(Java8Parser::EnumConstantListContext *ctx) = 0;
  virtual void exitEnumConstantList(Java8Parser::EnumConstantListContext *ctx) = 0;

  virtual void enterEnumConstant(Java8Parser::EnumConstantContext *ctx) = 0;
  virtual void exitEnumConstant(Java8Parser::EnumConstantContext *ctx) = 0;

  virtual void enterEnumConstantModifier(Java8Parser::EnumConstantModifierContext *ctx) = 0;
  virtual void exitEnumConstantModifier(Java8Parser::EnumConstantModifierContext *ctx) = 0;

  virtual void enterEnumBodyDeclarations(Java8Parser::EnumBodyDeclarationsContext *ctx) = 0;
  virtual void exitEnumBodyDeclarations(Java8Parser::EnumBodyDeclarationsContext *ctx) = 0;

  virtual void enterInterfaceDeclaration(Java8Parser::InterfaceDeclarationContext *ctx) = 0;
  virtual void exitInterfaceDeclaration(Java8Parser::InterfaceDeclarationContext *ctx) = 0;

  virtual void enterNormalInterfaceDeclaration(Java8Parser::NormalInterfaceDeclarationContext *ctx) = 0;
  virtual void exitNormalInterfaceDeclaration(Java8Parser::NormalInterfaceDeclarationContext *ctx) = 0;

  virtual void enterInterfaceModifier(Java8Parser::InterfaceModifierContext *ctx) = 0;
  virtual void exitInterfaceModifier(Java8Parser::InterfaceModifierContext *ctx) = 0;

  virtual void enterExtendsInterfaces(Java8Parser::ExtendsInterfacesContext *ctx) = 0;
  virtual void exitExtendsInterfaces(Java8Parser::ExtendsInterfacesContext *ctx) = 0;

  virtual void enterInterfaceBody(Java8Parser::InterfaceBodyContext *ctx) = 0;
  virtual void exitInterfaceBody(Java8Parser::InterfaceBodyContext *ctx) = 0;

  virtual void enterInterfaceMemberDeclaration(Java8Parser::InterfaceMemberDeclarationContext *ctx) = 0;
  virtual void exitInterfaceMemberDeclaration(Java8Parser::InterfaceMemberDeclarationContext *ctx) = 0;

  virtual void enterConstantDeclaration(Java8Parser::ConstantDeclarationContext *ctx) = 0;
  virtual void exitConstantDeclaration(Java8Parser::ConstantDeclarationContext *ctx) = 0;

  virtual void enterConstantModifier(Java8Parser::ConstantModifierContext *ctx) = 0;
  virtual void exitConstantModifier(Java8Parser::ConstantModifierContext *ctx) = 0;

  virtual void enterInterfaceMethodDeclaration(Java8Parser::InterfaceMethodDeclarationContext *ctx) = 0;
  virtual void exitInterfaceMethodDeclaration(Java8Parser::InterfaceMethodDeclarationContext *ctx) = 0;

  virtual void enterInterfaceMethodModifier(Java8Parser::InterfaceMethodModifierContext *ctx) = 0;
  virtual void exitInterfaceMethodModifier(Java8Parser::InterfaceMethodModifierContext *ctx) = 0;

  virtual void enterAnnotationTypeDeclaration(Java8Parser::AnnotationTypeDeclarationContext *ctx) = 0;
  virtual void exitAnnotationTypeDeclaration(Java8Parser::AnnotationTypeDeclarationContext *ctx) = 0;

  virtual void enterAnnotationTypeBody(Java8Parser::AnnotationTypeBodyContext *ctx) = 0;
  virtual void exitAnnotationTypeBody(Java8Parser::AnnotationTypeBodyContext *ctx) = 0;

  virtual void enterAnnotationTypeMemberDeclaration(Java8Parser::AnnotationTypeMemberDeclarationContext *ctx) = 0;
  virtual void exitAnnotationTypeMemberDeclaration(Java8Parser::AnnotationTypeMemberDeclarationContext *ctx) = 0;

  virtual void enterAnnotationTypeElementDeclaration(Java8Parser::AnnotationTypeElementDeclarationContext *ctx) = 0;
  virtual void exitAnnotationTypeElementDeclaration(Java8Parser::AnnotationTypeElementDeclarationContext *ctx) = 0;

  virtual void enterAnnotationTypeElementModifier(Java8Parser::AnnotationTypeElementModifierContext *ctx) = 0;
  virtual void exitAnnotationTypeElementModifier(Java8Parser::AnnotationTypeElementModifierContext *ctx) = 0;

  virtual void enterDefaultValue(Java8Parser::DefaultValueContext *ctx) = 0;
  virtual void exitDefaultValue(Java8Parser::DefaultValueContext *ctx) = 0;

  virtual void enterAnnotation(Java8Parser::AnnotationContext *ctx) = 0;
  virtual void exitAnnotation(Java8Parser::AnnotationContext *ctx) = 0;

  virtual void enterNormalAnnotation(Java8Parser::NormalAnnotationContext *ctx) = 0;
  virtual void exitNormalAnnotation(Java8Parser::NormalAnnotationContext *ctx) = 0;

  virtual void enterElementValuePairList(Java8Parser::ElementValuePairListContext *ctx) = 0;
  virtual void exitElementValuePairList(Java8Parser::ElementValuePairListContext *ctx) = 0;

  virtual void enterElementValuePair(Java8Parser::ElementValuePairContext *ctx) = 0;
  virtual void exitElementValuePair(Java8Parser::ElementValuePairContext *ctx) = 0;

  virtual void enterElementValue(Java8Parser::ElementValueContext *ctx) = 0;
  virtual void exitElementValue(Java8Parser::ElementValueContext *ctx) = 0;

  virtual void enterElementValueArrayInitializer(Java8Parser::ElementValueArrayInitializerContext *ctx) = 0;
  virtual void exitElementValueArrayInitializer(Java8Parser::ElementValueArrayInitializerContext *ctx) = 0;

  virtual void enterElementValueList(Java8Parser::ElementValueListContext *ctx) = 0;
  virtual void exitElementValueList(Java8Parser::ElementValueListContext *ctx) = 0;

  virtual void enterMarkerAnnotation(Java8Parser::MarkerAnnotationContext *ctx) = 0;
  virtual void exitMarkerAnnotation(Java8Parser::MarkerAnnotationContext *ctx) = 0;

  virtual void enterSingleElementAnnotation(Java8Parser::SingleElementAnnotationContext *ctx) = 0;
  virtual void exitSingleElementAnnotation(Java8Parser::SingleElementAnnotationContext *ctx) = 0;

  virtual void enterArrayInitializer(Java8Parser::ArrayInitializerContext *ctx) = 0;
  virtual void exitArrayInitializer(Java8Parser::ArrayInitializerContext *ctx) = 0;

  virtual void enterVariableInitializerList(Java8Parser::VariableInitializerListContext *ctx) = 0;
  virtual void exitVariableInitializerList(Java8Parser::VariableInitializerListContext *ctx) = 0;

  virtual void enterBlock(Java8Parser::BlockContext *ctx) = 0;
  virtual void exitBlock(Java8Parser::BlockContext *ctx) = 0;

  virtual void enterBlockStatements(Java8Parser::BlockStatementsContext *ctx) = 0;
  virtual void exitBlockStatements(Java8Parser::BlockStatementsContext *ctx) = 0;

  virtual void enterBlockStatement(Java8Parser::BlockStatementContext *ctx) = 0;
  virtual void exitBlockStatement(Java8Parser::BlockStatementContext *ctx) = 0;

  virtual void enterLocalVariableDeclarationStatement(Java8Parser::LocalVariableDeclarationStatementContext *ctx) = 0;
  virtual void exitLocalVariableDeclarationStatement(Java8Parser::LocalVariableDeclarationStatementContext *ctx) = 0;

  virtual void enterLocalVariableDeclaration(Java8Parser::LocalVariableDeclarationContext *ctx) = 0;
  virtual void exitLocalVariableDeclaration(Java8Parser::LocalVariableDeclarationContext *ctx) = 0;

  virtual void enterStatement(Java8Parser::StatementContext *ctx) = 0;
  virtual void exitStatement(Java8Parser::StatementContext *ctx) = 0;

  virtual void enterStatementNoShortIf(Java8Parser::StatementNoShortIfContext *ctx) = 0;
  virtual void exitStatementNoShortIf(Java8Parser::StatementNoShortIfContext *ctx) = 0;

  virtual void enterStatementWithoutTrailingSubstatement(Java8Parser::StatementWithoutTrailingSubstatementContext *ctx) = 0;
  virtual void exitStatementWithoutTrailingSubstatement(Java8Parser::StatementWithoutTrailingSubstatementContext *ctx) = 0;

  virtual void enterEmptyStatement(Java8Parser::EmptyStatementContext *ctx) = 0;
  virtual void exitEmptyStatement(Java8Parser::EmptyStatementContext *ctx) = 0;

  virtual void enterLabeledStatement(Java8Parser::LabeledStatementContext *ctx) = 0;
  virtual void exitLabeledStatement(Java8Parser::LabeledStatementContext *ctx) = 0;

  virtual void enterLabeledStatementNoShortIf(Java8Parser::LabeledStatementNoShortIfContext *ctx) = 0;
  virtual void exitLabeledStatementNoShortIf(Java8Parser::LabeledStatementNoShortIfContext *ctx) = 0;

  virtual void enterExpressionStatement(Java8Parser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(Java8Parser::ExpressionStatementContext *ctx) = 0;

  virtual void enterStatementExpression(Java8Parser::StatementExpressionContext *ctx) = 0;
  virtual void exitStatementExpression(Java8Parser::StatementExpressionContext *ctx) = 0;

  virtual void enterIfThenStatement(Java8Parser::IfThenStatementContext *ctx) = 0;
  virtual void exitIfThenStatement(Java8Parser::IfThenStatementContext *ctx) = 0;

  virtual void enterIfThenElseStatement(Java8Parser::IfThenElseStatementContext *ctx) = 0;
  virtual void exitIfThenElseStatement(Java8Parser::IfThenElseStatementContext *ctx) = 0;

  virtual void enterIfThenElseStatementNoShortIf(Java8Parser::IfThenElseStatementNoShortIfContext *ctx) = 0;
  virtual void exitIfThenElseStatementNoShortIf(Java8Parser::IfThenElseStatementNoShortIfContext *ctx) = 0;

  virtual void enterAssertStatement(Java8Parser::AssertStatementContext *ctx) = 0;
  virtual void exitAssertStatement(Java8Parser::AssertStatementContext *ctx) = 0;

  virtual void enterSwitchStatement(Java8Parser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(Java8Parser::SwitchStatementContext *ctx) = 0;

  virtual void enterSwitchBlock(Java8Parser::SwitchBlockContext *ctx) = 0;
  virtual void exitSwitchBlock(Java8Parser::SwitchBlockContext *ctx) = 0;

  virtual void enterSwitchBlockStatementGroup(Java8Parser::SwitchBlockStatementGroupContext *ctx) = 0;
  virtual void exitSwitchBlockStatementGroup(Java8Parser::SwitchBlockStatementGroupContext *ctx) = 0;

  virtual void enterSwitchLabels(Java8Parser::SwitchLabelsContext *ctx) = 0;
  virtual void exitSwitchLabels(Java8Parser::SwitchLabelsContext *ctx) = 0;

  virtual void enterSwitchLabel(Java8Parser::SwitchLabelContext *ctx) = 0;
  virtual void exitSwitchLabel(Java8Parser::SwitchLabelContext *ctx) = 0;

  virtual void enterEnumConstantName(Java8Parser::EnumConstantNameContext *ctx) = 0;
  virtual void exitEnumConstantName(Java8Parser::EnumConstantNameContext *ctx) = 0;

  virtual void enterWhileStatement(Java8Parser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(Java8Parser::WhileStatementContext *ctx) = 0;

  virtual void enterWhileStatementNoShortIf(Java8Parser::WhileStatementNoShortIfContext *ctx) = 0;
  virtual void exitWhileStatementNoShortIf(Java8Parser::WhileStatementNoShortIfContext *ctx) = 0;

  virtual void enterDoStatement(Java8Parser::DoStatementContext *ctx) = 0;
  virtual void exitDoStatement(Java8Parser::DoStatementContext *ctx) = 0;

  virtual void enterForStatement(Java8Parser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(Java8Parser::ForStatementContext *ctx) = 0;

  virtual void enterForStatementNoShortIf(Java8Parser::ForStatementNoShortIfContext *ctx) = 0;
  virtual void exitForStatementNoShortIf(Java8Parser::ForStatementNoShortIfContext *ctx) = 0;

  virtual void enterBasicForStatement(Java8Parser::BasicForStatementContext *ctx) = 0;
  virtual void exitBasicForStatement(Java8Parser::BasicForStatementContext *ctx) = 0;

  virtual void enterBasicForStatementNoShortIf(Java8Parser::BasicForStatementNoShortIfContext *ctx) = 0;
  virtual void exitBasicForStatementNoShortIf(Java8Parser::BasicForStatementNoShortIfContext *ctx) = 0;

  virtual void enterForInit(Java8Parser::ForInitContext *ctx) = 0;
  virtual void exitForInit(Java8Parser::ForInitContext *ctx) = 0;

  virtual void enterForUpdate(Java8Parser::ForUpdateContext *ctx) = 0;
  virtual void exitForUpdate(Java8Parser::ForUpdateContext *ctx) = 0;

  virtual void enterStatementExpressionList(Java8Parser::StatementExpressionListContext *ctx) = 0;
  virtual void exitStatementExpressionList(Java8Parser::StatementExpressionListContext *ctx) = 0;

  virtual void enterEnhancedForStatement(Java8Parser::EnhancedForStatementContext *ctx) = 0;
  virtual void exitEnhancedForStatement(Java8Parser::EnhancedForStatementContext *ctx) = 0;

  virtual void enterEnhancedForStatementNoShortIf(Java8Parser::EnhancedForStatementNoShortIfContext *ctx) = 0;
  virtual void exitEnhancedForStatementNoShortIf(Java8Parser::EnhancedForStatementNoShortIfContext *ctx) = 0;

  virtual void enterBreakStatement(Java8Parser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(Java8Parser::BreakStatementContext *ctx) = 0;

  virtual void enterContinueStatement(Java8Parser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(Java8Parser::ContinueStatementContext *ctx) = 0;

  virtual void enterReturnStatement(Java8Parser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(Java8Parser::ReturnStatementContext *ctx) = 0;

  virtual void enterThrowStatement(Java8Parser::ThrowStatementContext *ctx) = 0;
  virtual void exitThrowStatement(Java8Parser::ThrowStatementContext *ctx) = 0;

  virtual void enterSynchronizedStatement(Java8Parser::SynchronizedStatementContext *ctx) = 0;
  virtual void exitSynchronizedStatement(Java8Parser::SynchronizedStatementContext *ctx) = 0;

  virtual void enterTryStatement(Java8Parser::TryStatementContext *ctx) = 0;
  virtual void exitTryStatement(Java8Parser::TryStatementContext *ctx) = 0;

  virtual void enterCatches(Java8Parser::CatchesContext *ctx) = 0;
  virtual void exitCatches(Java8Parser::CatchesContext *ctx) = 0;

  virtual void enterCatchClause(Java8Parser::CatchClauseContext *ctx) = 0;
  virtual void exitCatchClause(Java8Parser::CatchClauseContext *ctx) = 0;

  virtual void enterCatchFormalParameter(Java8Parser::CatchFormalParameterContext *ctx) = 0;
  virtual void exitCatchFormalParameter(Java8Parser::CatchFormalParameterContext *ctx) = 0;

  virtual void enterCatchType(Java8Parser::CatchTypeContext *ctx) = 0;
  virtual void exitCatchType(Java8Parser::CatchTypeContext *ctx) = 0;

  virtual void enterFinally_(Java8Parser::Finally_Context *ctx) = 0;
  virtual void exitFinally_(Java8Parser::Finally_Context *ctx) = 0;

  virtual void enterTryWithResourcesStatement(Java8Parser::TryWithResourcesStatementContext *ctx) = 0;
  virtual void exitTryWithResourcesStatement(Java8Parser::TryWithResourcesStatementContext *ctx) = 0;

  virtual void enterResourceSpecification(Java8Parser::ResourceSpecificationContext *ctx) = 0;
  virtual void exitResourceSpecification(Java8Parser::ResourceSpecificationContext *ctx) = 0;

  virtual void enterResourceList(Java8Parser::ResourceListContext *ctx) = 0;
  virtual void exitResourceList(Java8Parser::ResourceListContext *ctx) = 0;

  virtual void enterResource(Java8Parser::ResourceContext *ctx) = 0;
  virtual void exitResource(Java8Parser::ResourceContext *ctx) = 0;

  virtual void enterPrimary(Java8Parser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(Java8Parser::PrimaryContext *ctx) = 0;

  virtual void enterPrimaryNoNewArray(Java8Parser::PrimaryNoNewArrayContext *ctx) = 0;
  virtual void exitPrimaryNoNewArray(Java8Parser::PrimaryNoNewArrayContext *ctx) = 0;

  virtual void enterPrimaryNoNewArray_lf_arrayAccess(Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext *ctx) = 0;
  virtual void exitPrimaryNoNewArray_lf_arrayAccess(Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext *ctx) = 0;

  virtual void enterPrimaryNoNewArray_lfno_arrayAccess(Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext *ctx) = 0;
  virtual void exitPrimaryNoNewArray_lfno_arrayAccess(Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext *ctx) = 0;

  virtual void enterPrimaryNoNewArray_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primaryContext *ctx) = 0;
  virtual void exitPrimaryNoNewArray_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primaryContext *ctx) = 0;

  virtual void enterPrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext *ctx) = 0;
  virtual void exitPrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext *ctx) = 0;

  virtual void enterPrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext *ctx) = 0;
  virtual void exitPrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext *ctx) = 0;

  virtual void enterPrimaryNoNewArray_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primaryContext *ctx) = 0;
  virtual void exitPrimaryNoNewArray_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primaryContext *ctx) = 0;

  virtual void enterPrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext *ctx) = 0;
  virtual void exitPrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext *ctx) = 0;

  virtual void enterPrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext *ctx) = 0;
  virtual void exitPrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext *ctx) = 0;

  virtual void enterClassInstanceCreationExpression(Java8Parser::ClassInstanceCreationExpressionContext *ctx) = 0;
  virtual void exitClassInstanceCreationExpression(Java8Parser::ClassInstanceCreationExpressionContext *ctx) = 0;

  virtual void enterClassInstanceCreationExpression_lf_primary(Java8Parser::ClassInstanceCreationExpression_lf_primaryContext *ctx) = 0;
  virtual void exitClassInstanceCreationExpression_lf_primary(Java8Parser::ClassInstanceCreationExpression_lf_primaryContext *ctx) = 0;

  virtual void enterClassInstanceCreationExpression_lfno_primary(Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext *ctx) = 0;
  virtual void exitClassInstanceCreationExpression_lfno_primary(Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext *ctx) = 0;

  virtual void enterTypeArgumentsOrDiamond(Java8Parser::TypeArgumentsOrDiamondContext *ctx) = 0;
  virtual void exitTypeArgumentsOrDiamond(Java8Parser::TypeArgumentsOrDiamondContext *ctx) = 0;

  virtual void enterFieldAccess(Java8Parser::FieldAccessContext *ctx) = 0;
  virtual void exitFieldAccess(Java8Parser::FieldAccessContext *ctx) = 0;

  virtual void enterFieldAccess_lf_primary(Java8Parser::FieldAccess_lf_primaryContext *ctx) = 0;
  virtual void exitFieldAccess_lf_primary(Java8Parser::FieldAccess_lf_primaryContext *ctx) = 0;

  virtual void enterFieldAccess_lfno_primary(Java8Parser::FieldAccess_lfno_primaryContext *ctx) = 0;
  virtual void exitFieldAccess_lfno_primary(Java8Parser::FieldAccess_lfno_primaryContext *ctx) = 0;

  virtual void enterArrayAccess(Java8Parser::ArrayAccessContext *ctx) = 0;
  virtual void exitArrayAccess(Java8Parser::ArrayAccessContext *ctx) = 0;

  virtual void enterArrayAccess_lf_primary(Java8Parser::ArrayAccess_lf_primaryContext *ctx) = 0;
  virtual void exitArrayAccess_lf_primary(Java8Parser::ArrayAccess_lf_primaryContext *ctx) = 0;

  virtual void enterArrayAccess_lfno_primary(Java8Parser::ArrayAccess_lfno_primaryContext *ctx) = 0;
  virtual void exitArrayAccess_lfno_primary(Java8Parser::ArrayAccess_lfno_primaryContext *ctx) = 0;

  virtual void enterMethodInvocation(Java8Parser::MethodInvocationContext *ctx) = 0;
  virtual void exitMethodInvocation(Java8Parser::MethodInvocationContext *ctx) = 0;

  virtual void enterMethodInvocation_lf_primary(Java8Parser::MethodInvocation_lf_primaryContext *ctx) = 0;
  virtual void exitMethodInvocation_lf_primary(Java8Parser::MethodInvocation_lf_primaryContext *ctx) = 0;

  virtual void enterMethodInvocation_lfno_primary(Java8Parser::MethodInvocation_lfno_primaryContext *ctx) = 0;
  virtual void exitMethodInvocation_lfno_primary(Java8Parser::MethodInvocation_lfno_primaryContext *ctx) = 0;

  virtual void enterArgumentList(Java8Parser::ArgumentListContext *ctx) = 0;
  virtual void exitArgumentList(Java8Parser::ArgumentListContext *ctx) = 0;

  virtual void enterMethodReference(Java8Parser::MethodReferenceContext *ctx) = 0;
  virtual void exitMethodReference(Java8Parser::MethodReferenceContext *ctx) = 0;

  virtual void enterMethodReference_lf_primary(Java8Parser::MethodReference_lf_primaryContext *ctx) = 0;
  virtual void exitMethodReference_lf_primary(Java8Parser::MethodReference_lf_primaryContext *ctx) = 0;

  virtual void enterMethodReference_lfno_primary(Java8Parser::MethodReference_lfno_primaryContext *ctx) = 0;
  virtual void exitMethodReference_lfno_primary(Java8Parser::MethodReference_lfno_primaryContext *ctx) = 0;

  virtual void enterArrayCreationExpression(Java8Parser::ArrayCreationExpressionContext *ctx) = 0;
  virtual void exitArrayCreationExpression(Java8Parser::ArrayCreationExpressionContext *ctx) = 0;

  virtual void enterDimExprs(Java8Parser::DimExprsContext *ctx) = 0;
  virtual void exitDimExprs(Java8Parser::DimExprsContext *ctx) = 0;

  virtual void enterDimExpr(Java8Parser::DimExprContext *ctx) = 0;
  virtual void exitDimExpr(Java8Parser::DimExprContext *ctx) = 0;

  virtual void enterConstantExpression(Java8Parser::ConstantExpressionContext *ctx) = 0;
  virtual void exitConstantExpression(Java8Parser::ConstantExpressionContext *ctx) = 0;

  virtual void enterExpression(Java8Parser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(Java8Parser::ExpressionContext *ctx) = 0;

  virtual void enterLambdaExpression(Java8Parser::LambdaExpressionContext *ctx) = 0;
  virtual void exitLambdaExpression(Java8Parser::LambdaExpressionContext *ctx) = 0;

  virtual void enterLambdaParameters(Java8Parser::LambdaParametersContext *ctx) = 0;
  virtual void exitLambdaParameters(Java8Parser::LambdaParametersContext *ctx) = 0;

  virtual void enterInferredFormalParameterList(Java8Parser::InferredFormalParameterListContext *ctx) = 0;
  virtual void exitInferredFormalParameterList(Java8Parser::InferredFormalParameterListContext *ctx) = 0;

  virtual void enterLambdaBody(Java8Parser::LambdaBodyContext *ctx) = 0;
  virtual void exitLambdaBody(Java8Parser::LambdaBodyContext *ctx) = 0;

  virtual void enterAssignmentExpression(Java8Parser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(Java8Parser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterAssignment(Java8Parser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(Java8Parser::AssignmentContext *ctx) = 0;

  virtual void enterLeftHandSide(Java8Parser::LeftHandSideContext *ctx) = 0;
  virtual void exitLeftHandSide(Java8Parser::LeftHandSideContext *ctx) = 0;

  virtual void enterAssignmentOperator(Java8Parser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(Java8Parser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterConditionalExpression(Java8Parser::ConditionalExpressionContext *ctx) = 0;
  virtual void exitConditionalExpression(Java8Parser::ConditionalExpressionContext *ctx) = 0;

  virtual void enterConditionalOrExpression(Java8Parser::ConditionalOrExpressionContext *ctx) = 0;
  virtual void exitConditionalOrExpression(Java8Parser::ConditionalOrExpressionContext *ctx) = 0;

  virtual void enterConditionalAndExpression(Java8Parser::ConditionalAndExpressionContext *ctx) = 0;
  virtual void exitConditionalAndExpression(Java8Parser::ConditionalAndExpressionContext *ctx) = 0;

  virtual void enterInclusiveOrExpression(Java8Parser::InclusiveOrExpressionContext *ctx) = 0;
  virtual void exitInclusiveOrExpression(Java8Parser::InclusiveOrExpressionContext *ctx) = 0;

  virtual void enterExclusiveOrExpression(Java8Parser::ExclusiveOrExpressionContext *ctx) = 0;
  virtual void exitExclusiveOrExpression(Java8Parser::ExclusiveOrExpressionContext *ctx) = 0;

  virtual void enterAndExpression(Java8Parser::AndExpressionContext *ctx) = 0;
  virtual void exitAndExpression(Java8Parser::AndExpressionContext *ctx) = 0;

  virtual void enterEqualityExpression(Java8Parser::EqualityExpressionContext *ctx) = 0;
  virtual void exitEqualityExpression(Java8Parser::EqualityExpressionContext *ctx) = 0;

  virtual void enterRelationalExpression(Java8Parser::RelationalExpressionContext *ctx) = 0;
  virtual void exitRelationalExpression(Java8Parser::RelationalExpressionContext *ctx) = 0;

  virtual void enterShiftExpression(Java8Parser::ShiftExpressionContext *ctx) = 0;
  virtual void exitShiftExpression(Java8Parser::ShiftExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(Java8Parser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(Java8Parser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(Java8Parser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(Java8Parser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterUnaryExpression(Java8Parser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(Java8Parser::UnaryExpressionContext *ctx) = 0;

  virtual void enterPreIncrementExpression(Java8Parser::PreIncrementExpressionContext *ctx) = 0;
  virtual void exitPreIncrementExpression(Java8Parser::PreIncrementExpressionContext *ctx) = 0;

  virtual void enterPreDecrementExpression(Java8Parser::PreDecrementExpressionContext *ctx) = 0;
  virtual void exitPreDecrementExpression(Java8Parser::PreDecrementExpressionContext *ctx) = 0;

  virtual void enterUnaryExpressionNotPlusMinus(Java8Parser::UnaryExpressionNotPlusMinusContext *ctx) = 0;
  virtual void exitUnaryExpressionNotPlusMinus(Java8Parser::UnaryExpressionNotPlusMinusContext *ctx) = 0;

  virtual void enterPostfixExpression(Java8Parser::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(Java8Parser::PostfixExpressionContext *ctx) = 0;

  virtual void enterPostIncrementExpression(Java8Parser::PostIncrementExpressionContext *ctx) = 0;
  virtual void exitPostIncrementExpression(Java8Parser::PostIncrementExpressionContext *ctx) = 0;

  virtual void enterPostIncrementExpression_lf_postfixExpression(Java8Parser::PostIncrementExpression_lf_postfixExpressionContext *ctx) = 0;
  virtual void exitPostIncrementExpression_lf_postfixExpression(Java8Parser::PostIncrementExpression_lf_postfixExpressionContext *ctx) = 0;

  virtual void enterPostDecrementExpression(Java8Parser::PostDecrementExpressionContext *ctx) = 0;
  virtual void exitPostDecrementExpression(Java8Parser::PostDecrementExpressionContext *ctx) = 0;

  virtual void enterPostDecrementExpression_lf_postfixExpression(Java8Parser::PostDecrementExpression_lf_postfixExpressionContext *ctx) = 0;
  virtual void exitPostDecrementExpression_lf_postfixExpression(Java8Parser::PostDecrementExpression_lf_postfixExpressionContext *ctx) = 0;

  virtual void enterCastExpression(Java8Parser::CastExpressionContext *ctx) = 0;
  virtual void exitCastExpression(Java8Parser::CastExpressionContext *ctx) = 0;


};

