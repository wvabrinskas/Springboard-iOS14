/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMemoriesFeedLayoutGenerator.h>

@class PXMemoriesSpec, NSIndexSet, NSDictionary;

@interface PXMemoriesFeedEntryLayoutGenerator : PXMemoriesFeedLayoutGenerator {

	CGSize _size;
	PXMemoriesSpec* _spec;
	NSIndexSet* _geometryKinds;
	CGRect _sectionHeaderRect;
	NSDictionary* _rectsByIndexByKind;
	BOOL _isPrepared;
	long long _layoutAxis;

}

@property (assign,nonatomic) long long layoutAxis;              //@synthesize layoutAxis=_layoutAxis - In the implementation block
-(long long)layoutAxis;
-(void)setLayoutAxis:(long long)arg1 ;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(void)_prepareLayoutIfNeeded;
-(CGSize)size;
-(id)geometryKinds;
-(unsigned long long)numberOfGeometriesWithKind:(long long)arg1 ;
-(CGSize)estimatedSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(id)initWithMetrics:(id)arg1 ;
@end

