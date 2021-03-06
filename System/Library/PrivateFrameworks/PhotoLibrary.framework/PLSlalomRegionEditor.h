/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol PLSlalomRegionEditorDelegate;
@class UIImageView;

@interface PLSlalomRegionEditor : UIControl {

	UIImageView* _startHandleView;
	UIImageView* _endHandleView;
	UIImageView* _trackImageView;
	UIImageView* _trackSnapshotView;
	BOOL _draggingStart;
	BOOL _draggingEnd;
	double _touchOffset;
	BOOL _zoomed;
	BOOL _trackingZoom;
	CGPoint _touchLocationWhenTrackingZoomBegan;
	BOOL _forceLayout;
	double _zoomMinValue;
	double _zoomMaxValue;
	BOOL _zoomAnimating;
	id<PLSlalomRegionEditorDelegate> _delegate;
	double _trimHandleWidth;
	unsigned long long _regionEditorStyle;
	double _minValue;
	double _maxValue;
	double _startValue;
	double _endValue;
	double _zoomDelay;
	UIEdgeInsets _trackInsets;

}

@property (assign,nonatomic) id<PLSlalomRegionEditorDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets trackInsets;                                                        //@synthesize trackInsets=_trackInsets - In the implementation block
@property (assign,nonatomic) double trimHandleWidth;                                                          //@synthesize trimHandleWidth=_trimHandleWidth - In the implementation block
@property (assign,nonatomic) unsigned long long regionEditorStyle;                                            //@synthesize regionEditorStyle=_regionEditorStyle - In the implementation block
@property (assign,nonatomic) double minValue;                                                                 //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                                                                 //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) double startValue;                                                               //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) double endValue;                                                                 //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double zoomDelay;                                                                //@synthesize zoomDelay=_zoomDelay - In the implementation block
@property (assign,setter=setZoomAnimating:,getter=isZoomAnimating,nonatomic) BOOL zoomAnimating;              //@synthesize zoomAnimating=_zoomAnimating - In the implementation block
@property (nonatomic,readonly) CGRect startHandleFrame; 
@property (nonatomic,readonly) CGRect endHandleFrame; 
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PLSlalomRegionEditorDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(double)minValue;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)setDelegate:(id<PLSlalomRegionEditorDelegate>)arg1 ;
-(double)zoomDelay;
-(BOOL)isZoomAnimating;
-(void)layoutSubviews;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setStartValue:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_tickColor;
-(void)setEndValue:(double)arg1 ;
-(double)endValue;
-(double)_trackScale;
-(CGRect)_trackFrame;
-(double)maxValue;
-(double)_zoomMinValue;
-(double)_zoomMaxValue;
-(double)_trimHandleWidth;
-(void)setTrackInsets:(UIEdgeInsets)arg1 ;
-(void)setStartValue:(double)arg1 notify:(BOOL)arg2 ;
-(void)setEndValue:(double)arg1 notify:(BOOL)arg2 ;
-(void)setZoomAnimating:(BOOL)arg1 ;
-(double)_valueFromStartHandleFrame:(CGRect)arg1 ;
-(double)_valueFromEndHandleFrame:(CGRect)arg1 ;
-(CGRect)_trackFrameNoZoom;
-(CGRect)_handleFrameForValue:(double)arg1 isStart:(BOOL)arg2 ;
-(void)_cancelTrackingZoom;
-(double)_valueFromHandleFrame:(CGRect)arg1 isStart:(BOOL)arg2 ;
-(void)_zoomPressWasHeld;
-(void)_cancelZoom;
-(void)_updateTrack;
-(id)_trackImageForZoom:(BOOL)arg1 ;
-(id)_trackColor;
-(id)_handleTintColor;
-(void)_drawCurveWithFlatEndsFromX:(double)arg1 fromY:(double)arg2 toX:(double)arg3 toY:(double)arg4 ;
-(UIEdgeInsets)trackInsets;
-(double)trimHandleWidth;
-(unsigned long long)regionEditorStyle;
-(double)startValue;
-(CGRect)endHandleFrame;
-(CGRect)startHandleFrame;
-(void)setZoomMinValue:(double)arg1 maxValue:(double)arg2 ;
-(void)setTrimHandleWidth:(double)arg1 ;
-(void)setRegionEditorStyle:(unsigned long long)arg1 ;
-(void)setZoomDelay:(double)arg1 ;
-(void)setMinValue:(double)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_isZoomed;
-(BOOL)_isTouch:(id)arg1 inHandleIsStart:(BOOL)arg2 outTouchOffset:(double*)arg3 ;
-(void)_stopTrackingAndSendControlEvents:(unsigned long long)arg1 ;
-(void)_updateSlidersWithTouch:(id)arg1 ;
-(void)_beginTrackingZoomWithTouch:(id)arg1 ;
-(void)_cancelZoomTrackingIfNeccessaryWithTouch:(id)arg1 ;
-(id)_handleImage;
@end

