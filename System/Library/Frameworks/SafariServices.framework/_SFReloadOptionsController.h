/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_SFRequestDesktopSitePerSitePreferenceObserver.h>

@class _SFRequestDesktopSitePreferenceManager, NSDictionary, NSNumber, NSMutableDictionary, NSMutableSet, WKWebView, _SFInjectedJavaScriptController, NSString;

@interface _SFReloadOptionsController : NSObject <_SFRequestDesktopSitePerSitePreferenceObserver> {

	_SFRequestDesktopSitePreferenceManager* _perSitePreferenceManager;
	NSDictionary* _perSitePreferenceValues;
	NSNumber* _requestDesktopSiteDefaultValue;
	NSMutableDictionary* _domainToUserAgentPolicyMap;
	NSMutableSet* _domainsOverridenAsMobile;
	WKWebView* _webView;
	BOOL _tryUsingMobileIfPossible;
	_SFInjectedJavaScriptController* _activityJSController;
	long long _effectiveContentMode;

}

@property (nonatomic,readonly) _SFInjectedJavaScriptController * activityJSController;              //@synthesize activityJSController=_activityJSController - In the implementation block
@property (nonatomic,readonly) BOOL loadedUsingDesktopUserAgent; 
@property (assign,nonatomic) BOOL tryUsingMobileIfPossible;                                         //@synthesize tryUsingMobileIfPossible=_tryUsingMobileIfPossible - In the implementation block
@property (assign,nonatomic) long long effectiveContentMode;                                        //@synthesize effectiveContentMode=_effectiveContentMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)effectiveContentMode;
-(void)didMarkURLAsNeedingStandardUserAgent:(id)arg1 ;
-(id)init;
-(void)logCompletedPageloadToDifferentialPrivacy:(id)arg1 ;
-(void)requestDesktopSite;
-(id)initWithWebView:(id)arg1 activityJSController:(id)arg2 perSitePreferenceManager:(id)arg3 ;
-(_SFInjectedJavaScriptController *)activityJSController;
-(void)requestDesktopSiteWithURL:(id)arg1 ;
-(void)didSetRequestDesktopSitePerSitePreferencesValues:(id)arg1 ;
-(id)customUserAgentForSetting:(long long)arg1 ;
-(void)didUpdateRequestDesktopSiteDefaultValue:(long long)arg1 ;
-(void)didSetRequestDesktopSiteDefaultValue:(long long)arg1 ;
-(void)_loadPerSitePreferences;
-(void)customUserAgentSettingForMainFrameURL:(id)arg1 withTimeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_updateSettingSource:(unsigned long long)arg1 domain:(id)arg2 ;
-(void)setTryUsingMobileIfPossible:(BOOL)arg1 ;
-(BOOL)tryUsingMobileIfPossible;
-(void)_overrideSettingIfNeeded:(long long)arg1 source:(unsigned long long)arg2 domain:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)didMarkURLAsNeedingDesktopUserAgent:(id)arg1 ;
-(void)setEffectiveContentMode:(long long)arg1 ;
-(void)requestStandardSite;
-(BOOL)loadedUsingDesktopUserAgent;
-(void)didUpdateRequestDesktopSitePerSitePreference:(id)arg1 ;
-(void)invalidate;
-(id)customNavigatorPlatformForSetting:(long long)arg1 ;
@end

