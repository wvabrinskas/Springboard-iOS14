/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXLayoutGeometryArray : NSObject <NSCopying> {

	PXLayoutGeometry* _geometries;
	long long _count;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(id)initWithGeometries:(PXLayoutGeometry*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(PXLayoutGeometry)geometryAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

