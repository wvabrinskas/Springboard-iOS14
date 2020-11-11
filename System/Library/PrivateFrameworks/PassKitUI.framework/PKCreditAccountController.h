/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKAccountFlowController.h>

@interface PKCreditAccountController : PKAccountFlowController
+(BOOL)_shouldDisplayBalanceForAccount:(id)arg1 ;
+(BOOL)_shouldDisplayBalanceAndTransactionsForTransactionSource:(id)arg1 ;
+(BOOL)_shouldDisplayTransactionsForAccount:(id)arg1 ;
+(id)relevantScheduledPaymentFromScheduledPayments:(id)arg1 account:(id)arg2 ;
+(void)resolutionToReceiveCashbackForAccount:(id)arg1 withPeerPaymentAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)shouldDisplayAccountInformationForTransactionSource:(id)arg1 withAccount:(id)arg2 ;
+(BOOL)shouldDisplayTransactionsForTransactionSource:(id)arg1 withAccount:(id)arg2 ;
+(unsigned long long)paymentEducationStateForAccount:(id)arg1 mostRecentTransactions:(id)arg2 upcomingScheduledPayments:(id)arg3 ;
@end
