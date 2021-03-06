/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface HKClinicalAuthorizationPrimaryChoiceFooterView : UIView {

	UIButton* _primaryButton;

}

@property (nonatomic,readonly) UIButton * primaryButton;              //@synthesize primaryButton=_primaryButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIButton *)primaryButton;
-(void)_setUpConstraints;
-(void)_setUpSubviews;
-(void)_updateMetricsWithTraitCollection:(id)arg1 ;
-(double)_bottomMarginForTraitCollection:(id)arg1 ;
@end

