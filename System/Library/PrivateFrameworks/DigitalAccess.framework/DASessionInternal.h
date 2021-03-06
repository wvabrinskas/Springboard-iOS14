/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSXPCProxyCreating, OS_dispatch_queue;
@class NSObject;

@interface DASessionInternal : NSObject {

	BOOL _isCallbackQueueSuspended;
	NSObject*<NSXPCProxyCreating> _proxy;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _isFirstInQueue;
	id _delegate;

}

@property (assign) BOOL isFirstInQueue;                    //@synthesize isFirstInQueue=_isFirstInQueue - In the implementation block
@property (setter=setProxy:,retain) id proxy; 
@property (__weak,readonly) id delegate;                   //@synthesize delegate=_delegate - In the implementation block
-(id)proxy;
-(void)setProxy:(id)arg1 ;
-(id)delegate;
-(BOOL)isFirstInQueue;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)resume;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)setIsFirstInQueue:(BOOL)arg1 ;
-(void)dispatchBlockOnCallback:(/*^block*/id)arg1 ;
-(void)closeProxy;
@end

