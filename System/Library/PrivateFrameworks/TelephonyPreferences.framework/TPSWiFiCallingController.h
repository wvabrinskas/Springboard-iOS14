/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TUCallCapabilitiesDelegatePrivate.h>

@class TPSCloudCallingEmergencyAddressURLController, TPSCloudCallingThumperProvisioningURLController, TPSCarrierBundleController, TPSEncryptedIdentityClient, NSDictionary, CTXPCServiceSubscriptionContext, TUSenderIdentityCapabilities, NSString;

@interface TPSWiFiCallingController : NSObject <TUCallCapabilitiesDelegatePrivate> {

	TPSCloudCallingEmergencyAddressURLController* _emergencyAddressURLController;
	TPSCloudCallingThumperProvisioningURLController* _thumperProvisioningURLController;
	TPSCarrierBundleController* _carrierBundleController;
	TPSEncryptedIdentityClient* _encryptedIdentityClient;
	NSDictionary* _encryptedIdentityInfo;
	CTXPCServiceSubscriptionContext* _subscriptionContext;
	TUSenderIdentityCapabilities* _subscriptionCapabilities;

}

@property (nonatomic,retain) TPSCarrierBundleController * carrierBundleController;                                            //@synthesize carrierBundleController=_carrierBundleController - In the implementation block
@property (nonatomic,retain) TPSEncryptedIdentityClient * encryptedIdentityClient;                                            //@synthesize encryptedIdentityClient=_encryptedIdentityClient - In the implementation block
@property (nonatomic,copy) NSDictionary * encryptedIdentityInfo;                                                              //@synthesize encryptedIdentityInfo=_encryptedIdentityInfo - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * subscriptionContext;                                         //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (nonatomic,retain) TUSenderIdentityCapabilities * subscriptionCapabilities;                                         //@synthesize subscriptionCapabilities=_subscriptionCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL supportsEncryptedIdentity; 
@property (assign,getter=isThumperCallingEnabled,nonatomic) BOOL thumperCallingEnabled; 
@property (assign,getter=isWiFiCallingEnabled,nonatomic) BOOL wiFiCallingEnabled; 
@property (assign,getter=isWiFiCallingRoamingEnabled,nonatomic) BOOL wiFiCallingRoamingEnabled; 
@property (nonatomic,readonly) BOOL supportsThumperCalling; 
@property (nonatomic,readonly) BOOL supportsWiFiCalling; 
@property (nonatomic,readonly) BOOL supportsWiFiEmergencyCalling; 
@property (nonatomic,copy,readonly) NSString * localizedCarrierName; 
@property (nonatomic,retain) TPSCloudCallingEmergencyAddressURLController * emergencyAddressURLController;                    //@synthesize emergencyAddressURLController=_emergencyAddressURLController - In the implementation block
@property (nonatomic,retain) TPSCloudCallingThumperProvisioningURLController * thumperProvisioningURLController;              //@synthesize thumperProvisioningURLController=_thumperProvisioningURLController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWiFiCallingRoamingEnabled:(BOOL)arg1 ;
-(void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1 ;
-(id)init;
-(BOOL)supportsThumperCalling;
-(BOOL)isThumperCallingEnabled;
-(void)setWiFiCallingEnabled:(BOOL)arg1 ;
-(void)setThumperCallingEnabled:(BOOL)arg1 ;
-(BOOL)isWiFiCallingEnabled;
-(BOOL)isWiFiCallingRoamingEnabled;
-(BOOL)supportsWiFiCalling;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(BOOL)supportsWiFiEmergencyCalling;
-(void)didChangeWiFiCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(TUSenderIdentityCapabilities *)subscriptionCapabilities;
-(TPSCarrierBundleController *)carrierBundleController;
-(NSString *)localizedCarrierName;
-(void)setCarrierBundleController:(TPSCarrierBundleController *)arg1 ;
-(NSDictionary *)encryptedIdentityInfo;
-(void)setEncryptedIdentityInfo:(NSDictionary *)arg1 ;
-(void)setSubscriptionCapabilities:(TUSenderIdentityCapabilities *)arg1 ;
-(id)subscriptionCapabilitiesForSubscriptionContextUUID:(id)arg1 ;
-(TPSEncryptedIdentityClient *)encryptedIdentityClient;
-(BOOL)supportsEncryptedIdentity;
-(TPSCloudCallingEmergencyAddressURLController *)emergencyAddressURLController;
-(void)setEmergencyAddressURLController:(TPSCloudCallingEmergencyAddressURLController *)arg1 ;
-(TPSCloudCallingThumperProvisioningURLController *)thumperProvisioningURLController;
-(void)setThumperProvisioningURLController:(TPSCloudCallingThumperProvisioningURLController *)arg1 ;
-(void)setEncryptedIdentityClient:(TPSEncryptedIdentityClient *)arg1 ;
@end
