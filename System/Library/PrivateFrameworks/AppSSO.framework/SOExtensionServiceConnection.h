/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SORemoteExtensionServiceProtocol.h>

@class NSXPCConnection, NSXPCListenerEndpoint, NSString;

@interface SOExtensionServiceConnection : NSObject <SORemoteExtensionServiceProtocol> {

	NSXPCConnection* _xpcConnection;
	NSXPCListenerEndpoint* _serviceXpcEndpoint;

}

@property (retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (retain) NSXPCListenerEndpoint * serviceXpcEndpoint;              //@synthesize serviceXpcEndpoint=_serviceXpcEndpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithListenerEndpoint:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setServiceXpcEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSXPCListenerEndpoint *)serviceXpcEndpoint;
-(BOOL)_connectToService;
-(void)beginAuthorizationWithCompletion:(/*^block*/id)arg1 ;
@end

