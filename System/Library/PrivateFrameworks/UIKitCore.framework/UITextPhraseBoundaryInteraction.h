/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteraction.h>

@protocol UITextCursorAssertion;
@class UITextGestureTuning;

@interface UITextPhraseBoundaryInteraction : UITextInteraction {

	UITextGestureTuning* _gestureTuning;
	id<UITextCursorAssertion> _blinkAssertion;

}
-(void)didMoveToView:(id)arg1 ;
-(id)initWithTextInput:(id)arg1 ;
-(CGPoint)touchAlignedPointForPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(void)_phraseBoundaryGesture:(id)arg1 ;
-(id)_phraseBoundaryGestureRecognizer;
-(CGPoint)pointIfPlacedCarefully:(CGPoint)arg1 ;
-(void)updateVisibilityOffsetForGesture:(id)arg1 ;
-(void)_createGestureTuningIfNecessary;
@end

