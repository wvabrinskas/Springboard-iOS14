/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HFStringGenerator;
@class UILabel, UIColor, UIStackView, NSArray, UIFont;

@interface HUTitleDescriptionContentView : UIView {

	BOOL _disabled;
	UILabel* _titleLabel;
	id<HFStringGenerator> _titleText;
	UIColor* _titleTextColor;
	id<HFStringGenerator> _descriptionText;
	UIColor* _descriptionTextColor;
	UILabel* _descriptionLabel;
	UIStackView* _stackView;
	NSArray* _verticalLabelConstraints;
	NSArray* _horizontalLabelConstraints;

}

@property (nonatomic,readonly) UILabel * descriptionLabel;                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                          //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSArray * verticalLabelConstraints;                 //@synthesize verticalLabelConstraints=_verticalLabelConstraints - In the implementation block
@property (nonatomic,retain) NSArray * horizontalLabelConstraints;               //@synthesize horizontalLabelConstraints=_horizontalLabelConstraints - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) id<HFStringGenerator> titleText;                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) UIColor * titleTextColor;                           //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (nonatomic,retain) UIFont * titleFont; 
@property (nonatomic,retain) id<HFStringGenerator> descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) UIColor * descriptionTextColor;                     //@synthesize descriptionTextColor=_descriptionTextColor - In the implementation block
@property (nonatomic,retain) UIFont * descriptionFont; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                    //@synthesize disabled=_disabled - In the implementation block
-(void)setDisabled:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(BOOL)isDisabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(UIColor *)descriptionTextColor;
-(void)setDescriptionTextColor:(UIColor *)arg1 ;
-(UIColor *)titleTextColor;
-(void)setTitleText:(id<HFStringGenerator>)arg1 ;
-(UILabel *)descriptionLabel;
-(void)_setupTitleLabel;
-(id<HFStringGenerator>)descriptionText;
-(void)setDescriptionText:(id<HFStringGenerator>)arg1 ;
-(UIFont *)titleFont;
-(id<HFStringGenerator>)titleText;
-(UIStackView *)stackView;
-(UIFont *)descriptionFont;
-(NSArray *)verticalLabelConstraints;
-(void)setVerticalLabelConstraints:(NSArray *)arg1 ;
-(NSArray *)horizontalLabelConstraints;
-(void)setHorizontalLabelConstraints:(NSArray *)arg1 ;
-(void)setDescriptionFont:(UIFont *)arg1 ;
-(void)_setupStackView;
-(void)_setupDescriptionLabel;
-(void)_updateLabel:(id)arg1 withContent:(id)arg2 ;
@end

