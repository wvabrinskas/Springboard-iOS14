/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BYBuddyDaemonProximitySourceProtocol.h>
#import <libobjc.A.dylib/SASProximitySessionDelegate.h>

@class CUMessageSession, RPFileTransferSession, BYBuddyDaemonProximitySourceClient, BYBuddyDaemonMigrationSourceClient, NSString;

@interface BYDeviceSetupSourceSession : NSObject <BYBuddyDaemonProximitySourceProtocol, SASProximitySessionDelegate> {

	BOOL _hasBackupCompleted;
	BOOL _hasSyncCompleted;
	/*^block*/id _sendObjectHandler;
	/*^block*/id _progressHandler;
	CUMessageSession* _messageSession;
	RPFileTransferSession* _fileTransferSessionTemplate;
	BYBuddyDaemonProximitySourceClient* _client;
	BYBuddyDaemonMigrationSourceClient* _migrationSourceClient;
	double _backupProgress;
	double _syncProgress;
	double _timeRemaining;
	unsigned long long _currentPhase;

}

@property (retain) BYBuddyDaemonProximitySourceClient * client;                                       //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) BYBuddyDaemonMigrationSourceClient * migrationSourceClient;              //@synthesize migrationSourceClient=_migrationSourceClient - In the implementation block
@property (assign) double backupProgress;                                                             //@synthesize backupProgress=_backupProgress - In the implementation block
@property (assign) double syncProgress;                                                               //@synthesize syncProgress=_syncProgress - In the implementation block
@property (assign) BOOL hasBackupCompleted;                                                           //@synthesize hasBackupCompleted=_hasBackupCompleted - In the implementation block
@property (assign) BOOL hasSyncCompleted;                                                             //@synthesize hasSyncCompleted=_hasSyncCompleted - In the implementation block
@property (assign) double timeRemaining;                                                              //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (assign) unsigned long long currentPhase;                                                   //@synthesize currentPhase=_currentPhase - In the implementation block
@property (nonatomic,copy) id sendObjectHandler;                                                      //@synthesize sendObjectHandler=_sendObjectHandler - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,retain) CUMessageSession * messageSession;                                       //@synthesize messageSession=_messageSession - In the implementation block
@property (nonatomic,retain) RPFileTransferSession * fileTransferSessionTemplate;                     //@synthesize fileTransferSessionTemplate=_fileTransferSessionTemplate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CUMessageSession *)messageSession;
-(double)syncProgress;
-(void)setCurrentPhase:(unsigned long long)arg1 ;
-(void)setTimeRemaining:(double)arg1 ;
-(BOOL)hasBackupCompleted;
-(double)backupProgress;
-(double)timeRemaining;
-(void)setBackupProgress:(double)arg1 ;
-(void)setHasBackupCompleted:(BOOL)arg1 ;
-(void)setSyncProgress:(double)arg1 ;
-(void)setHasSyncCompleted:(BOOL)arg1 ;
-(void)finishedWithError:(id)arg1 ;
-(void)backupProgress:(double)arg1 estimatedTimeRemaining:(long long)arg2 ;
-(void)backupCompletedWithError:(id)arg1 ;
-(void)receivedObject:(id)arg1 ;
-(id)sendObjectHandler;
-(void)setSendObjectHandler:(id)arg1 ;
-(BOOL)hasSyncCompleted;
-(void)setMessageSession:(CUMessageSession *)arg1 ;
-(id)progressHandler;
-(void)setClient:(BYBuddyDaemonProximitySourceClient *)arg1 ;
-(void)activate;
-(BYBuddyDaemonProximitySourceClient *)client;
-(unsigned long long)currentPhase;
-(void)setProgressHandler:(id)arg1 ;
-(RPFileTransferSession *)fileTransferSessionTemplate;
-(void)setFileTransferSessionTemplate:(RPFileTransferSession *)arg1 ;
-(void)updateProgress;
-(void)syncProgress:(double)arg1 ;
-(void)syncCompletedWithErrors:(id)arg1 ;
-(void)invalidate;
-(BYBuddyDaemonMigrationSourceClient *)migrationSourceClient;
-(void)setMigrationSourceClient:(BYBuddyDaemonMigrationSourceClient *)arg1 ;
@end
