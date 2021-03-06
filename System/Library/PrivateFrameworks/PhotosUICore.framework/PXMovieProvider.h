/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXMovieProviderDelegate;
@class PHAssetCollection, PHAsset, UIViewController, PXDiagnosticsItemProvider;

@interface PXMovieProvider : NSObject {

	id<PXMovieProviderDelegate> _delegate;
	PHAssetCollection* _assetCollection;
	PHAsset* _keyAsset;

}

@property (assign,nonatomic,__weak) id<PXMovieProviderDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL canPlayMovie; 
@property (nonatomic,readonly) PHAssetCollection * assetCollection;                              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) PHAsset * keyAsset;                                               //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) UIViewController * movieViewController; 
@property (nonatomic,readonly) PXDiagnosticsItemProvider * diagnosticsItemProvider; 
-(id)init;
-(id<PXMovieProviderDelegate>)delegate;
-(id)initWithAssetCollection:(id)arg1 ;
-(void)setDelegate:(id<PXMovieProviderDelegate>)arg1 ;
-(PHAsset *)keyAsset;
-(BOOL)canPlayMovie;
-(id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2 ;
-(UIViewController *)movieViewController;
-(PXDiagnosticsItemProvider *)diagnosticsItemProvider;
-(BOOL)ppt_runTest:(id)arg1 options:(id)arg2 ;
-(PHAssetCollection *)assetCollection;
@end

