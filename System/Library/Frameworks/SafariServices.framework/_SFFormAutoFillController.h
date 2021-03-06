/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SFCredentialProviderExtensionManagerObserver.h>
#import <libobjc.A.dylib/_SFAutoFillInputViewDelegate.h>
#import <libobjc.A.dylib/SFFormMetadataObserver.h>
#import <libobjc.A.dylib/_SFAuthenticationClient.h>

@protocol WBUFormAutoFillWebView, SFFormAutoFillControllerDelegate, SFFormAutoFiller;
@class WKWebView, _WKRemoteObjectInterface, SFFormAutocompleteState, NSTimer, WBSFormMetadata, SFFormAutoFillFrameHandle, NSMutableIndexSet, NSMutableSet, NSString, NSArray, _SFFormAutoFillInputSession, _SFAutoFillInputView, NSDictionary, CNContact, WBSCreditCardData, NSSet, _SFAuthenticationContext, SFAppAutoFillOneTimeCodeProvider;

@interface _SFFormAutoFillController : NSObject <SFCredentialProviderExtensionManagerObserver, _SFAutoFillInputViewDelegate, SFFormMetadataObserver, _SFAuthenticationClient> {

	WKWebView*<WBUFormAutoFillWebView> _webView;
	id<SFFormAutoFillControllerDelegate> _delegate;
	_WKRemoteObjectInterface* _remoteObjectInterface;
	id<SFFormAutoFiller> _autoFiller;
	BOOL _isCurrentlyAuthenticating;
	long long _authenticationType;
	SFFormAutocompleteState* _state;
	NSTimer* _prefillTimer;
	WBSFormMetadata* _unsubmittedForm;
	SFFormAutoFillFrameHandle* _unsubmittedFormFrame;
	NSMutableIndexSet* _uniqueIDsOfFormsThatWereAutoFilled;
	NSMutableSet* _uniqueIDsOfControlsThatWereAutoFilled;
	NSString* _uniqueIDOfFocusedPasswordElementWithAutomaticPassword;
	NSArray* _uniqueIDsOfPasswordElementsForAutomaticPasswords;
	SFFormAutoFillFrameHandle* _frameHandleForAutomaticPasswords;
	_SFFormAutoFillInputSession* _inputSessionForAutomaticPasswords;
	_SFAutoFillInputView* _autoFillInputView;
	NSArray* _preservedLeadingBarButtonGroups;
	NSArray* _preservedTrailingBarButtonGroups;
	BOOL _attemptedOfferingStreamlinedLogin;
	NSDictionary* _externalCredentialIdentitiesForStreamlinedAutoFill;
	BOOL _metadataCorrectionsEnabled;
	CNContact* _lastFilledContact;
	WBSCreditCardData* _lastFilledCreditCardData;
	NSSet* _lastFilledCreditCardDataTypes;

}

