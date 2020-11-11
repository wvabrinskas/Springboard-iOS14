/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SSSQLiteDatabase, NSString;

@interface SSVPlayActivityTable : NSObject {

	SSSQLiteDatabase* _database;

}

@property (assign,nonatomic) unsigned long long currentEventsRevision; 
@property (nonatomic,copy,readonly) NSString * eventsRevisionVersionToken; 
+(id)databasePath;
+(BOOL)_setupDatabase:(id)arg1 ;
+(id)_eventsDatabaseTableName;
+(id)_propertiesDatabaseTableName;
-(id)init;
-(BOOL)_removeDatabaseReturningError:(id*)arg1 ;
-(id)_valueForDatabasePropertyKey:(id)arg1 ;
-(BOOL)_setValue:(id)arg1 forDatabasePropertyKey:(id)arg2 ;
-(BOOL)_getPlayActivityEvents:(id*)arg1 relevantRevisionsIndexSet:(id*)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 shouldFilterStoreAccountID:(BOOL)arg6 additionalRevisionsIndexSet:(id)arg7 ignoredRevisionsIndexSet:(id)arg8 error:(id*)arg9 ;
-(id)_revisionsIndexSetUsingPersisentIDGenerationBlock:(/*^block*/id)arg1 count:(unsigned long long)arg2 ;
-(NSString *)eventsRevisionVersionToken;
-(unsigned long long)currentEventsRevision;
-(BOOL)getPlayActivityEvents:(id*)arg1 relevantRevisionsIndexSet:(id*)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 additionalRevisionsIndexSet:(id)arg5 ignoredRevisionsIndexSet:(id)arg6 error:(id*)arg7 ;
-(void)setCurrentEventsRevision:(unsigned long long)arg1 ;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)insertPlayActivityEvent:(id)arg1 withRevision:(unsigned long long)arg2 returningError:(id*)arg3 ;
-(BOOL)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 returningError:(id*)arg2 ;
-(BOOL)getPlayActivityEvents:(id*)arg1 relevantRevisionsIndexSet:(id*)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 additionalRevisionsIndexSet:(id)arg6 ignoredRevisionsIndexSet:(id)arg7 error:(id*)arg8 ;
-(id)revisionsIndexSetForPlayActivityEvents:(id)arg1 ;
-(id)revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1 ;
@end
