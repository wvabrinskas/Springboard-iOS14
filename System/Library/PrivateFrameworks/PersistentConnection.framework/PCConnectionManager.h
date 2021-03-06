/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PCCarrierBundleHelperDelegate.h>
#import <libobjc.A.dylib/PCInterfaceMonitorDelegate.h>

@protocol PCConnectionManagerDelegate, OS_dispatch_queue, OS_os_log, PCGrowthAlgorithm;
@class NSString, NSRunLoop, NSObject, PCPersistentTimer, PCKeepAliveState;

@interface PCConnectionManager : NSObject <PCCarrierBundleHelperDelegate, PCInterfaceMonitorDelegate> {

	int _connectionClass;
	id<PCConnectionManagerDelegate> _delegate;
	NSString* _serviceIdentifier;
	NSString* _duetIdentifier;
	int _prefsStyle;
	int _onlyAllowedStyle;
	BOOL _onlyAllowedStyleSet;
	long long _interfaceIdentifier;
	unsigned long long _guidancePriority;
	NSRunLoop* _delegateRunLoop;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_os_log> _logObject;
	id<PCGrowthAlgorithm> _wwanGrowthAlgorithm[2];
	id<PCGrowthAlgorithm> _wifiGrowthAlgorithm[2];
	id<PCGrowthAlgorithm> _lastScheduledGrowthAlgorithm;
	PCPersistentTimer* _intervalTimer;
	PCPersistentTimer* _reconnectWakeTimer;
	PCPersistentTimer* _delayTimer;
	unsigned _powerAssertionID;
	double _onTimeKeepAliveTime;
	double _lastResumeTime;
	double _lastStopTime;
	double _lastStartTime;
	double _lastReachableTime;
	double _lastReconnectTime;
	double _lastScheduledIntervalTime;
	double _timerGuidance;
	double _keepAliveGracePeriod;
	double _lastElapsedInterval;
	BOOL _minimumIntervalFallbackEnabled;
	BOOL _operatorMinimumIntervalFallbackAllowed;
	unsigned _reconnectIteration;
	int _timerGuidanceToken;
	int _pushIsConnectedToken;
	int _prefsChangedToken;
	double _defaultPollingInterval;
	double _pollingIntervalOverride;
	BOOL _pollingIntervalOverrideSet;
	BOOL _hasStarted;
	BOOL _isRunning;
	BOOL _inCallback;
	BOOL _isInReconnectMode;
	BOOL _reconnectWithKeepAliveDelay;
	BOOL _forceManualWhenRoaming;
	BOOL _enableNonCellularConnections;
	BOOL _isReachable;
	BOOL _disableEarlyFire;
	BOOL _alwaysWantsInterfaceChangeCallbacks;
	int _lastProcessedAction;
	BOOL _deviceUnderGoodCondition;
	int _currentGrowthStage;
	id _duetContextRegistration;
	BOOL _powerOptimizationsForExpensiveNetworkingDisabled;
	double _nonCellularEarlyFireConstantInterval;
	int _currentAddressFamily;

}

