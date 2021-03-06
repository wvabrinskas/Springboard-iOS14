/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>

@class NSMutableSet, _UIGestureRecognizerTransformAnalyzer, NSMutableDictionary;

@interface UIKBProductivityPanGestureRecognizer : UIPanGestureRecognizer {

	BOOL _tooMuchSingleMovement;
	double _beginPanTimestamp;
	NSMutableSet* _activeTouches;
	NSMutableSet* _shiftTouches;
	_UIGestureRecognizerTransformAnalyzer* _transformAnalyzer;
	NSMutableDictionary* _beginTouchLocations;
	CGPoint _beginPanCentroid;

}

@property (assign,nonatomic) double beginPanTimestamp;                                               //@synthesize beginPanTimestamp=_beginPanTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint beginPanCentroid;                                               //@synthesize beginPanCentroid=_beginPanCentroid - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeTouches;                                           //@synthesize activeTouches=_activeTouches - In the implementation block
@property (nonatomic,retain) NSMutableSet * shiftTouches;                                            //@synthesize shiftTouches=_shiftTouches - In the implementation block
@property (nonatomic,retain) _UIGestureRecognizerTransformAnalyzer * transformAnalyzer;              //@synthesize transformAnalyzer=_transformAnalyzer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * beginTouchLocations;                              //@synthesize beginTouchLocations=_beginTouchLocations - In the implementation block
@property (assign,nonatomic) BOOL tooMuchSingleMovement;                                             //@synthesize tooMuchSingleMovement=_tooMuchSingleMovement - In the implementation block
+(id)productivityPanGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2 delegate:(id)arg3 ;
-(NSMutableSet *)activeTouches;
-(BOOL)tooMuchSingleMovement;
-(void)setTransformAnalyzer:(_UIGestureRecognizerTransformAnalyzer *)arg1 ;
-(void)setBeginPanCentroid:(CGPoint)arg1 ;
-(CGPoint)centroidOfTouches:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setShiftTouches:(NSMutableSet *)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setActiveTouches:(NSMutableSet *)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(void)reset;
-(_UIGestureRecognizerTransformAnalyzer *)transformAnalyzer;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setBeginTouchLocations:(NSMutableDictionary *)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isShiftOrMoreKeyForTouch:(id)arg1 ;
-(double)beginPanTimestamp;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableDictionary *)beginTouchLocations;
-(void)setTooMuchSingleMovement:(BOOL)arg1 ;
-(void)setBeginPanTimestamp:(double)arg1 ;
-(NSMutableSet *)shiftTouches;
-(CGPoint)beginPanCentroid;
@end

