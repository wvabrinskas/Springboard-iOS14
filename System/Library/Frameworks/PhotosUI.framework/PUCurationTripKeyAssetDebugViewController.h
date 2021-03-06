/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class PUCurationTripKeyAssetBrowserDebugViewController, PHFetchResult;

@interface PUCurationTripKeyAssetDebugViewController : PUPhotosAlbumViewController {

	PUCurationTripKeyAssetBrowserDebugViewController* _assetCollectionViewController;
	PHFetchResult* _tripHighlights;

}
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)init;
-(void)viewDidLoad;
-(BOOL)updateSpec;
-(void)_fetchHighlights;
@end

