/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDevice, MTLCommandQueue, MTLRenderPipelineState;
#import <ARKitCore/ARKitCore-Structs.h>
@interface ARGPUWarper : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLRenderPipelineState> _homographyPipelineState;

}
-(id)init;
-(id)description;
-(void)warpCameraImage:(CVBufferRef)arg1 withExposureOffset:(float)arg2 withCameraIntrinsics:(SCD_Struct_AR25)arg3 withCameraTransform:(SCD_Struct_AR1)arg4 toPlane:(ARTexturedPlane*)arg5 withLoadAction:(unsigned long long)arg6 synchronous:(BOOL)arg7 ;
-(void)warpPlane:(ARTexturedPlane*)arg1 toPlane:(ARTexturedPlane*)arg2 withLoadAction:(unsigned long long)arg3 synchronous:(BOOL)arg4 ;
@end

