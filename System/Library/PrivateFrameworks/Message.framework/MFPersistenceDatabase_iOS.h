/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailDaemon/EDPersistenceDatabase.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/MFMailMessageLibraryMigratorDelegate.h>

@class NSMutableArray, NSString;

@interface MFPersistenceDatabase_iOS : EDPersistenceDatabase <EFLoggable, MFMailMessageLibraryMigratorDelegate> {

	BOOL _migrationHasRun;
	BOOL _createdTempTable;
	id _migrationLock;
	NSMutableArray* _postMigrationSteps;

}

@property (nonatomic,readonly) id migrationLock;                               //@synthesize migrationLock=_migrationLock - In the implementation block
@property (assign,nonatomic) BOOL migrationHasRun;                             //@synthesize migrationHasRun=_migrationHasRun - In the implementation block
@property (assign,nonatomic) BOOL createdTempTable;                            //@synthesize createdTempTable=_createdTempTable - In the implementation block
@property (nonatomic,retain) NSMutableArray * postMigrationSteps;              //@synthesize postMigrationSteps=_postMigrationSteps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)openConnectionIsWriter:(BOOL)arg1 ;
-(id)checkOutConnectionIsWriter:(BOOL)arg1 ;
-(BOOL)enforceDataProtection;
-(NSMutableArray *)postMigrationSteps;
-(void)setMigrationHasRun:(BOOL)arg1 ;
-(id)migrationLock;
-(BOOL)createdTempTable;
-(BOOL)migrationHasRun;
-(void)setPostMigrationSteps:(NSMutableArray *)arg1 ;
-(void)mailMessageLibraryMigratorScheduleSpotlightReindex:(id)arg1 ;
-(BOOL)_migrateWithDatabaseConnection:(id)arg1 migrator:(id)arg2 ;
-(void)setCreatedTempTable:(BOOL)arg1 ;
-(void)mailMessageLibraryMigrator:(id)arg1 detachProtectedDatabaseWithConnection:(id)arg2 ;
-(void)checkInConnection:(id)arg1 ;
-(BOOL)mailMessageLibraryMigrator:(id)arg1 attachProtectedDatabaseWithName:(id)arg2 connection:(id)arg3 error:(id*)arg4 ;
-(id)initWithBasePath:(id)arg1 databaseName:(id)arg2 maxConcurrentReaders:(unsigned long long)arg3 schema:(id)arg4 protectedSchema:(id)arg5 propertyMapper:(id)arg6 protectedDatabasePersistence:(id)arg7 ;
-(void)mailMessageLibraryMigrator:(id)arg1 isInitializingDatabaseWithConnection:(id)arg2 ;
-(void)addPostMigrationStep:(id)arg1 ;
@end
