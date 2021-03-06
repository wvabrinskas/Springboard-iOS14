/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@class SFActivityBitmaps, NSString, NSDate, TrackerPolicy;

@interface AppTracker : NSObject <ManagedEventInfoProtocol, ConfigurableObjectProtocol> {

	BOOL _isADaemon;
	BOOL _sentFlowCountExceededPolicySymptom;
	BOOL _sentThunderingHerdFlowCountExceededPolicySymptom;
	int _prevFlows;
	int _prevFlowsForOthers;
	int _flowsForSelf;
	int _flowsForOthers;
	int _flowsPerPeriod;
	int _flowsPerPeriodAfterMadePrimary;
	unsigned _eversetClassFlags;
	SFActivityBitmaps* _activityBitmaps;
	NSString* _userName;
	double _prevFlowDurations;
	unsigned long long _prevFlowRxBytes;
	unsigned long long _prevFlowTxBytes;
	NSDate* _timestamp;
	TrackerPolicy* _specificPolicy;
	long long _interfaceType;
	unsigned long long _lastTallyTime;

}

@property (retain) NSDate * timestamp;                                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) int flowsForSelf;                                                   //@synthesize flowsForSelf=_flowsForSelf - In the implementation block
@property (assign) int flowsForOthers;                                                 //@synthesize flowsForOthers=_flowsForOthers - In the implementation block
@property (assign) int flowsPerPeriod;                                                 //@synthesize flowsPerPeriod=_flowsPerPeriod - In the implementation block
@property (assign) int flowsPerPeriodAfterMadePrimary;                                 //@synthesize flowsPerPeriodAfterMadePrimary=_flowsPerPeriodAfterMadePrimary - In the implementation block
@property (retain) TrackerPolicy * specificPolicy;                                     //@synthesize specificPolicy=_specificPolicy - In the implementation block
@property (assign) unsigned eversetClassFlags;                                         //@synthesize eversetClassFlags=_eversetClassFlags - In the implementation block
@property (assign) BOOL isADaemon;                                                     //@synthesize isADaemon=_isADaemon - In the implementation block
@property (assign) BOOL sentFlowCountExceededPolicySymptom;                            //@synthesize sentFlowCountExceededPolicySymptom=_sentFlowCountExceededPolicySymptom - In the implementation block
@property (assign) BOOL sentThunderingHerdFlowCountExceededPolicySymptom;              //@synthesize sentThunderingHerdFlowCountExceededPolicySymptom=_sentThunderingHerdFlowCountExceededPolicySymptom - In the implementation block
@property (assign) long long interfaceType;                                            //@synthesize interfaceType=_interfaceType - In the implementation block
@property (retain) SFActivityBitmaps * activityBitmaps;                                //@synthesize activityBitmaps=_activityBitmaps - In the implementation block
@property (assign) unsigned long long lastTallyTime;                                   //@synthesize lastTallyTime=_lastTallyTime - In the implementation block
@property (readonly) NSString * userName;                                              //@synthesize userName=_userName - In the implementation block
@property (assign) int prevFlows;                                                      //@synthesize prevFlows=_prevFlows - In the implementation block
@property (assign) int prevFlowsForOthers;                                             //@synthesize prevFlowsForOthers=_prevFlowsForOthers - In the implementation block
@property (assign) double prevFlowDurations;                                           //@synthesize prevFlowDurations=_prevFlowDurations - In the implementation block
@property (assign) unsigned long long prevFlowRxBytes;                                 //@synthesize prevFlowRxBytes=_prevFlowRxBytes - In the implementation block
@property (assign) unsigned long long prevFlowTxBytes;                                 //@synthesize prevFlowTxBytes=_prevFlowTxBytes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setInternalQueue:(id)arg1 ;
+(void)dumpState;
+(void)initialize;
+(void)noteFlowEnding:(id)arg1 ;
+(void)pruneCache:(id)arg1 ;
+(void)configureCellPolicies:(id)arg1 ;
+(void)getAllActivityMapsWithNames:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3 replyQueue:(id)arg4 reply:(/*^block*/id)arg5 ;
+(id)ifTrackerForInterfaceType:(long long)arg1 ;
+(void)noteForegroundState:(BOOL)arg1 forApp:(id)arg2 hasForegroundApps:(BOOL)arg3 ;
+(void)tallyUpAllActivityMapsForInterfaceType:(long long)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(id)configureClass:(id)arg1 ;
+(void)getWifiNetworkActivity:(/*^block*/id)arg1 ;
+(void)setWifiDaemonCheckList:(id)arg1 ;
+(void)startFlowPeriodTimer;
+(void)configureCompanionLinkPolicies:(id)arg1 ;
+(id)getAlignedNetworkBitmapsForInterfaceType:(long long)arg1 names:(id)arg2 startTime:(unsigned long long)arg3 endTime:(unsigned long long)arg4 ;
+(void)setWifiAlwaysNoteList:(id)arg1 ;
+(void)setTrackCellular:(BOOL)arg1 ;
+(void)resetTrafficClassFlowSnapshot;
+(void)resetAllActivityMapsForInterfaceType:(long long)arg1 ;
+(void)stopFlowPeriodTimer;
+(id)ifTrackerForFlow:(id)arg1 ;
+(void)endTrafficClassFlowSnapshot:(id)arg1 periodUsecs:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
+(void)noteFlow:(id)arg1 withOwner:(id)arg2 snapshot:(id)arg3 ;
+(void)freeUpActivityBitmapsForInterfaceType:(long long)arg1 ;
+(void)beginTrafficClassFlowSnapshot;
+(void)setAppTrackerVerbose:(unsigned)arg1 ;
+(void)setWifiNeverNoteList:(id)arg1 ;
+(void)noteFlow:(id)arg1 withDelegatee:(id)arg2 snapshot:(id)arg3 ;
+(void)configureWifiPolicies:(id)arg1 ;
-(NSString *)userName;
-(void)setIsADaemon:(BOOL)arg1 ;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setSpecificPolicy:(TrackerPolicy *)arg1 ;
-(void)setActivityBitmaps:(SFActivityBitmaps *)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)setPrevFlowsForOthers:(int)arg1 ;
-(long long)interfaceType;
-(void)setPrevFlows:(int)arg1 ;
-(unsigned long long)prevFlowRxBytes;
-(void)checkForFlowCountPolicyViolation;
-(int)flowsForOthers;
-(int)configureInstance:(id)arg1 ;
-(SFActivityBitmaps *)activityBitmaps;
-(void)addFlow:(id)arg1 ;
-(void)setPrevFlowRxBytes:(unsigned long long)arg1 ;
-(void)removeFlow:(id)arg1 ;
-(id)initWithUserName:(id)arg1 interfaceType:(long long)arg2 ;
-(void)adjustImmediateFlowLinkages:(id)arg1 ;
-(BOOL)sentThunderingHerdFlowCountExceededPolicySymptom;
-(void)_generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(int)prevFlows;
-(void)removeImmediateFlow:(id)arg1 ;
-(void)resetAllActivityMaps;
-(void)adjustFlowLinkages:(id)arg1 ;
-(void)setFlowsPerPeriodAfterMadePrimary:(int)arg1 ;
-(int)flowsPerPeriod;
-(void)setLastTallyTime:(unsigned long long)arg1 ;
-(unsigned long long)prevFlowTxBytes;
-(int)flowsForSelf;
-(NSString *)description;
-(void)addImmediateFlow:(id)arg1 ;
-(void)setSentFlowCountExceededPolicySymptom:(BOOL)arg1 ;
-(unsigned long long)lastTallyTime;
-(void)resetFlowCountPolicyInfo;
-(void)setPrevFlowTxBytes:(unsigned long long)arg1 ;
-(void)setFlowsPerPeriod:(int)arg1 ;
-(void)setFlowsForOthers:(int)arg1 ;
-(void)setInterfaceType:(long long)arg1 ;
-(unsigned)eversetClassFlags;
-(TrackerPolicy *)specificPolicy;
-(void)resetFlowCountAfterMadePrimary;
-(void)setPrevFlowDurations:(double)arg1 ;
-(NSDate *)timestamp;
-(void)setFlowsForSelf:(int)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(int)prevFlowsForOthers;
-(BOOL)isADaemon;
-(double)prevFlowDurations;
-(BOOL)sentFlowCountExceededPolicySymptom;
-(void)setSentThunderingHerdFlowCountExceededPolicySymptom:(BOOL)arg1 ;
-(int)flowsPerPeriodAfterMadePrimary;
-(void)setEversetClassFlags:(unsigned)arg1 ;
-(void)tallyUpAllActivityMaps:(id)arg1 ;
-(void)sendFlowCount:(unsigned long long)arg1 exceededPolicyThreshold:(unsigned long long)arg2 isLikelyThunderingHerd:(BOOL)arg3 ;
@end

