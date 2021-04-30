
// Generated from grammar/Java8Parser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "Java8ParserListener.h"


/**
 * This class provides an empty implementation of Java8ParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  Java8ParserBaseListener : public Java8ParserListener {
public:

  virtual void enterLiteral(Java8Parser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(Java8Parser::LiteralContext * /*ctx*/) override { }

  virtual void enterPrimitiveType(Java8Parser::PrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitPrimitiveType(Java8Parser::PrimitiveTypeContext * /*ctx*/) override { }

  virtual void enterNumericType(Java8Parser::NumericTypeContext * /*ctx*/) override { }
  virtual void exitNumericType(Java8Parser::NumericTypeContext * /*ctx*/) override { }

  virtual void enterIntegralType(Java8Parser::IntegralTypeContext * /*ctx*/) override { }
  virtual void exitIntegralType(Java8Parser::IntegralTypeContext * /*ctx*/) override { }

  virtual void enterFloatingPointType(Java8Parser::FloatingPointTypeContext * /*ctx*/) override { }
  virtual void exitFloatingPointType(Java8Parser::FloatingPointTypeContext * /*ctx*/) override { }

  virtual void enterReferenceType(Java8Parser::ReferenceTypeContext * /*ctx*/) override { }
  virtual void exitReferenceType(Java8Parser::ReferenceTypeContext * /*ctx*/) override { }

  virtual void enterClassOrInterfaceType(Java8Parser::ClassOrInterfaceTypeContext * /*ctx*/) override { }
  virtual void exitClassOrInterfaceType(Java8Parser::ClassOrInterfaceTypeContext * /*ctx*/) override { }

  virtual void enterClassType(Java8Parser::ClassTypeContext * /*ctx*/) override { }
  virtual void exitClassType(Java8Parser::ClassTypeContext * /*ctx*/) override { }

  virtual void enterClassType_lf_classOrInterfaceType(Java8Parser::ClassType_lf_classOrInterfaceTypeContext * /*ctx*/) override { }
  virtual void exitClassType_lf_classOrInterfaceType(Java8Parser::ClassType_lf_classOrInterfaceTypeContext * /*ctx*/) override { }

  virtual void enterClassType_lfno_classOrInterfaceType(Java8Parser::ClassType_lfno_classOrInterfaceTypeContext * /*ctx*/) override { }
  virtual void exitClassType_lfno_classOrInterfaceType(Java8Parser::ClassType_lfno_classOrInterfaceTypeContext * /*ctx*/) override { }

  virtual void enterInterfaceType(Java8Parser::InterfaceTypeContext * /*ctx*/) override { }
  virtual void exitInterfaceType(Java8Parser::InterfaceTypeContext * /*ctx*/) override { }

  virtual void enterInterfaceType_lf_classOrInterfaceType(Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext * /*ctx*/) override { }
  virtual void exitInterfaceType_lf_classOrInterfaceType(Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext * /*ctx*/) override { }

  virtual void enterInterfaceType_lfno_classOrInterfaceType(Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext * /*ctx*/) override { }
  virtual void exitInterfaceType_lfno_classOrInterfaceType(Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext * /*ctx*/) override { }

  virtual void enterTypeVariable(Java8Parser::TypeVariableContext * /*ctx*/) override { }
  virtual void exitTypeVariable(Java8Parser::TypeVariableContext * /*ctx*/) override { }

  virtual void enterArrayType(Java8Parser::ArrayTypeContext * /*ctx*/) override { }
  virtual void exitArrayType(Java8Parser::ArrayTypeContext * /*ctx*/) override { }

  virtual void enterDims(Java8Parser::DimsContext * /*ctx*/) override { }
  virtual void exitDims(Java8Parser::DimsContext * /*ctx*/) override { }

  virtual void enterTypeParameter(Java8Parser::TypeParameterContext * /*ctx*/) override { }
  virtual void exitTypeParameter(Java8Parser::TypeParameterContext * /*ctx*/) override { }

  virtual void enterTypeParameterModifier(Java8Parser::TypeParameterModifierContext * /*ctx*/) override { }
  virtual void exitTypeParameterModifier(Java8Parser::TypeParameterModifierContext * /*ctx*/) override { }

  virtual void enterTypeBound(Java8Parser::TypeBoundContext * /*ctx*/) override { }
  virtual void exitTypeBound(Java8Parser::TypeBoundContext * /*ctx*/) override { }

  virtual void enterAdditionalBound(Java8Parser::AdditionalBoundContext * /*ctx*/) override { }
  virtual void exitAdditionalBound(Java8Parser::AdditionalBoundContext * /*ctx*/) override { }

  virtual void enterTypeArguments(Java8Parser::TypeArgumentsContext * /*ctx*/) override { }
  virtual void exitTypeArguments(Java8Parser::TypeArgumentsContext * /*ctx*/) override { }

  virtual void enterTypeArgumentList(Java8Parser::TypeArgumentListContext * /*ctx*/) override { }
  virtual void exitTypeArgumentList(Java8Parser::TypeArgumentListContext * /*ctx*/) override { }

  virtual void enterTypeArgument(Java8Parser::TypeArgumentContext * /*ctx*/) override { }
  virtual void exitTypeArgument(Java8Parser::TypeArgumentContext * /*ctx*/) override { }

  virtual void enterWildcard(Java8Parser::WildcardContext * /*ctx*/) override { }
  virtual void exitWildcard(Java8Parser::WildcardContext * /*ctx*/) override { }

  virtual void enterWildcardBounds(Java8Parser::WildcardBoundsContext * /*ctx*/) override { }
  virtual void exitWildcardBounds(Java8Parser::WildcardBoundsContext * /*ctx*/) override { }

  virtual void enterPackageName(Java8Parser::PackageNameContext * /*ctx*/) override { }
  virtual void exitPackageName(Java8Parser::PackageNameContext * /*ctx*/) override { }

  virtual void enterTypeName(Java8Parser::TypeNameContext * /*ctx*/) override { }
  virtual void exitTypeName(Java8Parser::TypeNameContext * /*ctx*/) override { }

  virtual void enterPackageOrTypeName(Java8Parser::PackageOrTypeNameContext * /*ctx*/) override { }
  virtual void exitPackageOrTypeName(Java8Parser::PackageOrTypeNameContext * /*ctx*/) override { }

  virtual void enterExpressionName(Java8Parser::ExpressionNameContext * /*ctx*/) override { }
  virtual void exitExpressionName(Java8Parser::ExpressionNameContext * /*ctx*/) override { }

  virtual void enterMethodName(Java8Parser::MethodNameContext * /*ctx*/) override { }
  virtual void exitMethodName(Java8Parser::MethodNameContext * /*ctx*/) override { }

  virtual void enterAmbiguousName(Java8Parser::AmbiguousNameContext * /*ctx*/) override { }
  virtual void exitAmbiguousName(Java8Parser::AmbiguousNameContext * /*ctx*/) override { }

  virtual void enterCompilationUnit(Java8Parser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(Java8Parser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterPackageDeclaration(Java8Parser::PackageDeclarationContext * /*ctx*/) override { }
  virtual void exitPackageDeclaration(Java8Parser::PackageDeclarationContext * /*ctx*/) override { }

  virtual void enterPackageModifier(Java8Parser::PackageModifierContext * /*ctx*/) override { }
  virtual void exitPackageModifier(Java8Parser::PackageModifierContext * /*ctx*/) override { }

  virtual void enterImportDeclaration(Java8Parser::ImportDeclarationContext * /*ctx*/) override { }
  virtual void exitImportDeclaration(Java8Parser::ImportDeclarationContext * /*ctx*/) override { }

  virtual void enterSingleTypeImportDeclaration(Java8Parser::SingleTypeImportDeclarationContext * /*ctx*/) override { }
  virtual void exitSingleTypeImportDeclaration(Java8Parser::SingleTypeImportDeclarationContext * /*ctx*/) override { }

  virtual void enterTypeImportOnDemandDeclaration(Java8Parser::TypeImportOnDemandDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeImportOnDemandDeclaration(Java8Parser::TypeImportOnDemandDeclarationContext * /*ctx*/) override { }

  virtual void enterSingleStaticImportDeclaration(Java8Parser::SingleStaticImportDeclarationContext * /*ctx*/) override { }
  virtual void exitSingleStaticImportDeclaration(Java8Parser::SingleStaticImportDeclarationContext * /*ctx*/) override { }

  virtual void enterStaticImportOnDemandDeclaration(Java8Parser::StaticImportOnDemandDeclarationContext * /*ctx*/) override { }
  virtual void exitStaticImportOnDemandDeclaration(Java8Parser::StaticImportOnDemandDeclarationContext * /*ctx*/) override { }

  virtual void enterTypeDeclaration(Java8Parser::TypeDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeDeclaration(Java8Parser::TypeDeclarationContext * /*ctx*/) override { }

  virtual void enterClassDeclaration(Java8Parser::ClassDeclarationContext * /*ctx*/) override { }
  virtual void exitClassDeclaration(Java8Parser::ClassDeclarationContext * /*ctx*/) override { }

  virtual void enterNormalClassDeclaration(Java8Parser::NormalClassDeclarationContext * /*ctx*/) override { }
  virtual void exitNormalClassDeclaration(Java8Parser::NormalClassDeclarationContext * /*ctx*/) override { }

  virtual void enterClassModifier(Java8Parser::ClassModifierContext * /*ctx*/) override { }
  virtual void exitClassModifier(Java8Parser::ClassModifierContext * /*ctx*/) override { }

  virtual void enterTypeParameters(Java8Parser::TypeParametersContext * /*ctx*/) override { }
  virtual void exitTypeParameters(Java8Parser::TypeParametersContext * /*ctx*/) override { }

  virtual void enterTypeParameterList(Java8Parser::TypeParameterListContext * /*ctx*/) override { }
  virtual void exitTypeParameterList(Java8Parser::TypeParameterListContext * /*ctx*/) override { }

  virtual void enterSuperclass(Java8Parser::SuperclassContext * /*ctx*/) override { }
  virtual void exitSuperclass(Java8Parser::SuperclassContext * /*ctx*/) override { }

  virtual void enterSuperinterfaces(Java8Parser::SuperinterfacesContext * /*ctx*/) override { }
  virtual void exitSuperinterfaces(Java8Parser::SuperinterfacesContext * /*ctx*/) override { }

  virtual void enterInterfaceTypeList(Java8Parser::InterfaceTypeListContext * /*ctx*/) override { }
  virtual void exitInterfaceTypeList(Java8Parser::InterfaceTypeListContext * /*ctx*/) override { }

  virtual void enterClassBody(Java8Parser::ClassBodyContext * /*ctx*/) override { }
  virtual void exitClassBody(Java8Parser::ClassBodyContext * /*ctx*/) override { }

  virtual void enterClassBodyDeclaration(Java8Parser::ClassBodyDeclarationContext * /*ctx*/) override { }
  virtual void exitClassBodyDeclaration(Java8Parser::ClassBodyDeclarationContext * /*ctx*/) override { }

  virtual void enterClassMemberDeclaration(Java8Parser::ClassMemberDeclarationContext * /*ctx*/) override { }
  virtual void exitClassMemberDeclaration(Java8Parser::ClassMemberDeclarationContext * /*ctx*/) override { }

  virtual void enterFieldDeclaration(Java8Parser::FieldDeclarationContext * /*ctx*/) override { }
  virtual void exitFieldDeclaration(Java8Parser::FieldDeclarationContext * /*ctx*/) override { }

  virtual void enterFieldModifier(Java8Parser::FieldModifierContext * /*ctx*/) override { }
  virtual void exitFieldModifier(Java8Parser::FieldModifierContext * /*ctx*/) override { }

  virtual void enterVariableDeclaratorList(Java8Parser::VariableDeclaratorListContext * /*ctx*/) override { }
  virtual void exitVariableDeclaratorList(Java8Parser::VariableDeclaratorListContext * /*ctx*/) override { }

  virtual void enterVariableDeclarator(Java8Parser::VariableDeclaratorContext * /*ctx*/) override { }
  virtual void exitVariableDeclarator(Java8Parser::VariableDeclaratorContext * /*ctx*/) override { }

  virtual void enterVariableDeclaratorId(Java8Parser::VariableDeclaratorIdContext * /*ctx*/) override { }
  virtual void exitVariableDeclaratorId(Java8Parser::VariableDeclaratorIdContext * /*ctx*/) override { }

  virtual void enterVariableInitializer(Java8Parser::VariableInitializerContext * /*ctx*/) override { }
  virtual void exitVariableInitializer(Java8Parser::VariableInitializerContext * /*ctx*/) override { }

  virtual void enterUnannType(Java8Parser::UnannTypeContext * /*ctx*/) override { }
  virtual void exitUnannType(Java8Parser::UnannTypeContext * /*ctx*/) override { }

  virtual void enterUnannPrimitiveType(Java8Parser::UnannPrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitUnannPrimitiveType(Java8Parser::UnannPrimitiveTypeContext * /*ctx*/) override { }

  virtual void enterUnannReferenceType(Java8Parser::UnannReferenceTypeContext * /*ctx*/) override { }
  virtual void exitUnannReferenceType(Java8Parser::UnannReferenceTypeContext * /*ctx*/) override { }

  virtual void enterUnannClassOrInterfaceType(Java8Parser::UnannClassOrInterfaceTypeContext * /*ctx*/) override { }
  virtual void exitUnannClassOrInterfaceType(Java8Parser::UnannClassOrInterfaceTypeContext * /*ctx*/) override { }

  virtual void enterUnannClassType(Java8Parser::UnannClassTypeContext * /*ctx*/) override { }
  virtual void exitUnannClassType(Java8Parser::UnannClassTypeContext * /*ctx*/) override { }

  virtual void enterUnannClassType_lf_unannClassOrInterfaceType(Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext * /*ctx*/) override { }
  virtual void exitUnannClassType_lf_unannClassOrInterfaceType(Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext * /*ctx*/) override { }

  virtual void enterUnannClassType_lfno_unannClassOrInterfaceType(Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext * /*ctx*/) override { }
  virtual void exitUnannClassType_lfno_unannClassOrInterfaceType(Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext * /*ctx*/) override { }

  virtual void enterUnannInterfaceType(Java8Parser::UnannInterfaceTypeContext * /*ctx*/) override { }
  virtual void exitUnannInterfaceType(Java8Parser::UnannInterfaceTypeContext * /*ctx*/) override { }

  virtual void enterUnannInterfaceType_lf_unannClassOrInterfaceType(Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext * /*ctx*/) override { }
  virtual void exitUnannInterfaceType_lf_unannClassOrInterfaceType(Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext * /*ctx*/) override { }

  virtual void enterUnannInterfaceType_lfno_unannClassOrInterfaceType(Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext * /*ctx*/) override { }
  virtual void exitUnannInterfaceType_lfno_unannClassOrInterfaceType(Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext * /*ctx*/) override { }

  virtual void enterUnannTypeVariable(Java8Parser::UnannTypeVariableContext * /*ctx*/) override { }
  virtual void exitUnannTypeVariable(Java8Parser::UnannTypeVariableContext * /*ctx*/) override { }

  virtual void enterUnannArrayType(Java8Parser::UnannArrayTypeContext * /*ctx*/) override { }
  virtual void exitUnannArrayType(Java8Parser::UnannArrayTypeContext * /*ctx*/) override { }

  virtual void enterMethodDeclaration(Java8Parser::MethodDeclarationContext * /*ctx*/) override { }
  virtual void exitMethodDeclaration(Java8Parser::MethodDeclarationContext * /*ctx*/) override { }

  virtual void enterMethodModifier(Java8Parser::MethodModifierContext * /*ctx*/) override { }
  virtual void exitMethodModifier(Java8Parser::MethodModifierContext * /*ctx*/) override { }

  virtual void enterMethodHeader(Java8Parser::MethodHeaderContext * /*ctx*/) override { }
  virtual void exitMethodHeader(Java8Parser::MethodHeaderContext * /*ctx*/) override { }

  virtual void enterResult(Java8Parser::ResultContext * /*ctx*/) override { }
  virtual void exitResult(Java8Parser::ResultContext * /*ctx*/) override { }

  virtual void enterMethodDeclarator(Java8Parser::MethodDeclaratorContext * /*ctx*/) override { }
  virtual void exitMethodDeclarator(Java8Parser::MethodDeclaratorContext * /*ctx*/) override { }

  virtual void enterFormalParameterList(Java8Parser::FormalParameterListContext * /*ctx*/) override { }
  virtual void exitFormalParameterList(Java8Parser::FormalParameterListContext * /*ctx*/) override { }

  virtual void enterFormalParameters(Java8Parser::FormalParametersContext * /*ctx*/) override { }
  virtual void exitFormalParameters(Java8Parser::FormalParametersContext * /*ctx*/) override { }

  virtual void enterFormalParameter(Java8Parser::FormalParameterContext * /*ctx*/) override { }
  virtual void exitFormalParameter(Java8Parser::FormalParameterContext * /*ctx*/) override { }

  virtual void enterVariableModifier(Java8Parser::VariableModifierContext * /*ctx*/) override { }
  virtual void exitVariableModifier(Java8Parser::VariableModifierContext * /*ctx*/) override { }

  virtual void enterLastFormalParameter(Java8Parser::LastFormalParameterContext * /*ctx*/) override { }
  virtual void exitLastFormalParameter(Java8Parser::LastFormalParameterContext * /*ctx*/) override { }

  virtual void enterReceiverParameter(Java8Parser::ReceiverParameterContext * /*ctx*/) override { }
  virtual void exitReceiverParameter(Java8Parser::ReceiverParameterContext * /*ctx*/) override { }

  virtual void enterThrows_(Java8Parser::Throws_Context * /*ctx*/) override { }
  virtual void exitThrows_(Java8Parser::Throws_Context * /*ctx*/) override { }

  virtual void enterExceptionTypeList(Java8Parser::ExceptionTypeListContext * /*ctx*/) override { }
  virtual void exitExceptionTypeList(Java8Parser::ExceptionTypeListContext * /*ctx*/) override { }

  virtual void enterExceptionType(Java8Parser::ExceptionTypeContext * /*ctx*/) override { }
  virtual void exitExceptionType(Java8Parser::ExceptionTypeContext * /*ctx*/) override { }

  virtual void enterMethodBody(Java8Parser::MethodBodyContext * /*ctx*/) override { }
  virtual void exitMethodBody(Java8Parser::MethodBodyContext * /*ctx*/) override { }

  virtual void enterInstanceInitializer(Java8Parser::InstanceInitializerContext * /*ctx*/) override { }
  virtual void exitInstanceInitializer(Java8Parser::InstanceInitializerContext * /*ctx*/) override { }

  virtual void enterStaticInitializer(Java8Parser::StaticInitializerContext * /*ctx*/) override { }
  virtual void exitStaticInitializer(Java8Parser::StaticInitializerContext * /*ctx*/) override { }

  virtual void enterConstructorDeclaration(Java8Parser::ConstructorDeclarationContext * /*ctx*/) override { }
  virtual void exitConstructorDeclaration(Java8Parser::ConstructorDeclarationContext * /*ctx*/) override { }

  virtual void enterConstructorModifier(Java8Parser::ConstructorModifierContext * /*ctx*/) override { }
  virtual void exitConstructorModifier(Java8Parser::ConstructorModifierContext * /*ctx*/) override { }

  virtual void enterConstructorDeclarator(Java8Parser::ConstructorDeclaratorContext * /*ctx*/) override { }
  virtual void exitConstructorDeclarator(Java8Parser::ConstructorDeclaratorContext * /*ctx*/) override { }

  virtual void enterSimpleTypeName(Java8Parser::SimpleTypeNameContext * /*ctx*/) override { }
  virtual void exitSimpleTypeName(Java8Parser::SimpleTypeNameContext * /*ctx*/) override { }

  virtual void enterConstructorBody(Java8Parser::ConstructorBodyContext * /*ctx*/) override { }
  virtual void exitConstructorBody(Java8Parser::ConstructorBodyContext * /*ctx*/) override { }

  virtual void enterExplicitConstructorInvocation(Java8Parser::ExplicitConstructorInvocationContext * /*ctx*/) override { }
  virtual void exitExplicitConstructorInvocation(Java8Parser::ExplicitConstructorInvocationContext * /*ctx*/) override { }

  virtual void enterEnumDeclaration(Java8Parser::EnumDeclarationContext * /*ctx*/) override { }
  virtual void exitEnumDeclaration(Java8Parser::EnumDeclarationContext * /*ctx*/) override { }

  virtual void enterEnumBody(Java8Parser::EnumBodyContext * /*ctx*/) override { }
  virtual void exitEnumBody(Java8Parser::EnumBodyContext * /*ctx*/) override { }

  virtual void enterEnumConstantList(Java8Parser::EnumConstantListContext * /*ctx*/) override { }
  virtual void exitEnumConstantList(Java8Parser::EnumConstantListContext * /*ctx*/) override { }

  virtual void enterEnumConstant(Java8Parser::EnumConstantContext * /*ctx*/) override { }
  virtual void exitEnumConstant(Java8Parser::EnumConstantContext * /*ctx*/) override { }

  virtual void enterEnumConstantModifier(Java8Parser::EnumConstantModifierContext * /*ctx*/) override { }
  virtual void exitEnumConstantModifier(Java8Parser::EnumConstantModifierContext * /*ctx*/) override { }

  virtual void enterEnumBodyDeclarations(Java8Parser::EnumBodyDeclarationsContext * /*ctx*/) override { }
  virtual void exitEnumBodyDeclarations(Java8Parser::EnumBodyDeclarationsContext * /*ctx*/) override { }

  virtual void enterInterfaceDeclaration(Java8Parser::InterfaceDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceDeclaration(Java8Parser::InterfaceDeclarationContext * /*ctx*/) override { }

  virtual void enterNormalInterfaceDeclaration(Java8Parser::NormalInterfaceDeclarationContext * /*ctx*/) override { }
  virtual void exitNormalInterfaceDeclaration(Java8Parser::NormalInterfaceDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceModifier(Java8Parser::InterfaceModifierContext * /*ctx*/) override { }
  virtual void exitInterfaceModifier(Java8Parser::InterfaceModifierContext * /*ctx*/) override { }

  virtual void enterExtendsInterfaces(Java8Parser::ExtendsInterfacesContext * /*ctx*/) override { }
  virtual void exitExtendsInterfaces(Java8Parser::ExtendsInterfacesContext * /*ctx*/) override { }

  virtual void enterInterfaceBody(Java8Parser::InterfaceBodyContext * /*ctx*/) override { }
  virtual void exitInterfaceBody(Java8Parser::InterfaceBodyContext * /*ctx*/) override { }

  virtual void enterInterfaceMemberDeclaration(Java8Parser::InterfaceMemberDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceMemberDeclaration(Java8Parser::InterfaceMemberDeclarationContext * /*ctx*/) override { }

  virtual void enterConstantDeclaration(Java8Parser::ConstantDeclarationContext * /*ctx*/) override { }
  virtual void exitConstantDeclaration(Java8Parser::ConstantDeclarationContext * /*ctx*/) override { }

  virtual void enterConstantModifier(Java8Parser::ConstantModifierContext * /*ctx*/) override { }
  virtual void exitConstantModifier(Java8Parser::ConstantModifierContext * /*ctx*/) override { }

  virtual void enterInterfaceMethodDeclaration(Java8Parser::InterfaceMethodDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceMethodDeclaration(Java8Parser::InterfaceMethodDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceMethodModifier(Java8Parser::InterfaceMethodModifierContext * /*ctx*/) override { }
  virtual void exitInterfaceMethodModifier(Java8Parser::InterfaceMethodModifierContext * /*ctx*/) override { }

  virtual void enterAnnotationTypeDeclaration(Java8Parser::AnnotationTypeDeclarationContext * /*ctx*/) override { }
  virtual void exitAnnotationTypeDeclaration(Java8Parser::AnnotationTypeDeclarationContext * /*ctx*/) override { }

  virtual void enterAnnotationTypeBody(Java8Parser::AnnotationTypeBodyContext * /*ctx*/) override { }
  virtual void exitAnnotationTypeBody(Java8Parser::AnnotationTypeBodyContext * /*ctx*/) override { }

  virtual void enterAnnotationTypeMemberDeclaration(Java8Parser::AnnotationTypeMemberDeclarationContext * /*ctx*/) override { }
  virtual void exitAnnotationTypeMemberDeclaration(Java8Parser::AnnotationTypeMemberDeclarationContext * /*ctx*/) override { }

  virtual void enterAnnotationTypeElementDeclaration(Java8Parser::AnnotationTypeElementDeclarationContext * /*ctx*/) override { }
  virtual void exitAnnotationTypeElementDeclaration(Java8Parser::AnnotationTypeElementDeclarationContext * /*ctx*/) override { }

  virtual void enterAnnotationTypeElementModifier(Java8Parser::AnnotationTypeElementModifierContext * /*ctx*/) override { }
  virtual void exitAnnotationTypeElementModifier(Java8Parser::AnnotationTypeElementModifierContext * /*ctx*/) override { }

  virtual void enterDefaultValue(Java8Parser::DefaultValueContext * /*ctx*/) override { }
  virtual void exitDefaultValue(Java8Parser::DefaultValueContext * /*ctx*/) override { }

  virtual void enterAnnotation(Java8Parser::AnnotationContext * /*ctx*/) override { }
  virtual void exitAnnotation(Java8Parser::AnnotationContext * /*ctx*/) override { }

  virtual void enterNormalAnnotation(Java8Parser::NormalAnnotationContext * /*ctx*/) override { }
  virtual void exitNormalAnnotation(Java8Parser::NormalAnnotationContext * /*ctx*/) override { }

  virtual void enterElementValuePairList(Java8Parser::ElementValuePairListContext * /*ctx*/) override { }
  virtual void exitElementValuePairList(Java8Parser::ElementValuePairListContext * /*ctx*/) override { }

  virtual void enterElementValuePair(Java8Parser::ElementValuePairContext * /*ctx*/) override { }
  virtual void exitElementValuePair(Java8Parser::ElementValuePairContext * /*ctx*/) override { }

  virtual void enterElementValue(Java8Parser::ElementValueContext * /*ctx*/) override { }
  virtual void exitElementValue(Java8Parser::ElementValueContext * /*ctx*/) override { }

  virtual void enterElementValueArrayInitializer(Java8Parser::ElementValueArrayInitializerContext * /*ctx*/) override { }
  virtual void exitElementValueArrayInitializer(Java8Parser::ElementValueArrayInitializerContext * /*ctx*/) override { }

  virtual void enterElementValueList(Java8Parser::ElementValueListContext * /*ctx*/) override { }
  virtual void exitElementValueList(Java8Parser::ElementValueListContext * /*ctx*/) override { }

  virtual void enterMarkerAnnotation(Java8Parser::MarkerAnnotationContext * /*ctx*/) override { }
  virtual void exitMarkerAnnotation(Java8Parser::MarkerAnnotationContext * /*ctx*/) override { }

  virtual void enterSingleElementAnnotation(Java8Parser::SingleElementAnnotationContext * /*ctx*/) override { }
  virtual void exitSingleElementAnnotation(Java8Parser::SingleElementAnnotationContext * /*ctx*/) override { }

  virtual void enterArrayInitializer(Java8Parser::ArrayInitializerContext * /*ctx*/) override { }
  virtual void exitArrayInitializer(Java8Parser::ArrayInitializerContext * /*ctx*/) override { }

  virtual void enterVariableInitializerList(Java8Parser::VariableInitializerListContext * /*ctx*/) override { }
  virtual void exitVariableInitializerList(Java8Parser::VariableInitializerListContext * /*ctx*/) override { }

  virtual void enterBlock(Java8Parser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(Java8Parser::BlockContext * /*ctx*/) override { }

  virtual void enterBlockStatements(Java8Parser::BlockStatementsContext * /*ctx*/) override { }
  virtual void exitBlockStatements(Java8Parser::BlockStatementsContext * /*ctx*/) override { }

  virtual void enterBlockStatement(Java8Parser::BlockStatementContext * /*ctx*/) override { }
  virtual void exitBlockStatement(Java8Parser::BlockStatementContext * /*ctx*/) override { }

  virtual void enterLocalVariableDeclarationStatement(Java8Parser::LocalVariableDeclarationStatementContext * /*ctx*/) override { }
  virtual void exitLocalVariableDeclarationStatement(Java8Parser::LocalVariableDeclarationStatementContext * /*ctx*/) override { }

  virtual void enterLocalVariableDeclaration(Java8Parser::LocalVariableDeclarationContext * /*ctx*/) override { }
  virtual void exitLocalVariableDeclaration(Java8Parser::LocalVariableDeclarationContext * /*ctx*/) override { }

  virtual void enterStatement(Java8Parser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(Java8Parser::StatementContext * /*ctx*/) override { }

  virtual void enterStatementNoShortIf(Java8Parser::StatementNoShortIfContext * /*ctx*/) override { }
  virtual void exitStatementNoShortIf(Java8Parser::StatementNoShortIfContext * /*ctx*/) override { }

  virtual void enterStatementWithoutTrailingSubstatement(Java8Parser::StatementWithoutTrailingSubstatementContext * /*ctx*/) override { }
  virtual void exitStatementWithoutTrailingSubstatement(Java8Parser::StatementWithoutTrailingSubstatementContext * /*ctx*/) override { }

  virtual void enterEmptyStatement(Java8Parser::EmptyStatementContext * /*ctx*/) override { }
  virtual void exitEmptyStatement(Java8Parser::EmptyStatementContext * /*ctx*/) override { }

  virtual void enterLabeledStatement(Java8Parser::LabeledStatementContext * /*ctx*/) override { }
  virtual void exitLabeledStatement(Java8Parser::LabeledStatementContext * /*ctx*/) override { }

  virtual void enterLabeledStatementNoShortIf(Java8Parser::LabeledStatementNoShortIfContext * /*ctx*/) override { }
  virtual void exitLabeledStatementNoShortIf(Java8Parser::LabeledStatementNoShortIfContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(Java8Parser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(Java8Parser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterStatementExpression(Java8Parser::StatementExpressionContext * /*ctx*/) override { }
  virtual void exitStatementExpression(Java8Parser::StatementExpressionContext * /*ctx*/) override { }

  virtual void enterIfThenStatement(Java8Parser::IfThenStatementContext * /*ctx*/) override { }
  virtual void exitIfThenStatement(Java8Parser::IfThenStatementContext * /*ctx*/) override { }

  virtual void enterIfThenElseStatement(Java8Parser::IfThenElseStatementContext * /*ctx*/) override { }
  virtual void exitIfThenElseStatement(Java8Parser::IfThenElseStatementContext * /*ctx*/) override { }

  virtual void enterIfThenElseStatementNoShortIf(Java8Parser::IfThenElseStatementNoShortIfContext * /*ctx*/) override { }
  virtual void exitIfThenElseStatementNoShortIf(Java8Parser::IfThenElseStatementNoShortIfContext * /*ctx*/) override { }

  virtual void enterAssertStatement(Java8Parser::AssertStatementContext * /*ctx*/) override { }
  virtual void exitAssertStatement(Java8Parser::AssertStatementContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(Java8Parser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(Java8Parser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterSwitchBlock(Java8Parser::SwitchBlockContext * /*ctx*/) override { }
  virtual void exitSwitchBlock(Java8Parser::SwitchBlockContext * /*ctx*/) override { }

  virtual void enterSwitchBlockStatementGroup(Java8Parser::SwitchBlockStatementGroupContext * /*ctx*/) override { }
  virtual void exitSwitchBlockStatementGroup(Java8Parser::SwitchBlockStatementGroupContext * /*ctx*/) override { }

  virtual void enterSwitchLabels(Java8Parser::SwitchLabelsContext * /*ctx*/) override { }
  virtual void exitSwitchLabels(Java8Parser::SwitchLabelsContext * /*ctx*/) override { }

  virtual void enterSwitchLabel(Java8Parser::SwitchLabelContext * /*ctx*/) override { }
  virtual void exitSwitchLabel(Java8Parser::SwitchLabelContext * /*ctx*/) override { }

  virtual void enterEnumConstantName(Java8Parser::EnumConstantNameContext * /*ctx*/) override { }
  virtual void exitEnumConstantName(Java8Parser::EnumConstantNameContext * /*ctx*/) override { }

  virtual void enterWhileStatement(Java8Parser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(Java8Parser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatementNoShortIf(Java8Parser::WhileStatementNoShortIfContext * /*ctx*/) override { }
  virtual void exitWhileStatementNoShortIf(Java8Parser::WhileStatementNoShortIfContext * /*ctx*/) override { }

  virtual void enterDoStatement(Java8Parser::DoStatementContext * /*ctx*/) override { }
  virtual void exitDoStatement(Java8Parser::DoStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(Java8Parser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(Java8Parser::ForStatementContext * /*ctx*/) override { }

  virtual void enterForStatementNoShortIf(Java8Parser::ForStatementNoShortIfContext * /*ctx*/) override { }
  virtual void exitForStatementNoShortIf(Java8Parser::ForStatementNoShortIfContext * /*ctx*/) override { }

  virtual void enterBasicForStatement(Java8Parser::BasicForStatementContext * /*ctx*/) override { }
  virtual void exitBasicForStatement(Java8Parser::BasicForStatementContext * /*ctx*/) override { }

  virtual void enterBasicForStatementNoShortIf(Java8Parser::BasicForStatementNoShortIfContext * /*ctx*/) override { }
  virtual void exitBasicForStatementNoShortIf(Java8Parser::BasicForStatementNoShortIfContext * /*ctx*/) override { }

  virtual void enterForInit(Java8Parser::ForInitContext * /*ctx*/) override { }
  virtual void exitForInit(Java8Parser::ForInitContext * /*ctx*/) override { }

  virtual void enterForUpdate(Java8Parser::ForUpdateContext * /*ctx*/) override { }
  virtual void exitForUpdate(Java8Parser::ForUpdateContext * /*ctx*/) override { }

  virtual void enterStatementExpressionList(Java8Parser::StatementExpressionListContext * /*ctx*/) override { }
  virtual void exitStatementExpressionList(Java8Parser::StatementExpressionListContext * /*ctx*/) override { }

  virtual void enterEnhancedForStatement(Java8Parser::EnhancedForStatementContext * /*ctx*/) override { }
  virtual void exitEnhancedForStatement(Java8Parser::EnhancedForStatementContext * /*ctx*/) override { }

  virtual void enterEnhancedForStatementNoShortIf(Java8Parser::EnhancedForStatementNoShortIfContext * /*ctx*/) override { }
  virtual void exitEnhancedForStatementNoShortIf(Java8Parser::EnhancedForStatementNoShortIfContext * /*ctx*/) override { }

  virtual void enterBreakStatement(Java8Parser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(Java8Parser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterContinueStatement(Java8Parser::ContinueStatementContext * /*ctx*/) override { }
  virtual void exitContinueStatement(Java8Parser::ContinueStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(Java8Parser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(Java8Parser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterThrowStatement(Java8Parser::ThrowStatementContext * /*ctx*/) override { }
  virtual void exitThrowStatement(Java8Parser::ThrowStatementContext * /*ctx*/) override { }

  virtual void enterSynchronizedStatement(Java8Parser::SynchronizedStatementContext * /*ctx*/) override { }
  virtual void exitSynchronizedStatement(Java8Parser::SynchronizedStatementContext * /*ctx*/) override { }

  virtual void enterTryStatement(Java8Parser::TryStatementContext * /*ctx*/) override { }
  virtual void exitTryStatement(Java8Parser::TryStatementContext * /*ctx*/) override { }

  virtual void enterCatches(Java8Parser::CatchesContext * /*ctx*/) override { }
  virtual void exitCatches(Java8Parser::CatchesContext * /*ctx*/) override { }

  virtual void enterCatchClause(Java8Parser::CatchClauseContext * /*ctx*/) override { }
  virtual void exitCatchClause(Java8Parser::CatchClauseContext * /*ctx*/) override { }

  virtual void enterCatchFormalParameter(Java8Parser::CatchFormalParameterContext * /*ctx*/) override { }
  virtual void exitCatchFormalParameter(Java8Parser::CatchFormalParameterContext * /*ctx*/) override { }

  virtual void enterCatchType(Java8Parser::CatchTypeContext * /*ctx*/) override { }
  virtual void exitCatchType(Java8Parser::CatchTypeContext * /*ctx*/) override { }

  virtual void enterFinally_(Java8Parser::Finally_Context * /*ctx*/) override { }
  virtual void exitFinally_(Java8Parser::Finally_Context * /*ctx*/) override { }

  virtual void enterTryWithResourcesStatement(Java8Parser::TryWithResourcesStatementContext * /*ctx*/) override { }
  virtual void exitTryWithResourcesStatement(Java8Parser::TryWithResourcesStatementContext * /*ctx*/) override { }

  virtual void enterResourceSpecification(Java8Parser::ResourceSpecificationContext * /*ctx*/) override { }
  virtual void exitResourceSpecification(Java8Parser::ResourceSpecificationContext * /*ctx*/) override { }

  virtual void enterResourceList(Java8Parser::ResourceListContext * /*ctx*/) override { }
  virtual void exitResourceList(Java8Parser::ResourceListContext * /*ctx*/) override { }

  virtual void enterResource(Java8Parser::ResourceContext * /*ctx*/) override { }
  virtual void exitResource(Java8Parser::ResourceContext * /*ctx*/) override { }

  virtual void enterPrimary(Java8Parser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(Java8Parser::PrimaryContext * /*ctx*/) override { }

  virtual void enterPrimaryNoNewArray(Java8Parser::PrimaryNoNewArrayContext * /*ctx*/) override { }
  virtual void exitPrimaryNoNewArray(Java8Parser::PrimaryNoNewArrayContext * /*ctx*/) override { }

  virtual void enterPrimaryNoNewArray_lf_arrayAccess(Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext * /*ctx*/) override { }
  virtual void exitPrimaryNoNewArray_lf_arrayAccess(Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext * /*ctx*/) override { }

  virtual void enterPrimaryNoNewArray_lfno_arrayAccess(Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext * /*ctx*/) override { }
  virtual void exitPrimaryNoNewArray_lfno_arrayAccess(Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext * /*ctx*/) override { }

  virtual void enterPrimaryNoNewArray_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primaryContext * /*ctx*/) override { }
  virtual void exitPrimaryNoNewArray_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primaryContext * /*ctx*/) override { }

  virtual void enterPrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext * /*ctx*/) override { }
  virtual void exitPrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext * /*ctx*/) override { }

  virtual void enterPrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext * /*ctx*/) override { }
  virtual void exitPrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext * /*ctx*/) override { }

  virtual void enterPrimaryNoNewArray_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primaryContext * /*ctx*/) override { }
  virtual void exitPrimaryNoNewArray_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primaryContext * /*ctx*/) override { }

  virtual void enterPrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext * /*ctx*/) override { }
  virtual void exitPrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext * /*ctx*/) override { }

  virtual void enterPrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext * /*ctx*/) override { }
  virtual void exitPrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext * /*ctx*/) override { }

  virtual void enterClassInstanceCreationExpression(Java8Parser::ClassInstanceCreationExpressionContext * /*ctx*/) override { }
  virtual void exitClassInstanceCreationExpression(Java8Parser::ClassInstanceCreationExpressionContext * /*ctx*/) override { }

  virtual void enterClassInstanceCreationExpression_lf_primary(Java8Parser::ClassInstanceCreationExpression_lf_primaryContext * /*ctx*/) override { }
  virtual void exitClassInstanceCreationExpression_lf_primary(Java8Parser::ClassInstanceCreationExpression_lf_primaryContext * /*ctx*/) override { }

  virtual void enterClassInstanceCreationExpression_lfno_primary(Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext * /*ctx*/) override { }
  virtual void exitClassInstanceCreationExpression_lfno_primary(Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext * /*ctx*/) override { }

  virtual void enterTypeArgumentsOrDiamond(Java8Parser::TypeArgumentsOrDiamondContext * /*ctx*/) override { }
  virtual void exitTypeArgumentsOrDiamond(Java8Parser::TypeArgumentsOrDiamondContext * /*ctx*/) override { }

  virtual void enterFieldAccess(Java8Parser::FieldAccessContext * /*ctx*/) override { }
  virtual void exitFieldAccess(Java8Parser::FieldAccessContext * /*ctx*/) override { }

  virtual void enterFieldAccess_lf_primary(Java8Parser::FieldAccess_lf_primaryContext * /*ctx*/) override { }
  virtual void exitFieldAccess_lf_primary(Java8Parser::FieldAccess_lf_primaryContext * /*ctx*/) override { }

  virtual void enterFieldAccess_lfno_primary(Java8Parser::FieldAccess_lfno_primaryContext * /*ctx*/) override { }
  virtual void exitFieldAccess_lfno_primary(Java8Parser::FieldAccess_lfno_primaryContext * /*ctx*/) override { }

  virtual void enterArrayAccess(Java8Parser::ArrayAccessContext * /*ctx*/) override { }
  virtual void exitArrayAccess(Java8Parser::ArrayAccessContext * /*ctx*/) override { }

  virtual void enterArrayAccess_lf_primary(Java8Parser::ArrayAccess_lf_primaryContext * /*ctx*/) override { }
  virtual void exitArrayAccess_lf_primary(Java8Parser::ArrayAccess_lf_primaryContext * /*ctx*/) override { }

  virtual void enterArrayAccess_lfno_primary(Java8Parser::ArrayAccess_lfno_primaryContext * /*ctx*/) override { }
  virtual void exitArrayAccess_lfno_primary(Java8Parser::ArrayAccess_lfno_primaryContext * /*ctx*/) override { }

  virtual void enterMethodInvocation(Java8Parser::MethodInvocationContext * /*ctx*/) override { }
  virtual void exitMethodInvocation(Java8Parser::MethodInvocationContext * /*ctx*/) override { }

  virtual void enterMethodInvocation_lf_primary(Java8Parser::MethodInvocation_lf_primaryContext * /*ctx*/) override { }
  virtual void exitMethodInvocation_lf_primary(Java8Parser::MethodInvocation_lf_primaryContext * /*ctx*/) override { }

  virtual void enterMethodInvocation_lfno_primary(Java8Parser::MethodInvocation_lfno_primaryContext * /*ctx*/) override { }
  virtual void exitMethodInvocation_lfno_primary(Java8Parser::MethodInvocation_lfno_primaryContext * /*ctx*/) override { }

  virtual void enterArgumentList(Java8Parser::ArgumentListContext * /*ctx*/) override { }
  virtual void exitArgumentList(Java8Parser::ArgumentListContext * /*ctx*/) override { }

  virtual void enterMethodReference(Java8Parser::MethodReferenceContext * /*ctx*/) override { }
  virtual void exitMethodReference(Java8Parser::MethodReferenceContext * /*ctx*/) override { }

  virtual void enterMethodReference_lf_primary(Java8Parser::MethodReference_lf_primaryContext * /*ctx*/) override { }
  virtual void exitMethodReference_lf_primary(Java8Parser::MethodReference_lf_primaryContext * /*ctx*/) override { }

  virtual void enterMethodReference_lfno_primary(Java8Parser::MethodReference_lfno_primaryContext * /*ctx*/) override { }
  virtual void exitMethodReference_lfno_primary(Java8Parser::MethodReference_lfno_primaryContext * /*ctx*/) override { }

  virtual void enterArrayCreationExpression(Java8Parser::ArrayCreationExpressionContext * /*ctx*/) override { }
  virtual void exitArrayCreationExpression(Java8Parser::ArrayCreationExpressionContext * /*ctx*/) override { }

  virtual void enterDimExprs(Java8Parser::DimExprsContext * /*ctx*/) override { }
  virtual void exitDimExprs(Java8Parser::DimExprsContext * /*ctx*/) override { }

  virtual void enterDimExpr(Java8Parser::DimExprContext * /*ctx*/) override { }
  virtual void exitDimExpr(Java8Parser::DimExprContext * /*ctx*/) override { }

  virtual void enterConstantExpression(Java8Parser::ConstantExpressionContext * /*ctx*/) override { }
  virtual void exitConstantExpression(Java8Parser::ConstantExpressionContext * /*ctx*/) override { }

  virtual void enterExpression(Java8Parser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(Java8Parser::ExpressionContext * /*ctx*/) override { }

  virtual void enterLambdaExpression(Java8Parser::LambdaExpressionContext * /*ctx*/) override { }
  virtual void exitLambdaExpression(Java8Parser::LambdaExpressionContext * /*ctx*/) override { }

  virtual void enterLambdaParameters(Java8Parser::LambdaParametersContext * /*ctx*/) override { }
  virtual void exitLambdaParameters(Java8Parser::LambdaParametersContext * /*ctx*/) override { }

  virtual void enterInferredFormalParameterList(Java8Parser::InferredFormalParameterListContext * /*ctx*/) override { }
  virtual void exitInferredFormalParameterList(Java8Parser::InferredFormalParameterListContext * /*ctx*/) override { }

  virtual void enterLambdaBody(Java8Parser::LambdaBodyContext * /*ctx*/) override { }
  virtual void exitLambdaBody(Java8Parser::LambdaBodyContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(Java8Parser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(Java8Parser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterAssignment(Java8Parser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(Java8Parser::AssignmentContext * /*ctx*/) override { }

  virtual void enterLeftHandSide(Java8Parser::LeftHandSideContext * /*ctx*/) override { }
  virtual void exitLeftHandSide(Java8Parser::LeftHandSideContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(Java8Parser::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(Java8Parser::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterConditionalExpression(Java8Parser::ConditionalExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalExpression(Java8Parser::ConditionalExpressionContext * /*ctx*/) override { }

  virtual void enterConditionalOrExpression(Java8Parser::ConditionalOrExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalOrExpression(Java8Parser::ConditionalOrExpressionContext * /*ctx*/) override { }

  virtual void enterConditionalAndExpression(Java8Parser::ConditionalAndExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalAndExpression(Java8Parser::ConditionalAndExpressionContext * /*ctx*/) override { }

  virtual void enterInclusiveOrExpression(Java8Parser::InclusiveOrExpressionContext * /*ctx*/) override { }
  virtual void exitInclusiveOrExpression(Java8Parser::InclusiveOrExpressionContext * /*ctx*/) override { }

  virtual void enterExclusiveOrExpression(Java8Parser::ExclusiveOrExpressionContext * /*ctx*/) override { }
  virtual void exitExclusiveOrExpression(Java8Parser::ExclusiveOrExpressionContext * /*ctx*/) override { }

  virtual void enterAndExpression(Java8Parser::AndExpressionContext * /*ctx*/) override { }
  virtual void exitAndExpression(Java8Parser::AndExpressionContext * /*ctx*/) override { }

  virtual void enterEqualityExpression(Java8Parser::EqualityExpressionContext * /*ctx*/) override { }
  virtual void exitEqualityExpression(Java8Parser::EqualityExpressionContext * /*ctx*/) override { }

  virtual void enterRelationalExpression(Java8Parser::RelationalExpressionContext * /*ctx*/) override { }
  virtual void exitRelationalExpression(Java8Parser::RelationalExpressionContext * /*ctx*/) override { }

  virtual void enterShiftExpression(Java8Parser::ShiftExpressionContext * /*ctx*/) override { }
  virtual void exitShiftExpression(Java8Parser::ShiftExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveExpression(Java8Parser::AdditiveExpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveExpression(Java8Parser::AdditiveExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeExpression(Java8Parser::MultiplicativeExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeExpression(Java8Parser::MultiplicativeExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryExpression(Java8Parser::UnaryExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryExpression(Java8Parser::UnaryExpressionContext * /*ctx*/) override { }

  virtual void enterPreIncrementExpression(Java8Parser::PreIncrementExpressionContext * /*ctx*/) override { }
  virtual void exitPreIncrementExpression(Java8Parser::PreIncrementExpressionContext * /*ctx*/) override { }

  virtual void enterPreDecrementExpression(Java8Parser::PreDecrementExpressionContext * /*ctx*/) override { }
  virtual void exitPreDecrementExpression(Java8Parser::PreDecrementExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryExpressionNotPlusMinus(Java8Parser::UnaryExpressionNotPlusMinusContext * /*ctx*/) override { }
  virtual void exitUnaryExpressionNotPlusMinus(Java8Parser::UnaryExpressionNotPlusMinusContext * /*ctx*/) override { }

  virtual void enterPostfixExpression(Java8Parser::PostfixExpressionContext * /*ctx*/) override { }
  virtual void exitPostfixExpression(Java8Parser::PostfixExpressionContext * /*ctx*/) override { }

  virtual void enterPostIncrementExpression(Java8Parser::PostIncrementExpressionContext * /*ctx*/) override { }
  virtual void exitPostIncrementExpression(Java8Parser::PostIncrementExpressionContext * /*ctx*/) override { }

  virtual void enterPostIncrementExpression_lf_postfixExpression(Java8Parser::PostIncrementExpression_lf_postfixExpressionContext * /*ctx*/) override { }
  virtual void exitPostIncrementExpression_lf_postfixExpression(Java8Parser::PostIncrementExpression_lf_postfixExpressionContext * /*ctx*/) override { }

  virtual void enterPostDecrementExpression(Java8Parser::PostDecrementExpressionContext * /*ctx*/) override { }
  virtual void exitPostDecrementExpression(Java8Parser::PostDecrementExpressionContext * /*ctx*/) override { }

  virtual void enterPostDecrementExpression_lf_postfixExpression(Java8Parser::PostDecrementExpression_lf_postfixExpressionContext * /*ctx*/) override { }
  virtual void exitPostDecrementExpression_lf_postfixExpression(Java8Parser::PostDecrementExpression_lf_postfixExpressionContext * /*ctx*/) override { }

  virtual void enterCastExpression(Java8Parser::CastExpressionContext * /*ctx*/) override { }
  virtual void exitCastExpression(Java8Parser::CastExpressionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

