/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PKUsageNotificationServerExportedInterface.h>

@class NSXPCListener, NSMutableSet, NSString;

@interface PKUsageNotificationServer : NSObject <NSXPCListenerDelegate, PKUsageNotificationServerExportedInterface> {

	os_unfair_lock_s _lock;
	NSXPCListener* _listener;
	NSMutableSet* _connections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)notifyPaymentPassIdentifierUsed:(id)arg1 withTransactionInfo:(id)arg2 ;
-(void)serviceResumed;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2 ;
-(void)serviceSuspended;
-(void)dealloc;
-(void)initializeUsageNotificationServer;
@end
