/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLBuffer;
@interface MTLBVHGeometryDescriptor : NSObject {

	unsigned long long _primitiveCount;
	id<MTLBuffer> _maskBuffer;
	unsigned long long _maskBufferOffset;

}

@property (nonatomic,readonly) unsigned long long primitiveType; 
@property (assign,nonatomic) unsigned long long primitiveCount;                //@synthesize primitiveCount=_primitiveCount - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> maskBuffer;                         //@synthesize maskBuffer=_maskBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long maskBufferOffset;              //@synthesize maskBufferOffset=_maskBufferOffset - In the implementation block
-(unsigned long long)primitiveType;
-(unsigned long long)primitiveCount;
-(void)setPrimitiveCount:(unsigned long long)arg1 ;
-(id<MTLBuffer>)maskBuffer;
-(void)setMaskBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)maskBufferOffset;
-(void)setMaskBufferOffset:(unsigned long long)arg1 ;
-(void)dealloc;
@end

