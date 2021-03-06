/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSLock, NSXPCConnection;

@interface BYBuddyDaemonGeneralClient : NSObject {

	NSLock* _connectionLock;
	NSXPCConnection* _connection;

}
+(/*^block*/id)factory;
-(id)_daemonConnection;
-(id)init;
-(id)backupMetadata;
-(void)getInternalSkipInfo:(/*^block*/id)arg1 ;
-(void)deferDataMigratorExit;
-(BOOL)setupAssistantNeedsToRun;
-(void)ensureSilentLoginUpgrade;
-(void)ensureShortLivedTokenUpgrade;
-(void)observeFinishSetupTriggers;
-(void)performSilentICDPUpgrade;
-(void)cancelDataMigratorDeferredExit;
-(void)setInternalShouldSkipFlows:(BOOL)arg1 skipExceptions:(id)arg2 ;
-(void)cancelInternalSkipInfo;
@end

