/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MCNotifier : NSObject
-(void)sendPasscodeChangedNotification;
-(void)sendRestrictionChangedNotification;
-(void)sendPasscodePolicyChangedNotification;
-(void)sendKeyboardSettingsChangedNotification;
-(void)sendUserNotificationsSettingsChangedNotification;
-(void)sendHomeScreenLayoutChangedNotification;
-(void)sendNewsSettingsChangedNotification;
-(void)sendProfileListChangedNotification;
-(void)sendSettingsChangedNotification;
-(void)sendManagingOrgInfoChangedNotification;
-(void)sendEffectiveSettingsChangedNotificationWithPID:(int)arg1 ;
-(void)sendClientTruthChangedNotification;
-(void)sendAppWhitelistChangedNotification;
-(void)sendCloudConfigurationDetailsChangedNotification;
-(void)sendWebContentFilterChangedNotification;
-(void)sendWebContentFilterUIActiveChangedNotification;
-(void)sendWebContentFilterTypeChangedNotification;
-(void)sendAirPlayPreferencesChangedNotification;
-(void)sendUnlockScreenTypeDidChangeNotification;
-(void)sendManagedBooksChangedNotification;
-(void)sendManagedAppsChangedNotification;
-(void)sendSafariCookiePolicyChangedNotification;
-(void)sendAllowPasscodeModificationChangedNotification;
-(void)sendRemovedSystemAppsChangedNotification;
-(void)sendDiagnosticsCollectedNotification;
-(void)sendDependencyChangedNotification;
-(void)sendTriggerRollKeybagsNotification;
-(void)sendActivationLockBypassCodeWasStoredNotification;
@end

