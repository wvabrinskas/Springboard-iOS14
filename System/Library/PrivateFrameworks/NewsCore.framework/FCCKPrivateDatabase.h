/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCCKDatabaseEncryptionDelegate, OS_dispatch_queue, OS_dispatch_group;
@class FCNetworkBehaviorMonitor, NSData, CKRecord, NFLazy, FCCKPrivateDatabaseSchema, NSObject, NSOperationQueue, NSArray, NSDate;

@interface FCCKPrivateDatabase : NSObject {

	BOOL _encryptionEnabled;
	BOOL _secureSubscriptionsEnabled;
	BOOL _encryptionRequired;
	BOOL _beganInitialStartUp;
	BOOL _finishedInitialStartUp;
	BOOL _activelyStartingUp;
	id<FCCKDatabaseEncryptionDelegate> _encryptionDelegate;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	NSData* _encryptionKey;
	NSData* _secureEncryptionKey;
	CKRecord* _sentinelRecord;
	NFLazy* _ckProperties;
	FCCKPrivateDatabaseSchema* _schema;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _serialOperationQueue;
	NSOperationQueue* _noPreflightOperationQueue;
	NSArray* _middleware;
	NSArray* _remainingStartUpMiddleware;
	NSArray* _operationMiddleware;
	NSArray* _recordMiddleware;
	NSObject*<OS_dispatch_group> _initialStartUpGroup;
	long long _startUpResult;
	unsigned long long _countOfFailedStartUpAttempts;
	NSDate* _dateOfLastFailedStartUpAttempt;
	NSArray* _zoneRestorationSources;
	NSArray* _zonePruningAssistants;

}

