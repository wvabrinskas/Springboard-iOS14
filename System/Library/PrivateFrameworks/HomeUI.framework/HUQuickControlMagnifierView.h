/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface HUQuickControlMagnifierView : UIView {

	double _innerRadius;

}

@property (assign,nonatomic) double innerRadius;                   //@synthesize innerRadius=_innerRadius - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor; 
-(double)_outlineWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIColor *)selectedColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)setInnerRadius:(double)arg1 ;
-(double)innerRadius;
@end

