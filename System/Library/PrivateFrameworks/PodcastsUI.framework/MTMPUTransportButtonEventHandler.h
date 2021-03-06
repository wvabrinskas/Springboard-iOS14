/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSObject, UIControl;

@interface MTMPUTransportButtonEventHandler : NSObject {

	NSObject*<OS_dispatch_source> _longPressTimer;
	BOOL _longPress;
	BOOL _shouldFakeEnabled;
	BOOL _supportsTapWhenDisabled;
	UIControl* _button;
	double _minimumLongPressDuration;

}

@property (assign,nonatomic,__weak) UIControl * button;                    //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) double minimumLongPressDuration;              //@synthesize minimumLongPressDuration=_minimumLongPressDuration - In the implementation block
@property (assign,nonatomic) BOOL supportsTapWhenDisabled;                 //@synthesize supportsTapWhenDisabled=_supportsTapWhenDisabled - In the implementation block
-(UIControl *)button;
-(id)init;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setButton:(UIControl *)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(void)_clearLongPressTimer;
-(void)_longPressTimerAction;
-(id)performHitTestingBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldFakeEnabled;
-(BOOL)shouldForceTrackingEnabled;
-(double)minimumLongPressDuration;
-(void)setMinimumLongPressDuration:(double)arg1 ;
-(BOOL)supportsTapWhenDisabled;
-(void)setSupportsTapWhenDisabled:(BOOL)arg1 ;
@end

