/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFRemoteExecutionSessionDelegate.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, IDSService, NSObject, NSString;

@interface WFRemoteExecutionCoordinator : NSObject <WFRemoteExecutionSessionDelegate, IDSServiceDelegate> {

	BOOL _allowRunRequests;
	NSMutableArray* _activeSessions;
	IDSService* _service;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * activeSessions;                       //@synthesize activeSessions=_activeSessions - In the implementation block
@property (nonatomic,retain) IDSService * service;                                  //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL allowRunRequests;                               //@synthesize allowRunRequests=_allowRunRequests - In the implementation block
@property (nonatomic,readonly) NSString * pairedDeviceModelIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCoordinator;
-(void)cancelRequest:(id)arg1 ;
-(BOOL)hasPairedDevice;
-(void)setService:(IDSService *)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id)unknownRequestMessageWithIdentifier:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id)pairedDevice;
-(NSString *)pairedDeviceModelIdentifier;
-(void)handleAskWhenRunRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id)defaultIDSOptions;
-(id)initAndAllowRunRequests:(BOOL)arg1 ;
-(BOOL)shouldDropMessageDueToStaleness:(id)arg1 ;
-(void)finishSessionWithRequest:(id)arg1 ;
-(void)cancelAllSessions;
-(void)handleIncomingAceCommand:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)mapSelectorsForIncomingProtobuf;
-(id)unknownRequestError;
-(void)handleAceCommandResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id)sessionsOfClass:(Class)arg1 ;
-(void)handleAskWhenRunRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)sendRunRequestResponse:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(BOOL)sendStopRequest:(id)arg1 error:(id*)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(NSMutableArray *)activeSessions;
-(void)handleAlertRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)setActiveSessions:(NSMutableArray *)arg1 ;
-(void)sendFileAtURL:(id)arg1 transferIdentifier:(id)arg2 requestIdentifier:(id)arg3 error:(id*)arg4 ;
-(BOOL)allowRunRequests;
-(void)handleStopRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)handleRunRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)sendAlertRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendAskWhenRunRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)sessionFromRequestIdentifier:(id)arg1 ;
-(void)handleAlertRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)handleUnknownRequestMessage:(id)arg1 ;
-(void)sendAceCommandDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelSessions:(id)arg1 ;
-(void)sessionDidFinish:(id)arg1 ;
-(IDSService *)service;
-(void)handleRunRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancelPendingFileTransfers;
-(BOOL)messageCameFromPairedDevice:(id)arg1 ;
-(void)sendRunRequest:(id)arg1 userInterface:(id)arg2 parameterInputProvider:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

