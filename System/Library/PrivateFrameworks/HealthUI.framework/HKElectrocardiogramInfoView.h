/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIStackView.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface HKElectrocardiogramInfoView : UIStackView {

	UILabel* _heartRateLabel;
	UILabel* _bodyLabel;
	NSLayoutConstraint* _heartRateLabelLeadingConstraint;
	NSLayoutConstraint* _heartRateFirstBaselineConstraint;
	NSLayoutConstraint* _heartImageViewHeightConstraint;

}

@property (nonatomic,retain) UILabel * heartRateLabel;                                           //@synthesize heartRateLabel=_heartRateLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                                //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heartRateLabelLeadingConstraint;               //@synthesize heartRateLabelLeadingConstraint=_heartRateLabelLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heartRateFirstBaselineConstraint;              //@synthesize heartRateFirstBaselineConstraint=_heartRateFirstBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heartImageViewHeightConstraint;                //@synthesize heartImageViewHeightConstraint=_heartImageViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSString * heartRateText; 
@property (nonatomic,retain) NSString * bodyText; 
-(NSString *)bodyText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_bodyView;
-(void)setBodyText:(NSString *)arg1 ;
-(void)_addSubviews;
-(UILabel *)bodyLabel;
-(void)updateConstraints;
-(UILabel *)heartRateLabel;
-(NSLayoutConstraint *)heartRateLabelLeadingConstraint;
-(NSLayoutConstraint *)heartRateFirstBaselineConstraint;
-(NSLayoutConstraint *)heartImageViewHeightConstraint;
-(id)_heartRateView;
-(void)setHeartRateLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeartRateFirstBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeartImageViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSString *)heartRateText;
-(void)setHeartRateText:(NSString *)arg1 ;
-(void)setHeartRateLabel:(UILabel *)arg1 ;
@end

