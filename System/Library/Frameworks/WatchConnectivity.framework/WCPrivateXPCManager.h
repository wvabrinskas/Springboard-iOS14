/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/WCXPCPrivateManagerClientProtocol.h>

@protocol WCPrivateXPCManagerDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface WCPrivateXPCManager : NSObject <NSXPCConnectionDelegate, WCXPCPrivateManagerClientProtocol> {

	int _listenerResumedToken;
	int _privateServiceShouldConnectToken;
	NSXPCConnection* _connection;
	NSObject*<WCPrivateXPCManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (readonly) NSXPCConnection * connection;                                                //@synthesize connection=_connection - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> delegateQueue;                                  //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign) int listenerResumedToken;                                                      //@synthesize listenerResumedToken=_listenerResumedToken - In the implementation block
@property (assign) int privateServiceShouldConnectToken;                                          //@synthesize privateServiceShouldConnectToken=_privateServiceShouldConnectToken - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<WCPrivateXPCManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedManager;
+(id)privateDaemonInterface;
+(id)privateClientInterface;
-(void)setupConnection;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)setListenerResumedToken:(int)arg1 ;
-(id)init;
-(NSObject*<WCPrivateXPCManagerDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegate:(NSObject*<WCPrivateXPCManagerDelegate>)arg1 ;
-(int)listenerResumedToken;
-(NSXPCConnection *)connection;
-(void)dealloc;
-(void)handlePingForExtensionBundleID:(id)arg1 ;
-(void)isExtensionPrivileged:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fakeIncomingPayloadOnSubService:(id)arg1 ofType:(id)arg2 clientData:(id)arg3 resource:(id)arg4 resourceSandboxToken:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)handlePairedSyncComplicationsStartedWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)privateServiceShouldConnectToken;
-(void)setPrivateServiceShouldConnectToken:(int)arg1 ;
@end

