/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HUIStepSlider, UILabel, UIVisualEffectView;

@interface HUITitleValueSlider : UIView {

	HUIStepSlider* _slider;
	UILabel* _titleLabel;
	UILabel* _valueLabel;
	UIVisualEffectView* _effectView;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) HUIStepSlider * slider;                       //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                         //@synthesize valueLabel=_valueLabel - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(HUIStepSlider *)slider;
-(UIVisualEffectView *)effectView;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(UILabel *)valueLabel;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)setSlider:(HUIStepSlider *)arg1 ;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)initWithEffect:(id)arg1 ;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
@end

