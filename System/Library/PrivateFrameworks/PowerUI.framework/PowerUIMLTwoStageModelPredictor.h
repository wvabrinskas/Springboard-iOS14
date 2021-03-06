/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PowerUI/PowerUI-Structs.h>
#import <PowerUI/PowerUIPredictor.h>

@protocol OS_os_log, _DKKnowledgeQuerying, _CDLocalContext;
@class MLModel, NSDate, NSString, NSObject, PowerUITrialManager;

@interface PowerUIMLTwoStageModelPredictor : NSObject <PowerUIPredictor> {

	os_unfair_lock_s _loadModelLock;
	MLModel* _engageModel;
	MLModel* _durationModel;
	NSDate* _pluginDate;
	double _pluginBatteryLevel;
	double _lastEngagementResult;
	double _lastDurationResult;
	double _adjustedDuration;
	NSString* _defaultsDomain;
	NSObject*<OS_os_log> _log;
	NSObject*<OS_os_log> _statusLog;
	double _threshold;
	double _minInputChargeDuration;
	id<_DKKnowledgeQuerying> _store;
	id<_CDLocalContext> _context;
	PowerUITrialManager* _trialManager;
	NSDate* _deadline;

}

@property (nonatomic,retain) NSString * defaultsDomain;                       //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                        //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> statusLog;                  //@synthesize statusLog=_statusLog - In the implementation block
@property (assign,nonatomic) double threshold;                                //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) double minInputChargeDuration;                   //@synthesize minInputChargeDuration=_minInputChargeDuration - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> store;                  //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) id<_CDLocalContext> context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PowerUITrialManager * trialManager;              //@synthesize trialManager=_trialManager - In the implementation block
@property (nonatomic,retain) NSDate * deadline;                               //@synthesize deadline=_deadline - In the implementation block
@property (assign,nonatomic) double lastEngagementResult;                     //@synthesize lastEngagementResult=_lastEngagementResult - In the implementation block
@property (assign,nonatomic) double lastDurationResult;                       //@synthesize lastDurationResult=_lastDurationResult - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s loadModelLock;                  //@synthesize loadModelLock=_loadModelLock - In the implementation block
@property (nonatomic,retain,readonly) MLModel * engageModel;                  //@synthesize engageModel=_engageModel - In the implementation block
@property (nonatomic,retain,readonly) MLModel * durationModel;                //@synthesize durationModel=_durationModel - In the implementation block
@property (nonatomic,retain) NSDate * pluginDate;                             //@synthesize pluginDate=_pluginDate - In the implementation block
@property (assign,nonatomic) double pluginBatteryLevel;                       //@synthesize pluginBatteryLevel=_pluginBatteryLevel - In the implementation block
@property (assign,nonatomic) double adjustedDuration;                         //@synthesize adjustedDuration=_adjustedDuration - In the implementation block
-(void)setAdjustedDuration:(double)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(unsigned long long)modelVersion;
-(void)setLastEngagementResult:(double)arg1 ;
-(MLModel *)engageModel;
-(MLModel *)durationModel;
-(double)adjustedChargingDecision:(unsigned long long)arg1 withPluginDate:(id)arg2 withPluginBatteryLevel:(double)arg3 forDate:(id)arg4 forStatus:(BOOL)arg5 ;
-(id)engagementModelBoltID;
-(PowerUITrialManager *)trialManager;
-(id)arrayWithShape:(id)arg1 values:(id)arg2 type:(long long)arg3 ;
-(id)initWithDefaultsDomain:(id)arg1 withContextStore:(id)arg2 withKnowledgeStore:(id)arg3 withTrialManager:(id)arg4 ;
-(void)setLastDurationResult:(double)arg1 ;
-(double)lastDurationResult;
-(double)adjustedDuration;
-(id)getInputFeatures:(double)arg1 events:(id)arg2 pluginBatteryLevel:(unsigned long long)arg3 timeFromPlugin:(double)arg4 pluginDate:(id)arg5 pluginHour:(double)arg6 withLog:(id)arg7 ;
-(id)timeStringFromDate:(id)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setPluginBatteryLevel:(double)arg1 ;
-(id<_CDLocalContext>)context;
-(void)setMinInputChargeDuration:(double)arg1 ;
-(id)predictFullChargeDateWithBatteryLevel:(unsigned long long)arg1 ;
-(double)loadThreshold;
-(void)setPluginDate:(NSDate *)arg1 ;
-(NSObject*<OS_os_log>)statusLog;
-(os_unfair_lock_s)loadModelLock;
-(double)threshold;
-(unsigned long long)durationModelVersion;
-(NSString *)defaultsDomain;
-(void)setStatusLog:(NSObject*<OS_os_log>)arg1 ;
-(id<_DKKnowledgeQuerying>)store;
-(void)setDeadline:(NSDate *)arg1 ;
-(double)pluginBatteryLevel;
-(NSDate *)deadline;
-(void)setStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(void)setLoadModelLock:(os_unfair_lock_s)arg1 ;
-(void)setTrialManager:(PowerUITrialManager *)arg1 ;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
-(double)getHourBinID:(id)arg1 forHourBin:(unsigned long long)arg2 ;
-(void)deleteCompiledModels;
-(NSDate *)pluginDate;
-(double)chargingDecision:(unsigned long long)arg1 withPluginDate:(id)arg2 withPluginBatteryLevel:(double)arg3 forDate:(id)arg4 withLog:(id)arg5 ;
-(id)getMacRoutineModelInputFeatures:(double)arg1 events:(id)arg2 pluginBatteryLevel:(unsigned long long)arg3 timeFromPlugin:(double)arg4 pluginDate:(id)arg5 pluginHour:(double)arg6 withLog:(id)arg7 ;
-(id)durationModelBoltID;
-(void)loadTrial;
-(unsigned long long)engagementModelVersion;
-(id)getPluginEventsBefore:(id)arg1 withMinimumDuration:(double)arg2 ;
-(double)loadMinInputChargeDuration;
-(void)resetSavedDeadline;
-(double)lastEngagementResult;
-(void)setDefaultsDomain:(NSString *)arg1 ;
-(double)minInputChargeDuration;
-(double)loadAdjustedHours;
-(void)setThreshold:(double)arg1 ;
@end

