/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLAccelerationStructureGeometryDescriptor : NSObject <NSCopying> {

	BOOL _opaque;
	BOOL _allowDuplicateIntersectionFunctionInvocation;
	unsigned long long _intersectionFunctionTableOffset;

}

@property (assign,nonatomic) unsigned long long intersectionFunctionTableOffset;              //@synthesize intersectionFunctionTableOffset=_intersectionFunctionTableOffset - In the implementation block
@property (assign,nonatomic) BOOL opaque;                                                     //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) BOOL allowDuplicateIntersectionFunctionInvocation;               //@synthesize allowDuplicateIntersectionFunctionInvocation=_allowDuplicateIntersectionFunctionInvocation - In the implementation block
-(id)init;
-(void)setOpaque:(BOOL)arg1 ;
-(BOOL)allowDuplicateIntersectionFunctionInvocation;
-(unsigned long long)hash;
-(BOOL)opaque;
-(void)setIntersectionFunctionTableOffset:(unsigned long long)arg1 ;
-(void)setAllowDuplicateIntersectionFunctionInvocation:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)intersectionFunctionTableOffset;
@end

