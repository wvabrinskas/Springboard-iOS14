/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface SSXPCConnection : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _disconnectBlock;
	NSObject*<OS_dispatch_queue> _replyQueue;
	/*^block*/id _messageBlock;

}

@property (copy) id disconnectBlock; 
@property (copy) id messageBlock; 
-(id)initWithXPCConnection:(id)arg1 ;
-(id)init;
-(void)sendMessage:(id)arg1 ;
-(id)disconnectBlock;
-(id)createXPCEndpoint;
-(void)setReplyQueue:(id)arg1 ;
-(void)_reloadEventHandler;
-(id)initWithServiceName:(id)arg1 ;
-(void)setMessageBlock:(id)arg1 ;
-(id)_initSSXPCConnection;
-(id)copyReplyQueue;
-(void)sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setDisconnectBlock:(id)arg1 ;
-(void)sendSynchronousMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(id)messageBlock;
-(void)dealloc;
@end

