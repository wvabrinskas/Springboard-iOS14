/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UITextField;


@protocol PKPerformActionView <NSObject>
@property (assign,nonatomic,__weak) id<PKPerformActionViewDelegate> delegate; 
@property (nonatomic,readonly) UITextField * amountTextField; 
@optional
-(void)willDismissViewController;

@required
-(id<PKPerformActionViewDelegate>)delegate;
-(id)transactionAmount;
-(UITextField *)amountTextField;
-(void)setDelegate:(id)arg1;
-(id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
-(id)serviceProviderData;
-(id)transactionCurrency;
-(void)saveLastInputValues;
-(id)pass;

@end
