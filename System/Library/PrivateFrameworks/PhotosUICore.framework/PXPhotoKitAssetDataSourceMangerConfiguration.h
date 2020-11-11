/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHPhotoLibrary, PHCollection, NSArray, PHFetchResult;

@interface PXPhotoKitAssetDataSourceMangerConfiguration : NSObject {

	long long _type;
	id _content;
	PHPhotoLibrary* _photoLibrary;
	PHCollection* _containerCollection;
	NSArray* _fetchPropertySets;
	unsigned long long _options;

}

@property (nonatomic,readonly) PHFetchResult * assetCollections; 
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                   //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) PHCollection * containerCollection;              //@synthesize containerCollection=_containerCollection - In the implementation block
@property (nonatomic,retain) NSArray * fetchPropertySets;                     //@synthesize fetchPropertySets=_fetchPropertySets - In the implementation block
@property (assign,nonatomic) unsigned long long options;                      //@synthesize options=_options - In the implementation block
-(PHCollection *)containerCollection;
-(NSArray *)fetchPropertySets;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(unsigned long long)options;
-(void)setFetchPropertySets:(NSArray *)arg1 ;
-(id)initWithAssetCollections:(id)arg1 ;
-(void)setContainerCollection:(PHCollection *)arg1 ;
-(PHFetchResult *)assetCollections;
-(id)initWithType:(long long)arg1 content:(id)arg2 ;
@end
