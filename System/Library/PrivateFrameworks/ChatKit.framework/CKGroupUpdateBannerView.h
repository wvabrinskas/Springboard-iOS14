/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKUpdateBannerView.h>

@class NSArray;

@interface CKGroupUpdateBannerView : CKUpdateBannerView {

	NSArray* _groupUpdates;
	unsigned long long _updateBannerType;

}

@property (nonatomic,retain) NSArray * groupUpdates;                           //@synthesize groupUpdates=_groupUpdates - In the implementation block
@property (assign,nonatomic) unsigned long long updateBannerType;              //@synthesize updateBannerType=_updateBannerType - In the implementation block
-(void)cancelButtonTapped:(id)arg1 ;
-(void)_updateSubtitleLabel;
-(double)maxLabelWidthForSize:(CGSize)arg1 ;
-(double)titleLabelAlignmentX;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)layoutMargins;
-(void)_updateAvatarView;
-(unsigned long long)updateBannerType;
-(NSArray *)groupUpdates;
-(void)setUpdateBannerType:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 useNamedTitles:(BOOL)arg3 updates:(id)arg4 inUpdatesMode:(BOOL)arg5 ;
-(void)_updateTitleLabel;
-(void)setGroupUpdates:(NSArray *)arg1 ;
-(id)getContactDisplayName:(id)arg1 ;
-(id)cancelGlyph;
@end

