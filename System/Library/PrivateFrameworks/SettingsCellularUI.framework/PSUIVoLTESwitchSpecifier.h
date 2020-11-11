/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSSpecifier.h>

@class CTXPCServiceSubscriptionContext, PSListController, PSConfirmationSpecifier, PSUICoreTelephonyCallCache, PSUICoreTelephonyCapabilitiesCache, PSUICoreTelephonyCarrierBundleCache, PSSpecifier;

@interface PSUIVoLTESwitchSpecifier : PSSpecifier {

	CTXPCServiceSubscriptionContext* _subscriptionContext;
	PSListController* _listController;
	PSConfirmationSpecifier* _unsupportedCarrierWarning;
	PSConfirmationSpecifier* _phoneCallWillEndWarning;
	PSUICoreTelephonyCallCache* _callCache;
	PSUICoreTelephonyCapabilitiesCache* _capabilitiesCache;
	PSUICoreTelephonyCarrierBundleCache* _carrierBundleCache;
	PSSpecifier* _parentSpecifier;

}
-(id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 ;
-(id)groupFooterText;
-(void)addSpinnerIfNeededToCell:(id)arg1 ;
-(void)setVoLTEEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getVoLTEEnabled;
-(BOOL)shouldEnableVoLTESwitchCell;
-(id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 callCache:(id)arg3 capabilitiesCache:(id)arg4 carrierBundleCache:(id)arg5 ;
-(BOOL)showWarningsIfNeededForEnableState:(BOOL)arg1 ;
-(void)setVoLTEEnabled:(BOOL)arg1 ;
-(BOOL)showEnableVoLTEWarningsIfNeeded;
-(BOOL)showDisableVoLTEWarningsIfNeeded;
-(BOOL)shouldShowCallCarrierAlert;
-(void)showCallCarrierAlert;
-(BOOL)shouldShowVoLTECanCauseIssuesWarning;
-(void)showVoLTECanCauseIssuesWarning;
-(BOOL)shouldShowCallWillEndWarning;
-(void)showPhoneCallWillEndWarning;
-(void)setUpPhoneCallWillEndWarningSpecifier;
-(void)setVoLTEOff;
-(void)reloadSelfInListController;
-(void)setUpVoLTEWarningSpecifier;
-(void)setVoLTEOn;
-(id)createCallCarrierAlertForContext:(id)arg1 ;
-(BOOL)isVoLTEProvisioning;
@end
