/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsBuffer.h>
#import <libobjc.A.dylib/MTLDebugResourcePurgeable.h>

@class MTLDebugResource, MTLDebugDevice, NSMutableArray;

@interface MTLDebugBuffer : MTLToolsBuffer <MTLDebugResourcePurgeable> {

	MTLDebugResource* _common;
	unsigned long long _length;
	MTLDebugDevice* _debugDevice;
	NSMutableArray* _debugMarkers;
	atomic<int> _purgeableStateToken;
	BOOL _purgeableStateHasBeenSet;
	BOOL _isContentExposedToCPU;
	const void* _pointer;

}

@property (nonatomic,readonly) MTLDebugResource * common;              //@synthesize common=_common - In the implementation block
@property (nonatomic,readonly) const void* pointer;                    //@synthesize pointer=_pointer - In the implementation block
@property (assign,nonatomic) BOOL isContentExposedToCPU;               //@synthesize isContentExposedToCPU=_isContentExposedToCPU - In the implementation block
-(id)heap;
-(unsigned long long)gpuAddress;
-(void*)contents;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(void)removeAllDebugMarkers;
-(void)makeAliasable;
-(const void*)pointer;
-(id)description;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 ;
-(MTLDebugResource *)common;
-(unsigned long long)resourceIndex;
-(id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(void)didModifyRange:(NSRange)arg1 ;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)addDebugMarker:(id)arg1 range:(NSRange)arg2 ;
-(void)dealloc;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 ;
-(void)lockPurgeableState;
-(void)unlockPurgeableState;
-(BOOL)purgeableStateValidForRendering;
-(id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4 ;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4 ;
-(id)copyDebugMarkers;
-(BOOL)isContentExposedToCPU;
-(void)setIsContentExposedToCPU:(BOOL)arg1 ;
@end
