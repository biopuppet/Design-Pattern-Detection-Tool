
// Generated from grammar/Java8Parser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "Java8Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Java8Parser.
 */
class  Java8ParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Java8Parser.
   */
    virtual antlrcpp::Any visitLiteral(Java8Parser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitPrimitiveType(Java8Parser::PrimitiveTypeContext *context) = 0;

    virtual antlrcpp::Any visitNumericType(Java8Parser::NumericTypeContext *context) = 0;

    virtual antlrcpp::Any visitIntegralType(Java8Parser::IntegralTypeContext *context) = 0;

    virtual antlrcpp::Any visitFloatingPointType(Java8Parser::FloatingPointTypeContext *context) = 0;

    virtual antlrcpp::Any visitReferenceType(Java8Parser::ReferenceTypeContext *context) = 0;

    virtual antlrcpp::Any visitClassOrInterfaceType(Java8Parser::ClassOrInterfaceTypeContext *context) = 0;

    virtual antlrcpp::Any visitClassType(Java8Parser::ClassTypeContext *context) = 0;

    virtual antlrcpp::Any visitClassType_lf_classOrInterfaceType(Java8Parser::ClassType_lf_classOrInterfaceTypeContext *context) = 0;

    virtual antlrcpp::Any visitClassType_lfno_classOrInterfaceType(Java8Parser::ClassType_lfno_classOrInterfaceTypeContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceType(Java8Parser::InterfaceTypeContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceType_lf_classOrInterfaceType(Java8Parser::InterfaceType_lf_classOrInterfaceTypeContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceType_lfno_classOrInterfaceType(Java8Parser::InterfaceType_lfno_classOrInterfaceTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeVariable(Java8Parser::TypeVariableContext *context) = 0;

    virtual antlrcpp::Any visitArrayType(Java8Parser::ArrayTypeContext *context) = 0;

    virtual antlrcpp::Any visitDims(Java8Parser::DimsContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameter(Java8Parser::TypeParameterContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameterModifier(Java8Parser::TypeParameterModifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeBound(Java8Parser::TypeBoundContext *context) = 0;

    virtual antlrcpp::Any visitAdditionalBound(Java8Parser::AdditionalBoundContext *context) = 0;

    virtual antlrcpp::Any visitTypeArguments(Java8Parser::TypeArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitTypeArgumentList(Java8Parser::TypeArgumentListContext *context) = 0;

    virtual antlrcpp::Any visitTypeArgument(Java8Parser::TypeArgumentContext *context) = 0;

    virtual antlrcpp::Any visitWildcard(Java8Parser::WildcardContext *context) = 0;

    virtual antlrcpp::Any visitWildcardBounds(Java8Parser::WildcardBoundsContext *context) = 0;

    virtual antlrcpp::Any visitPackageName(Java8Parser::PackageNameContext *context) = 0;

    virtual antlrcpp::Any visitTypeName(Java8Parser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitPackageOrTypeName(Java8Parser::PackageOrTypeNameContext *context) = 0;

    virtual antlrcpp::Any visitExpressionName(Java8Parser::ExpressionNameContext *context) = 0;

    virtual antlrcpp::Any visitMethodName(Java8Parser::MethodNameContext *context) = 0;

    virtual antlrcpp::Any visitAmbiguousName(Java8Parser::AmbiguousNameContext *context) = 0;

    virtual antlrcpp::Any visitCompilationUnit(Java8Parser::CompilationUnitContext *context) = 0;

    virtual antlrcpp::Any visitPackageDeclaration(Java8Parser::PackageDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitPackageModifier(Java8Parser::PackageModifierContext *context) = 0;

    virtual antlrcpp::Any visitImportDeclaration(Java8Parser::ImportDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitSingleTypeImportDeclaration(Java8Parser::SingleTypeImportDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTypeImportOnDemandDeclaration(Java8Parser::TypeImportOnDemandDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitSingleStaticImportDeclaration(Java8Parser::SingleStaticImportDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStaticImportOnDemandDeclaration(Java8Parser::StaticImportOnDemandDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTypeDeclaration(Java8Parser::TypeDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitClassDeclaration(Java8Parser::ClassDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitNormalClassDeclaration(Java8Parser::NormalClassDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitClassModifier(Java8Parser::ClassModifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameters(Java8Parser::TypeParametersContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameterList(Java8Parser::TypeParameterListContext *context) = 0;

    virtual antlrcpp::Any visitSuperclass(Java8Parser::SuperclassContext *context) = 0;

    virtual antlrcpp::Any visitSuperinterfaces(Java8Parser::SuperinterfacesContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceTypeList(Java8Parser::InterfaceTypeListContext *context) = 0;

    virtual antlrcpp::Any visitClassBody(Java8Parser::ClassBodyContext *context) = 0;

    virtual antlrcpp::Any visitClassBodyDeclaration(Java8Parser::ClassBodyDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitClassMemberDeclaration(Java8Parser::ClassMemberDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFieldDeclaration(Java8Parser::FieldDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFieldModifier(Java8Parser::FieldModifierContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaratorList(Java8Parser::VariableDeclaratorListContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclarator(Java8Parser::VariableDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaratorId(Java8Parser::VariableDeclaratorIdContext *context) = 0;

    virtual antlrcpp::Any visitVariableInitializer(Java8Parser::VariableInitializerContext *context) = 0;

    virtual antlrcpp::Any visitUnannType(Java8Parser::UnannTypeContext *context) = 0;

    virtual antlrcpp::Any visitUnannPrimitiveType(Java8Parser::UnannPrimitiveTypeContext *context) = 0;

    virtual antlrcpp::Any visitUnannReferenceType(Java8Parser::UnannReferenceTypeContext *context) = 0;

    virtual antlrcpp::Any visitUnannClassOrInterfaceType(Java8Parser::UnannClassOrInterfaceTypeContext *context) = 0;

    virtual antlrcpp::Any visitUnannClassType(Java8Parser::UnannClassTypeContext *context) = 0;

    virtual antlrcpp::Any visitUnannClassType_lf_unannClassOrInterfaceType(Java8Parser::UnannClassType_lf_unannClassOrInterfaceTypeContext *context) = 0;

    virtual antlrcpp::Any visitUnannClassType_lfno_unannClassOrInterfaceType(Java8Parser::UnannClassType_lfno_unannClassOrInterfaceTypeContext *context) = 0;

    virtual antlrcpp::Any visitUnannInterfaceType(Java8Parser::UnannInterfaceTypeContext *context) = 0;

    virtual antlrcpp::Any visitUnannInterfaceType_lf_unannClassOrInterfaceType(Java8Parser::UnannInterfaceType_lf_unannClassOrInterfaceTypeContext *context) = 0;

    virtual antlrcpp::Any visitUnannInterfaceType_lfno_unannClassOrInterfaceType(Java8Parser::UnannInterfaceType_lfno_unannClassOrInterfaceTypeContext *context) = 0;

    virtual antlrcpp::Any visitUnannTypeVariable(Java8Parser::UnannTypeVariableContext *context) = 0;

    virtual antlrcpp::Any visitUnannArrayType(Java8Parser::UnannArrayTypeContext *context) = 0;

    virtual antlrcpp::Any visitMethodDeclaration(Java8Parser::MethodDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMethodModifier(Java8Parser::MethodModifierContext *context) = 0;

    virtual antlrcpp::Any visitMethodHeader(Java8Parser::MethodHeaderContext *context) = 0;

    virtual antlrcpp::Any visitResult(Java8Parser::ResultContext *context) = 0;

    virtual antlrcpp::Any visitMethodDeclarator(Java8Parser::MethodDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitFormalParameterList(Java8Parser::FormalParameterListContext *context) = 0;

    virtual antlrcpp::Any visitFormalParameters(Java8Parser::FormalParametersContext *context) = 0;

    virtual antlrcpp::Any visitFormalParameter(Java8Parser::FormalParameterContext *context) = 0;

    virtual antlrcpp::Any visitVariableModifier(Java8Parser::VariableModifierContext *context) = 0;

    virtual antlrcpp::Any visitLastFormalParameter(Java8Parser::LastFormalParameterContext *context) = 0;

    virtual antlrcpp::Any visitReceiverParameter(Java8Parser::ReceiverParameterContext *context) = 0;

    virtual antlrcpp::Any visitThrows_(Java8Parser::Throws_Context *context) = 0;

    virtual antlrcpp::Any visitExceptionTypeList(Java8Parser::ExceptionTypeListContext *context) = 0;

    virtual antlrcpp::Any visitExceptionType(Java8Parser::ExceptionTypeContext *context) = 0;

    virtual antlrcpp::Any visitMethodBody(Java8Parser::MethodBodyContext *context) = 0;

    virtual antlrcpp::Any visitInstanceInitializer(Java8Parser::InstanceInitializerContext *context) = 0;

    virtual antlrcpp::Any visitStaticInitializer(Java8Parser::StaticInitializerContext *context) = 0;

    virtual antlrcpp::Any visitConstructorDeclaration(Java8Parser::ConstructorDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitConstructorModifier(Java8Parser::ConstructorModifierContext *context) = 0;

    virtual antlrcpp::Any visitConstructorDeclarator(Java8Parser::ConstructorDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitSimpleTypeName(Java8Parser::SimpleTypeNameContext *context) = 0;

    virtual antlrcpp::Any visitConstructorBody(Java8Parser::ConstructorBodyContext *context) = 0;

    virtual antlrcpp::Any visitExplicitConstructorInvocation(Java8Parser::ExplicitConstructorInvocationContext *context) = 0;

    virtual antlrcpp::Any visitEnumDeclaration(Java8Parser::EnumDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitEnumBody(Java8Parser::EnumBodyContext *context) = 0;

    virtual antlrcpp::Any visitEnumConstantList(Java8Parser::EnumConstantListContext *context) = 0;

    virtual antlrcpp::Any visitEnumConstant(Java8Parser::EnumConstantContext *context) = 0;

    virtual antlrcpp::Any visitEnumConstantModifier(Java8Parser::EnumConstantModifierContext *context) = 0;

    virtual antlrcpp::Any visitEnumBodyDeclarations(Java8Parser::EnumBodyDeclarationsContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceDeclaration(Java8Parser::InterfaceDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitNormalInterfaceDeclaration(Java8Parser::NormalInterfaceDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceModifier(Java8Parser::InterfaceModifierContext *context) = 0;

    virtual antlrcpp::Any visitExtendsInterfaces(Java8Parser::ExtendsInterfacesContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceBody(Java8Parser::InterfaceBodyContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceMemberDeclaration(Java8Parser::InterfaceMemberDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitConstantDeclaration(Java8Parser::ConstantDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitConstantModifier(Java8Parser::ConstantModifierContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceMethodDeclaration(Java8Parser::InterfaceMethodDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceMethodModifier(Java8Parser::InterfaceMethodModifierContext *context) = 0;

    virtual antlrcpp::Any visitAnnotationTypeDeclaration(Java8Parser::AnnotationTypeDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAnnotationTypeBody(Java8Parser::AnnotationTypeBodyContext *context) = 0;

    virtual antlrcpp::Any visitAnnotationTypeMemberDeclaration(Java8Parser::AnnotationTypeMemberDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAnnotationTypeElementDeclaration(Java8Parser::AnnotationTypeElementDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAnnotationTypeElementModifier(Java8Parser::AnnotationTypeElementModifierContext *context) = 0;

    virtual antlrcpp::Any visitDefaultValue(Java8Parser::DefaultValueContext *context) = 0;

    virtual antlrcpp::Any visitAnnotation(Java8Parser::AnnotationContext *context) = 0;

    virtual antlrcpp::Any visitNormalAnnotation(Java8Parser::NormalAnnotationContext *context) = 0;

    virtual antlrcpp::Any visitElementValuePairList(Java8Parser::ElementValuePairListContext *context) = 0;

    virtual antlrcpp::Any visitElementValuePair(Java8Parser::ElementValuePairContext *context) = 0;

    virtual antlrcpp::Any visitElementValue(Java8Parser::ElementValueContext *context) = 0;

    virtual antlrcpp::Any visitElementValueArrayInitializer(Java8Parser::ElementValueArrayInitializerContext *context) = 0;

    virtual antlrcpp::Any visitElementValueList(Java8Parser::ElementValueListContext *context) = 0;

    virtual antlrcpp::Any visitMarkerAnnotation(Java8Parser::MarkerAnnotationContext *context) = 0;

    virtual antlrcpp::Any visitSingleElementAnnotation(Java8Parser::SingleElementAnnotationContext *context) = 0;

    virtual antlrcpp::Any visitArrayInitializer(Java8Parser::ArrayInitializerContext *context) = 0;

    virtual antlrcpp::Any visitVariableInitializerList(Java8Parser::VariableInitializerListContext *context) = 0;

    virtual antlrcpp::Any visitBlock(Java8Parser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitBlockStatements(Java8Parser::BlockStatementsContext *context) = 0;

    virtual antlrcpp::Any visitBlockStatement(Java8Parser::BlockStatementContext *context) = 0;

    virtual antlrcpp::Any visitLocalVariableDeclarationStatement(Java8Parser::LocalVariableDeclarationStatementContext *context) = 0;

    virtual antlrcpp::Any visitLocalVariableDeclaration(Java8Parser::LocalVariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStatement(Java8Parser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitStatementNoShortIf(Java8Parser::StatementNoShortIfContext *context) = 0;

    virtual antlrcpp::Any visitStatementWithoutTrailingSubstatement(Java8Parser::StatementWithoutTrailingSubstatementContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStatement(Java8Parser::EmptyStatementContext *context) = 0;

    virtual antlrcpp::Any visitLabeledStatement(Java8Parser::LabeledStatementContext *context) = 0;

    virtual antlrcpp::Any visitLabeledStatementNoShortIf(Java8Parser::LabeledStatementNoShortIfContext *context) = 0;

    virtual antlrcpp::Any visitExpressionStatement(Java8Parser::ExpressionStatementContext *context) = 0;

    virtual antlrcpp::Any visitStatementExpression(Java8Parser::StatementExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIfThenStatement(Java8Parser::IfThenStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfThenElseStatement(Java8Parser::IfThenElseStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfThenElseStatementNoShortIf(Java8Parser::IfThenElseStatementNoShortIfContext *context) = 0;

    virtual antlrcpp::Any visitAssertStatement(Java8Parser::AssertStatementContext *context) = 0;

    virtual antlrcpp::Any visitSwitchStatement(Java8Parser::SwitchStatementContext *context) = 0;

    virtual antlrcpp::Any visitSwitchBlock(Java8Parser::SwitchBlockContext *context) = 0;

    virtual antlrcpp::Any visitSwitchBlockStatementGroup(Java8Parser::SwitchBlockStatementGroupContext *context) = 0;

    virtual antlrcpp::Any visitSwitchLabels(Java8Parser::SwitchLabelsContext *context) = 0;

    virtual antlrcpp::Any visitSwitchLabel(Java8Parser::SwitchLabelContext *context) = 0;

    virtual antlrcpp::Any visitEnumConstantName(Java8Parser::EnumConstantNameContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(Java8Parser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatementNoShortIf(Java8Parser::WhileStatementNoShortIfContext *context) = 0;

    virtual antlrcpp::Any visitDoStatement(Java8Parser::DoStatementContext *context) = 0;

    virtual antlrcpp::Any visitForStatement(Java8Parser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitForStatementNoShortIf(Java8Parser::ForStatementNoShortIfContext *context) = 0;

    virtual antlrcpp::Any visitBasicForStatement(Java8Parser::BasicForStatementContext *context) = 0;

    virtual antlrcpp::Any visitBasicForStatementNoShortIf(Java8Parser::BasicForStatementNoShortIfContext *context) = 0;

    virtual antlrcpp::Any visitForInit(Java8Parser::ForInitContext *context) = 0;

    virtual antlrcpp::Any visitForUpdate(Java8Parser::ForUpdateContext *context) = 0;

    virtual antlrcpp::Any visitStatementExpressionList(Java8Parser::StatementExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitEnhancedForStatement(Java8Parser::EnhancedForStatementContext *context) = 0;

    virtual antlrcpp::Any visitEnhancedForStatementNoShortIf(Java8Parser::EnhancedForStatementNoShortIfContext *context) = 0;

    virtual antlrcpp::Any visitBreakStatement(Java8Parser::BreakStatementContext *context) = 0;

    virtual antlrcpp::Any visitContinueStatement(Java8Parser::ContinueStatementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(Java8Parser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitThrowStatement(Java8Parser::ThrowStatementContext *context) = 0;

    virtual antlrcpp::Any visitSynchronizedStatement(Java8Parser::SynchronizedStatementContext *context) = 0;

    virtual antlrcpp::Any visitTryStatement(Java8Parser::TryStatementContext *context) = 0;

    virtual antlrcpp::Any visitCatches(Java8Parser::CatchesContext *context) = 0;

    virtual antlrcpp::Any visitCatchClause(Java8Parser::CatchClauseContext *context) = 0;

    virtual antlrcpp::Any visitCatchFormalParameter(Java8Parser::CatchFormalParameterContext *context) = 0;

    virtual antlrcpp::Any visitCatchType(Java8Parser::CatchTypeContext *context) = 0;

    virtual antlrcpp::Any visitFinally_(Java8Parser::Finally_Context *context) = 0;

    virtual antlrcpp::Any visitTryWithResourcesStatement(Java8Parser::TryWithResourcesStatementContext *context) = 0;

    virtual antlrcpp::Any visitResourceSpecification(Java8Parser::ResourceSpecificationContext *context) = 0;

    virtual antlrcpp::Any visitResourceList(Java8Parser::ResourceListContext *context) = 0;

    virtual antlrcpp::Any visitResource(Java8Parser::ResourceContext *context) = 0;

    virtual antlrcpp::Any visitPrimary(Java8Parser::PrimaryContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryNoNewArray(Java8Parser::PrimaryNoNewArrayContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryNoNewArray_lf_arrayAccess(Java8Parser::PrimaryNoNewArray_lf_arrayAccessContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryNoNewArray_lfno_arrayAccess(Java8Parser::PrimaryNoNewArray_lfno_arrayAccessContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryNoNewArray_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primaryContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primary_lf_arrayAccess_lf_primaryContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primary(Java8Parser::PrimaryNoNewArray_lf_primary_lfno_arrayAccess_lf_primaryContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryNoNewArray_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primaryContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primary_lf_arrayAccess_lfno_primaryContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primary(Java8Parser::PrimaryNoNewArray_lfno_primary_lfno_arrayAccess_lfno_primaryContext *context) = 0;

    virtual antlrcpp::Any visitClassInstanceCreationExpression(Java8Parser::ClassInstanceCreationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitClassInstanceCreationExpression_lf_primary(Java8Parser::ClassInstanceCreationExpression_lf_primaryContext *context) = 0;

    virtual antlrcpp::Any visitClassInstanceCreationExpression_lfno_primary(Java8Parser::ClassInstanceCreationExpression_lfno_primaryContext *context) = 0;

    virtual antlrcpp::Any visitTypeArgumentsOrDiamond(Java8Parser::TypeArgumentsOrDiamondContext *context) = 0;

    virtual antlrcpp::Any visitFieldAccess(Java8Parser::FieldAccessContext *context) = 0;

    virtual antlrcpp::Any visitFieldAccess_lf_primary(Java8Parser::FieldAccess_lf_primaryContext *context) = 0;

    virtual antlrcpp::Any visitFieldAccess_lfno_primary(Java8Parser::FieldAccess_lfno_primaryContext *context) = 0;

    virtual antlrcpp::Any visitArrayAccess(Java8Parser::ArrayAccessContext *context) = 0;

    virtual antlrcpp::Any visitArrayAccess_lf_primary(Java8Parser::ArrayAccess_lf_primaryContext *context) = 0;

    virtual antlrcpp::Any visitArrayAccess_lfno_primary(Java8Parser::ArrayAccess_lfno_primaryContext *context) = 0;

    virtual antlrcpp::Any visitMethodInvocation(Java8Parser::MethodInvocationContext *context) = 0;

    virtual antlrcpp::Any visitMethodInvocation_lf_primary(Java8Parser::MethodInvocation_lf_primaryContext *context) = 0;

    virtual antlrcpp::Any visitMethodInvocation_lfno_primary(Java8Parser::MethodInvocation_lfno_primaryContext *context) = 0;

    virtual antlrcpp::Any visitArgumentList(Java8Parser::ArgumentListContext *context) = 0;

    virtual antlrcpp::Any visitMethodReference(Java8Parser::MethodReferenceContext *context) = 0;

    virtual antlrcpp::Any visitMethodReference_lf_primary(Java8Parser::MethodReference_lf_primaryContext *context) = 0;

    virtual antlrcpp::Any visitMethodReference_lfno_primary(Java8Parser::MethodReference_lfno_primaryContext *context) = 0;

    virtual antlrcpp::Any visitArrayCreationExpression(Java8Parser::ArrayCreationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitDimExprs(Java8Parser::DimExprsContext *context) = 0;

    virtual antlrcpp::Any visitDimExpr(Java8Parser::DimExprContext *context) = 0;

    virtual antlrcpp::Any visitConstantExpression(Java8Parser::ConstantExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpression(Java8Parser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLambdaExpression(Java8Parser::LambdaExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLambdaParameters(Java8Parser::LambdaParametersContext *context) = 0;

    virtual antlrcpp::Any visitInferredFormalParameterList(Java8Parser::InferredFormalParameterListContext *context) = 0;

    virtual antlrcpp::Any visitLambdaBody(Java8Parser::LambdaBodyContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentExpression(Java8Parser::AssignmentExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(Java8Parser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitLeftHandSide(Java8Parser::LeftHandSideContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentOperator(Java8Parser::AssignmentOperatorContext *context) = 0;

    virtual antlrcpp::Any visitConditionalExpression(Java8Parser::ConditionalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConditionalOrExpression(Java8Parser::ConditionalOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConditionalAndExpression(Java8Parser::ConditionalAndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInclusiveOrExpression(Java8Parser::InclusiveOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExclusiveOrExpression(Java8Parser::ExclusiveOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAndExpression(Java8Parser::AndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqualityExpression(Java8Parser::EqualityExpressionContext *context) = 0;

    virtual antlrcpp::Any visitRelationalExpression(Java8Parser::RelationalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitShiftExpression(Java8Parser::ShiftExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveExpression(Java8Parser::AdditiveExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeExpression(Java8Parser::MultiplicativeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression(Java8Parser::UnaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPreIncrementExpression(Java8Parser::PreIncrementExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPreDecrementExpression(Java8Parser::PreDecrementExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpressionNotPlusMinus(Java8Parser::UnaryExpressionNotPlusMinusContext *context) = 0;

    virtual antlrcpp::Any visitPostfixExpression(Java8Parser::PostfixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPostIncrementExpression(Java8Parser::PostIncrementExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPostIncrementExpression_lf_postfixExpression(Java8Parser::PostIncrementExpression_lf_postfixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPostDecrementExpression(Java8Parser::PostDecrementExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPostDecrementExpression_lf_postfixExpression(Java8Parser::PostDecrementExpression_lf_postfixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCastExpression(Java8Parser::CastExpressionContext *context) = 0;


};

