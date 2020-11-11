/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface CNFRegSettingsTemporaryPhoneCell : PSTableCell {

	UILabel* _phoneNumberLabel;
	UILabel* _expirationLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) UILabel * phoneNumberLabel;              //@synthesize phoneNumberLabel=_phoneNumberLabel - In the implementation block
@property (nonatomic,retain) UILabel * expirationLabel;               //@synthesize expirationLabel=_expirationLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setPhoneNumberLabel:(UILabel *)arg1 ;
-(UILabel *)phoneNumberLabel;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setExpirationLabel:(UILabel *)arg1 ;
-(UILabel *)expirationLabel;
-(unsigned long long)daysUntilExpiration:(id)arg1 ;
@end
