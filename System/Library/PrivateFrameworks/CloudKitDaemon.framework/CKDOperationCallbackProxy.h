/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CKOperationCallbacks.h>

@protocol CKOperationCallbacks;
@class Protocol;

@interface CKDOperationCallbackProxy : NSObject <CKOperationCallbacks> {

	id<CKOperationCallbacks> _clientOperationCallbackProxy;
	Protocol* _callbackProtocol;

}

@property (nonatomic,retain) id<CKOperationCallbacks> clientOperationCallbackProxy;              //@synthesize clientOperationCallbackProxy=_clientOperationCallbackProxy - In the implementation block
@property (nonatomic,retain) Protocol * callbackProtocol;                                        //@synthesize callbackProtocol=_callbackProtocol - In the implementation block
-(void)setClientOperationCallbackProxy:(id<CKOperationCallbacks>)arg1 ;
-(id<CKOperationCallbacks>)clientOperationCallbackProxy;
-(void)setCallbackProtocol:(Protocol *)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(Protocol *)callbackProtocol;
-(id)initWithClientOperationCallbackProxy:(id)arg1 callbackProtocol:(id)arg2 ;
-(void)forwardInvocation:(id)arg1 ;
@end

