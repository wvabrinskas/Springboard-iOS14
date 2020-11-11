/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libBKDM1.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <libBKDM1.dylib/libBKDM1.dylib-Structs.h>
@class ADStorage, NSMutableDictionary, NSString, NSDate, BiometricKitXPCServerMesa;

@interface BiometricKitDStatistics : NSObject {

	ADStorage* _storage;
	BOOL _fingerOn;
	BOOL _unlockOperationInProgress;
	BOOL _unlockOperationStartedByCommand;
	BOOL _matchOperationInProgress;
	BOOL _haveMatchResult;
	BOOL _waitingForMatchResult;
	BOOL _haveImageToProcess;
	BOOL _matchWithDesensePauseLogged;
	BOOL _deviceWokeUpByHomeButton;
	BOOL _deviceWokeUpByLiftToWake;
	BOOL _pressureMitigationUsed;
	BOOL _prearmedApplePay;
	BOOL _lastMatchResultWakePin;
	BOOL _homeButtonPressedDuringTouch;
	int _lastBioOp;
	int _lastMatchUseCase;
	unsigned _sksLockState;
	unsigned _previousSKSLockState;
	float _modulationRatio;
	NSMutableDictionary* _templateStats;
	long long _lastStartedMatch;
	NSString* _clientName;
	unsigned long long _lastMatchResultID;
	unsigned long long _sensorOperationMode;
	NSDate* _sensorOperationStartDate;
	unsigned long long _imagesPerFingerDown;
	unsigned long long _sensorCaptureRestartsPerFingerDown;
	unsigned long long _imageCaptureRestartsPerFingerDown;
	unsigned long long _failTouchesToUnlock;
	unsigned long long _failQuickTapsToUnlock;
	unsigned long long _failTouchesToMatch;
	unsigned long long _matchRestarts;
	long long _calibrationDataState;
	BiometricKitXPCServerMesa* _server;

}

