/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PDXPCServiceExportedInterface.h>

@class NSXPCConnection, NSString, PDXPCApplicationInfo;

@interface PDXPCService : NSObject <PDXPCServiceExportedInterface> {

	os_unfair_lock_s _lock;
	NSXPCConnection* _connection;
	NSString* _className;
	BOOL _callbacksSuspended;
	int _remoteProcessIdentifier;
	NSString* _remoteProcessApplicationIdentifier;

}

@property (nonatomic,readonly) int remoteProcessIdentifier;                                      //@synthesize remoteProcessIdentifier=_remoteProcessIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * remoteProcessApplicationIdentifier;                    //@synthesize remoteProcessApplicationIdentifier=_remoteProcessApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) PDXPCApplicationInfo * remoteProcessApplicationInfo; 
@property (nonatomic,readonly) NSString * remoteProcessBundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)serviceResumed;
-(id)remoteObjectProxy;
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)remoteProcessApplicationIdentifier;
-(PDXPCApplicationInfo *)remoteProcessApplicationInfo;
-(int)remoteProcessIdentifier;
-(NSString *)remoteProcessBundleIdentifier;
-(id)connection;
-(void)serviceSuspended;
-(void)clearConnectionReference;
@end
