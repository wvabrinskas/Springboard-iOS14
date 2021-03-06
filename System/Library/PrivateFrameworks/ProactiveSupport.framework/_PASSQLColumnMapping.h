/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASSQLColumnMapping : NSObject {

	sqlite3_stmtRef _stmt;
	const PASCompactStringArrayRef _tableColumnNamesFromSchema;
	const PASCompactStringArrayRef _columnAliases;
	const char* _uniqueTableName;

}
-(int)indexForColumnAlias:(const char*)arg1 ;
-(id)initWithStatementPtr:(sqlite3_stmtRef)arg1 ;
-(void)resetSearchHint;
-(int)indexForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(void)dealloc;
-(void)_ensureColumnMappingExists;
@end

