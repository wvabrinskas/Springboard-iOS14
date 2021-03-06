/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSLayoutConstraint, NSString;

@interface HKClinicalAuthorizationHeaderView : UIView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	NSLayoutConstraint* _imageToTitleConstraint;

}

@property (nonatomic,readonly) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * imageToTitleConstraint;              //@synthesize imageToTitleConstraint=_imageToTitleConstraint - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(UILabel *)titleLabel;
-(NSLayoutConstraint *)imageToTitleConstraint;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateForCurrentContentSizeCategory;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImageView *)imageView;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)_setUpConstraints;
-(void)_setUpSubviews;
@end

