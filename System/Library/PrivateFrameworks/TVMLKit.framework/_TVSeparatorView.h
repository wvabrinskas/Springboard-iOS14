/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface _TVSeparatorView : UIView {

	UIView* _line1;
	UIView* _line2;
	UIView* _separatorComponent;
	UIColor* _tintColor;
	double _lineHeight;

}

@property (assign,nonatomic,__weak) UIView * separatorComponent;              //@synthesize separatorComponent=_separatorComponent - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                             //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) double lineHeight;                               //@synthesize lineHeight=_lineHeight - In the implementation block
+(id)separatorViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
-(void)layoutSubviews;
-(double)lineHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)tintColor;
-(void)setLineHeight:(double)arg1 ;
-(UIView *)separatorComponent;
-(void)setSeparatorComponent:(UIView *)arg1 ;
@end
