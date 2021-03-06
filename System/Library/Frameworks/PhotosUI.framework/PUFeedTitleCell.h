/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedCell.h>

@class PXFeedSectionInfo, PXSharedAlbumHeaderView;

@interface PUFeedTitleCell : PUFeedCell {

	long long _collectionViewType;
	unsigned long long _tappableArea;
	PXFeedSectionInfo* _sectionInfo;
	PXSharedAlbumHeaderView* _headerView;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) PXSharedAlbumHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                          //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) long long collectionViewType;                        //@synthesize collectionViewType=_collectionViewType - In the implementation block
@property (assign,nonatomic) unsigned long long tappableArea;                     //@synthesize tappableArea=_tappableArea - In the implementation block
@property (nonatomic,retain) PXFeedSectionInfo * sectionInfo;                     //@synthesize sectionInfo=_sectionInfo - In the implementation block
-(PXSharedAlbumHeaderView *)headerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInsets;
-(PXFeedSectionInfo *)sectionInfo;
-(unsigned long long)tappableArea;
-(void)setTappableArea:(unsigned long long)arg1 ;
-(void)setCollectionViewType:(long long)arg1 ;
-(void)_updateHeaderTextColorStyle;
-(long long)collectionViewType;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(void)_handleTap:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSectionInfo:(PXFeedSectionInfo *)arg1 ;
-(void)prepareForReuse;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
@end

