/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CWFXPCEventProxyDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSXPCConnection;

@interface CWFClient : NSObject <CWFXPCEventProxyDelegate> {

	NSObject*<OS_dispatch_queue> _mutex;
	NSMutableDictionary* _mutableEventIDMap;
	NSMutableDictionary* _mutableActivityMap;
	NSMutableDictionary* _mutableEventCallbackMap;
	BOOL _invalidated;
	NSXPCConnection* _XPCConnection;
	long long _serviceType;

}

@property (assign) BOOL invalidated;                                      //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) NSXPCConnection * XPCConnection;                     //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (readonly) long long serviceType;                               //@synthesize serviceType=_serviceType - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> targetQueue; 
@property (copy) id invalidationHandler; 
-(NSXPCConnection *)XPCConnection;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 eventID:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(/*^block*/id)eventHandlerWithEventID:(id)arg1 ;
-(id)init;
-(id)initWithServiceType:(long long)arg1 ;
-(void)__beginActivity:(id)arg1 requestParameters:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)stopMonitoringEvent:(id)arg1 requestParameters:(id)arg2 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)suspend;
-(id)invalidationHandler;
-(void)__startMonitoringEvent:(id)arg1 requestParameters:(id)arg2 reply:(/*^block*/id)arg3 ;
-(long long)serviceType;
-(void)endAllActivities:(id)arg1 ;
-(BOOL)invalidated;
-(BOOL)startMonitoringEvent:(id)arg1 requestParameters:(id)arg2 error:(id*)arg3 ;
-(BOOL)beginActivity:(id)arg1 requestParameters:(id)arg2 error:(id*)arg3 ;
-(void)endActivity:(id)arg1 requestParameters:(id)arg2 ;
-(void)resume;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)proxy:(id)arg1 receivedEvent:(id)arg2 ;
-(void)invalidate;
-(void)stopMonitoringAllEvents:(id)arg1 ;
-(void)dealloc;
-(void)clearAllEventHandlers;
@end