@property (nonatomic,retain) NFLazy * ckProperties;                                                       //@synthesize ckProperties=_ckProperties - In the implementation block
@property (nonatomic,retain) FCCKPrivateDatabaseSchema * schema;                                          //@synthesize schema=_schema - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;                                     //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * noPreflightOperationQueue;                                //@synthesize noPreflightOperationQueue=_noPreflightOperationQueue - In the implementation block
@property (nonatomic,retain) NSArray * middleware;                                                        //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) NSArray * remainingStartUpMiddleware;                                        //@synthesize remainingStartUpMiddleware=_remainingStartUpMiddleware - In the implementation block
@property (nonatomic,retain) NSArray * operationMiddleware;                                               //@synthesize operationMiddleware=_operationMiddleware - In the implementation block
@property (nonatomic,retain) NSArray * recordMiddleware;                                                  //@synthesize recordMiddleware=_recordMiddleware - In the implementation block
@property (assign,nonatomic) BOOL beganInitialStartUp;                                                    //@synthesize beganInitialStartUp=_beganInitialStartUp - In the implementation block
@property (assign,nonatomic) BOOL finishedInitialStartUp;                                                 //@synthesize finishedInitialStartUp=_finishedInitialStartUp - In the implementation block
@property (assign,nonatomic) BOOL activelyStartingUp;                                                     //@synthesize activelyStartingUp=_activelyStartingUp - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> initialStartUpGroup;                            //@synthesize initialStartUpGroup=_initialStartUpGroup - In the implementation block
@property (assign,nonatomic) long long startUpResult;                                                     //@synthesize startUpResult=_startUpResult - In the implementation block
@property (assign,nonatomic) unsigned long long countOfFailedStartUpAttempts;                             //@synthesize countOfFailedStartUpAttempts=_countOfFailedStartUpAttempts - In the implementation block
@property (nonatomic,retain) NSDate * dateOfLastFailedStartUpAttempt;                                     //@synthesize dateOfLastFailedStartUpAttempt=_dateOfLastFailedStartUpAttempt - In the implementation block
@property (nonatomic,readonly) NSArray * zoneRestorationSources;                                          //@synthesize zoneRestorationSources=_zoneRestorationSources - In the implementation block
@property (nonatomic,readonly) NSArray * zonePruningAssistants;                                           //@synthesize zonePruningAssistants=_zonePruningAssistants - In the implementation block
@property (nonatomic,readonly) NSArray * zoneIDsUsingSecureContainer; 
@property (nonatomic,__weak,readonly) id<FCCKDatabaseEncryptionDelegate> encryptionDelegate;              //@synthesize encryptionDelegate=_encryptionDelegate - In the implementation block
@property (nonatomic,readonly) FCNetworkBehaviorMonitor * networkBehaviorMonitor;                         //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (getter=isEncryptionEnabled) BOOL encryptionEnabled;                                            //@synthesize encryptionEnabled=_encryptionEnabled - In the implementation block
@property (getter=areSecureSubscriptionsEnabled) BOOL secureSubscriptionsEnabled;                         //@synthesize secureSubscriptionsEnabled=_secureSubscriptionsEnabled - In the implementation block
@property (getter=isEncryptionRequired) BOOL encryptionRequired;                                          //@synthesize encryptionRequired=_encryptionRequired - In the implementation block
@property (retain) NSData * encryptionKey;                                                                //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (retain) NSData * secureEncryptionKey;                                                          //@synthesize secureEncryptionKey=_secureEncryptionKey - In the implementation block
@property (retain) CKRecord * sentinelRecord;                                                             //@synthesize sentinelRecord=_sentinelRecord - In the implementation block
@property (getter=isStartingUp,nonatomic,readonly) BOOL startingUp; 
@property (getter=isOnline,nonatomic,readonly) BOOL online; 
@property (getter=isTemporarilySuspended,nonatomic,readonly) BOOL temporarilySuspended; 
+(id)testingDatabaseWithCKDatabase:(id)arg1 middleware:(id)arg2 schema:(id)arg3 ;
+(id)testingDatabaseWithCKDatabase:(id)arg1 middleware:(id)arg2 ;
+(id)sensitiveSubscriptionsZoneSchema;
+(id)testingDatabase;
+(/*^block*/id)_privateDatabaseDeprecatedRecordTestBlock;
+(id)subscriptionsZoneSchema;
+(id)privateDatabaseSchema;
+(id)subscriptionFields;
+(id)testingDatabaseWithCKDatabase:(id)arg1 middleware:(id)arg2 schema:(id)arg3 encryptionDelegate:(id)arg4 ;
-(void)setSchema:(FCCKPrivateDatabaseSchema *)arg1 ;
-(FCCKPrivateDatabaseSchema *)schema;
-(NSData *)encryptionKey;
-(void)reportPostMigrationCleanupError:(id)arg1 ;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(void)setMiddleware:(NSArray *)arg1 ;
-(NSArray *)middleware;
-(id)_serverToClientRecord:(id)arg1 ;
-(BOOL)activelyStartingUp;
-(void)_preflightRecordsInModifyOperation:(id)arg1 ;
-(CKRecord *)sentinelRecord;
-(void)setInitialStartUpGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)t_performStartUpWithCompletion:(/*^block*/id)arg1 ;
-(void)setRemainingStartUpMiddleware:(NSArray *)arg1 ;
-(NSOperationQueue *)noPreflightOperationQueue;
-(BOOL)isOnline;
-(void)setBeganInitialStartUp:(BOOL)arg1 ;
-(id)initWithContainerIdentifier:(id)arg1 secureContainerIdentifier:(id)arg2 productionEnvironment:(BOOL)arg3 encryptionDelegate:(id)arg4 networkBehaviorMonitor:(id)arg5 privateDataSyncingEnabled:(BOOL)arg6 ;
-(NSArray *)operationMiddleware;
-(id)_serverToClientRecordType:(id)arg1 withRecordID:(id)arg2 ;
-(void)_validateClientZones:(id)arg1 ;
-(void)takeDatabaseOfflineDueToError:(id)arg1 ;
-(void)setOperationMiddleware:(NSArray *)arg1 ;
-(NSArray *)zonePruningAssistants;
-(NSData *)secureEncryptionKey;
-(void)addOperation:(id)arg1 ;
-(id)databaseWithZoneWidePCS;
-(NFLazy *)ckProperties;
-(NSArray *)zoneRestorationSources;
-(id)_clientRecordID:(id)arg1 ;
-(id)_serverToClientRecordZoneID:(id)arg1 expectUnknownZones:(BOOL)arg2 ;
-(void)_finishStartUpWithError:(id)arg1 ;
-(BOOL)_doesOperationRequireZoneWidePCS:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)initialStartUpGroup;
-(void)setEncryptionRequired:(BOOL)arg1 ;
-(void)reportEncryptionMigrationError:(id)arg1 ;
-(void)fetchChangesForRecordZoneID:(id)arg1 changeToken:(id)arg2 desiredKeys:(id)arg3 fetchAllChanges:(BOOL)arg4 qualityOfService:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_preflightOperation:(id)arg1 ;
-(id)_serverToClientError:(id)arg1 ;
-(long long)startUpResult;
-(void)setActivelyStartingUp:(BOOL)arg1 ;
-(id)_clientToServerRecord:(id)arg1 ;
-(void)setSentinelRecord:(CKRecord *)arg1 ;
-(void)_preflightZonesIDsInFetchZonesOperation:(id)arg1 ;
-(void)registerZonePruningAssistants:(id)arg1 ;
-(BOOL)isStartingUp;
-(id)_recordZoneIDsFromOperation:(id)arg1 ;
-(void)_possiblySimulateCrashForError:(id)arg1 message:(id)arg2 ;
-(BOOL)_doesOperationRequireSecureContainer:(id)arg1 ;
-(NSArray *)zoneIDsUsingSecureContainer;
-(BOOL)isEncryptionEnabled;
-(void)setSecureSubscriptionsEnabled:(BOOL)arg1 ;
-(id)_mapRecordZoneIDs:(id)arg1 toClient:(BOOL)arg2 ;
-(id)_clientToServerRecordZoneID:(id)arg1 ;
-(void)_addCKOperation:(id)arg1 destination:(long long)arg2 ;
-(void)_preflightRecordsInFetchOperation:(id)arg1 ;
-(void)_possiblyRetryStartUp;
-(id)_serverToClientRecordZoneID:(id)arg1 ;
-(BOOL)isEncryptionRequired;
-(id)initWithCKProperties:(id)arg1 schema:(id)arg2 middleware:(id)arg3 encryptionDelegate:(id)arg4 networkBehaviorMonitor:(id)arg5 ;
-(id)secureDatabase;
-(void)registerZoneRestorationSources:(id)arg1 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(BOOL)areSecureSubscriptionsEnabled;
-(void)fetchAllDatabaseChangesWithServerChangeToken:(id)arg1 qualityOfService:(long long)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setSecureEncryptionKey:(NSData *)arg1 ;
-(void)_preflightRecordsInRecordZoneChangesOperation:(id)arg1 ;
-(void)enumerateActiveDestinationsWithOptions:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)_mapObjects:(id)arg1 withRecordMiddlewareBlock:(/*^block*/id)arg2 ;
-(void)reportFatalStartUpError:(id)arg1 ;
-(id)_mapRecordZoneIDs:(id)arg1 toClient:(BOOL)arg2 expectUnknownZones:(BOOL)arg3 ;
-(void)setEncryptionEnabled:(BOOL)arg1 ;
-(void)setCkProperties:(NFLazy *)arg1 ;
-(void)_validateClientRecords:(id)arg1 ;
-(void)_continueStartUp;
-(BOOL)beganInitialStartUp;
-(id)_queueForOperation:(id)arg1 ;
-(unsigned long long)countOfFailedStartUpAttempts;
-(void)addCKOperation:(id)arg1 destination:(long long)arg2 ;
-(void)addCKOperationNoPreflight:(id)arg1 destination:(long long)arg2 ;
-(id)_mapZones:(id)arg1 toClient:(BOOL)arg2 ;
-(id<FCCKDatabaseEncryptionDelegate>)encryptionDelegate;
-(BOOL)isTemporarilySuspended;
-(void)fetchSecureDatabaseSupportedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFinishedInitialStartUp:(BOOL)arg1 ;
-(void)_preflightRecordsInDatabaseChangesOperation:(id)arg1 ;
-(void)enumeratePayloadsWithRecordIDs:(id)arg1 records:(id)arg2 zoneIDs:(id)arg3 zones:(id)arg4 options:(long long)arg5 payloadHandler:(/*^block*/id)arg6 ;
-(NSDate *)dateOfLastFailedStartUpAttempt;
-(id)_mapRecords:(id)arg1 toClient:(BOOL)arg2 ;
-(void)reportRecoverableStartUpError:(id)arg1 ;
-(id)_mapRecordIDs:(id)arg1 toClient:(BOOL)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)finishedInitialStartUp;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setRecordMiddleware:(NSArray *)arg1 ;
-(id)_serverRecordID:(id)arg1 ;
-(id)database;
-(NSOperationQueue *)serialOperationQueue;
-(id)pruningAssistantForZoneName:(id)arg1 ;
-(void)setDateOfLastFailedStartUpAttempt:(NSDate *)arg1 ;
-(void)setNoPreflightOperationQueue:(NSOperationQueue *)arg1 ;
-(id)_serverToClientZone:(id)arg1 ;
-(void)setStartUpResult:(long long)arg1 ;
-(id)t_initWithContainers:(id)arg1 database:(id)arg2 databaseWithZoneWidePCS:(id)arg3 secureDatabase:(id)arg4 schema:(id)arg5 middleware:(id)arg6 encryptionDelegate:(id)arg7 networkBehaviorMonitor:(id)arg8 ;
-(NSArray *)recordMiddleware;
-(void)_beginInitialStartUpIfNeeded;
-(NSArray *)remainingStartUpMiddleware;
-(void)setCountOfFailedStartUpAttempts:(unsigned long long)arg1 ;
-(void)_preflightZoneIDsInModifyZonesOperation:(id)arg1 ;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
-(void)_cancelOperation:(id)arg1 ;
@end

