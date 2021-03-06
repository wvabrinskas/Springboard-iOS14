/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AuthKit/AuthKit-Structs.h>
@class NSObject, NSXPCListenerEndpoint, NSXPCConnection, AKAppleIDAuthenticationController;

@interface AKAppleIDSigningController : NSObject {

	os_unfair_lock_s _signerLock;
	NSObject*<OS_dispatch_queue> _signingQueue;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSXPCConnection* _connection;
	BOOL _isProxy;
	AKAppleIDAuthenticationController* _authenticationController;

}

@property (nonatomic,retain) AKAppleIDAuthenticationController * authenticationController;              //@synthesize authenticationController=_authenticationController - In the implementation block
@property (assign,nonatomic) BOOL isProxy;                                                              //@synthesize isProxy=_isProxy - In the implementation block
-(id)_connection;
-(AKAppleIDAuthenticationController *)authenticationController;
-(id)init;
-(BOOL)isProxy;
-(void)_connectionInvalidated;
-(void)signaturesForData:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setIsProxy:(BOOL)arg1 ;
-(void)absintheSignatureForData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAuthenticationController:(AKAppleIDAuthenticationController *)arg1 ;
-(void)_additionalAbsintheHeadersForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_additionalAttestationHeadersForRequest:(id)arg1 withInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signingHeadersForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(void)_connectionInterrupted;
-(void)dealloc;
@end

