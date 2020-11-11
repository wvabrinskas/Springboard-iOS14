/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UISlider, _UISliderDataModel;


@protocol _UISliderVisualElement
@property (assign,nonatomic,__weak) UISlider * slider; 
@property (nonatomic,retain) _UISliderDataModel * data; 
@required
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(CGRect*)trackRectForBounds:(CGRect)arg1;
-(UISlider *)slider;
-(void)setData:(id)arg1;
-(CGRect*)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(void)didSetThumbEnabled;
-(void)setSlider:(id)arg1;
-(UIEdgeInsets*)thumbHitEdgeInsets;
-(id)minValueImageView;
-(void)didSetMinimumValueImage;
-(void)didSetMaximumValueImage;
-(void)didSetMinimumTrackTintColor;
-(void)didSetMaximumTrackTintColor;
-(void)didSetThumbTintColor;
-(void)didSetThumbImageForState:(unsigned long long)arg1;
-(void)didSetMinimumTrackImageForState:(unsigned long long)arg1;
-(id)maxValueImageView;
-(void)didSetMaximumTrackImageForState:(unsigned long long)arg1;
-(id)currentMinimumTrackImage;
-(id)currentMaximumTrackImage;
-(CGRect*)valueTextRectForBounds:(CGRect)arg1;
-(void)didSetThumbImageForStates;
-(void)didSetMinimumTrackImageForStates;
-(void)didSetMaximumTrackImageForStates;
-(void)didChangeMinimumTrackVisibleWithDuration:(double)arg1;
-(CGRect*)minimumValueImageRectForBounds:(CGRect)arg1;
-(CGRect*)maximumValueImageRectForBounds:(CGRect)arg1;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
-(_UISliderDataModel *)data;
-(BOOL)cancelMouseTracking;
-(BOOL)isAnimatingValueChange;
-(BOOL)cancelTouchTracking;
-(id)thumbView;
-(void)didSetValues;
-(id)minTrackView;
-(id)maxTrackView;
-(id)createThumbView;
-(void)setValue:(float)arg1 animated:(BOOL)arg2;
-(void)didSetEnabled;
-(id)thumbViewNeue;
-(id)currentThumbImage;
-(void)didSetShowValue;
-(void)didSetSelected;
-(void)didSetHighlighted;
-(void)didPerformLayout;

@end
