/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch;

@interface _PKSpringLoadingGestureRecognizer : UIGestureRecognizer {

	BOOL _hasRecognized;
	double _stationaryFingerTimeout;
	UITouch* _gestureTouch;
	CGPoint _startLocation;

}

@property (assign,nonatomic) BOOL hasRecognized;                          //@synthesize hasRecognized=_hasRecognized - In the implementation block
@property (nonatomic,retain) UITouch * gestureTouch;                      //@synthesize gestureTouch=_gestureTouch - In the implementation block
@property (assign,nonatomic) CGPoint startLocation;                       //@synthesize startLocation=_startLocation - In the implementation block
@property (assign,nonatomic) double stationaryFingerTimeout;              //@synthesize stationaryFingerTimeout=_stationaryFingerTimeout - In the implementation block
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)startLocation;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setStartLocation:(CGPoint)arg1 ;
-(BOOL)hasRecognized;
-(void)setGestureTouch:(UITouch *)arg1 ;
-(UITouch *)gestureTouch;
-(void)_stationaryFingerTimerFired;
-(double)stationaryFingerTimeout;
-(BOOL)_pointInsideRecognitionPossibleArea:(CGPoint)arg1 ;
-(BOOL)_pointShouldBeRecognized:(CGPoint)arg1 ;
-(void)setHasRecognized:(BOOL)arg1 ;
-(void)setStationaryFingerTimeout:(double)arg1 ;
@end

