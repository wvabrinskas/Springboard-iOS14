/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionWidget.framework/AppPredictionWidget
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppPredictionWidget/AppPredictionWidget-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, CADisplayLink, UIColor;

@interface APWDebugLightView : UIView {

	UIView* _ledView;
	BOOL _ledIsOn;
	long long _blinkHertz;
	CADisplayLink* _blinkDisplayLink;
	UIColor* _ledColor;

}

@property (nonatomic,retain) UIColor * ledColor;              //@synthesize ledColor=_ledColor - In the implementation block
-(void)willMoveToSuperview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)turnOn;
-(void)blink:(long long)arg1 ;
-(void)layoutSubviews;
-(void)turnOff;
-(void)invalidate;
-(void)_displayLinkDidUpdate:(id)arg1 ;
-(void)_startBlinking;
-(void)_stopBlinking;
-(void)_updateLedOnState;
-(void)setLedColor:(UIColor *)arg1 ;
-(UIColor *)ledColor;
@end

