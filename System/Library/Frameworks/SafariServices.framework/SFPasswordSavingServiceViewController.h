/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/SFPasswordServiceViewController.h>
#import <libobjc.A.dylib/_ASAccountAuthenticationModificationExtensionManagerObserver.h>
#import <libobjc.A.dylib/_ASAccountAuthenticationModificationHostViewControllerDelegate.h>
#import <libobjc.A.dylib/SFPasswordSavingServiceViewControllerProtocol.h>

@class NSArray, NSString, NSURLCredential, UIAlertController, WBSAutoFillQuirksManager, WBSPasswordWarning, NSExtension, _ASAccountAuthenticationModificationHostViewController, WBSSavedPasswordStore;

@interface SFPasswordSavingServiceViewController : SFPasswordServiceViewController <_ASAccountAuthenticationModificationExtensionManagerObserver, _ASAccountAuthenticationModificationHostViewControllerDelegate, SFPasswordSavingServiceViewControllerProtocol> {

	long long _action;
	NSArray* _protectionSpacesToUpdate;
	NSString* _domainForSavePasswordAction;
	NSURLCredential* _credential;
	NSString* _tokenForShowingPrompt;
	UIAlertController* _prompt;
	WBSAutoFillQuirksManager* _autoFillQuirksManager;
	WBSPasswordWarning* _passwordWarning;
	NSExtension* _accountModificationExtension;
	_ASAccountAuthenticationModificationHostViewController* _accountModificationHostViewController;
	WBSSavedPasswordStore* _savedPasswordStore;
	BOOL _supportsUpgradeToStrongPassword;
	BOOL _supportsUpgradeToSignInWithApple;
	BOOL _passwordIsWeakEnoughForActiveWarning;
	BOOL _passwordHasLikelyBeenCompromised;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
-(void)_dismiss;
-(void)credentialsSubmittedForWebsiteURL:(id)arg1 user:(id)arg2 password:(id)arg3 passwordIsAutoGenerated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_initiateUpgradeToSignInWithApple;
-(void)_initiateChangeToStrongPassword;
-(void)_saveCredential:(id)arg1 ;
-(void)_updateCredential:(id)arg1 ;
-(void)_checkIfWarningStoreAlreadyContainsCredentialWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_configureSecurityPromptActionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_showAccountModificationPrompt;
-(id)_titleStringForAccountModificationPrompt;
-(id)_messageStringForAccountModificationPrompt;
-(void)_addUpgradeToSignInWithAppleActionToPrompt;
-(void)_addChangeToStrongPasswordActionToPrompt;
-(void)_addChangePasswordOnWebsiteActionToPrompt;
-(void)_openPasswordManagerToChangePasswordOnWebsite;
-(void)_removeCredential:(id)arg1 ;
-(void)showPromptWithToken:(id)arg1 style:(long long)arg2 ;
@end
