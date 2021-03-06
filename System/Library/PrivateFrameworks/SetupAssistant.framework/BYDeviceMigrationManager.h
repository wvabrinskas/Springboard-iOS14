/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <SetupAssistant/SetupAssistant-Structs.h>
@class NSError, RPFileTransferSession, MBDeviceTransferTask, BKSProcessAssertion, NSHashTable, MBDeviceTransferConnectionInfo, MBDeviceTransferProgress, NSObject;

@interface BYDeviceMigrationManager : NSObject {

	BOOL _willMigrate;
	BOOL _migrating;
	int _passcodeChangeNotificationToken;
	NSError* _error;
	RPFileTransferSession* _fileTransferSession;
	MBDeviceTransferTask* _deviceTransferTask;
	BKSProcessAssertion* _processAssertion;
	MKBAssertionRef _deviceLockAssertion;
	NSHashTable* _delegates;
	MBDeviceTransferConnectionInfo* _connectionInfo;
	MBDeviceTransferProgress* _progressInfo;
	unsigned long long _bytesTransferred;
	unsigned long long _filesTransferred;
	double _durationOfTransfer;
	double _durationOfRestore;
	long long _cancellationCause;
	NSObject*<OS_dispatch_queue> _migrationQueue;

}

@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (assign,getter=isMigrating,nonatomic) BOOL migrating;                            //@synthesize migrating=_migrating - In the implementation block
@property (nonatomic,retain) RPFileTransferSession * fileTransferSession;                  //@synthesize fileTransferSession=_fileTransferSession - In the implementation block
@property (nonatomic,retain) MBDeviceTransferTask * deviceTransferTask;                    //@synthesize deviceTransferTask=_deviceTransferTask - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * processAssertion;                       //@synthesize processAssertion=_processAssertion - In the implementation block
@property (assign,nonatomic) MKBAssertionRef deviceLockAssertion;                          //@synthesize deviceLockAssertion=_deviceLockAssertion - In the implementation block
@property (assign,nonatomic) int passcodeChangeNotificationToken;                          //@synthesize passcodeChangeNotificationToken=_passcodeChangeNotificationToken - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                                      //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) MBDeviceTransferConnectionInfo * connectionInfo;              //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (nonatomic,retain) MBDeviceTransferProgress * progressInfo;                      //@synthesize progressInfo=_progressInfo - In the implementation block
@property (assign,nonatomic) unsigned long long bytesTransferred;                          //@synthesize bytesTransferred=_bytesTransferred - In the implementation block
@property (assign,nonatomic) unsigned long long filesTransferred;                          //@synthesize filesTransferred=_filesTransferred - In the implementation block
@property (assign,nonatomic) double durationOfTransfer;                                    //@synthesize durationOfTransfer=_durationOfTransfer - In the implementation block
@property (assign,nonatomic) double durationOfRestore;                                     //@synthesize durationOfRestore=_durationOfRestore - In the implementation block
@property (assign,nonatomic) long long cancellationCause;                                  //@synthesize cancellationCause=_cancellationCause - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> migrationQueue;                  //@synthesize migrationQueue=_migrationQueue - In the implementation block
@property (assign,nonatomic) BOOL willMigrate;                                             //@synthesize willMigrate=_willMigrate - In the implementation block
+(id)createDeviceTransferTask:(id)arg1 ;
-(NSHashTable *)delegates;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)start;
-(void)didCancel;
-(BOOL)isMigrating;
-(NSError *)error;
-(RPFileTransferSession *)fileTransferSession;
-(void)setFileTransferSession:(RPFileTransferSession *)arg1 ;
-(void)setProcessAssertion:(BKSProcessAssertion *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setFilesTransferred:(unsigned long long)arg1 ;
-(void)setBytesTransferred:(unsigned long long)arg1 ;
-(unsigned long long)filesTransferred;
-(unsigned long long)bytesTransferred;
-(MBDeviceTransferConnectionInfo *)connectionInfo;
-(NSObject*<OS_dispatch_queue>)migrationQueue;
-(BKSProcessAssertion *)processAssertion;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(void)setConnectionInfo:(MBDeviceTransferConnectionInfo *)arg1 ;
-(void)dealloc;
-(MKBAssertionRef)deviceLockAssertion;
-(BOOL)takeAssertions;
-(void)setDeviceTransferTask:(MBDeviceTransferTask *)arg1 ;
-(MBDeviceTransferTask *)deviceTransferTask;
-(void)setProgressInfo:(MBDeviceTransferProgress *)arg1 ;
-(void)setDurationOfTransfer:(double)arg1 ;
-(void)setDurationOfRestore:(double)arg1 ;
-(void)didCompleteWithError:(id)arg1 ;
-(void)releaseAssertions;
-(void)setMigrating:(BOOL)arg1 ;
-(void)startDeviceTransferTask;
-(void)setWillMigrate:(BOOL)arg1 ;
-(void)cancelDeviceTransferTask;
-(void)setCancellationCause:(long long)arg1 ;
-(MBDeviceTransferProgress *)progressInfo;
-(BOOL)requiresProcessAssertion;
-(MKBAssertionRef)acquireDeviceLockAssertion;
-(void)setDeviceLockAssertion:(MKBAssertionRef)arg1 ;
-(void)_reacquireDeviceLockAssertion;
-(void)setPasscodeChangeNotificationToken:(int)arg1 ;
-(int)passcodeChangeNotificationToken;
-(BOOL)_hasAssertions;
-(id)initWithFileTranferSession:(id)arg1 ;
-(void)cancelWithCause:(long long)arg1 ;
-(void)restartDeviceTransferTask:(id)arg1 ;
-(BOOL)willMigrate;
-(double)durationOfTransfer;
-(double)durationOfRestore;
-(long long)cancellationCause;
-(void)setMigrationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

