/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface AKCarouselAlertClientConnection : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedConnection;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(NSXPCConnection *)xpcConnection;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)init;
-(void)unsafe_invalidate;
-(void)dismissAlert:(id)arg1 ;
-(void)presentAlertWithDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)connection;
-(void)dealloc;
@end
