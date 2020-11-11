/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentSetupFieldCell.h>

@class UIImageView;

@interface PKPaymentSetupBuiltInCardOnFilePrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {

	UIImageView* _accessoryImageView;
	BOOL _hasDarkAppearance;
	long long _paymentCredentialType;

}

@property (assign,nonatomic) long long paymentCredentialType;              //@synthesize paymentCredentialType=_paymentCredentialType - In the implementation block
@property (assign,nonatomic) BOOL hasDarkAppearance;                       //@synthesize hasDarkAppearance=_hasDarkAppearance - In the implementation block
-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setEnabled:(BOOL)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setPaymentSetupField:(id)arg1 ;
-(BOOL)hasDarkAppearance;
-(void)setHasDarkAppearance:(BOOL)arg1 ;
-(void)_updateNetworkImage;
-(id)_networkImage;
-(long long)paymentCredentialType;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)isEnabled;
-(void)setPaymentCredentialType:(long long)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)dealloc;
@end
