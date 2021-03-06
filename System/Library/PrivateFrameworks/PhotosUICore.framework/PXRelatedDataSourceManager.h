/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@protocol OS_dispatch_queue;
@class NSObject, PXRelatedSettings, NSDate, PXPhotosDetailsContext, PHFetchResult, PXRelatedDataSource;

@interface PXRelatedDataSourceManager : PXSectionedDataSourceManager {

	BOOL _didStartLoading;
	BOOL _shouldCancelLoading;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	PXRelatedSettings* _settings;
	unsigned long long _fetchLimit;
	unsigned long long _initialBatchSize;
	unsigned long long _loadBatchSize;
	NSDate* _loadStartDate;
	BOOL _didLoadInitialDataSource;
	BOOL _useItemIndexPaths;
	BOOL __canceled;
	unsigned long long __initialBatchSize;
	unsigned long long __loadBatchSize;
	PXPhotosDetailsContext* __context;
	PHFetchResult* __collectionListFetchResult;
	PHFetchResult* __relatedCollections;
	PHFetchResult* __preparedRelatedCollections;

}

@property (nonatomic,readonly) PXPhotosDetailsContext * _context;                                                             //@synthesize _context=__context - In the implementation block
@property (nonatomic,readonly) PHFetchResult * _collectionListFetchResult;                                                    //@synthesize _collectionListFetchResult=__collectionListFetchResult - In the implementation block
@property (assign,setter=_setCanceled:,getter=_isCanceled,nonatomic) BOOL _canceled;                                          //@synthesize _canceled=__canceled - In the implementation block
@property (setter=_setRelatedCollections:,nonatomic,retain) PHFetchResult * _relatedCollections;                              //@synthesize _relatedCollections=__relatedCollections - In the implementation block
@property (setter=_setPreparedRelatedCollections:,nonatomic,retain) PHFetchResult * _preparedRelatedCollections;              //@synthesize _preparedRelatedCollections=__preparedRelatedCollections - In the implementation block
@property (nonatomic,readonly) BOOL useItemIndexPaths;                                                                        //@synthesize useItemIndexPaths=_useItemIndexPaths - In the implementation block
@property (assign,nonatomic) unsigned long long initialBatchSize;                                                             //@synthesize _initialBatchSize=__initialBatchSize - In the implementation block
@property (assign,nonatomic) unsigned long long loadBatchSize;                                                                //@synthesize _loadBatchSize=__loadBatchSize - In the implementation block
@property (nonatomic,readonly) PXRelatedDataSource * dataSource; 
-(void)cancelLoading;
-(PHFetchResult *)_preparedRelatedCollections;
-(void)_setPreparedRelatedCollections:(id)arg1 ;
-(id)init;
-(void)_setCanceled:(BOOL)arg1 ;
-(BOOL)_isCanceled;
-(void)startLoading;
-(PHFetchResult *)_collectionListFetchResult;
-(void)unregisterChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)registerChangeObserver:(id)arg1 context:(void*)arg2 ;
-(PXPhotosDetailsContext *)_context;
-(id)initWithPhotosDetailsContext:(id)arg1 ;
-(id)initWithPhotosDetailsContext:(id)arg1 useItemIndexPaths:(BOOL)arg2 ;
-(void)_setDataSource:(id)arg1 changeDetails:(id)arg2 ;
-(id)createPhotosDataSourceForRelatedEntry:(id)arg1 ;
-(void)_startBackgroundLoad;
-(void)_continueBackgroundLoadWithReferenceObject:(id)arg1 attemptIndex:(long long)arg2 ;
-(id)_referenceObject;
-(id)_collectionsRelatedToReferenceObject:(id)arg1 ;
-(void)_continueBackgroundLoadWithReferenceObject:(id)arg1 relatedCollections:(id)arg2 ;
-(id)_referenceObjectFromCollectionListFetchResult:(id)arg1 ;
-(id)_collectionListRelatedToObject:(id)arg1 ;
-(unsigned long long)initialBatchSize;
-(unsigned long long)loadBatchSize;
-(id)_keyAssetFetchResultForRelatedCollection:(id)arg1 referenceAsset:(id)arg2 ;
-(id)_referenceAssetForReferenceObject:(id)arg1 ;
-(void)setInitialBatchSize:(unsigned long long)arg1 ;
-(void)setLoadBatchSize:(unsigned long long)arg1 ;
-(BOOL)useItemIndexPaths;
-(PHFetchResult *)_relatedCollections;
-(void)_setRelatedCollections:(id)arg1 ;
@end

