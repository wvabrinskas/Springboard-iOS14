/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUTilingDataSource.h>

@class NSMutableDictionary, NSMapTable, AVAsset, NSArray;

@interface PUFilmstripDataSource : PUTilingDataSource {

	NSMutableDictionary* _assetByIndexPath;
	NSMapTable* _indexPathByAsset;
	AVAsset* _asset;
	long long _numberOfIndexes;
	NSArray* _indicatorInfos;

}

@property (nonatomic,readonly) AVAsset * asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) long long numberOfIndexes;              //@synthesize numberOfIndexes=_numberOfIndexes - In the implementation block
@property (nonatomic,copy) NSArray * indicatorInfos;                   //@synthesize indicatorInfos=_indicatorInfos - In the implementation block
-(AVAsset *)asset;
-(id)assetAtIndexPath:(id)arg1 ;
-(id)init;
-(void)setIndicatorInfos:(NSArray *)arg1 ;
-(NSArray *)indicatorInfos;
-(long long)numberOfSubItemsAtIndexPath:(id)arg1 ;
-(long long)numberOfIndexes;
-(id)initWithAsset:(id)arg1 numberOfIndexes:(long long)arg2 indicatorInfos:(id)arg3 ;
-(double)_normalizedTimeForIndexPath:(id)arg1 ;
-(id)indexPathForAsset:(id)arg1 ;
@end
