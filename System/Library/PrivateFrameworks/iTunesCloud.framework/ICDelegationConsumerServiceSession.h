/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICDelegationConsumerNetServiceDelegate.h>
#import <libobjc.A.dylib/ICDelegationServiceConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray, ICDelegationConsumerNetService, ICDelegationConsumerServiceProtocolHandler, NSMutableDictionary, ICDelegationConsumerServiceRequest, NSString;

@interface ICDelegationConsumerServiceSession : NSObject <ICDelegationConsumerNetServiceDelegate, ICDelegationServiceConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _acceptedConnections;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	ICDelegationConsumerNetService* _netService;
	NSMutableArray* _pendingUserIdentities;
	ICDelegationConsumerServiceProtocolHandler* _protocolHandler;
	NSMutableDictionary* _sessionIDToRequestInfoMap;
	NSObject*<OS_dispatch_source> _timeoutDispatchSource;
	ICDelegationConsumerServiceRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) ICDelegationConsumerServiceRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) id responseHandler;                                             //@synthesize responseHandler=_responseHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)responseHandler;
-(ICDelegationConsumerServiceRequest *)request;
-(void)start;
-(void)_stop;
-(void)delegationServiceConnectionDidClose:(id)arg1 ;
-(BOOL)delegationServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)delegationServiceConnection:(id)arg1 didEncouterError:(id)arg2 ;
-(void)stop;
-(id)initWithRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleTimeout;
-(void)dealloc;
-(void)delegationConsumerNetService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
@end
