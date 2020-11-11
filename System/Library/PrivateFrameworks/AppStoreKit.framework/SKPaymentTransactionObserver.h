/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SKPaymentTransactionObserver <NSObject>
@optional
-(void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
-(void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
-(void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
-(void)paymentQueue:(id)arg1 updatedDownloads:(id)arg2;
-(BOOL)paymentQueue:(id)arg1 shouldAddStorePayment:(id)arg2 forProduct:(id)arg3;
-(void)paymentQueueDidChangeStorefront:(id)arg1;
-(void)paymentQueue:(id)arg1 didRevokeEntitlementsForProductIdentifiers:(id)arg2;

@required
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;

@end
