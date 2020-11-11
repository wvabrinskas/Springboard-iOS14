/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class DMXPCConnection;

@interface DMConnection : NSObject {

	DMXPCConnection* _connection;

}
+(id)connection;
-(id)orderedPluginIdentifiers;
-(id)init;
-(void)changeVisibility:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned)arg1 ;
-(void)migrationPluginResults:(/*^block*/id)arg1 ;
-(void)testMigrationUIWithProgress:(BOOL)arg1 forceInvert:(BOOL)arg2 ;
-(id)migrationPhaseDescription;
-(long long)migrateCheckingNecessity:(BOOL)arg1 lastRelevantPlugin:(id)arg2 testMigrationInfrastructureOnly:(BOOL)arg3 ;
-(void)cancelDeferredExit;
-(void)reportMigrationFailure;
-(id)previousBuildVersion;
-(void)deferExit;
-(unsigned)userDataDisposition;
-(void)dealloc;
-(BOOL)isMigrationNeeded;
@end
