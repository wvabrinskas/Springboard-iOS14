/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceTargetDevice.h>

@protocol NPKPaymentWebServiceStandaloneTargetDeviceDelegate;
@interface NPKPaymentWebServiceStandaloneTargetDevice : PKPaymentWebServiceTargetDevice {

	id<NPKPaymentWebServiceStandaloneTargetDeviceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NPKPaymentWebServiceStandaloneTargetDeviceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)standalonePaymentWebServiceWithDelegate:(id)arg1 ;
-(void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg1 ;
-(void)endRequiringUpgradedPasscodeIfNecessary;
-(id<NPKPaymentWebServiceStandaloneTargetDeviceDelegate>)delegate;
-(void)setDelegate:(id<NPKPaymentWebServiceStandaloneTargetDeviceDelegate>)arg1 ;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(/*^block*/id)arg1 ;
@end

