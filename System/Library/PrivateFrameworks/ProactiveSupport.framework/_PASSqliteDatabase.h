/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _PASSqliteErrorHandlerProtocol;
#import <ProactiveSupport/ProactiveSupport-Structs.h>
@class NSObject, NSString, NSMutableArray, NSMutableDictionary, NSCache;

@interface _PASSqliteDatabase : NSObject {

	sqlite3Ref _db;
	int _transactionDepth;
	BOOL _transactionRolledback;
	atomic_flag _isClosed;
	NSObject*<_PASSqliteErrorHandlerProtocol> _errorHandler;
	NSString* _filename;
	opaque_pthread_mutex_t _lock;
	NSMutableArray* _statementsToFinalizeAsync;
	BOOL _currentExclusivity;
	NSMutableDictionary* _explainedQueryForPlan;
	NSCache* _explainedQueriesLogged;
	_sFILE* _explainedQueriesLogFile;
	BOOL _isInMemory;
	long long _contentProtectionType;

}

@property (nonatomic,readonly) sqlite3Ref handle; 
@property (nonatomic,readonly) long long contentProtectionType;              //@synthesize contentProtectionType=_contentProtectionType - In the implementation block
@property (nonatomic,readonly) NSString * filename;                          //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) BOOL isInMemory;                              //@synthesize isInMemory=_isInMemory - In the implementation block
+(id)initializeDatabase:(id)arg1 withContentProtection:(long long)arg2 newDatabaseCreated:(BOOL*)arg3 ;
+(id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3 errorHandler:(id)arg4 ;
+(void)truncateDatabaseAtPath:(id)arg1 ;
+(id)sqliteDatabaseWithFilename:(id)arg1 contentProtection:(long long)arg2 errorHandler:(id)arg3 error:(id*)arg4 ;
+(id)randomlyNamedInMemoryPathWithBaseName:(id)arg1 ;
+(id)sqliteDatabaseWithFilename:(id)arg1 contentProtection:(long long)arg2 error:(id*)arg3 ;
+(id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3 ;
+(id)sqliteDatabaseWithFilename:(id)arg1 error:(id*)arg2 ;
+(void)runDebugCommand:(const char*)arg1 onDbWithHandle:(id)arg2 ;
+(id)recreateCorruptDatabase:(id)arg1 withContentProtection:(long long)arg2 ;
+(id)corruptionMarkerPathForPath:(id)arg1 ;
+(id)sqliteDatabaseInMemoryWithError:(id*)arg1 ;
+(id)initializeDatabase:(id)arg1 withProtection:(BOOL)arg2 newDatabaseCreated:(BOOL*)arg3 ;
+(BOOL)contentProtectionTypeRequiresDeviceToBeUnlocked:(long long)arg1 ;
+(id)initializeDatabase:(id)arg1 withContentProtection:(long long)arg2 newDatabaseCreated:(BOOL*)arg3 errorHandler:(id)arg4 ;
+(id)protectedDatabaseWithFilename:(id)arg1 error:(id*)arg2 errorHandler:(id)arg3 ;
+(id)protectedDatabaseWithFilename:(id)arg1 error:(id*)arg2 ;
+(id)inMemoryPath;
+(BOOL)isInMemoryPath:(id)arg1 ;
+(id)sqliteDatabaseWithFilename:(id)arg1 error:(id*)arg2 errorHandler:(id)arg3 ;
+(id)sqliteDatabaseInMemoryWithError:(id*)arg1 errorHandler:(id)arg2 ;
+(BOOL)contentProtectionTypeRequiresDeviceToHaveBeenUnlockedOnce:(long long)arg1 ;
-(void)clearCaches;
-(void)writeTransaction:(/*^block*/id)arg1 ;
-(sqlite3Ref)handle;
-(void)simulateOnDiskDatabase;
-(id)dbErrorWithCode:(unsigned long long)arg1 sqliteReturnValue:(int)arg2 lastErrno:(int)arg3 query:(id)arg4 ;
-(id)init;
-(void)closePermanently;
-(BOOL)hasColumnOnTable:(id)arg1 named:(id)arg2 ;
-(BOOL)isInMemory;
-(id)tablesWithColumnNamed:(id)arg1 ;
-(NSString *)filename;
-(id)description;
-(BOOL)prepAndRunQuery:(id)arg1 onPrep:(/*^block*/id)arg2 onRow:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
-(PASDBTransactionCompletion_)writeTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(PASDBTransactionCompletion_)readTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(BOOL)hasIndexNamed:(id)arg1 ;
-(id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3 errorHandler:(id)arg4 ;
-(void)_txnBegin;
-(BOOL)prepAndRunNonDataQueries:(id)arg1 onError:(/*^block*/id)arg2 ;
-(id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3 ;
-(BOOL)runQuery:(id)arg1 onRow:(/*^block*/id)arg2 ;
-(void)_logQueryPlanForQuery:(id)arg1 ;
-(BOOL)_isLikelySQLStatementContainedInString:(const char*)arg1 ;
-(BOOL)prepQuery:(id)arg1 onPrep:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 ;
-(void)insertIntoTable:(id)arg1 dictionary:(id)arg2 ;
-(void)_txnBeginExclusive;
-(void)_txnRollback;
-(PASDBTransactionCompletion_)_transactionWithExclusivity:(BOOL)arg1 transaction:(/*^block*/id)arg2 ;
-(void)withDbLockExecuteBlock:(/*^block*/id)arg1 ;
-(void)finalizeLater:(sqlite3_stmtRef)arg1 ;
-(BOOL)enableQueryPlanLoggingWithPath:(id)arg1 ;
-(void)disableQueryPlanLogging;
-(void)_txnEnd;
-(BOOL)runQuery:(id)arg1 onRow:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 ;
-(id)freeSpace;
-(void)_prepAndRunQuery:(id)arg1 columns:(id)arg2 dictionary:(id)arg3 onError:(/*^block*/id)arg4 ;
-(BOOL)frailWriteTransaction:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfRowsInTable:(id)arg1 ;
-(BOOL)createSnapshot:(id)arg1 ;
-(BOOL)handleError:(long long)arg1 sqliteError:(int)arg2 forQuery:(id)arg3 onError:(/*^block*/id)arg4 ;
-(void)insertOrReplaceIntoTable:(id)arg1 dictionary:(id)arg2 onError:(/*^block*/id)arg3 ;
-(unsigned)userVersion;
-(void)updateTable:(id)arg1 dictionary:(id)arg2 whereClause:(id)arg3 onError:(/*^block*/id)arg4 ;
-(BOOL)hasTableNamed:(id)arg1 ;
-(id)selectColumns:(id)arg1 fromTable:(id)arg2 whereClause:(id)arg3 onPrep:(/*^block*/id)arg4 onError:(/*^block*/id)arg5 ;
-(void)placeCorruptionMarker;
-(BOOL)setUserVersion:(unsigned)arg1 ;
-(long long)lastInsertRowId;
-(BOOL)frailReadTransaction:(/*^block*/id)arg1 ;
-(void)readTransaction:(/*^block*/id)arg1 ;
-(long long)contentProtectionType;
-(id)languageForFTSTable:(id)arg1 ;
-(void)dealloc;
@end

