/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/CKSearchResultCell.h>

@class CKAvatarView, UILabel, CKConversation, NSString;

@interface CKConversationSearchResultCell : UICollectionViewCell <CNAvatarViewDelegate, CKSearchResultCell> {

	BOOL _ck_editing;
	CKAvatarView* _avatarView;
	UILabel* _nameLabel;
	CKConversation* _conversation;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,retain) CKAvatarView * avatarView;                                                 //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                                       //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                             //@synthesize conversation=_conversation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,setter=_ck_setEditing:,getter=_ck_isEditing,nonatomic) BOOL _ck_editing;              //@synthesize ck_editing=_ck_editing - In the implementation block
+(id)reuseIdentifier;
-(BOOL)_ck_isEditing;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
-(void)_ck_setEditing:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(UIEdgeInsets)marginInsets;
-(CKConversation *)conversation;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(CKAvatarView *)avatarView;
-(void)_configureAvatarViewForConversation:(id)arg1 ;
-(void)_configureNameLabelForConversation:(id)arg1 searchText:(id)arg2 ;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(void)prepareForReuse;
-(UILabel *)nameLabel;
-(void)setConversation:(CKConversation *)arg1 ;
@end

