/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/_KSTextReplacementSyncProtocol.h>
#import <libobjc.A.dylib/_KSTextReplacementStoreProtocol.h>
#import <libobjc.A.dylib/_KSTextReplacementCancellation.h>

@protocol OS_dispatch_queue;
@class NSObject, _KSTRClient, _KSTextReplacementManager, APSConnection, NSXPCListener, NSString;

@interface _KSTextReplacementServer : NSObject <NSXPCListenerDelegate, APSConnectionDelegate, _KSTextReplacementSyncProtocol, _KSTextReplacementStoreProtocol, _KSTextReplacementCancellation> {

	NSObject*<OS_dispatch_queue> _workQueue;
	_KSTRClient* _daemonClient;
	_KSTextReplacementManager* _textReplacementManager;
	APSConnection* _pushConnection;
	NSXPCListener* _listener;
	NSString* _directoryPath;

}

@property (nonatomic,retain) APSConnection * pushConnection;                                  //@synthesize pushConnection=_pushConnection - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                        //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) _KSTextReplacementManager * textReplacementManager;              //@synthesize textReplacementManager=_textReplacementManager - In the implementation block
@property (nonatomic,copy) NSString * directoryPath;                                          //@synthesize directoryPath=_directoryPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isBlackListed:(unsigned)arg1 ;
+(id)textReplacementServer;
-(void)removeAllEntries;
-(void)shutdown;
-(NSString *)directoryPath;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(void)start;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)queryTextReplacementsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)requestSync:(unsigned long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)queryTextReplacementsWithCallback:(/*^block*/id)arg1 ;
-(id)init;
-(NSXPCListener *)listener;
-(_KSTextReplacementManager *)textReplacementManager;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 forClient:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)textReplacementEntries;
-(void)scheduleSyncTask;
-(void)cancelPendingUpdates;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)runMigration;
-(void)cleanup;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)isSetupAssistantRunning;
-(void)setTextReplacementManager:(_KSTextReplacementManager *)arg1 ;
-(void)setPushConnection:(APSConnection *)arg1 ;
-(void)registerForPushNotifications;
-(APSConnection *)pushConnection;
-(void)reachabilityDidChange:(id)arg1 ;
-(id)initWithDatabaseDirectoryPath:(id)arg1 ;
-(void)_performCleanup;
-(BOOL)_cancelPendingUpdateForClient:(id)arg1 ;
-(id)textReplacementEntriesForClient:(id)arg1 ;
-(void)dealloc;
-(void)buddySetupDidFinish;
@end

