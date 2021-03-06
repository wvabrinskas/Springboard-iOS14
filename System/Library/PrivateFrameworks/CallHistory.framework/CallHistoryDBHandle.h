/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallHistory/CHLogger.h>

@class NSManagedObjectContext, CallDBManager, NSString;

@interface CallHistoryDBHandle : CHLogger {

	NSManagedObjectContext* fCallRecordContext;
	NSManagedObjectContext* fCallDBPropertiesContext;
	CallDBManager* callDBManager;
	NSString* objectId;
	id _observerCallRecordRef;
	id _observerCallDBPropRef;
	id _moveCallRecordsFromTempStoreRef;
	id _dataStoreAddedRef;

}

@property (nonatomic,readonly) NSString * objectId; 
@property (nonatomic,readonly) CallDBManager * callDBManager; 
+(id)createWithDBManager:(id)arg1 ;
+(id)createForClient;
+(id)createForServer;
-(BOOL)save:(id*)arg1 ;
-(CallDBManager *)callDBManager;
-(id)timerLifetime;
-(id)timerLastReset;
-(BOOL)moveCallRecordsFromDatabaseAtURL:(id)arg1 ;
-(void)deleteAll;
-(id)fetchManagedCallIdentifiersWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(id)fetchAllObjectsWithUniqueId:(id)arg1 ;
-(id)fetchAllNoLimit;
-(id)initWithDBManager:(id)arg1 ;
-(id)getArrayForCallTypeMask:(unsigned)arg1 ;
-(id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 withLimit:(BOOL)arg3 ;
-(void)handleCallRecordContextDidSaveNotification:(id)arg1 ;
-(id)fetchObjectsWithPredicate:(id)arg1 ;
-(void)unRegisterForNotifications;
-(void)mergeCallDBPropChangesFromRemoteAppSave;
-(id)callDBProperties;
-(void)postTimersChangedNotification;
-(void)deleteObjectsWithUniqueIds:(id)arg1 ;
-(void)updateCallDBProperties;
-(id)timerOutgoing;
-(void)resetTimers;
-(BOOL)saveTimers:(/*^block*/id)arg1 ;
-(id)updateManagedCallsWithPredicate:(id)arg1 propertiesToUpdate:(id)arg2 ;
-(id)callRecordContext;
-(id)fetchAll;
-(void)handleCallDBPropContextDidSaveNotification:(id)arg1 ;
-(id)timerIncoming;
-(void)mergeCallRecordChangesFromRemoteAppSave;
-(NSString *)objectId;
-(BOOL)performSaveWithBackgroundTaskAssertion:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetAllTimers;
-(void)registerForNotifications:(id)arg1 ;
-(unsigned long long)fetchManagedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(long long)deleteManagedCalls:(id)arg1 ;
-(long long)deleteManagedCallsWithPredicate:(id)arg1 ;
-(void)handlePersistentStoreChangedNotification:(id)arg1 ;
-(id)fetchObjectWithUniqueId:(id)arg1 ;
-(BOOL)handleSaveForCallRecordContext:(id)arg1 error:(id*)arg2 ;
-(id)fetchManagedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 ;
-(id)fetchObjectsWithUniqueIds:(id)arg1 ;
-(void)deleteObjectWithUniqueId:(id)arg1 ;
-(id)fetchWithCallTypes:(unsigned)arg1 ;
-(void)dealloc;
-(id)createCallRecord;
-(id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 ;
@end

