/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults, NSString, NSDictionary, NSNumber, NSDate;

@interface ICDefaults : NSObject {

	NSUserDefaults* _userDefaults;
	NSUserDefaults* _musicUserDefaults;
	BOOL _bypassBagSanityChecks;
	NSUserDefaults* _internalDefaults;

}

@property (nonatomic,readonly) NSUserDefaults * internalDefaults;                                                                        //@synthesize internalDefaults=_internalDefaults - In the implementation block
@property (nonatomic,copy) NSString * cloudMediaLibraryUID; 
@property (nonatomic,readonly) NSString * defaultStoreFront; 
@property (nonatomic,copy) NSDictionary * cachedSubscriptionStatus; 
@property (nonatomic,copy) NSDictionary * cachedMusicUserTokens; 
@property (nonatomic,copy) NSDictionary * pushNotificationState; 
@property (nonatomic,copy) NSDictionary * mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates; 
@property (nonatomic,copy) NSNumber * lastActiveAccountDSID; 
@property (nonatomic,copy) NSDictionary * lastCookieHeadersForRevokingMusicUserTokens; 
@property (nonatomic,copy) NSDate * lastAllowedInteractiveAuthenticationTime; 
@property (nonatomic,copy) NSDictionary * authServiceClientTokenCache; 
@property (assign,nonatomic) double lastAuthenticationDialogResponseTime; 
@property (nonatomic,copy) NSDictionary * lastKnownLocalStoreAccountProperties; 
@property (nonatomic,copy) NSDictionary * lastKnownSubscriptionStatusBaseCacheKey; 
@property (nonatomic,copy) NSDictionary * accountNotificationsShowInLibraryDictionary; 
@property (assign,nonatomic) BOOL ignoreExtendedCertificateValidation; 
@property (assign,nonatomic) BOOL bypassBagSanityChecks;                                                                                 //@synthesize bypassBagSanityChecks=_bypassBagSanityChecks - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceModelOverride; 
@property (nonatomic,copy,readonly) NSNumber * deviceClassOverride; 
@property (nonatomic,copy,readonly) NSNumber * fairPlayDeviceTypeOverride; 
@property (nonatomic,copy,readonly) NSString * productVersionOverride; 
@property (nonatomic,copy,readonly) NSString * hardwarePlatformOverride; 
@property (nonatomic,copy,readonly) NSString * productPlatformOverride; 
@property (nonatomic,copy,readonly) NSNumber * networkTypeOverride; 
@property (nonatomic,readonly) BOOL shouldForceiPhoneBehaviors; 
@property (nonatomic,copy,readonly) NSNumber * authServiceClientTokenTimeToLive; 
@property (assign,nonatomic) BOOL shouldRunAgeVerification; 
@property (nonatomic,copy) NSDate * ageVerificationExpirationDate; 
@property (assign,getter=isExplicitContentAllowedForCurrentYear,nonatomic) BOOL explicitContentAllowedForCurrentYear; 
@property (assign,getter=isExplicitContentAllowedForExpirationYear,nonatomic) BOOL explicitContentAllowedForExpirationYear; 
@property (assign,getter=isGrazingPathEnabled,nonatomic) BOOL grazingPathEnabled; 
@property (getter=isPrivacyAcknowledgementDisabledForMusic,nonatomic,readonly) BOOL privacyAcknowledgementDisabledForMusic; 
@property (nonatomic,readonly) BOOL shouldForceLibraryRecommendationAnalysis; 
@property (nonatomic,readonly) BOOL allowLowAffinityRecommendations; 
@property (nonatomic,readonly) BOOL shouldReduceLibraryRecommendationsXPCInterval; 
@property (nonatomic,readonly) BOOL shouldTreatSubscriptionStatusAsExpired; 
@property (nonatomic,readonly) BOOL shouldTreatSagaAddComputerCallAsFailed; 
@property (nonatomic,readonly) BOOL shouldTreatInitialSagaImportAsFailed; 
@property (nonatomic,readonly) BOOL shouldTreatSubscriptionStatusCheckAsIncomplete; 
@property (getter=isLegacyStoreCacheBusterEnabled,nonatomic,readonly) BOOL legacyStoreCacheBusterEnabled; 
@property (assign,nonatomic) BOOL automaticDownloadsEnabled; 
@property (nonatomic,copy) NSDictionary * lastKnownUserAgeVerificationState; 
+(id)standardDefaults;
-(NSUserDefaults *)internalDefaults;
-(NSNumber *)networkTypeOverride;
-(void)setPushNotificationState:(NSDictionary *)arg1 ;
-(void)_setOrRemoveObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)shouldTreatSagaAddComputerCallAsFailed;
-(BOOL)isExplicitContentAllowedForCurrentYear;
-(NSDate *)ageVerificationExpirationDate;
-(NSDictionary *)lastKnownSubscriptionStatusBaseCacheKey;
-(BOOL)ignoreExtendedCertificateValidation;
-(id)init;
-(NSNumber *)fairPlayDeviceTypeOverride;
-(BOOL)shouldForceiPhoneBehaviors;
-(void)setAuthServiceClientTokenCache:(NSDictionary *)arg1 ;
-(void)synchronize;
-(void)setAutomaticDownloadsEnabled:(BOOL)arg1 ;
-(NSString *)productPlatformOverride;
-(void)setMediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates:(NSDictionary *)arg1 ;
-(NSDictionary *)lastKnownLocalStoreAccountProperties;
-(NSDictionary *)lastCookieHeadersForRevokingMusicUserTokens;
-(BOOL)_shouldSpoofIPhoneRequestProperties;
-(void)setExplicitContentAllowedForCurrentYear:(BOOL)arg1 ;
-(BOOL)isPrivacyAcknowledgementDisabledForMusic;
-(void)setAgeVerificationExpirationDate:(NSDate *)arg1 ;
-(void)setGrazingPathEnabled:(BOOL)arg1 ;
-(void)setBypassBagSanityChecks:(BOOL)arg1 ;
-(BOOL)shouldRunAgeVerification;
-(BOOL)shouldTreatInitialSagaImportAsFailed;
-(void)setIgnoreExtendedCertificateValidation:(BOOL)arg1 ;
-(NSString *)productVersionOverride;
-(void)setLastCookieHeadersForRevokingMusicUserTokens:(NSDictionary *)arg1 ;
-(NSDictionary *)accountNotificationsShowInLibraryDictionary;
-(void)setLastKnownSubscriptionStatusBaseCacheKey:(NSDictionary *)arg1 ;
-(void)setCloudMediaLibraryUID:(NSString *)arg1 ;
-(NSDate *)lastAllowedInteractiveAuthenticationTime;
-(BOOL)isGrazingPathEnabled;
-(BOOL)shouldReduceLibraryRecommendationsXPCInterval;
-(id)_musicUserDefaults;
-(NSDictionary *)pushNotificationState;
-(NSString *)cloudMediaLibraryUID;
-(NSNumber *)authServiceClientTokenTimeToLive;
-(void)setCachedSubscriptionStatus:(NSDictionary *)arg1 ;
-(void)setLastKnownUserAgeVerificationState:(NSDictionary *)arg1 ;
-(void)setLastKnownLocalStoreAccountProperties:(NSDictionary *)arg1 ;
-(BOOL)automaticDownloadsEnabled;
-(double)lastAuthenticationDialogResponseTime;
-(NSDictionary *)authServiceClientTokenCache;
-(void)deleteAutomaticDownloadsKey;
-(BOOL)bypassBagSanityChecks;
-(void)setExplicitContentAllowedForExpirationYear:(BOOL)arg1 ;
-(NSString *)hardwarePlatformOverride;
-(BOOL)shouldTreatSubscriptionStatusCheckAsIncomplete;
-(BOOL)shouldForceLibraryRecommendationAnalysis;
-(void)setAccountNotificationsShowInLibraryDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)cachedMusicUserTokens;
-(NSDictionary *)cachedSubscriptionStatus;
-(NSNumber *)lastActiveAccountDSID;
-(NSString *)defaultStoreFront;
-(BOOL)allowLowAffinityRecommendations;
-(void)setLastAuthenticationDialogResponseTime:(double)arg1 ;
-(NSDictionary *)lastKnownUserAgeVerificationState;
-(void)setShouldRunAgeVerification:(BOOL)arg1 ;
-(void)setLastAllowedInteractiveAuthenticationTime:(NSDate *)arg1 ;
-(void)setCachedMusicUserTokens:(NSDictionary *)arg1 ;
-(BOOL)shouldTreatSubscriptionStatusAsExpired;
-(BOOL)isLegacyStoreCacheBusterEnabled;
-(NSNumber *)deviceClassOverride;
-(BOOL)isExplicitContentAllowedForExpirationYear;
-(NSDictionary *)mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
-(void)setLastActiveAccountDSID:(NSNumber *)arg1 ;
-(NSString *)deviceModelOverride;
@end

