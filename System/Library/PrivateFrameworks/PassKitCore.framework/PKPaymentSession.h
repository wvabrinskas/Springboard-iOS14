/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NFSession;

@interface PKPaymentSession : NSObject {

	NSObject*<OS_dispatch_queue> _internalSessionSerialQueue;
	NFSession* _internalSession;

}

@property (nonatomic,readonly) unsigned long long lifecycleState; 
+(id)startInAppSessionWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
+(id)startContactlessInterfaceSessionWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
+(id)startReaderSessionWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
+(id)startPeerPaymentSessionWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
+(id)startApplePayTrustSessionWithCompletion:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
+(id)startInAppSessionWithCompletion:(/*^block*/id)arg1 ;
+(id)startContactlessInterfaceSessionWithCompletion:(/*^block*/id)arg1 ;
+(id)startReaderSessionWithCompletion:(/*^block*/id)arg1 ;
+(id)startPeerPaymentSessionWithCompletion:(/*^block*/id)arg1 ;
+(id)startApplePayTrustSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(unsigned long long)lifecycleState;
-(id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2 ;
-(void)performBlockSyncOnInternalSession:(/*^block*/id)arg1 ;
-(void)invalidateSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateSession;
-(void)performBlockAsyncOnInternalSession:(/*^block*/id)arg1 ;
@end
