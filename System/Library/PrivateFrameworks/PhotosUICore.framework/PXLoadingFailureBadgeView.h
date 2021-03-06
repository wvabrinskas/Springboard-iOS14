/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface PXLoadingFailureBadgeView : UIImageView {

	SCD_Struct_PX59 _needsUpdateFlags;
	long long __sizeClass;

}

@property (assign,setter=_setSizeClass:,nonatomic) long long _sizeClass;              //@synthesize _sizeClass=__sizeClass - In the implementation block
+(CGSize)_imageSizeForSizeClass:(long long)arg1 ;
+(id)_imageForSizeClass:(long long)arg1 ;
-(void)_updateImageIfNeeded;
-(long long)_sizeClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)_setSizeClass:(long long)arg1 ;
-(void)sizeToFit;
-(void)_updateIfNeeded;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_needsUpdate;
-(void)_invalidateImage;
-(void)_setNeedsUpdate;
-(void)_invalidateSizeClass;
-(void)_updateSizeClassIfNeeded;
@end

