/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, PHAsset;

@interface _PUPhotoImportHistoryCell : UICollectionViewCell {

	int _currentImageRequestToken;
	UIImageView* _imageView;
	PHAsset* _asset;

}

@property (nonatomic,retain) UIImageView * imageView;                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) PHAsset * asset;                           //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) int currentImageRequestToken;              //@synthesize currentImageRequestToken=_currentImageRequestToken - In the implementation block
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateBorderColor;
-(void)layoutSubviews;
-(void)setImageView:(UIImageView *)arg1 ;
-(int)currentImageRequestToken;
-(void)setCurrentImageRequestToken:(int)arg1 ;
-(UIImageView *)imageView;
-(void)prepareForReuse;
@end