@property (nonatomic,readonly) UIView*<WBUFormAutoFillWebView> webView; 
@property (assign,nonatomic) BOOL metadataCorrectionsEnabled;                                       //@synthesize metadataCorrectionsEnabled=_metadataCorrectionsEnabled - In the implementation block
@property (nonatomic,readonly) _SFAuthenticationContext * authenticationContext; 
@property (nonatomic,readonly) SFAppAutoFillOneTimeCodeProvider * oneTimeCodeProvider; 
@property (nonatomic,retain) CNContact * lastFilledContact;                                         //@synthesize lastFilledContact=_lastFilledContact - In the implementation block
@property (nonatomic,retain) WBSCreditCardData * lastFilledCreditCardData;                          //@synthesize lastFilledCreditCardData=_lastFilledCreditCardData - In the implementation block
@property (nonatomic,retain) NSSet * lastFilledCreditCardDataTypes;                                 //@synthesize lastFilledCreditCardDataTypes=_lastFilledCreditCardDataTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_filterAndSortCredentialIdentities:(id)arg1 pageURL:(id)arg2 exactMatchesOnly:(BOOL)arg3 ;
+(void)_getExternalLoginCredentialSuggestionsForDomains:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_getExternalLoginCredentialSuggestionsForDomains:(id)arg1 pageURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(UIView*<WBUFormAutoFillWebView>)webView;
-(void)insertTextSuggestion:(id)arg1 ;
-(void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3 ;
-(void)removeAutomaticPasswordVisualTreatment;
-(id)initWithWebView:(id)arg1 delegate:(id)arg2 ;
-(void)removeAutomaticPasswordButtonInitiatedByUser:(BOOL)arg1 ;
-(void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2 ;
-(void)_didFocusSensitiveFormField;
-(void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)fieldDidFocusWithInputSession:(id)arg1 ;
-(void)_restoreInputAssistantItemsIfNecessary;
-(id)passcodePromptForContext:(id)arg1 ;
-(void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1 ;
-(void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2 ;
-(void)_fieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)textFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(id)_preFillDisabledHosts;
-(void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 andClearField:(id)arg3 inFrame:(id)arg4 ;
-(void)prepareForShowingAutomaticStrongPasswordWithInputSession:(id)arg1 ;
-(id)_websiteForAuthenticationPrompt;
-(void)passwordFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)_hideInputAssistantItemsIfNecessary;
-(CNContact *)lastFilledContact;
-(id)authenticationCustomUIProgressObserverForContext:(id)arg1 ;
-(void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(id)_beginAutomaticPasswordInteractionWithInputSession:(id)arg1 generatedPassword:(id)arg2 ignorePreviousDecision:(BOOL)arg3 ;
-(_SFAuthenticationContext *)authenticationContext;
-(void)authenticateForAutoFillAuthenticationType:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 ;
-(SFAppAutoFillOneTimeCodeProvider *)oneTimeCodeProvider;
-(void)_prefillTimerFired:(id)arg1 ;
-(void)autoFill;
-(void)didRemoveAutomaticStrongPasswordInForm:(id)arg1 inputSessionUserObject:(id)arg2 inFrame:(id)arg3 ;
-(void)fieldWillFocusWithInputSession:(id)arg1 ;
-(void)_dismissKeyboardAndSimulateCarriageReturnKeyEvents:(BOOL)arg1 ;
-(void)_authenticateForAutoFillForHighLevelDomain:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_removeAutomaticPasswordButtonInitiatedByUser:(BOOL)arg1 removeVisualTreatmentOnly:(BOOL)arg2 ;
-(void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
-(void)autoFillInputViewDidSelectUseKeyboard:(id)arg1 ;
-(void)setLastFilledCreditCardData:(WBSCreditCardData *)arg1 ;
-(void)beginAutomaticPasswordInteractionWithInputSession:(id)arg1 generatedPassword:(id)arg2 ;
-(void)_removeUniqueIDsOfAutoFilledForm:(id)arg1 ;
-(void)setLastFilledContact:(CNContact *)arg1 ;
-(void)setMetadataCorrectionsEnabled:(BOOL)arg1 ;
-(void)_fieldFocusedWithInputSession:(id)arg1 ;
-(id)authenticationMessageForContext:(id)arg1 ;
-(void)autoFillInputViewDidSelectMorePasswords:(id)arg1 ;
-(void)setLastFilledCreditCardDataTypes:(NSSet *)arg1 ;
-(void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5 submitForm:(BOOL)arg6 ;
-(WBSCreditCardData *)lastFilledCreditCardData;
-(void)willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(/*^block*/id)arg3 ;
-(id)_simulatedWebEventForReturnKeyWithType:(int)arg1 ;
-(void)offerToSaveUnsubmittedFormDataIfNeeded;
-(void)updateSuggestions;
-(void)fieldFocusedWithInputSession:(id)arg1 ;
-(void)automaticPasswordSheetDismissed;
-(void)_addUniqueIDsOfAutoFilledForm:(id)arg1 ;
-(void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(void)autoFillDidFinishWithUpdatedFormMetadata:(id)arg1 inFrame:(id)arg2 shouldSubmit:(BOOL)arg3 ;
-(id)automaticPasswordForPasswordField:(id)arg1 inForm:(id)arg2 isFrame:(id)arg3 ;
-(void)willSubmitForm:(id)arg1 inFrame:(id)arg2 submissionHandler:(/*^block*/id)arg3 ;
-(void)fetchMetadataForTextField:(id)arg1 inFrame:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)metadataCorrectionsEnabled;
-(BOOL)displayMessageAsTitleForContext:(id)arg1 ;
-(void)prefillFormsSoonIfNeeded;
-(BOOL)_showingAutoFillInputView;
-(NSSet *)lastFilledCreditCardDataTypes;
-(void)invalidate;
-(void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2 ;
-(void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2 ;
-(BOOL)elementIsBeingFocusedForStreamlinedLogin:(id)arg1 ;
-(void)dealloc;
-(void)didUpdateUnsubmittedForm:(id)arg1 inFrame:(id)arg2 ;
-(id)beginAutomaticPasswordInteractionWithInputSession:(id)arg1 ;
-(BOOL)shouldShowIconsInPasswordPicker;
@end

