/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UITapRecognizerDelegate.h>

@class UITapRecognizer, NSArray, NSString;

@interface UITextMultiTapRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {

	id _target;
	SEL _tapAction;
	UITapRecognizer* _tapRecognizer;
	unsigned long long _tapCount;
	unsigned long long _touchDownCount;
	BOOL _sendTapAction;
	BOOL _recognizesOnSubsequentTouchDowns;

}

@property (readonly) unsigned long long tapCount; 
@property (assign) unsigned long long numberOfTouchesRequired; 
@property (assign) unsigned long long minimumNumberOfTapsRequired; 
@property (assign) double maximumTouchDownDuration; 
@property (assign) double maximumIntervalBetweenTaps; 
@property (assign) double allowableMovement; 
@property (assign) BOOL recognizesOnSubsequentTouchDowns;                       //@synthesize recognizesOnSubsequentTouchDowns=_recognizesOnSubsequentTouchDowns - In the implementation block
@property (readonly) NSArray * touchesForTap; 
@property (readonly) CGPoint location; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(NSArray *)touchesForTap;
-(double)allowableMovement;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setAllowableMovement:(double)arg1 ;
-(void)setMinimumNumberOfTapsRequired:(unsigned long long)arg1 ;
-(CGPoint)location;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)tapRecognizerRecognizedTap:(id)arg1 ;
-(double)maximumIntervalBetweenTaps;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTouchesRequired;
-(void)reset;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)onStateUpdate:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg1 ;
-(void)setRecognizesOnSubsequentTouchDowns:(BOOL)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)maximumTouchDownDuration;
-(id)initWithTarget:(id)arg1 tapAction:(SEL)arg2 ;
-(double)_touchSloppinessFactor;
-(void)resetTapCountForTapRecognizer:(id)arg1 ;
-(BOOL)recognizesOnSubsequentTouchDowns;
-(unsigned long long)minimumNumberOfTapsRequired;
-(void)setMaximumIntervalBetweenTaps:(double)arg1 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)tapCount;
-(void)setMaximumTouchDownDuration:(double)arg1 ;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg1 ;
@end
