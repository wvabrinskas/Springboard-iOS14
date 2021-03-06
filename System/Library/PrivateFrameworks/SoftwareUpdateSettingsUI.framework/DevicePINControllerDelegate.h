/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DevicePINControllerDelegate <NSObject>
@optional
-(void)devicePINControllerDidDismissPINPane:(id)arg1;
-(void)didAcceptSetPIN;
-(void)devicePINController:(id)arg1 didFailToSetPinWithError:(id)arg2;
-(void)didCancelEnteringPIN;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
-(void)devicePINController:(id)arg1 didFailToChangePinWithError:(id)arg2;
-(void)didAcceptChangedPIN;
-(void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
-(void)willAcceptEnteredPIN;
-(void)didAcceptEnteredPIN;
-(void)didAcceptRemovePIN;
-(void)devicePINController:(id)arg1 shouldAcceptPIN:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)willCancelEnteringPIN;
-(void)showWeakWarningAlertForController:(id)arg1 offerUseAnyway:(BOOL)arg2 withCompletion:(/*^block*/id)arg3;
-(void)didAcceptEnteredPIN:(id)arg1;

@end

