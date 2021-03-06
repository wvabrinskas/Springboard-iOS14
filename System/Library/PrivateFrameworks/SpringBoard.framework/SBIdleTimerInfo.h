/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBIdleTimerProviding, SBFIdleTimerBehaviorProviding;
@class NSString, SBIdleTimerProxy;

@interface SBIdleTimerInfo : NSObject {

	id<SBIdleTimerProviding> _provider;
	id<SBFIdleTimerBehaviorProviding> _behavior;
	NSString* _reason;
	SBIdleTimerProxy* _idleTimerProxy;

}

@property (nonatomic,__weak,readonly) id<SBIdleTimerProviding> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) id<SBFIdleTimerBehaviorProviding> behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy) NSString * reason;                                         //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) SBIdleTimerProxy * idleTimerProxy;                       //@synthesize idleTimerProxy=_idleTimerProxy - In the implementation block
-(NSString *)reason;
-(void)setBehavior:(id<SBFIdleTimerBehaviorProviding>)arg1 ;
-(id)initWithProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3 idleTimerProxy:(id)arg4 ;
-(id<SBFIdleTimerBehaviorProviding>)behavior;
-(SBIdleTimerProxy *)idleTimerProxy;
-(void)setReason:(NSString *)arg1 ;
-(void)setIdleTimerProxy:(SBIdleTimerProxy *)arg1 ;
-(id<SBIdleTimerProviding>)provider;
@end

