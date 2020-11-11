/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariShared/WBSPerSitePreferenceManager.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerStorageDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerDefaultsDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceBinaryToggleItemManager.h>

@class WBSPerSitePreferencesSQLiteStore, _SFRequestDesktopSiteQuirksManager, NSMutableSet, WBSPerSitePreference, NSString;

@interface _SFRequestDesktopSitePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager> {

	WBSPerSitePreferencesSQLiteStore* _perSitePreferencesStore;
	_SFRequestDesktopSiteQuirksManager* _quirksManager;
	NSMutableSet* _observers;
	BOOL _clientPrefersMobileUserAgentByDefault;
	WBSPerSitePreference* _requestDesktopSitePreference;

}

@property (nonatomic,readonly) WBSPerSitePreference * requestDesktopSitePreference;                     //@synthesize requestDesktopSitePreference=_requestDesktopSitePreference - In the implementation block
@property (assign,nonatomic) BOOL clientPrefersMobileUserAgentByDefault;                                //@synthesize clientPrefersMobileUserAgentByDefault=_clientPrefersMobileUserAgentByDefault - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WBSPerSitePreferencesSQLiteStore * perSitePreferencesStore; 
-(id)preferences;
-(void)addRequestDesktopSitePerSitePreferenceObserver:(id)arg1 ;
-(id)init;
-(void)getDefaultPreferenceValueIfNotCustomizedForPreference:(id)arg1 domain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(void)_notifyObserversOfPerSitePreferenceDefaultValueUpdate;
-(BOOL)clientPrefersMobileUserAgentByDefault;
-(void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(WBSPerSitePreference *)requestDesktopSitePreference;
-(id)onValueForPreference:(id)arg1 ;
-(WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1 ;
-(void)getAllRequestDesktopSitePerSitePreferenceValues:(/*^block*/id)arg1 ;
-(void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)setClientPrefersMobileUserAgentByDefault:(BOOL)arg1 ;
-(void)_notifyObserversOfPerSitePreferenceDomainValuesUpdate;
-(void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)_defaultPreferenceValue;
-(id)valuesForPreference:(id)arg1 ;
-(id)initWithPerSitePreferencesStore:(id)arg1 quirksManager:(id)arg2 ;
-(long long)preferencesStoreKeyForPreference:(id)arg1 ;
-(void)_requestDesktopSitePerSitePreferenceDidChange:(id)arg1 ;
-(void)getRequestDesktopSitePreferenceForDomain:(id)arg1 withTimeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3 ;
-(id)offValueForPreference:(id)arg1 ;
-(void)dealloc;
-(void)removeRequestDesktopSitePerSitePreferenceObserver:(id)arg1 ;
@end
