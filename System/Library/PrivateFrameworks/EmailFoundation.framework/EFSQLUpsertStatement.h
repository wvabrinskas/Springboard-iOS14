/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EFSQLInsertStatement, EFSQLUpdateStatement, NSArray, NSString;

@interface EFSQLUpsertStatement : NSObject {

	EFSQLInsertStatement* _insertStatement;
	EFSQLUpdateStatement* _updateStatement;
	NSArray* _conflictTarget;

}

@property (nonatomic,readonly) id<EFSQLInsertStatementValue> insertValue; 
@property (nonatomic,readonly) id<EFSQLUpdateStatementValue> updateValue; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,copy,readonly) NSString * queryString; 
@property (nonatomic,retain) id<EFSQLValueExpressable> whereClause; 
-(NSString *)queryString;
-(void)enumerateBindingNamesAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id<EFSQLValueExpressable>)whereClause;
-(id)excludedColumnExpressionForColumnName:(id)arg1 ;
-(id)initWithTable:(id)arg1 conflictTarget:(id)arg2 ;
-(id<EFSQLInsertStatementValue>)insertValue;
-(id<EFSQLUpdateStatementValue>)updateValue;
-(BOOL)isEmpty;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setWhereClause:(id<EFSQLValueExpressable>)arg1 ;
@end

