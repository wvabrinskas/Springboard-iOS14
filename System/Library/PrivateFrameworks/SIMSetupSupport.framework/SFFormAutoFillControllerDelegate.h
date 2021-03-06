/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SFFormAutoFillControllerDelegate <NSObject>
@optional
-(BOOL)formAutoFillControllerShouldShowIconsInPasswordPicker:(id)arg1;
-(void)formAutoFillControllerGetAuthenticationForAutoFill:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)formAutoFillControllerShouldDisableStreamlinedLogin:(id)arg1;
-(void)formAutoFillControllerUserChoseToUseGeneratedPassword:(id)arg1;
-(BOOL)formAutoFillControllerDidUserDeclineAutomaticStrongPasswordForCurrentDomain:(id)arg1;
-(void)formAutoFillControllerDidFocusSensitiveFormField:(id)arg1;

@required
-(id)formAutoFillControllerURLForFormAutoFill:(id)arg1;
-(BOOL)formAutoFillControllerCanPrefillForm:(id)arg1;

@end

