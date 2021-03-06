/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class UILabel, UIView, NSString;

@interface WDMedicalRecordStandaloneCell : WDMedicalRecordGroupableCell {

	UILabel* _titleLabel;
	UIView* _chevronView;

}

@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * chevronView;              //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,copy) NSString * title; 
+(id)_titleLabelFont;
+(double)_titleLabelTopToFirstBaseline;
+(double)_titleLabelLastBaselineToBottom;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setupSubviews;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIView *)chevronView;
-(void)setChevronView:(UIView *)arg1 ;
@end

