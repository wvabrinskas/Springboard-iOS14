/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMXPCMessageTransport.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, HMDXPCMessageCountTracker, NSString, HMDXPCMessageSendPolicyParameters, NSDictionary, HMDProcessInfo, NSXPCConnection, HMDXPCRequestTracker, NSSet;

@interface HMDXPCClientConnection : HMFMessageTransport <HMXPCMessageTransport, HMFLogging> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	HMDXPCMessageCountTracker* _counterTracker;
	NSString* _signature;
	BOOL _activated;
	BOOL _entitledForAPIAccess;
	BOOL _entitledForBackgroundMode;
	BOOL _entitledForCameraClipsAccess;
	BOOL _entitledForMultiUserSetupAccess;
	BOOL _entitledForPersonManagerAccess;
	HMDXPCMessageSendPolicyParameters* _sendPolicyParameters;
	NSDictionary* _userInfo;
	HMDProcessInfo* _processInfo;
	NSXPCConnection* _xpcConnection;
	unsigned long long _entitlements;
	NSString* _clientName;
	HMDXPCRequestTracker* _requestTracker;
	NSDictionary* _privateAccessEntitlement;

}

@property (nonatomic,readonly) id remoteProxy; 
@property (nonatomic,retain) NSString * clientName;                                                                                      //@synthesize clientName=_clientName - In the implementation block
@property (assign,nonatomic,__weak) NSXPCConnection * xpcConnection;                                                                     //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) HMDXPCRequestTracker * requestTracker;                                                                    //@synthesize requestTracker=_requestTracker - In the implementation block
@property (assign,getter=isActivated,nonatomic) BOOL activated;                                                                          //@synthesize activated=_activated - In the implementation block
@property (nonatomic,retain) NSDictionary * privateAccessEntitlement;                                                                    //@synthesize privateAccessEntitlement=_privateAccessEntitlement - In the implementation block
@property (nonatomic,retain) HMDXPCMessageSendPolicyParameters * sendPolicyParameters;                                                   //@synthesize sendPolicyParameters=_sendPolicyParameters - In the implementation block
@property (retain) HMDProcessInfo * processInfo;                                                                                         //@synthesize processInfo=_processInfo - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (copy,readonly) NSDictionary * userInfo;                                                                                       //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) Class principalClass; 
@property (nonatomic,readonly) int clientPid; 
@property (nonatomic,readonly) NSSet * activeRequests; 
@property (getter=isAuthorizedForHomeDataAccess,nonatomic,readonly) BOOL authorizedForHomeDataAccess; 
@property (getter=isAuthorizedForMicrophoneAccess,nonatomic,readonly) BOOL authorizedForMicrophoneAccess; 
@property (readonly) unsigned long long entitlements;                                                                                    //@synthesize entitlements=_entitlements - In the implementation block
@property (getter=isEntitledForAPIAccess,nonatomic,readonly) BOOL entitledForAPIAccess;                                                  //@synthesize entitledForAPIAccess=_entitledForAPIAccess - In the implementation block
@property (getter=isEntitledForSPIAccess,readonly) BOOL entitledForSPIAccess; 
@property (getter=isAuthorizedForLocationAccess,nonatomic,readonly) BOOL authorizedForLocationAccess; 
@property (getter=isEntitledForBackgroundMode,nonatomic,readonly) BOOL entitledForBackgroundMode;                                        //@synthesize entitledForBackgroundMode=_entitledForBackgroundMode - In the implementation block
@property (getter=isEntitledForHomeLocationAccess,nonatomic,readonly) BOOL entitledForHomeLocationAccess; 
@property (getter=isEntitledForCameraClipsAccess,nonatomic,readonly) BOOL entitledForCameraClipsAccess;                                  //@synthesize entitledForCameraClipsAccess=_entitledForCameraClipsAccess - In the implementation block
@property (getter=isEntitledForMultiUserSetupAccess,nonatomic,readonly) BOOL entitledForMultiUserSetupAccess;                            //@synthesize entitledForMultiUserSetupAccess=_entitledForMultiUserSetupAccess - In the implementation block
@property (getter=isEntitledForShortcutsAutomationAccess,nonatomic,readonly) BOOL entitledForShortcutsAutomationAccess; 
@property (getter=isEntitledToProvideAccessorySetupPayload,nonatomic,readonly) BOOL entitledToProvideAccessorySetupPayload; 
@property (getter=isEntitledForPersonManagerAccess,nonatomic,readonly) BOOL entitledForPersonManagerAccess;                              //@synthesize entitledForPersonManagerAccess=_entitledForPersonManagerAccess - In the implementation block
@property (getter=isEntitledForSecureAccess,nonatomic,readonly) BOOL entitledForSecureAccess; 
@property (getter=isEntitledForStateDump,nonatomic,readonly) BOOL entitledForStateDump; 
@property (getter=isPlatformBinary,readonly) BOOL platformBinary; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifier; 
@property (nonatomic,readonly) NSString * companionAppBundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(unsigned long long)entitlementsForConnection:(id)arg1 ;
-(BOOL)isActivated;
-(void)setActivated:(BOOL)arg1 ;
-(void)setClientName:(NSString *)arg1 ;
-(unsigned long long)entitlements;
-(id)attributeDescriptions;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(HMDProcessInfo *)processInfo;
-(id)_displayName;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(BOOL)isPlatformBinary;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleMessage:(id)arg1 ;
-(void)setProcessInfo:(HMDProcessInfo *)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)clientName;
-(int)clientPid;
-(NSString *)applicationBundleIdentifier;
-(NSString *)name;
-(void)updateUserInfo:(id)arg1 ;
-(void)handleMessage:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(NSSet *)activeRequests;
-(void)deactivate;
-(Class)principalClass;
-(id)logIdentifier;
-(id)shortDescription;
-(void)dealloc;
-(BOOL)canSendMessage:(id)arg1 ;
-(id)remoteProxy;
-(BOOL)isEntitledForSPIAccess;
-(HMDXPCMessageSendPolicyParameters *)sendPolicyParameters;
-(void)updateSendPolicyParameters:(id)arg1 ;
-(BOOL)isEntitledToProvideAccessorySetupPayload;
-(BOOL)isAuthorizedForLocationAccess;
-(BOOL)isEntitledForSecureAccess;
-(BOOL)isEntitledForHomeLocationAccess;
-(BOOL)isEntitledForShortcutsAutomationAccess;
-(BOOL)isEntitledForAPIAccess;
-(BOOL)isAuthorizedForHomeDataAccess;
-(BOOL)isAuthorizedForMicrophoneAccess;
-(BOOL)isEntitledForBackgroundMode;
-(BOOL)isEntitledForStateDump;
-(NSString *)companionAppBundleIdentifier;
-(unsigned long long)homeManagerOptions;
-(HMDXPCRequestTracker *)requestTracker;
-(void)__handleApplicationStateChange:(id)arg1 ;
-(void)initiateRefresh;
-(void)setSendPolicyParameters:(HMDXPCMessageSendPolicyParameters *)arg1 ;
-(BOOL)isEntitledForCameraClipsAccess;
-(BOOL)isEntitledForMultiUserSetupAccess;
-(BOOL)isEntitledForPersonManagerAccess;
-(BOOL)shouldSendResponseForMessageIdentifier:(id)arg1 ;
-(id)counterIdentifierForMessage:(id)arg1 ;
-(id)initWithConnection:(id)arg1 counterTracker:(id)arg2 ;
-(NSDictionary *)privateAccessEntitlement;
-(void)setPrivateAccessEntitlement:(NSDictionary *)arg1 ;
@end

