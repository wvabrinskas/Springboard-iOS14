/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBIdleTimerObserving.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBIdleTimer, SBFIdleTimerBehaviorProviding, BSInvalidatable, SBDashBoardIdleTimerProviderDelegate;
@class NSMutableSet, NSString;

@interface SBDashBoardIdleTimerProvider : NSObject <SBIdleTimerObserving, BSDescriptionProviding> {

	id<SBIdleTimer> _idleTimer;
	id<SBFIdleTimerBehaviorProviding> _idleTimerProvider;
	id<BSInvalidatable> _stateCaptureAssertion;
	NSMutableSet* _disabledIdleTimerAssertions;
	id<SBDashBoardIdleTimerProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBDashBoardIdleTimerProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SBIdleTimer> idleTimer;                                             //@synthesize idleTimer=_idleTimer - In the implementation block
@property (getter=isIdleTimerEnabled,nonatomic,readonly) BOOL idleTimerEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBIdleTimer>)idleTimer;
-(id)succinctDescription;
-(void)resetIdleTimer;
-(void)idleTimerDidExpire:(id)arg1 ;
-(id<SBDashBoardIdleTimerProviderDelegate>)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setDelegate:(id<SBDashBoardIdleTimerProviderDelegate>)arg1 ;
-(void)setIdleTimer:(id<SBIdleTimer>)arg1 ;
-(BOOL)isIdleTimerEnabled;
-(void)_proposeIdleTimerBehavior:(id)arg1 forReason:(id)arg2 ;
-(void)_proposeEffectiveIdleTimerBehaviorForReason:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)idleTimerDidWarn:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)effectiveIdleTimerBehavior;
-(void)updateIdleTimerWithIdleDimProvider:(id)arg1 reason:(id)arg2 ;
-(void)addDisabledIdleTimerAssertionReason:(id)arg1 ;
-(id)_copyIdleTimerBehaviorForBehaviorProvider:(id)arg1 ;
-(void)idleTimerDidRefresh:(id)arg1 ;
-(BOOL)isDisabledAssertionActiveForReason:(id)arg1 ;
-(void)removeDisabledIdleTimerAssertionReason:(id)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
@end

