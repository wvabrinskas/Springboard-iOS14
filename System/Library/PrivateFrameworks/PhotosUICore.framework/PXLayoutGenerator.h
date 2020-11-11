/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PXLayoutMetrics, NSIndexSet, NSString;

@interface PXLayoutGenerator : NSObject <NSCopying> {

	PXLayoutMetrics* _metrics;
	unsigned long long _itemCount;
	unsigned long long _keyItemIndex;
	/*^block*/id _itemLayoutInfoBlock;

}

@property (nonatomic,readonly) PXCornerSpriteIndexes cornerSpriteIndexes; 
@property (nonatomic,copy) PXLayoutMetrics * metrics;                                  //@synthesize metrics=_metrics - In the implementation block
@property (assign,nonatomic) unsigned long long itemCount;                             //@synthesize itemCount=_itemCount - In the implementation block
@property (assign,nonatomic) unsigned long long keyItemIndex;                          //@synthesize keyItemIndex=_keyItemIndex - In the implementation block
@property (nonatomic,copy) id itemLayoutInfoBlock;                                     //@synthesize itemLayoutInfoBlock=_itemLayoutInfoBlock - In the implementation block
@property (nonatomic,readonly) CGSize estimatedSize; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) NSIndexSet * geometryKinds; 
@property (nonatomic,readonly) NSString * diagnosticDescription; 
-(void)setMetrics:(PXLayoutMetrics *)arg1 ;
-(PXLayoutMetrics *)metrics;
-(unsigned long long)keyItemIndex;
-(void)setKeyItemIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(CGSize)size;
-(PXCornerSpriteIndexes)cornerSpriteIndexes;
-(id)itemLayoutInfoBlock;
-(NSIndexSet *)geometryKinds;
-(unsigned long long)numberOfGeometriesWithKind:(long long)arg1 ;
-(CGSize)estimatedSize;
-(void)setItemCount:(unsigned long long)arg1 ;
-(void)setItemLayoutInfoBlock:(id)arg1 ;
-(unsigned long long)itemCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(NSString *)diagnosticDescription;
-(id)initWithMetrics:(id)arg1 ;
@end
