/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel, UIImageView, _TtC18HealthExperienceUI21ScaledLabelConstraint, NSLayoutConstraint;

@interface HealthExperienceUI.TableHeaderWithIconView : UITableViewHeaderFooterView {

	 title;
	 iconImageView;
	 iconImageViewWidthConstraint;
	 iconImageViewHeightConstraint;
	 iconImageViewBaselineConstraint;
	 iconImageViewCenterYConstraint;
	 item;

}

@property (assign,__weak,nonatomic) UILabel * title; 
@property (assign,__weak,nonatomic) UIImageView * iconImageView; 
@property (assign,__weak,nonatomic) _TtC18HealthExperienceUI21ScaledLabelConstraint * iconImageViewWidthConstraint; 
@property (assign,__weak,nonatomic) _TtC18HealthExperienceUI21ScaledLabelConstraint * iconImageViewHeightConstraint; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * iconImageViewBaselineConstraint; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * iconImageViewCenterYConstraint; 
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UILabel *)title;
-(id)initWithCoder:(id)arg1 ;
-(_TtC18HealthExperienceUI21ScaledLabelConstraint *)iconImageViewWidthConstraint;
-(void)setIconImageViewWidthConstraint:(_TtC18HealthExperienceUI21ScaledLabelConstraint *)arg1 ;
-(_TtC18HealthExperienceUI21ScaledLabelConstraint *)iconImageViewHeightConstraint;
-(void)setIconImageViewHeightConstraint:(_TtC18HealthExperienceUI21ScaledLabelConstraint *)arg1 ;
-(NSLayoutConstraint *)iconImageViewBaselineConstraint;
-(void)setIconImageViewBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)iconImageViewCenterYConstraint;
-(void)setIconImageViewCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitle:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

