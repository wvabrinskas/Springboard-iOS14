/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFunnelNode.h>

@class NSMutableDictionary;

@interface BWParallelJoinerNode : BWFunnelNode {

	int _inputsCount;
	NSMutableDictionary* _receivedBuffers;
	NSMutableDictionary* _sentErrorCountForID;

}
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)initWithNumberOfInputs:(int)arg1 mediaType:(unsigned)arg2 ;
-(void)dealloc;
@end
