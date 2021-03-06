/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSQLEntity, NSArray;

@interface NSSQLIntermediate : NSObject {

	NSSQLIntermediate* _scope;

}

@property (nonatomic,readonly) NSSQLEntity * disambiguatingEntity; 
@property (nonatomic,readonly) NSArray * disambiguationKeypath; 
@property (nonatomic,readonly) BOOL disambiguationKeypathHasToMany; 
+(BOOL)isSimpleKeypath:(id)arg1 ;
+(BOOL)expressionIsBasicKeypath:(id)arg1 ;
-(BOOL)isWhereScoped;
-(NSArray *)disambiguationKeypath;
-(void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(BOOL)arg3 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isUpdateScoped;
-(BOOL)isOrScoped;
-(id)governingAlias;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)governingEntity;
-(id)scope;
-(id)_generateSQLForExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(BOOL)disambiguationKeypathHasToMany;
-(id)initWithScope:(id)arg1 ;
-(id)_lastScopedItem;
-(void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1 ;
-(id)fetchIntermediate;
-(BOOL)isSimpleKeypath:(id)arg1 ;
-(BOOL)isIndexScoped;
-(id)_generateSQLForConstantValue:(id)arg1 inContext:(id)arg2 ;
-(BOOL)isVariableBasedKeypathScopedBySubquery:(id)arg1 ;
-(void)_promoteJoinsForSubqueryScopedKeypaths;
-(id)_generateSQLForSubqueryExpression:(id)arg1 trailingKeypath:(id)arg2 inContext:(id)arg3 ;
-(BOOL)isHavingScoped;
-(BOOL)_functionExpressionIsSubqueryFollowedByKeypath:(id)arg1 ;
-(BOOL)isIndexExpressionScoped;
-(BOOL)expressionIsBasicKeypath:(id)arg1 ;
-(id)_entitySpecificationKeypath;
-(void)_setEntitySpecificationKeypath:(id)arg1 ;
-(void)promoteJoinsInKeypathsForExpression:(id)arg1 ;
-(void)_promoteJoinsForKeypathExpression:(id)arg1 ;
-(BOOL)isTargetColumnsScoped;
-(void)_promoteJoinsForFunctionExpression:(id)arg1 ;
-(void)_promoteJoinsForAggregateExpression:(id)arg1 ;
-(void)_promoteJoinsForTernaryExpression:(id)arg1 ;
-(id)_generateSQLForConstantCollection:(id)arg1 reboundFrom:(id)arg2 inContext:(id)arg3 ;
-(BOOL)_canDoASubselectForExpression:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForFetchExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForFunctionExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForExpressionCollection:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(BOOL)isSimpleNoIndexFunction:(id)arg1 ;
-(id)_generateSQLForTernaryExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(BOOL)isUpdateColumnsScoped;
-(BOOL)isFunctionScoped;
-(NSSQLEntity *)disambiguatingEntity;
@end

