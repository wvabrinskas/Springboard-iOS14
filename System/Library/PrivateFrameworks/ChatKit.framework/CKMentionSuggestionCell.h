/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class CKEntity, CKLabel, CKAvatarView, UIView;

@interface CKMentionSuggestionCell : UICollectionViewCell {

	CKEntity* _suggestedEntity;
	CKLabel* _handleLabel;
	CKAvatarView* _avatarView;
	UIView* _hoverView;

}

@property (nonatomic,retain) CKLabel * handleLabel;                   //@synthesize handleLabel=_handleLabel - In the implementation block
@property (nonatomic,retain) CKAvatarView * avatarView;               //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIView * hoverView;                      //@synthesize hoverView=_hoverView - In the implementation block
@property (nonatomic,retain) CKEntity * suggestedEntity;              //@synthesize suggestedEntity=_suggestedEntity - In the implementation block
+(id)reuseIdentifier;
-(void)didHoverOverCell:(id)arg1 ;
-(UIView *)hoverView;
-(id)initWithFrame:(CGRect)arg1 ;
-(CKLabel *)handleLabel;
-(void)setHandleLabel:(CKLabel *)arg1 ;
-(void)setSuggestedEntity:(CKEntity *)arg1 ;
-(CKEntity *)suggestedEntity;
-(void)setHoverView:(UIView *)arg1 ;
-(CKAvatarView *)avatarView;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
@end

