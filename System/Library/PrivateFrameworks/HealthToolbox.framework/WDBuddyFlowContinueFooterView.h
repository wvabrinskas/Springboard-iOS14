/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIButton;

@interface WDBuddyFlowContinueFooterView : UIView {

	double _width;
	double _bottomInset;
	NSLayoutConstraint* _continueButtonBaselineConstraint;
	NSLayoutConstraint* _continueButtonBaselineToBottomConstraint;
	UIButton* _continueButton;

}

@property (nonatomic,retain) UIButton * continueButton;              //@synthesize continueButton=_continueButton - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(UIButton *)continueButton;
-(void)setContinueButton:(UIButton *)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 bottomInset:(double)arg3 width:(double)arg4 ;
@end
