/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Sleep/HKSPStateMachineState.h>
#import <libobjc.A.dylib/HDSPEnvironmentStateMachineEventHandler.h>

@class HDSPEnvironmentStateMachine, NSString;

@interface HDSPEnvironmentState : HKSPStateMachineState <HDSPEnvironmentStateMachineEventHandler>

@property (nonatomic,__weak,readonly) HDSPEnvironmentStateMachine * stateMachine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)systemDidBecomeReady;
-(void)dataMigrationDidComplete;
@end

