/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HDSQLiteDatabaseProvider;
@class NSMutableArray, HDSQLiteDatabase, HDHFDataStore, HDDatabaseTransactionContext;

@interface HDDatabaseTransaction : NSObject {

	id<HDSQLiteDatabaseProvider> _databaseProvider;
	NSMutableArray* _onCommitBlocks;
	NSMutableArray* _onRollbackBlocks;
	BOOL _isActive;
	BOOL _isOutermostTransactionUnprotected;
	BOOL _isHandlingTransactionEnd;
	BOOL _performingMigration;
	HDSQLiteDatabase* _unprotectedDatabase;
	HDSQLiteDatabase* _protectedDatabase;
	HDHFDataStore* _highFrequencyDataStore;
	HDDatabaseTransactionContext* _rootContext;

}

@property (nonatomic,copy,readonly) HDDatabaseTransactionContext * rootContext;              //@synthesize rootContext=_rootContext - In the implementation block
@property (assign,nonatomic) BOOL performingMigration;                                       //@synthesize performingMigration=_performingMigration - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabase * unprotectedDatabase;                       //@synthesize unprotectedDatabase=_unprotectedDatabase - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabase * protectedDatabase;                         //@synthesize protectedDatabase=_protectedDatabase - In the implementation block
@property (nonatomic,readonly) HDHFDataStore * highFrequencyDataStore;                       //@synthesize highFrequencyDataStore=_highFrequencyDataStore - In the implementation block
@property (nonatomic,readonly) long long cacheScope; 
-(long long)cacheScope;
-(void)onCommit:(/*^block*/id)arg1 orRollback:(/*^block*/id)arg2 ;
-(void)setPerformingMigration:(BOOL)arg1 ;
-(HDSQLiteDatabase *)protectedDatabase;
-(id)initWithDatabaseProvider:(id)arg1 rootContext:(id)arg2 ;
-(HDSQLiteDatabase *)unprotectedDatabase;
-(id)databaseForEntity:(id)arg1 ;
-(HDHFDataStore *)highFrequencyDataStore;
-(void)transactionDidEndWithError:(id)arg1 ;
-(BOOL)performWithContext:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 inaccessibilityHandler:(/*^block*/id)arg4 ;
-(void)requireRollback;
-(void)requestTransactionInterruption;
-(id)databaseForEntityClass:(Class)arg1 ;
-(HDDatabaseTransactionContext *)rootContext;
-(id)databaseForEntityProtectionClass:(long long)arg1 ;
-(BOOL)performingMigration;
-(void)dealloc;
@end

