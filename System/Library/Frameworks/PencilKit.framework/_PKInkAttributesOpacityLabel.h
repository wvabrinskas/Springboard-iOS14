/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface _PKInkAttributesOpacityLabel : UIView {

	double _opacityValue;
	UILabel* _titleLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
@property (assign,nonatomic) double opacityValue;               //@synthesize opacityValue=_opacityValue - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)valueLabel;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)opacityValue;
-(BOOL)isRTLLanguage;
-(void)setOpacityValue:(double)arg1 ;
@end
