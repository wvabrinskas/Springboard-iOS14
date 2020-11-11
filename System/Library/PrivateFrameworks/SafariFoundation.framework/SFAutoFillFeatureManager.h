/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariFoundation/SafariFoundation-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface SFAutoFillFeatureManager : NSObject <MCProfileConnectionObserver> {

	int _cachedAutoFillRestrictionValue;
	int _cachedPasswordAutoFillEffectiveValue;

}

@property (assign,nonatomic) BOOL shouldAutoFillPasswordsFromKeychain; 
@property (nonatomic,retain) NSString * preferredCredentialProviderForSaving; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_syncManager;
+(id)sharedFeatureManager;
+(const CFStringRef)autoFillPreferencesDomain;
+(BOOL)defaultValueForPasswordAndCreditCardAutoFill;
+(void)autoFillPreferencesDidChange;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(BOOL)shouldAutoFillPasswordsFromKeychain;
-(void)setShouldAutoFillPasswordsFromKeychain:(BOOL)arg1 ;
-(BOOL)shouldAutoFillPasswords;
-(void)dealloc;
-(void)_refreshCachedAutoFillRestrictionValues;
@end
