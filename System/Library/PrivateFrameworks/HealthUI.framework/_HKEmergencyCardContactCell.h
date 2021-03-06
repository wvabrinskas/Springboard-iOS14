/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class _HKEmergencyContact, UILabel;

@interface _HKEmergencyCardContactCell : UITableViewCell {

	_HKEmergencyContact* _contact;
	UILabel* _relationshipLabel;
	UILabel* _nameLabel;
	UILabel* _phoneNumberLabel;

}

@property (nonatomic,retain) UILabel * relationshipLabel;                //@synthesize relationshipLabel=_relationshipLabel - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * phoneNumberLabel;                 //@synthesize phoneNumberLabel=_phoneNumberLabel - In the implementation block
@property (nonatomic,retain) _HKEmergencyContact * contact;              //@synthesize contact=_contact - In the implementation block
-(void)setContact:(_HKEmergencyContact *)arg1 ;
-(_HKEmergencyContact *)contact;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setupConstraints;
-(void)setPhoneNumberLabel:(UILabel *)arg1 ;
-(UILabel *)phoneNumberLabel;
-(UILabel *)nameLabel;
-(void)dealloc;
-(void)_setupIndividualViews;
-(void)setupViewHeirarchy;
-(UILabel *)relationshipLabel;
-(void)setContact:(id)arg1 showRelationship:(BOOL)arg2 showPhoneIcon:(BOOL)arg3 ;
-(void)setRelationshipLabel:(UILabel *)arg1 ;
@end

