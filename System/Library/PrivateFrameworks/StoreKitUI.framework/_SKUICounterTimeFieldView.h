/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface _SKUICounterTimeFieldView : UIView {

	UILabel* _labelLabel;
	UILabel* _valueLabel;
	unsigned long long _visibilityField;

}

@property (nonatomic,readonly) UILabel * labelLabel;                          //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;                          //@synthesize valueLabel=_valueLabel - In the implementation block
@property (assign,nonatomic) unsigned long long visibilityField;              //@synthesize visibilityField=_visibilityField - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)valueLabel;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)labelLabel;
-(void)setVisibilityField:(unsigned long long)arg1 ;
-(unsigned long long)visibilityField;
@end
