/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class MRUNowPlayingHeaderView, MediaControlsMaterialView, UIView;

@interface MRUControlCenterCollectionViewCell : UICollectionViewCell {

	MRUNowPlayingHeaderView* _headerView;
	MediaControlsMaterialView* _materialView;
	UIView* _transformView;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,retain) MediaControlsMaterialView * materialView;              //@synthesize materialView=_materialView - In the implementation block
@property (nonatomic,retain) UIView * transformView;                                //@synthesize transformView=_transformView - In the implementation block
@property (nonatomic,readonly) MRUNowPlayingHeaderView * headerView;                //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                        //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
-(MRUNowPlayingHeaderView *)headerView;
-(UIEdgeInsets)contentEdgeInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMaterialView:(MediaControlsMaterialView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIView *)transformView;
-(void)prepareForReuse;
-(MediaControlsMaterialView *)materialView;
-(void)setTransformView:(UIView *)arg1 ;
-(void)setTransitionTransform:(CGAffineTransform)arg1 isVisible:(BOOL)arg2 ;
@end

