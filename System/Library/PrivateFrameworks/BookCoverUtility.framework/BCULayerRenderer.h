/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, MTLDevice, MTLCommandQueue;
@class NSObject, NSHashTable, CARenderer;

@interface BCULayerRenderer : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _renderQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSHashTable* _operations;
	CARenderer* _renderer;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _queue;
	BOOL _suspended;

}
-(id)init;
-(void)suspend;
-(void)resume;
-(void)_startOperation:(id)arg1 ;
-(id)initWithSuspended:(BOOL)arg1 ;
-(void)_processOperations;
-(void)_disconnectLayer:(id)arg1 ;
-(id)newOperationWithPriority:(float)arg1 waitForCPUSynchronization:(BOOL)arg2 renderLayer:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)newOperationWithPriority:(float)arg1 renderLayer:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end
