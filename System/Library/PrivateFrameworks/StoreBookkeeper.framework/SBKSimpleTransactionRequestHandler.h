/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreBookkeeper/SBKRequestHandler.h>

@class SBKTransactionController;

@interface SBKSimpleTransactionRequestHandler : SBKRequestHandler {

	BOOL _canceled;
	SBKTransactionController* _transactionController;

}

@property (nonatomic,readonly) SBKTransactionController * transactionController;              //@synthesize transactionController=_transactionController - In the implementation block
@property (nonatomic,readonly) BOOL canceled;                                                 //@synthesize canceled=_canceled - In the implementation block
-(BOOL)canceled;
-(id)initWithBagContext:(id)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(void)timeout;
-(void)cancel;
-(SBKTransactionController *)transactionController;
-(void)scheduleTransaction:(id)arg1 finishedBlock:(/*^block*/id)arg2 ;
@end

