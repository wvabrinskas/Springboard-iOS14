/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSDate, NSString;

@interface SCRSchedulingConfiguration : NSObject <NSMutableCopying, BSDescriptionProviding> {

	BOOL _wakeDeviceForDeadline;
	BOOL _requiresClassAAccess;
	BOOL _requiresNetworkAccess;
	NSDate* _earliestStartDate;
	double _schedulingWindow;

}

@property (nonatomic,readonly) NSDate * latestStartDate; 
@property (getter=isImmediate,nonatomic,readonly) BOOL immediate; 
@property (nonatomic,copy,readonly) NSDate * earliestStartDate;                //@synthesize earliestStartDate=_earliestStartDate - In the implementation block
@property (nonatomic,readonly) double schedulingWindow;                        //@synthesize schedulingWindow=_schedulingWindow - In the implementation block
@property (nonatomic,readonly) BOOL wakeDeviceForDeadline;                     //@synthesize wakeDeviceForDeadline=_wakeDeviceForDeadline - In the implementation block
@property (nonatomic,readonly) BOOL requiresClassAAccess;                      //@synthesize requiresClassAAccess=_requiresClassAAccess - In the implementation block
@property (nonatomic,readonly) BOOL requiresNetworkAccess;                     //@synthesize requiresNetworkAccess=_requiresNetworkAccess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)immediateConfiguration;
+(id)configurationWithEarliestStart:(id)arg1 schedulingWindow:(double)arg2 ;
-(id)succinctDescription;
-(id)init;
-(NSDate *)latestStartDate;
-(unsigned long long)hash;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)requiresClassAAccess;
-(id)intersectionWith:(id)arg1 minimumWindow:(double)arg2 ;
-(double)schedulingWindow;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)setRequiresClassAAccess:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_isSatisfiedBy:(id)arg1 strictly:(BOOL)arg2 ;
-(void)setSchedulingWindow:(double)arg1 ;
-(BOOL)wakeDeviceForDeadline;
-(BOOL)isImmediate;
-(void)setRequiresNetworkAccess:(BOOL)arg1 ;
-(BOOL)requiresNetworkAccess;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSDate *)earliestStartDate;
-(id)succinctDescriptionBuilder;
-(BOOL)isCurrentlySatisfiedBy:(id)arg1 ;
-(id)_earliestEffectiveStartDate;
-(id)_latestEffectiveStartDate;
-(id)_initWithStartDate:(id)arg1 window:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWakeDeviceForDeadline:(BOOL)arg1 ;
-(void)setEarliestStartDate:(NSDate *)arg1 ;
-(id)_copyWithClass:(Class)arg1 ;
-(BOOL)isSatisfiedBy:(id)arg1 ;
@end
