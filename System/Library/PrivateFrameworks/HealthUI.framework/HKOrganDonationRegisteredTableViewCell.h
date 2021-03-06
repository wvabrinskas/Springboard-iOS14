/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface HKOrganDonationRegisteredTableViewCell : UITableViewCell {

	UILabel* _introLabel;
	UILabel* _registrarLabel;

}

@property (nonatomic,retain) UILabel * introLabel;                  //@synthesize introLabel=_introLabel - In the implementation block
@property (nonatomic,retain) UILabel * registrarLabel;              //@synthesize registrarLabel=_registrarLabel - In the implementation block
+(id)defaultReuseIdentifier;
-(void)setupSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setupConstraints;
-(void)setIntroLabel:(UILabel *)arg1 ;
-(UILabel *)introLabel;
-(void)setRegistrarLabel:(UILabel *)arg1 ;
-(UILabel *)registrarLabel;
@end

