/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKPaymentWebServiceDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableSet, NSTimer, NSMutableArray, NSString, PKPaymentCredential, PKAddPaymentPassRequestConfiguration, NSHashTable, NSSet, PKPaymentSetupMoreInfoItem, CLLocationManager, NSObject, PKPaymentService, PKPaymentWebService, NSArray, NSExtension, PKPaymentProvisioningControllerCredentialQueue, PKPaymentSetupProductModel, PKPaymentRequirementsResponse, PKPaymentEligibilityResponse, PKPaymentProvisioningResponse, PKPaymentPass;

@interface PKPaymentProvisioningController : NSObject <CLLocationManagerDelegate, PKPaymentServiceDelegate, PKPaymentWebServiceDelegate> {

	BOOL _preflightCompleted;
	NSMutableSet* _tasks;
	NSTimer* _descriptionTimer;
	NSMutableArray* _associatedCredentials;
	BOOL _provisioningUserInterfaceIsVisible;
	BOOL _proxyTargetDeviceWebServiceInUse;
	NSString* _provisioningNonce;
	PKPaymentCredential* _currentCredential;
	PKAddPaymentPassRequestConfiguration* _currentAddPaymentPassRequestConfiguration;
	NSHashTable* _delegates;
	os_unfair_lock_s _delegatesLock;
	NSSet* _supportedFeatureIdentifierStrings;
	NSSet* _supportedFeatureIdentifierStringsForAccountProvisioning;
	unsigned long long _targetDeviceSupportsTypeF;
	PKPaymentSetupMoreInfoItem* _marketExpressInfoItem;
	CLLocationManager* _locationManager;
	NSObject*<OS_dispatch_source> _locationTimer;
	/*^block*/id _locationCompletion;
	PKPaymentService* _paymentService;
	unsigned long long _backgroundTaskIdentifier;
	long long _provisioningStatusCount;
	NSObject*<OS_dispatch_queue> _updateQueue;
	BOOL _expressModeSetupOptional;
	BOOL _AMPEnrollmentAvailable;
	NSString* _productIdentifier;
	NSString* _referrerIdentifier;
	PKPaymentWebService* _webService;
	long long _state;
	NSString* _localizedProgressDescription;
	NSArray* _purchaseCredentials;
	NSExtension* _provisioningExtension;
	NSArray* _provisioningExtensionCredentials;
	PKPaymentProvisioningControllerCredentialQueue* _credentialProvisioningQueue;
	PKPaymentSetupProductModel* _paymentSetupProductModel;
	PKPaymentRequirementsResponse* _requirementsResponse;
	PKPaymentEligibilityResponse* _eligibilityResponse;
	PKPaymentProvisioningResponse* _provisioningResponse;
	PKPaymentPass* _provisionedPass;
	NSArray* _moreInfoItems;
	NSSet* _automaticExpressModes;
	NSArray* _allowedPaymentNetworks;
	NSSet* _requiredTransitNetworkIdentifiers;
	NSSet* _allowedFeatureIdentifiers;
	NSSet* _allowedProductIdentifiers;

}

