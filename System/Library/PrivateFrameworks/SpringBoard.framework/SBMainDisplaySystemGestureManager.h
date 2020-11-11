/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSystemGestureManager.h>

@protocol BSInvalidatable;
@class SBGestureDefaults, SBHomeGestureParticipant;

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager {

	SBGestureDefaults* _gestureDefaults;
	id<BSInvalidatable> _systemGestureEventDeferringRule;
	id<BSInvalidatable> _pointerEventRoutingAssertion;
	BOOL _multitaskingGesturesEnabled;
	SBHomeGestureParticipant* _accessibilityHomeGestureParticipant;

}

@property (nonatomic,retain) SBHomeGestureParticipant * accessibilityHomeGestureParticipant;              //@synthesize accessibilityHomeGestureParticipant=_accessibilityHomeGestureParticipant - In the implementation block
+(id)sharedInstance;
-(SBHomeGestureParticipant *)accessibilityHomeGestureParticipant;
-(id)_initWithDisplayIdentity:(id)arg1 ;
-(void)_updateUserPreferences;
-(void)setAccessibilityHomeGestureParticipant:(SBHomeGestureParticipant *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_evaluateEnablement;
-(void)addGestureRecognizer:(id)arg1 withType:(unsigned long long)arg2 ;
-(BOOL)_isTouchGestureWithType:(unsigned long long)arg1 ;
-(BOOL)shouldSystemGestureReceiveTouchWithLocation:(CGPoint)arg1 ;
-(id)_init;
-(void)setSystemGesturesDisabledForAccessibility:(BOOL)arg1 ;
-(BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)arg1 ;
-(void)_setupSystemGestureEventDeferringIfNeeded;
-(void)dealloc;
-(BOOL)_isGestureWithTypeAllowed:(unsigned long long)arg1 ;
@end
