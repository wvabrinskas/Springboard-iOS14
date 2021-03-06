/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNUINavigationListViewCell.h>

@interface CNUINavigationListViewDetailCell : CNUINavigationListViewCell {

	long long _contentAlignment;

}

@property (assign,nonatomic) long long contentAlignment;              //@synthesize contentAlignment=_contentAlignment - In the implementation block
+(double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1 ;
+(double)subtitleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1 ;
+(double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)arg1 ;
+(CGSize)desiredContentSizeForTitle:(id)arg1 subTitle:(id)arg2 navigationListStyle:(id)arg3 ;
+(id)reuseIdentifier;
-(double)minimumContentHeight;
-(double)contentViewBottomAnchorConstraintConstant;
-(double)subtitleLabelFirstBaselineAnchorConstraintConstant;
-(void)setupAccessoryImageViewInView:(id)arg1 ;
-(double)titleLabelFirstBaselineAnchorConstraintConstant;
-(void)loadContentViewConstraints;
-(void)applyStyle;
-(long long)contentAlignment;
-(void)setContentAlignment:(long long)arg1 ;
-(void)updateConstraints;
@end

