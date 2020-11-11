/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PlacesKit/PlacesKit-Structs.h>
#import <MapKit/MKAnnotationView.h>
#import <libobjc.A.dylib/PXPlacesMapAnnotationViewFadable.h>

@class PKExtendedTraitCollection, UILabel, UIImageView, PXPlacesImageCache, NSString;

@interface PXPlacesMapThumbnailAnnotationView : MKAnnotationView <PXPlacesMapAnnotationViewFadable> {

	long long _geotaggablesCount;
	BOOL _imageIsPlaceholder;
	/*^block*/id _displayCompletion;
	PKExtendedTraitCollection* _extendedTraitCollection;
	id _extendedTraitObserver;
	UILabel* _countLabel;
	UIImageView* _countLabelBackgroundImageView;
	PXPlacesImageCache* _imageCache;

}

@property (nonatomic,retain) PKExtendedTraitCollection * extendedTraitCollection;              //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (nonatomic,retain) id extendedTraitObserver;                                         //@synthesize extendedTraitObserver=_extendedTraitObserver - In the implementation block
@property (nonatomic,retain) UILabel * countLabel;                                             //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,retain) UIImageView * countLabelBackgroundImageView;                      //@synthesize countLabelBackgroundImageView=_countLabelBackgroundImageView - In the implementation block
@property (nonatomic,retain) PXPlacesImageCache * imageCache;                                  //@synthesize imageCache=_imageCache - In the implementation block
@property (assign,nonatomic) BOOL imageIsPlaceholder;                                          //@synthesize imageIsPlaceholder=_imageIsPlaceholder - In the implementation block
@property (nonatomic,copy) id displayCompletion;                                               //@synthesize displayCompletion=_displayCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_thumbnailCreationOperationQueue;
+(id)_thumbnailFetchOperationQueue;
-(void)setAnnotation:(id)arg1 ;
-(void)setCountLabel:(UILabel *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setImageCache:(PXPlacesImageCache *)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)countLabel;
-(BOOL)imageIsPlaceholder;
-(PKExtendedTraitCollection *)extendedTraitCollection;
-(PXPlacesImageCache *)imageCache;
-(void)_updatePlaceholderImageIfNeeded;
-(void)prepareForReuse;
-(void)setExtendedTraitCollection:(PKExtendedTraitCollection *)arg1 ;
-(void)dealloc;
-(id)renderToImage;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 extendedTraitCollection:(id)arg3 imageCache:(id)arg4 ;
-(id)primaryGeotaggable;
-(id)userCacheKey;
-(UIImageView *)countLabelBackgroundImageView;
-(id)_countLabelBackgroundColor;
-(void)_reloadData:(BOOL)arg1 ;
-(void)_fetchImageWithNetworkAccessAllowed:(BOOL)arg1 ;
-(void)_processPlaceHolderForGeotaggable:(id)arg1 ;
-(void)_processGeotaggable:(id)arg1 withImage:(CGImageRef)arg2 popoverImageType:(unsigned long long)arg3 shouldCache:(BOOL)arg4 ;
-(void)_processPostImage;
-(void)_reloadCount:(long long)arg1 ;
-(void)_showCountLabel;
-(void)_hideCountLabel;
-(id)displayCompletion;
-(void)setDisplayCompletion:(id)arg1 ;
-(id)extendedTraitObserver;
-(void)setExtendedTraitObserver:(id)arg1 ;
-(void)setCountLabelBackgroundImageView:(UIImageView *)arg1 ;
-(void)setImageIsPlaceholder:(BOOL)arg1 ;
@end
