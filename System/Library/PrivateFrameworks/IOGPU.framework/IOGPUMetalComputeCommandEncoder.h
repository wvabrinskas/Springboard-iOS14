/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IOGPU/IOGPU-Structs.h>
#import <IOGPU/IOGPUMetalCommandEncoder.h>

@interface IOGPUMetalComputeCommandEncoder : IOGPUMetalCommandEncoder
-(void*)getBufferContentsAtIndex:(unsigned long long)arg1 ;
-(void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(BOOL)arg3 ;
-(void)setAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)useHeap:(id)arg1 ;
-(void)waitForFence:(id)arg1 ;
-(void)setEmulationTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)setEmulationBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(void)updateFence:(id)arg1 ;
-(void)bindEmulationArguments;
-(void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)setEmulationSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFunctionTables:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)setFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)getComputePipelineState;
-(void)memoryBarrierWithScope:(unsigned long long)arg1 ;
-(unsigned long long)getType;
-(void)setIntersectionFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2 ;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)executeCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2 ;
@end

