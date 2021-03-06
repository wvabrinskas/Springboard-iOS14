/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSString, NSObject, NSDate;

@interface ADBackgroundTaskRequest : NSObject {

	BOOL _performDeferralCheck;
	NSString* _requestIdentifier;
	NSObject*<OS_xpc_object> _activity;
	NSObject*<OS_xpc_object> _criteria;
	NSDate* _startDate;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> activity;                //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> criteria;                //@synthesize criteria=_criteria - In the implementation block
@property (assign,nonatomic) BOOL performDeferralCheck;                        //@synthesize performDeferralCheck=_performDeferralCheck - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) long long delay; 
@property (assign,nonatomic) BOOL requiresNetworkConnectivity; 
@property (assign,nonatomic) BOOL requireBuddyComplete; 
@property (assign,nonatomic) BOOL requireClassCData; 
@property (assign,nonatomic) BOOL allowBattery; 
@property (assign,nonatomic) BOOL requireSleep; 
@property (assign,nonatomic) BOOL isRepeating; 
@property (assign,nonatomic) long long backgroundTaskRetryCount; 
@property (assign,nonatomic) long long gracePeriod; 
@property (nonatomic,retain) NSString * priority; 
@property (assign,nonatomic) BOOL isCPUIntensive; 
@property (nonatomic,readonly) BOOL shouldDefer; 
-(void)setGracePeriod:(long long)arg1 ;
-(void)setRequireClassCData:(BOOL)arg1 ;
-(id)initWithID:(id)arg1 ;
-(BOOL)allowBattery;
-(void)setPropertyAsDate:(id)arg1 value:(id)arg2 ;
-(NSObject*<OS_xpc_object>)criteria;
-(id)getPropertyAsDate:(id)arg1 ;
-(BOOL)isCPUIntensive;
-(void)setAllowBattery:(BOOL)arg1 ;
-(void)setDelay:(long long)arg1 ;
-(long long)delay;
-(long long)getPropertyAsInteger:(id)arg1 ;
-(long long)gracePeriod;
-(void)setPropertyAsString:(id)arg1 value:(id)arg2 ;
-(void)setRequireBuddyComplete:(BOOL)arg1 ;
-(void)setRequireSleep:(BOOL)arg1 ;
-(BOOL)requiresNetworkConnectivity;
-(void)setIsRepeating:(BOOL)arg1 ;
-(BOOL)finishTask;
-(id)dictionaryRepresentation;
-(NSDate *)startDate;
-(NSString *)requestIdentifier;
-(BOOL)isRepeating;
-(id)description;
-(long long)backgroundTaskRetryCount;
-(void)endBackgroundDeferralCheck;
-(double)getPropertyAsDouble:(id)arg1 ;
-(id)getPropertyAsString:(id)arg1 ;
-(BOOL)requireClassCData;
-(BOOL)requireBuddyComplete;
-(BOOL)deferTask;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)taskCanContinueForTime:(id)arg1 ;
-(NSString *)priority;
-(void)setPerformDeferralCheck:(BOOL)arg1 ;
-(void)setPriority:(NSString *)arg1 ;
-(BOOL)continueTask;
-(void)setRequiresNetworkConnectivity:(BOOL)arg1 ;
-(void)setIsCPUIntensive:(BOOL)arg1 ;
-(void)setPropertyAsInteger:(id)arg1 value:(long long)arg2 ;
-(id)copyBackgroundTaskAgentCriteria;
-(BOOL)requireSleep;
-(void)startBackgroundDeferralCheckForTime:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)performDeferralCheck;
-(void)setCriteria:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)taskIsContinuing;
-(void)setPropertyAsDouble:(id)arg1 value:(double)arg2 ;
-(BOOL)taskIsDeferred;
-(NSObject*<OS_xpc_object>)activity;
-(void)_backgroundDeferralCheck:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBackgroundTaskRetryCount:(long long)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)initWithCriteria:(id)arg1 ID:(id)arg2 activity:(id)arg3 ;
-(BOOL)shouldDefer;
@end

