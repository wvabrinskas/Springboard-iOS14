/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKitCore/ARNamedService.h>

@protocol ARDaemonServiceBaseProtocol;
@class NSXPCConnection, NSString;

@interface ARRemoteService : NSObject <ARNamedService> {

	NSXPCConnection* _connection;
	id<ARDaemonServiceBaseProtocol> _service;
	id<ARDaemonServiceBaseProtocol> _syncService;

}

@property (retain) NSXPCConnection * connection;                                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) id<ARDaemonServiceBaseProtocol> service;                  //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) id<ARDaemonServiceBaseProtocol> syncService;              //@synthesize syncService=_syncService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSyncService:(id<ARDaemonServiceBaseProtocol>)arg1 ;
-(void)setService:(id<ARDaemonServiceBaseProtocol>)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(void)reconnect;
-(id)clientProcessName;
-(void)interruptionHandler;
-(void)invalidationHandler;
-(int)clientProcessIdentifier;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(id<ARDaemonServiceBaseProtocol>)service;
-(id<ARDaemonServiceBaseProtocol>)syncService;
-(void)invalidate;
-(id)initWithMachServiceName:(id)arg1 exportedInterface:(id)arg2 remoteObjectInterface:(id)arg3 endpoint:(id)arg4 ;
-(id)initWithMachServiceName:(id)arg1 exportedInterface:(id)arg2 remoteObjectInterface:(id)arg3 ;
-(void)setService:(id)arg1 syncService:(id)arg2 ;
@end

