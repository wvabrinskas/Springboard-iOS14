/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutGenerator.h>

@interface PXCuratedLibraryGridLayoutGenerator : PXLayoutGenerator {

	CGSize _itemSize;
	double _interItemSpacing;
	UIEdgeInsets _insets;
	BOOL _isPrepared;
	PXLayoutGeometry* _geometries;
	unsigned long long _geometriesCount;
	CGSize _actualSize;
	double _lastFullRowBottomEdge;
	PXCornerSpriteIndexes _cornerSpriteIndexes;

}

@property (nonatomic,readonly) double lastFullRowBottomEdge; 
-(void)_prepareIfNeeded;
-(double)lastFullRowBottomEdge;
-(NSRange)geometriesRangeCoveringRect:(CGRect)arg1 ;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(CGSize)size;
-(PXCornerSpriteIndexes)cornerSpriteIndexes;
-(CGSize)estimatedSize;
-(void)_prepareGeometriesBufferForCount:(unsigned long long)arg1 ;
-(void)invalidate;
-(id)initWithMetrics:(id)arg1 ;
-(void)dealloc;
@end
