/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMDaemonCore/IMSystemMonitorListener.h>

@class NSBundle, NSString, NSDictionary;

@interface IMDService : NSObject <IMSystemMonitorListener> {

	NSBundle* _bundle;
	Class _sessionClass;
	NSString* _internalName;
	NSDictionary* _accountDefaults;
	NSDictionary* _serviceDefaults;
	NSDictionary* _serviceProperties;
	NSDictionary* _cachedServiceDefaults;
	NSDictionary* _cachedSetupServiceDefaults;
	BOOL _blockPrefWriting;

}

@property (nonatomic,retain) NSDictionary * serviceProperties;                             //@synthesize serviceProperties=_serviceProperties - In the implementation block
@property (nonatomic,readonly) Class sessionClass; 
@property (nonatomic,readonly) Class accountClass; 
@property (nonatomic,retain,readonly) NSBundle * bundle;                                   //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain,readonly) NSString * internalName; 
@property (nonatomic,retain,readonly) NSString * serviceDomain; 
@property (nonatomic,readonly) BOOL isIDSBased; 
@property (nonatomic,readonly) BOOL isLegacy; 
@property (getter=isDiscontinued,nonatomic,readonly) BOOL discontinued; 
@property (nonatomic,retain,readonly) NSDictionary * serviceDefaults; 
@property (nonatomic,retain,readonly) NSDictionary * serviceDefaultsForSetup; 
@property (nonatomic,retain,readonly) NSDictionary * defaultAccountSettings; 
@property (nonatomic,readonly) BOOL serviceRequiresSingleAccount; 
@property (nonatomic,readonly) BOOL shouldCreateActiveAccounts; 
@property (nonatomic,readonly) BOOL serviceWantsNullHostReachability; 
@property (nonatomic,readonly) BOOL serviceIgnoresNetworkConnectivity; 
@property (nonatomic,readonly) BOOL shouldForceAccountsActive; 
@property (nonatomic,readonly) BOOL shouldForceAccountsConnected; 
@property (nonatomic,readonly) BOOL serviceNeedsLogin; 
@property (nonatomic,readonly) BOOL serviceNeedsPassword; 
@property (nonatomic,readonly) BOOL serviceShouldBeAlwaysLoggedIn; 
@property (nonatomic,readonly) BOOL serviceRequiresHost; 
@property (nonatomic,readonly) BOOL serviceSupportsRegistration; 
@property (nonatomic,readonly) BOOL serviceSupportsAuthorization; 
@property (nonatomic,readonly) BOOL serviceChatsIgnoreLoginStatus; 
@property (nonatomic,readonly) BOOL serviceSupportsPresence; 
@property (nonatomic,readonly) BOOL serviceSupportsOneSessionForAllAccounts; 
@property (nonatomic,readonly) BOOL supportsDatabase; 
@property (nonatomic,readonly) BOOL disallowDeactivation; 
@property (nonatomic,readonly) long long serviceProtocolVersion; 
-(void)disableAccount:(id)arg1 ;
-(BOOL)isDiscontinued;
-(NSString *)internalName;
-(id)oldInternalName;
-(BOOL)serviceNeedsLogin;
-(id)initWithBundle:(id)arg1 ;
-(BOOL)serviceSupportsOneSessionForAllAccounts;
-(long long)serviceProtocolVersion;
-(BOOL)shouldForceAccountsConnected;
-(id)newAccountWithAccountDefaults:(id)arg1 accountID:(id)arg2 ;
-(BOOL)isLegacy;
-(Class)sessionClass;
-(void)_reallyUnloadServiceBundle;
-(BOOL)clearOneTimeImportAccounts;
-(void)systemDidEnterMemoryPressure;
-(id)_serviceDomain;
-(void)loadServiceBundle;
-(BOOL)serviceSupportsAuthorization;
-(id)description;
-(void)accountRemoved:(id)arg1 ;
-(NSBundle *)bundle;
-(NSString *)serviceDomain;
-(void)accountAdded:(id)arg1 ;
-(NSDictionary *)defaultAccountSettings;
-(void)saveSettings;
-(BOOL)serviceSupportsRegistration;
-(BOOL)serviceShouldBeAlwaysLoggedIn;
-(NSDictionary *)serviceDefaults;
-(void)delayedSaveSettings;
-(id)_oldServiceDomain;
-(BOOL)shouldCreateActiveAccounts;
-(id)_defaultDefaults;
-(void)unloadServiceBundle;
-(BOOL)serviceIgnoresNetworkConnectivity;
-(NSDictionary *)serviceProperties;
-(BOOL)serviceNeedsPassword;
-(BOOL)disallowDeactivation;
-(BOOL)isIDSBased;
-(id)_serviceDefaultsForDomain:(id)arg1 ;
-(BOOL)serviceRequiresSingleAccount;
-(Class)accountClass;
-(id)mainService;
-(BOOL)serviceSupportsPresence;
-(NSDictionary *)serviceDefaultsForSetup;
-(id)createDiscontinuedAccount;
-(BOOL)supportsDatabase;
-(void)setServiceProperties:(NSDictionary *)arg1 ;
-(void)systemDidStartBackup;
-(BOOL)serviceWantsNullHostReachability;
-(void)enableAccount:(id)arg1 ;
-(BOOL)shouldForceAccountsActive;
-(BOOL)serviceChatsIgnoreLoginStatus;
-(void)dealloc;
-(void)synchronizeServiceDefaults;
-(void)purgeMemoryCaches;
-(id)_copyServicePropertiesFromIMServiceBundle:(id)arg1 ;
-(BOOL)serviceRequiresHost;
@end

