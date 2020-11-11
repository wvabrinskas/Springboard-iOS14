/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLMediaLibraryAccountChangeObserver.h>
#import <libobjc.A.dylib/MLMediaLibraryResourcesServiceProtocol.h>

@protocol OS_dispatch_queue, MLMediaLibraryAccountChangeObserver;
@class NSObject, NSXPCConnection, NSOperationQueue, NSString;

@interface MLMediaLibraryResourcesServiceClient : NSObject <MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceProtocol> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSXPCConnection* _xpcClientConnection;
	id<MLMediaLibraryAccountChangeObserver> _accountChangeObserver;
	NSOperationQueue* _accountChangeOperationQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                                 //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;                                //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcClientConnection;                                      //@synthesize xpcClientConnection=_xpcClientConnection - In the implementation block
@property (nonatomic,retain) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;              //@synthesize accountChangeObserver=_accountChangeObserver - In the implementation block
@property (nonatomic,retain) NSOperationQueue * accountChangeOperationQueue;                             //@synthesize accountChangeOperationQueue=_accountChangeOperationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSOperationQueue *)accountChangeOperationQueue;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)setAccountChangeOperationQueue:(NSOperationQueue *)arg1 ;
-(void)emergencyDisconnectWithCompletion:(/*^block*/id)arg1 ;
-(id<MLMediaLibraryAccountChangeObserver>)accountChangeObserver;
-(void)terminateForFailureToPerformDatabasePathChange;
-(void)performDatabasePathChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAccountChangeObserver:(id<MLMediaLibraryAccountChangeObserver>)arg1 ;
-(id)_initWithAccountChangeObserver:(id)arg1 ;
-(id)_libraryContainerPathWithError:(id*)arg1 ;
-(NSXPCConnection *)xpcClientConnection;
-(id)connectionWithListenerEndpoint:(id)arg1 ;
-(id)libraryContainerPathWithError:(id*)arg1 ;
-(void)setXpcClientConnection:(NSXPCConnection *)arg1 ;
@end
