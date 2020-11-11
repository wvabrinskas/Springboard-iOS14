/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PairedSync/PairedSync-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PSYActivity.h>
#import <libobjc.A.dylib/PSYServiceSyncSessionDelegate.h>

@protocol OS_dispatch_queue, PSYSyncCoordinatorDelegate;
@class NSXPCListener, NSObject, PSYServiceSyncSession, NSMutableDictionary, NSString, NSXPCConnection;

@interface PSYSyncCoordinator : NSObject <NSXPCListenerDelegate, PSYActivity, PSYServiceSyncSessionDelegate> {

	NSXPCListener* _listener;
	/*^block*/id _pendingCompletion;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	opaque_pthread_mutex_t _delegateLock;
	id<PSYSyncCoordinatorDelegate> _delegate;
	PSYServiceSyncSession* _activeSyncSession;
	int _syncSwitchIDToken;
	unsigned long long _syncRestriction;
	unsigned long long _syncIDOfStartedSync;
	BOOL _hasStartedListening;
	NSMutableDictionary* _nrDevices;
	NSString* _serviceName;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceName;                               //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) PSYServiceSyncSession * activeSyncSession; 
@property (assign,nonatomic,__weak) id<PSYSyncCoordinatorDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)syncCoordinatorWithServiceName:(id)arg1 ;
+(id)filteredErrorWithError:(id)arg1 ;
-(void)_cleanup;
-(void)invalidateActiveSyncSession;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(unsigned long long)syncRestriction;
-(void)_registerMonitorNRDevice:(id)arg1 forMigrationChanges:(/*^block*/id)arg2 ;
-(BOOL)_pairedSyncFinishedReunionSync;
-(oneway void)beginSyncWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<PSYSyncCoordinatorDelegate>)delegate;
-(id)progressHandler;
-(unsigned long long)_syncRestriction;
-(BOOL)_pairedSyncFinishedMigrationSyncWithPairingID:(id)arg1 ;
-(void)_syncRestrictionDidUpdate:(id)arg1 forServiceName:(id)arg2 ;
-(void)exitForTestInput:(id)arg1 ;
-(int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)syncSessionDidComplete:(id)arg1 ;
-(unsigned long long)readNotifyToken:(int)arg1 ;
-(id)initWithServiceName:(id)arg1 serviceLookupPath:(id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)syncSessionDidCompleteSending:(id)arg1 ;
-(void)setDelegate:(id<PSYSyncCoordinatorDelegate>)arg1 ;
-(void)syncSession:(id)arg1 reportProgress:(double)arg2 ;
-(void)unregisterForDeviceChangeNotifications;
-(oneway void)abortSyncWithCompletion:(/*^block*/id)arg1 ;
-(int)registerNotifyTokenWithName:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithServiceName:(id)arg1 ;
-(void)performDelegateBlock:(/*^block*/id)arg1 ;
-(id)syncSessionForOptions:(id)arg1 supportsMigrationSync:(BOOL)arg2 ;
-(void)syncDidCompleteSending;
-(void)_unregisterNRDeviceMonitors;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)beginDryRunSyncWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deviceChanged:(id)arg1 ;
-(void)syncDidFailWithError:(id)arg1 ;
-(void)_registerMonitorAllNRDevicesForMigrationChanges:(/*^block*/id)arg1 ;
-(PSYServiceSyncSession *)activeSyncSession;
-(NSXPCConnection *)connection;
-(void)registerForDeviceChangeNotifications;
-(void)syncSession:(id)arg1 didFailWithError:(id)arg2 ;
-(NSString *)serviceName;
-(void)reportProgress:(double)arg1 ;
-(void)dealloc;
-(void)syncDidComplete;
@end