@property (assign,nonatomic,__weak) id<PCConnectionManagerDelegate> delegate; 
@property (nonatomic,copy) NSString * duetIdentifier; 
@property (nonatomic,readonly) BOOL isRunning; 
@property (nonatomic,readonly) double currentKeepAliveInterval; 
@property (assign,nonatomic) double minimumKeepAliveInterval; 
@property (assign) double maximumKeepAliveInterval; 
@property (nonatomic,readonly) PCKeepAliveState * currentKeepAliveState; 
@property (assign,nonatomic) double serverStatsMaxKeepAliveInterval; 
@property (assign,nonatomic) double serverStatsExpectedKeepAliveInterval; 
@property (assign,nonatomic) double serverStatsMinKeepAliveInterval; 
@property (assign,nonatomic) BOOL usingServerStatsAggressively; 
@property (nonatomic,readonly) unsigned long long countOfGrowthActions; 
@property (assign,nonatomic) BOOL disableEarlyFire; 
@property (assign,nonatomic) BOOL minimumIntervalFallbackEnabled;                                //@synthesize minimumIntervalFallbackEnabled=_minimumIntervalFallbackEnabled - In the implementation block
@property (assign,nonatomic) long long interfaceIdentifier;                                      //@synthesize interfaceIdentifier=_interfaceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL alwaysWantsInterfaceChangeCallbacks;                           //@synthesize alwaysWantsInterfaceChangeCallbacks=_alwaysWantsInterfaceChangeCallbacks - In the implementation block
@property (assign,nonatomic) BOOL powerOptimizationsForExpensiveNetworkingDisabled;              //@synthesize powerOptimizationsForExpensiveNetworkingDisabled=_powerOptimizationsForExpensiveNetworkingDisabled - In the implementation block
@property (assign,nonatomic) int currentAddressFamily; 
@property (nonatomic,readonly) int lastProcessedAction;                                          //@synthesize lastProcessedAction=_lastProcessedAction - In the implementation block
@property (assign,nonatomic) double keepAliveGracePeriod;                                        //@synthesize keepAliveGracePeriod=_keepAliveGracePeriod - In the implementation block
@property (assign,nonatomic) double nonCellularEarlyFireConstantInterval;                        //@synthesize nonCellularEarlyFireConstantInterval=_nonCellularEarlyFireConstantInterval - In the implementation block
@property (nonatomic,readonly) double pollingInterval; 
@property (nonatomic,readonly) int currentGrowthStage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)growthAlgorithmClass;
+(BOOL)_isCachedKeepAliveIntervalStillValid:(double)arg1 date:(id)arg2 ;
+(id)intervalCacheDictionaries;
+(id)_keepAliveCachePath;
-(void)interfaceManagerInternetReachabilityChanged:(id)arg1 ;
-(void)_resolveStateWithAction:(int)arg1 ;
-(long long)interfaceIdentifier;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(BOOL)disableEarlyFire;
-(id)persistentInterfaceManager;
-(void)_adjustPollTimerIfNecessary;
-(void)stopAndResetManager;
-(void)_setMinimumKeepAliveInterval:(double)arg1 onInterface:(long long)arg2 ;
-(id)_stringForStyle:(int)arg1 ;
-(void)_clearTimers;
-(double)serverStatsMaxKeepAliveInterval;
-(void)_releasePowerAssertion;
-(void)_setupTimerForPushWithKeepAliveInterval:(double)arg1 ;
-(id)_stringForAddressFamily:(int)arg1 ;
-(void)resumeManagerWithAction:(int)arg1 forceGrow:(BOOL)arg2 ;
-(void)cancelPollingIntervalOverride;
-(id<PCConnectionManagerDelegate>)delegate;
-(double)pollingInterval;
-(double)minimumKeepAliveInterval;
-(void)setNonCellularEarlyFireConstantInterval:(double)arg1 ;
-(BOOL)_hasBudgetRemaining;
-(id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 serviceIdentifier:(id)arg4 ;
-(void)_saveWWANKeepAliveInterval;
-(id)_initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 serviceIdentifier:(id)arg6 ;
-(void)setKeepAliveOverrideOnInterface:(long long)arg1 interval:(double)arg2 timeout:(double)arg3 ;
-(void)setInterfaceIdentifier:(long long)arg1 ;
-(void)_takePowerAssertionWithTimeout:(double)arg1 ;
-(BOOL)usingServerStatsAggressively;
-(id)_stringForAction:(int)arg1 ;
-(double)nonCellularEarlyFireConstantInterval;
-(int)currentGrowthStage;
-(void)_pauseTimers;
-(id)_stringForEvent:(int)arg1 ;
-(BOOL)isRunning;
-(void)_setupKeepAliveForReconnect;
-(void)carrierBundleDidChange;
-(void)setUsingServerStatsAggressively:(BOOL)arg1 ;
-(void)_registerForDeviceConditionsNotifications;
-(void)_clearTimersReleasingPowerAssertion:(BOOL)arg1 ;
-(void)stopManager;
-(BOOL)_isPushConnected;
-(NSString *)duetIdentifier;
-(void)_adjustInterfaceAssertions;
-(void)setAlwaysWantsInterfaceChangeCallbacks:(BOOL)arg1 ;
-(void)setDelegate:(id<PCConnectionManagerDelegate>)arg1 ;
-(void)setServerStatsExpectedKeepAliveInterval:(double)arg1 ;
-(void)setDisableEarlyFire:(BOOL)arg1 ;
-(void)_preferencesChanged;
-(void)setOperatorMinimumIntervalFallbackAllowed:(BOOL)arg1 ;
-(int)currentStyle;
-(void)setCurrentAddressFamily:(int)arg1 ;
-(void)_adjustMinimumIntervalFallback;
-(double)serverStatsMinKeepAliveInterval;
-(void)setMinimumIntervalFallbackEnabled:(BOOL)arg1 ;
-(BOOL)shouldClientScheduleReconnectDueToFailure;
-(double)keepAliveGracePeriod;
-(void)setPollingIntervalOverride:(double)arg1 ;
-(void)_setTimerGuidance:(double)arg1 ;
-(void)resumeManagerWithAction:(int)arg1 ;
-(id)_getCachedWWANKeepAliveIntervalForAddressFamily:(int)arg1 ;
-(unsigned long long)countOfGrowthActions;
-(int)currentAddressFamily;
-(void)_calloutWithEvent:(int)arg1 context:(id)arg2 ;
-(void)_callDelegateWithEventAndContext:(id)arg1 ;
-(void)_setMaximumKeepAliveInterval:(double)arg1 onInterface:(long long)arg2 ;
-(id)_currentGrowthAlgorithm;
-(void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1 ;
-(void)_validateActionForCurrentStyle:(int)arg1 ;
-(void)_intervalTimerFired;
-(BOOL)powerOptimizationsForExpensiveNetworkingDisabled;
-(void)setServerStatsMaxKeepAliveInterval:(double)arg1 ;
-(PCKeepAliveState *)currentKeepAliveState;
-(void)setOnlyAllowedStyle:(int)arg1 ;
-(id)initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 serviceIdentifier:(id)arg5 ;
-(void)_processDeviceConditionChanges;
-(double)serverStatsExpectedKeepAliveInterval;
-(void)interfaceManagerInHomeCountryStatusChanged:(id)arg1 ;
-(void)_loadPreferencesGeneratingEvent:(BOOL)arg1 ;
-(void)setPowerOptimizationsForExpensiveNetworkingDisabled:(BOOL)arg1 ;
-(BOOL)alwaysWantsInterfaceChangeCallbacks;
-(id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 serviceIdentifier:(id)arg3 ;
-(double)maximumKeepAliveInterval;
-(void)startManager;
-(void)setServerStatsMinKeepAliveInterval:(double)arg1 ;
-(void)_delayTimerFired;
-(void)setEnableNonCellularConnections:(BOOL)arg1 ;
-(double)currentKeepAliveInterval;
-(BOOL)minimumIntervalFallbackEnabled;
-(void)setKeepAliveGracePeriod:(double)arg1 ;
-(BOOL)operatorMinimumIntervalFallbackAllowed;
-(void)setMinimumKeepAliveInterval:(double)arg1 ;
-(void)setMaximumKeepAliveInterval:(double)arg1 ;
-(void)_setupTimerForPollForAdjustment:(BOOL)arg1 ;
-(id)_growthAlgorithmOnInterface:(long long)arg1 ;
-(void)dealloc;
-(int)lastProcessedAction;
-(void)_handleDeviceConditionChangeCallback;
-(void)setDuetIdentifier:(NSString *)arg1 ;
-(void)_deregisterForDeviceConditionsNotifications;
@end