@property (retain) NSMutableDictionary * templateStats;                                //@synthesize templateStats=_templateStats - In the implementation block
@property (assign) BOOL fingerOn;                                                      //@synthesize fingerOn=_fingerOn - In the implementation block
@property (assign) BOOL unlockOperationInProgress;                                     //@synthesize unlockOperationInProgress=_unlockOperationInProgress - In the implementation block
@property (assign) BOOL unlockOperationStartedByCommand;                               //@synthesize unlockOperationStartedByCommand=_unlockOperationStartedByCommand - In the implementation block
@property (assign) BOOL matchOperationInProgress;                                      //@synthesize matchOperationInProgress=_matchOperationInProgress - In the implementation block
@property (assign) BOOL haveMatchResult;                                               //@synthesize haveMatchResult=_haveMatchResult - In the implementation block
@property (assign) BOOL waitingForMatchResult;                                         //@synthesize waitingForMatchResult=_waitingForMatchResult - In the implementation block
@property (assign) BOOL haveImageToProcess;                                            //@synthesize haveImageToProcess=_haveImageToProcess - In the implementation block
@property (assign) BOOL matchWithDesensePauseLogged;                                   //@synthesize matchWithDesensePauseLogged=_matchWithDesensePauseLogged - In the implementation block
@property (assign) BOOL deviceWokeUpByHomeButton;                                      //@synthesize deviceWokeUpByHomeButton=_deviceWokeUpByHomeButton - In the implementation block
@property (assign) BOOL deviceWokeUpByLiftToWake;                                      //@synthesize deviceWokeUpByLiftToWake=_deviceWokeUpByLiftToWake - In the implementation block
@property (assign) BOOL pressureMitigationUsed;                                        //@synthesize pressureMitigationUsed=_pressureMitigationUsed - In the implementation block
@property (assign) BOOL prearmedApplePay;                                              //@synthesize prearmedApplePay=_prearmedApplePay - In the implementation block
@property (assign) BOOL lastMatchResultWakePin;                                        //@synthesize lastMatchResultWakePin=_lastMatchResultWakePin - In the implementation block
@property (assign) BOOL homeButtonPressedDuringTouch;                                  //@synthesize homeButtonPressedDuringTouch=_homeButtonPressedDuringTouch - In the implementation block
@property (assign) int lastBioOp;                                                      //@synthesize lastBioOp=_lastBioOp - In the implementation block
@property (assign) long long lastStartedMatch;                                         //@synthesize lastStartedMatch=_lastStartedMatch - In the implementation block
@property (assign) int lastMatchUseCase;                                               //@synthesize lastMatchUseCase=_lastMatchUseCase - In the implementation block
@property (retain) NSString * clientName;                                              //@synthesize clientName=_clientName - In the implementation block
@property (assign) unsigned long long lastMatchResultID;                               //@synthesize lastMatchResultID=_lastMatchResultID - In the implementation block
@property (assign) unsigned sksLockState;                                              //@synthesize sksLockState=_sksLockState - In the implementation block
@property (assign) unsigned previousSKSLockState;                                      //@synthesize previousSKSLockState=_previousSKSLockState - In the implementation block
@property (assign) unsigned long long sensorOperationMode;                             //@synthesize sensorOperationMode=_sensorOperationMode - In the implementation block
@property (retain) NSDate * sensorOperationStartDate;                                  //@synthesize sensorOperationStartDate=_sensorOperationStartDate - In the implementation block
@property (assign) unsigned long long imagesPerFingerDown;                             //@synthesize imagesPerFingerDown=_imagesPerFingerDown - In the implementation block
@property (assign) unsigned long long sensorCaptureRestartsPerFingerDown;              //@synthesize sensorCaptureRestartsPerFingerDown=_sensorCaptureRestartsPerFingerDown - In the implementation block
@property (assign) unsigned long long imageCaptureRestartsPerFingerDown;               //@synthesize imageCaptureRestartsPerFingerDown=_imageCaptureRestartsPerFingerDown - In the implementation block
@property (assign) unsigned long long failTouchesToUnlock;                             //@synthesize failTouchesToUnlock=_failTouchesToUnlock - In the implementation block
@property (assign) unsigned long long failQuickTapsToUnlock;                           //@synthesize failQuickTapsToUnlock=_failQuickTapsToUnlock - In the implementation block
@property (assign) unsigned long long failTouchesToMatch;                              //@synthesize failTouchesToMatch=_failTouchesToMatch - In the implementation block
@property (assign) unsigned long long matchRestarts;                                   //@synthesize matchRestarts=_matchRestarts - In the implementation block
@property (assign) long long calibrationDataState;                                     //@synthesize calibrationDataState=_calibrationDataState - In the implementation block
@property (assign) float modulationRatio;                                              //@synthesize modulationRatio=_modulationRatio - In the implementation block
@property (assign) BiometricKitXPCServerMesa * server;                                 //@synthesize server=_server - In the implementation block
+(id)statistics;
+(unsigned)clusterCount:(const SCD_Struct_Bi9*)arg1 ;
-(void)startMatchOperation:(id)arg1 ;
-(void)setLastMatchUseCase:(int)arg1 ;
-(void)setLastBioOp:(int)arg1 ;
-(void)setDeviceWokeUpByHomeButton:(BOOL)arg1 ;
-(BOOL)prearmedApplePay;
-(unsigned long long)totalPrimaryClusterNodeCount;
-(void)setClientName:(NSString *)arg1 ;
-(double)totalPrimaryClusterArea;
-(void)removeIdentity:(id)arg1 ;
-(void)setPressureMitigationUsed:(BOOL)arg1 ;
-(void)matchAttemptFinished:(BOOL)arg1 ;
-(unsigned long long)totalNodeCount;
-(void)setTemplateStats:(NSMutableDictionary *)arg1 ;
-(BOOL)isPasscodeNeeded;
-(BOOL)haveMatchResult;
-(NSMutableDictionary *)templateStats;
-(void)setModulationRatio:(float)arg1 ;
-(void)handleSensorOperationStatusMessage:(unsigned)arg1 ;
-(BOOL)pressureMitigationUsed;
-(void)serviceMatch;
-(unsigned long long)totalClusterCount;
-(void)unlockedByMesa;
-(long long)calibrationDataState;
-(void)statisticsMessage:(SCD_Struct_Bi4*)arg1 ;
-(unsigned long long)lastMatchResultID;
-(unsigned long long)imageCaptureRestartsPerFingerDown;
-(void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 ;
-(void)unlockedByPasscode;
-(void)logTemplateAttributes:(BOOL)arg1 ;
-(void)setPrearmedApplePay:(BOOL)arg1 ;
-(void)updateDailyValues;
-(int)lastBioOp;
-(void)addIdentitity:(id)arg1 ;
-(void)setLastMatchResultID:(unsigned long long)arg1 ;
-(void)postEvent:(id)arg1 ;
-(void)wakeGestureUpdate:(long long)arg1 ;
-(BOOL)haveImageToProcess;
-(int)lastMatchUseCase;
-(BOOL)isMesaEnabled;
-(unsigned)sksLockState;
-(void)setLastMatchResultWakePin:(BOOL)arg1 ;
-(unsigned long long)sensorCaptureRestartsPerFingerDown;
-(BOOL)lastMatchResultWakePin;
-(BiometricKitXPCServerMesa *)server;
-(void)resetMatchCounts;
-(void)setDeviceWokeUpByLiftToWake:(BOOL)arg1 ;
-(void)matchOperationStarted;
-(void)setHaveMatchResult:(BOOL)arg1 ;
-(void)setImagesPerFingerDown:(unsigned long long)arg1 ;
-(BOOL)deviceWokeUpByLiftToWake;
-(unsigned long long)imagesPerFingerDown;
-(void)removeAllIdentities;
-(void)startBioOperation:(id)arg1 ;
-(unsigned long long)failTouchesToMatch;
-(unsigned)previousSKSLockState;
-(BOOL)matchOperationInProgress;
-(unsigned long long)failTouchesToUnlock;
-(void)setMatchOperationInProgress:(BOOL)arg1 ;
-(void)statusMessage:(unsigned)arg1 ;
-(unsigned long long)failQuickTapsToUnlock;
-(BOOL)fingerOn;
-(unsigned long long)sensorOperationMode;
-(void)setMatchWithDesensePauseLogged:(BOOL)arg1 ;
-(void)setMatchRestarts:(unsigned long long)arg1 ;
-(void)setUnlockOperationStartedByCommand:(BOOL)arg1 ;
-(void)setCalibrationDataState:(long long)arg1 ;
-(void)setFingerOn:(BOOL)arg1 ;
-(void)setSksLockState:(unsigned)arg1 ;
-(void)lastImageIsProcessed;
-(void)setFailTouchesToUnlock:(unsigned long long)arg1 ;
-(void)setImageCaptureRestartsPerFingerDown:(unsigned long long)arg1 ;
-(BOOL)deviceWokeUpByHomeButton;
-(id)getSensorSelfTestResult;
-(void)setFailQuickTapsToUnlock:(unsigned long long)arg1 ;
-(BOOL)unlockOperationStartedByCommand;
-(void)logSensorSelfTestInfo;
-(void)setUnlockOperationInProgress:(BOOL)arg1 ;
-(unsigned long long)matchRestarts;
-(BOOL)homeButtonPressedDuringTouch;
-(void)setSensorOperationStartDate:(NSDate *)arg1 ;
-(void)unlockAttemptFinished;
-(void)unlockAttemptStarted:(BOOL)arg1 ;
-(void)setLastStartedMatch:(long long)arg1 ;
-(BOOL)wasPasscodeNeeded;
-(void)setSensorCaptureRestartsPerFingerDown:(unsigned long long)arg1 ;
-(double)totalArea;
-(void)setHomeButtonPressedDuringTouch:(BOOL)arg1 ;
-(void)displayStatusChanged:(BOOL)arg1 ;
-(BOOL)passcodeNedded:(long long)arg1 ;
-(void)matchOperationFinished:(BOOL)arg1 ;
-(void)initSensor;
-(id)init;
-(void)catacombCorrupted:(long long)arg1 ;
-(void)setHaveImageToProcess:(BOOL)arg1 ;
-(float)modulationRatio;
-(NSString *)clientName;
-(void)lockStateUpdated:(unsigned)arg1 ;
-(BOOL)wasDeviceHibernated:(SCD_Struct_Bi13*)arg1 ;
-(void)logTemplateCountPerUser:(BOOL)arg1 ;
-(void)logFingerOff;
-(void)templateUpdate:(id)arg1 withDictionary:(id)arg2 ;
-(void)logTemplateMatchCounts;
-(void)matchResult:(id)arg1 withDictionary:(id)arg2 ;
-(void)homeButtonStateChanged:(BOOL)arg1 ;
-(void)setFailTouchesToMatch:(unsigned long long)arg1 ;
-(void)setSensorOperationMode:(unsigned long long)arg1 ;
-(BOOL)unlockOperationInProgress;
-(NSDate *)sensorOperationStartDate;
-(BOOL)matchWithDesensePauseLogged;
-(void)setPreviousSKSLockState:(unsigned)arg1 ;
-(void)setWaitingForMatchResult:(BOOL)arg1 ;
-(BOOL)waitingForMatchResult;
-(long long)lastStartedMatch;
-(void)unlockAttemptCanceled:(BOOL)arg1 ;
-(void)setServer:(BiometricKitXPCServerMesa *)arg1 ;
-(void)cancel;
@end
