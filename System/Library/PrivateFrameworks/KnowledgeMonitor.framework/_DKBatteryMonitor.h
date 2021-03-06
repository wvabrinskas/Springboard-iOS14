/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeMonitor/KnowledgeMonitor-Structs.h>
#import <KnowledgeMonitor/_DKMonitor.h>

@class NSDictionary;

@interface _DKBatteryMonitor : _DKMonitor {

	unsigned _powerService;
	unsigned _batteryNotification;
	IONotificationPortRef _notifyPort;
	BOOL _hasInternalBattery;
	BOOL _previouslyFullyCharged;
	int _immediateShutdownThreshold;
	NSDictionary* _previousBatteryState;
	double _previousPercentage;

}

@property (assign,nonatomic) int immediateShutdownThreshold;                   //@synthesize immediateShutdownThreshold=_immediateShutdownThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasInternalBattery;                          //@synthesize hasInternalBattery=_hasInternalBattery - In the implementation block
@property (nonatomic,retain) NSDictionary * previousBatteryState;              //@synthesize previousBatteryState=_previousBatteryState - In the implementation block
@property (assign,nonatomic) double previousPercentage;                        //@synthesize previousPercentage=_previousPercentage - In the implementation block
@property (assign,nonatomic) BOOL previouslyFullyCharged;                      //@synthesize previouslyFullyCharged=_previouslyFullyCharged - In the implementation block
+(id)entitlements;
+(id)eventStream;
+(id)_eventWithBatteryPercentage:(double)arg1 isFullyCharged:(BOOL)arg2 ;
+(void)setCurrentBatteryPercentage:(double)arg1 ;
-(void)synchronouslyReflectCurrentValue;
-(double)currentBatteryPercentage;
-(id)getBatteryProperties;
-(void)start;
-(void)setHasInternalBattery:(BOOL)arg1 ;
-(void)setImmediateShutdownThreshold:(int)arg1 ;
-(BOOL)temperature:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)adapterType:(id)arg1 differsFrom:(id)arg2 ;
-(double)batteryPercentageFromPowerSourceDictionary:(id)arg1 ;
-(void)setPreviouslyFullyCharged:(BOOL)arg1 ;
-(void)batteryStateChangeHandler;
-(void)postImminentShutdownNotification:(double)arg1 ;
-(BOOL)newBatteryState:(id)arg1 differsSignificantlyFromState:(id)arg2 currentBatteryPercentage:(double)arg3 previousBatteryPercentage:(double)arg4 ;
-(BOOL)voltage:(id)arg1 differsFrom:(id)arg2 ;
-(void)_queue_handleNotification;
-(BOOL)percentage:(double)arg1 differsFrom:(double)arg2 ;
-(BOOL)externalConnected:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)fullyChargedFromPowerSourceDictionary:(id)arg1 ;
-(double)previousPercentage;
-(void)stop;
-(void)setPreviousBatteryState:(NSDictionary *)arg1 ;
-(void)deactivate;
-(int)immediateShutdownThreshold;
-(NSDictionary *)previousBatteryState;
-(BOOL)fullyCharged:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)hasInternalBattery;
-(void)updateBatteryStateDictionary:(id)arg1 currentBatteryPercentage:(double)arg2 ;
-(void)_handleBatteryNotification;
-(void)completeStart;
-(BOOL)previouslyFullyCharged;
-(BOOL)isCharging:(id)arg1 differsFrom:(id)arg2 ;
-(void)dealloc;
-(void)setPreviousPercentage:(double)arg1 ;
@end

