/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SKPaymentQueueClient;

@interface SKRequest : NSObject {

	id _requestInternal;

}

@property (nonatomic,copy) SKPaymentQueueClient * paymentQueueClient; 
@property (assign,nonatomic,__weak) id<SKRequestDelegate> delegate; 
-(void)start;
-(void)_start;
-(id)init;
-(id<SKRequestDelegate>)delegate;
-(void)_shutdownRequest;
-(void)_beginBackgroundTask;
-(void)setDelegate:(id<SKRequestDelegate>)arg1 ;
-(void)_endBackgroundTask;
-(void)setPaymentQueueClient:(SKPaymentQueueClient *)arg1 ;
-(void)cancel;
-(SKPaymentQueueClient *)paymentQueueClient;
-(void)_startWithMessage:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
@end
