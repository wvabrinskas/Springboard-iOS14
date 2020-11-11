/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSMutableArray, NSLayoutConstraint, UIButton;

@interface PKPaymentAuthorizationPasswordButtonView : UIView {

	UIView* _separatorView;
	NSMutableArray* _hiddenConstraints;
	NSLayoutConstraint* _buttonTopPaddingConstraint;
	NSLayoutConstraint* _buttonBottomPaddingConstraint;
	NSLayoutConstraint* _seperatorHeightConstraint;
	UIButton* _passwordButton;

}

@property (nonatomic,readonly) UIButton * passwordButton;              //@synthesize passwordButton=_passwordButton - In the implementation block
-(void)_setupConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(UIButton *)passwordButton;
-(void)updateConstraints;
@end
