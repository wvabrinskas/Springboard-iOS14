/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDReconciliationQueryProvider.h>

@class NSXPCListener, EFLocked, EDDaemonInterfaceFactory, NSXPCListenerEndpoint, NSArray, NSString;

@interface EDServer : NSObject <NSXPCListenerDelegate, EFLoggable, EDReconciliationQueryProvider> {

	NSXPCListener* _listener;
	EFLocked* _connectedClients;
	EDDaemonInterfaceFactory* _daemonInterfaceFactory;

}

@property (nonatomic,retain) NSXPCListener * listener;                                       //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) EFLocked * connectedClients;                                  //@synthesize connectedClients=_connectedClients - In the implementation block
@property (nonatomic,retain) EDDaemonInterfaceFactory * daemonInterfaceFactory;              //@synthesize daemonInterfaceFactory=_daemonInterfaceFactory - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * serverXPCEndpoint; 
@property (nonatomic,copy,readonly) NSArray * test_remoteClients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)test_tearDown;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)start;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)messageReconciliationQueries;
-(id)threadReconciliationQueries;
-(EFLocked *)connectedClients;
-(EDDaemonInterfaceFactory *)daemonInterfaceFactory;
-(id)initWithDaemonInterfaceFactory:(id)arg1 listener:(id)arg2 ;
-(void)removeRemoteClient:(id)arg1 ;
-(void)addRemoteClient:(id)arg1 ;
-(id)initWithDaemonInterfaceFactory:(id)arg1 ;
-(NSArray *)test_remoteClients;
-(NSXPCListenerEndpoint *)serverXPCEndpoint;
-(void)setDaemonInterfaceFactory:(EDDaemonInterfaceFactory *)arg1 ;
@end

