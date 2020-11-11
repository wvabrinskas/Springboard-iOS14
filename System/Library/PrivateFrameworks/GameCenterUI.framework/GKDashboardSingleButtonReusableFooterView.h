/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionReusableView.h>

@class NSLayoutConstraint, UIButton;

@interface GKDashboardSingleButtonReusableFooterView : UICollectionReusableView {

	NSLayoutConstraint* _buttonLeadingConstraint;
	/*^block*/id _buttonTapHandler;
	UIButton* _button;

}

@property (nonatomic,retain) UIButton * button;                                         //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonLeadingConstraint;              //@synthesize buttonLeadingConstraint=_buttonLeadingConstraint - In the implementation block
@property (nonatomic,copy) id buttonTapHandler;                                         //@synthesize buttonTapHandler=_buttonTapHandler - In the implementation block
-(UIButton *)button;
-(void)buttonTapped:(id)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(id)buttonTapHandler;
-(void)setButtonTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(NSLayoutConstraint *)buttonLeadingConstraint;
-(void)setButtonLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setButtonTapHandler:(id)arg1 ;
-(void)awakeFromNib;
@end
