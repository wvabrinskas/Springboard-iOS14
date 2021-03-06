/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UIHoverEvent, UITouch;

@interface UIHoverGestureRecognizer : UIGestureRecognizer {

	UIHoverEvent* _currentHoverEvent;
	UITouch* _currentTouch;
	BOOL _pausesWhilePanning;
	long long _previousTrackpadFingerDownCount;
	long long _trackpadFingerDownCount;

}

@property (assign,setter=_setPausesWhilePanning:,getter=_pausesWhilePanning,nonatomic) BOOL pausesWhilePanning;                //@synthesize pausesWhilePanning=_pausesWhilePanning - In the implementation block
@property (getter=_previousTrackpadFingerDownCount,nonatomic,readonly) long long previousTrackpadFingerDownCount;              //@synthesize previousTrackpadFingerDownCount=_previousTrackpadFingerDownCount - In the implementation block
@property (getter=_trackpadFingerDownCount,nonatomic,readonly) long long trackpadFingerDownCount;                              //@synthesize trackpadFingerDownCount=_trackpadFingerDownCount - In the implementation block
-(BOOL)_pausesWhilePanning;
-(void)_hoverExited:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(void)_hoverEntered:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_paused;
-(void)_hoverCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(long long)_trackpadFingerDownCount;
-(CGPoint)locationInView:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)reset;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)_wantsHoverEventsWhilePointerIsLocked;
-(void)_setPausesWhilePanning:(BOOL)arg1 ;
-(long long)_previousTrackpadFingerDownCount;
@end