@property (nonatomic,readonly) BOOL suppressDefaultCardholderNameField; 
@property (nonatomic,copy) NSString * referrerIdentifier;                                                                 //@synthesize referrerIdentifier=_referrerIdentifier - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * webService;                                                          //@synthesize webService=_webService - In the implementation block
@property (assign,nonatomic) long long state;                                                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedProgressDescription;                                              //@synthesize localizedProgressDescription=_localizedProgressDescription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * associatedCredentials;                                                      //@synthesize associatedCredentials=_associatedCredentials - In the implementation block
@property (nonatomic,copy,readonly) NSArray * purchaseCredentials;                                                        //@synthesize purchaseCredentials=_purchaseCredentials - In the implementation block
@property (nonatomic,readonly) NSExtension * provisioningExtension;                                                       //@synthesize provisioningExtension=_provisioningExtension - In the implementation block
@property (nonatomic,copy,readonly) NSArray * provisioningExtensionCredentials;                                           //@synthesize provisioningExtensionCredentials=_provisioningExtensionCredentials - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allCredentials; 
@property (nonatomic,readonly) PKPaymentProvisioningControllerCredentialQueue * credentialProvisioningQueue;              //@synthesize credentialProvisioningQueue=_credentialProvisioningQueue - In the implementation block
@property (nonatomic,readonly) PKPaymentSetupProductModel * paymentSetupProductModel;                                     //@synthesize paymentSetupProductModel=_paymentSetupProductModel - In the implementation block
@property (nonatomic,readonly) PKPaymentRequirementsResponse * requirementsResponse;                                      //@synthesize requirementsResponse=_requirementsResponse - In the implementation block
@property (nonatomic,copy,readonly) NSString * productIdentifier;                                                         //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,readonly) PKPaymentEligibilityResponse * eligibilityResponse;                                        //@synthesize eligibilityResponse=_eligibilityResponse - In the implementation block
@property (nonatomic,readonly) PKPaymentProvisioningResponse * provisioningResponse;                                      //@synthesize provisioningResponse=_provisioningResponse - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * provisionedPass;                                                           //@synthesize provisionedPass=_provisionedPass - In the implementation block
@property (nonatomic,readonly) NSArray * moreInfoItems;                                                                   //@synthesize moreInfoItems=_moreInfoItems - In the implementation block
@property (getter=isExpressModeSetupOptional,nonatomic,readonly) BOOL expressModeSetupOptional;                           //@synthesize expressModeSetupOptional=_expressModeSetupOptional - In the implementation block
@property (nonatomic,readonly) NSSet * automaticExpressModes;                                                             //@synthesize automaticExpressModes=_automaticExpressModes - In the implementation block
@property (getter=isAMPEnrollmentAvailable,nonatomic,readonly) BOOL AMPEnrollmentAvailable;                               //@synthesize AMPEnrollmentAvailable=_AMPEnrollmentAvailable - In the implementation block
@property (getter=isPasscodeUpgradeRequired,nonatomic,readonly) BOOL passcodeUpgradeRequired; 
@property (nonatomic,retain) NSArray * allowedPaymentNetworks;                                                            //@synthesize allowedPaymentNetworks=_allowedPaymentNetworks - In the implementation block
@property (nonatomic,retain) NSSet * requiredTransitNetworkIdentifiers;                                                   //@synthesize requiredTransitNetworkIdentifiers=_requiredTransitNetworkIdentifiers - In the implementation block
@property (nonatomic,retain) NSSet * allowedFeatureIdentifiers;                                                           //@synthesize allowedFeatureIdentifiers=_allowedFeatureIdentifiers - In the implementation block
@property (nonatomic,retain) NSSet * allowedProductIdentifiers;                                                           //@synthesize allowedProductIdentifiers=_allowedProductIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)featureApplicationRemoved:(id)arg1 ;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)addDelegate:(id)arg1 ;
-(BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)featureApplicationChanged:(id)arg1 ;
-(PKPaymentRequirementsResponse *)requirementsResponse;
-(PKPaymentEligibilityResponse *)eligibilityResponse;
-(void)setState:(long long)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)allCredentials;
-(PKPaymentWebService *)webService;
-(long long)state;
-(void)registerDevice:(/*^block*/id)arg1 ;
-(void)retrieveAllAvailableCredentials:(/*^block*/id)arg1 ;
-(void)performDeviceCheckInIfNeeded:(/*^block*/id)arg1 ;
-(void)validatePreconditions:(/*^block*/id)arg1 ;
-(NSArray *)associatedCredentials;
-(void)updatePaymentSetupProductModelWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)associateCredentials:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)reset;
-(id)displayableErrorForError:(id)arg1 ;
-(void)_noteProvisioningDidBegin;
-(void)_noteProvisioningDidEnd;
-(long long)_defaultResetState;
-(id)_supportedFeatureIdentifierStrings;
-(id)_displayableErrorOverrideForUnderlyingError:(id)arg1 ;
-(id)_doesDisplayableErrorConstitutePreflightFailure:(id)arg1 ;
-(id)_supportedFeatureIdentifierStringsForAccountProvisioning;
-(void)_addAccountToProductMatchingFeatureIdentifier:(unsigned long long)arg1 ;
-(id)_fetchOrCreateProductsForIdentifier:(unsigned long long)arg1 ;
-(BOOL)_featureApplicationInValidStateToPresent:(id)arg1 ;
-(void)retrieveAccountCredentials:(/*^block*/id)arg1 ;
-(void)retrieveRemoteCredentials:(/*^block*/id)arg1 ;
-(void)_associateCredentials:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_setState:(long long)arg1 notify:(BOOL)arg2 ;
-(BOOL)_hasSetupConfiguration;
-(BOOL)_credentialIsValidForSetupConfiguration:(id)arg1 ;
-(void)_updateCredentialWithPaymentPassAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateCredentialWithPaymentPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_associateCredential:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_queryEligibilityForCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queryRequirementsForCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)referrerIdentifier;
-(void)_downloadRemoteAssetsForPaymentPass:(id)arg1 paymentCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_informDelegatesOfPaymentPassUpdateOnCredential:(id)arg1 ;
-(id)_filterPaymentSetupProducts:(id)arg1 isCurrentUserUnder13:(BOOL)arg2 ;
-(void)setupFeatures:(/*^block*/id)arg1 ;
-(PKPaymentPass *)provisionedPass;
-(void)browsableBankAppsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)provisioningExtensionProductsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_mockBrowseBanksResponse;
-(NSExtension *)provisioningExtension;
-(void)updateRemoteCredentials:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)resetForNewProvisioning;
-(void)ingestPaymentPassForCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setupAccountCredentialForProvisioning:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestProvisioningMethodMetadataForProduct:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestPurchasesForProduct:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)associatedCredentialsForDefaultBehaviour;
-(BOOL)hasPaymentPass;
-(void)_setupAccountCredentialForProvisioning:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_requestEligibility:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_requestRequirements:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_setLocalizedProgressDescription:(id)arg1 ;
-(BOOL)_isProvisioningPaymentAccount;
-(id)provisioningTracker;
-(id)initWithWebService:(id)arg1 ;
-(void)_passAlreadyProvisioned;
-(void)_provisioningNonceWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestProvisioning:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_localizedProgressDescriptionForEnablingCard;
-(void)_ingestPaymentPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleProvisioningError:(id)arg1 forRequest:(id)arg2 ;
-(void)_downloadMoreInfoItemURLs:(id)arg1 withMetadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isValidLocation:(id)arg1 ;
-(void)_verifyPassIsSupportedForExpressInLocalMarket:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadMoreInfoItemForMarket:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_startLocationSearchWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_endRequiringUpgradedPasscodeIfNecessary;
-(NSArray *)purchaseCredentials;
-(NSArray *)moreInfoItems;
-(void)_startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg1 ;
-(id)_paymentPassWithPaymentMethodType:(unsigned long long)arg1 ;
-(void)handleOptionalExpressModeSetupDidFinishForPass:(id)arg1 withExpressModes:(id)arg2 provisioningTracker:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateLocalizedProgressAndInvalidateTimer;
-(void)paymentWebService:(id)arg1 didQueueTSMConnectionForTaskID:(unsigned long long)arg2 ;
-(void)removeProvisionedPass;
-(void)paymentWebService:(id)arg1 didCompleteTSMConnectionForTaskID:(unsigned long long)arg2 ;
-(id)initWithWebService:(id)arg1 paymentSetupRequest:(id)arg2 ;
-(BOOL)isPasscodeUpgradeRequired;
-(void)validatePreconditionsRegisterAndAssociateRemoteCredentials:(/*^block*/id)arg1 ;
-(void)setAllowedFeatureIdentifiers:(NSSet *)arg1 ;
-(void)makePaymentPassDefault:(id)arg1 ;
-(void)setupProductForProvisioning:(id)arg1 includePurchases:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)resolveAmbiguousRequirementsWithProductIdentifier:(id)arg1 ;
-(void)featureApplicationAdded:(id)arg1 ;
-(void)resolveRequirementsUsingProduct:(id)arg1 ;
-(void)resolveRequirementsUsingProvisioningMethodMetadata:(id)arg1 ;
-(BOOL)provisioningUserInterfaceIsVisible;
-(void)resolveRequirementsForShareableCredential:(id)arg1 ;
-(void)resolveRequirementsForIssuerProvisioningExtensionCredential:(id)arg1 ;
-(void)resolveRequirementsUsingAlreadyProvisionedRemoteCredential:(id)arg1 ;
-(void)requestProvisioning:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)preflightPasscodeUpgradeWithCompletion:(/*^block*/id)arg1 ;
-(void)finishOptionalExpressModeSetupForPass:(id)arg1 withProvisioningTracker:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasCreditPaymentPass;
-(BOOL)hasDebitPaymentPass;
-(id)passesWithPaymentMethodType:(unsigned long long)arg1 ;
-(id)displayableErrorForProvisioningError:(id)arg1 ;
-(void)_addAssociatedCredential:(id)arg1 ;
-(NSString *)localizedProgressDescription;
-(NSArray *)provisioningExtensionCredentials;
-(PKPaymentProvisioningControllerCredentialQueue *)credentialProvisioningQueue;
-(PKPaymentSetupProductModel *)paymentSetupProductModel;
-(PKPaymentProvisioningResponse *)provisioningResponse;
-(BOOL)isExpressModeSetupOptional;
-(NSSet *)automaticExpressModes;
-(BOOL)isAMPEnrollmentAvailable;
-(NSArray *)allowedPaymentNetworks;
-(void)setAllowedPaymentNetworks:(NSArray *)arg1 ;
-(NSSet *)requiredTransitNetworkIdentifiers;
-(NSSet *)allowedProductIdentifiers;
-(void)setRequiredTransitNetworkIdentifiers:(NSSet *)arg1 ;
-(void)setAllowedProductIdentifiers:(NSSet *)arg1 ;
-(NSSet *)allowedFeatureIdentifiers;
-(BOOL)suppressDefaultCardholderNameField;
-(void)acceptTerms;
-(void)declineTerms;
-(void)validatePreconditionsAndRegister:(/*^block*/id)arg1 ;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(void)resolveProvisioningForCredential:(id)arg1 ;
-(NSString *)productIdentifier;
-(void)passcodeUpgradeCompleted:(BOOL)arg1 ;
-(void)requestProvisioning:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestEligibility:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)requestRequirements:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

