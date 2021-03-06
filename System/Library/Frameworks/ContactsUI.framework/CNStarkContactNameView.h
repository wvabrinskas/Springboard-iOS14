/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class CNContact, UILabel, CNAvatarViewController;

@interface CNStarkContactNameView : UIView {

	CNContact* _contact;
	UILabel* _nameLabel;
	CNAvatarViewController* _avatarViewController;

}

@property (nonatomic,readonly) CNContact * contact;                                        //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) CNAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
-(CNContact *)contact;
-(void)setupAvatar;
-(void)setupNameLabel;
-(void)setupConstraints;
-(id)initWithName:(id)arg1 ;
-(CNAvatarViewController *)avatarViewController;
-(UILabel *)nameLabel;
@end

