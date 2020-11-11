/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CAMNebulaDaemonConnectionManagerDelegate.h>
#import <libobjc.A.dylib/CAMPersistenceResultDelegate.h>

@protocol OS_dispatch_queue;
@class CAMTimelapseBackendController, CAMNebulaIrisBackendController, CAMPersistenceController, CAMNebulaKeepAliveController, NSXPCListener, NSObject, NSMutableArray, NSString;

@interface CAMNebulaDaemon : NSObject <NSXPCListenerDelegate, CAMNebulaDaemonConnectionManagerDelegate, CAMPersistenceResultDelegate> {

	CAMTimelapseBackendController* __timelapseBackendController;
	CAMNebulaIrisBackendController* __irisBackendController;
	CAMPersistenceController* __persistenceController;
	CAMNebulaKeepAliveController* __keepAliveController;
	NSXPCListener* __listener;
	NSObject*<OS_dispatch_queue> __queue;
	NSMutableArray* __connections;

}

@property (nonatomic,readonly) CAMTimelapseBackendController * _timelapseBackendController;              //@synthesize _timelapseBackendController=__timelapseBackendController - In the implementation block
@property (nonatomic,readonly) CAMNebulaIrisBackendController * _irisBackendController;                  //@synthesize _irisBackendController=__irisBackendController - In the implementation block
@property (nonatomic,readonly) CAMPersistenceController * _persistenceController;                        //@synthesize _persistenceController=__persistenceController - In the implementation block
@property (nonatomic,readonly) CAMNebulaKeepAliveController * _keepAliveController;                      //@synthesize _keepAliveController=__keepAliveController - In the implementation block
@property (nonatomic,readonly) NSXPCListener * _listener;                                                //@synthesize _listener=__listener - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _queue;                                      //@synthesize _queue=__queue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _connections;                                            //@synthesize _connections=__connections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCListener *)_listener;
-(id)init;
-(NSObject*<OS_dispatch_queue>)_queue;
-(CAMPersistenceController *)_persistenceController;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSMutableArray *)_connections;
-(CAMNebulaKeepAliveController *)_keepAliveController;
-(void)daemonConnectionManagerHasBeenDisconnected:(id)arg1 ;
-(void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4 ;
-(CAMTimelapseBackendController *)_timelapseBackendController;
-(CAMNebulaIrisBackendController *)_irisBackendController;
-(id)allowedProtocolForClientAccess:(id)arg1 ;
-(void)performPendingWorkAfterDelay:(double)arg1 ;
@end
