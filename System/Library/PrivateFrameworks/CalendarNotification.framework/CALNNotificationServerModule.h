/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CADModule.h>

@protocol CALNNotificationIconProviderCALNCalendarIconIdentifierProvider;
@class EKEphemeralCacheEventStoreProvider, EKEventStore, CALNInboxNotificationMonitor, CALNNotificationServer, CALNNotificationSourceRefresher, CALNCalendarAppBadgeUpdater, CALNNotificationStorageWrapper, CALNTriggeredEventNotificationSource, CALNNotificationIconCache, NSArray, NSString;

@interface CALNNotificationServerModule : NSObject <CADModule> {

	EKEphemeralCacheEventStoreProvider* _eventStoreProvider;
	EKEventStore* _lastCreatedEventStore;
	CALNInboxNotificationMonitor* _inboxNotificationMonitor;
	CALNNotificationServer* _calendarNotificationServer;
	CALNNotificationSourceRefresher* _notificationSourceRefresher;
	CALNCalendarAppBadgeUpdater* _calendarAppBadgeUpdater;
	CALNNotificationStorageWrapper* _calendarStorageWrapper;
	CALNTriggeredEventNotificationSource* _triggeredEventNotificationSource;
	CALNNotificationIconCache* _iconCache;
	id<CALNNotificationIconProvider><CALNCalendarIconIdentifierProvider> _iconProvider;
	NSArray* _modules;

}

@property (nonatomic,readonly) CALNInboxNotificationMonitor * inboxNotificationMonitor;                                        //@synthesize inboxNotificationMonitor=_inboxNotificationMonitor - In the implementation block
@property (nonatomic,readonly) CALNNotificationServer * calendarNotificationServer;                                            //@synthesize calendarNotificationServer=_calendarNotificationServer - In the implementation block
@property (nonatomic,readonly) CALNNotificationSourceRefresher * notificationSourceRefresher;                                  //@synthesize notificationSourceRefresher=_notificationSourceRefresher - In the implementation block
@property (nonatomic,readonly) CALNCalendarAppBadgeUpdater * calendarAppBadgeUpdater;                                          //@synthesize calendarAppBadgeUpdater=_calendarAppBadgeUpdater - In the implementation block
@property (nonatomic,readonly) CALNNotificationStorageWrapper * calendarStorageWrapper;                                        //@synthesize calendarStorageWrapper=_calendarStorageWrapper - In the implementation block
@property (nonatomic,readonly) CALNTriggeredEventNotificationSource * triggeredEventNotificationSource;                        //@synthesize triggeredEventNotificationSource=_triggeredEventNotificationSource - In the implementation block
@property (nonatomic,readonly) CALNNotificationIconCache * iconCache;                                                          //@synthesize iconCache=_iconCache - In the implementation block
@property (nonatomic,readonly) id<CALNNotificationIconProvider><CALNCalendarIconIdentifierProvider> iconProvider;              //@synthesize iconProvider=_iconProvider - In the implementation block
@property (nonatomic,readonly) NSArray * modules;                                                                              //@synthesize modules=_modules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_protectedTriggeredEventNotificationDataStorage;
+(id)_createTriggeredEventNotificationDataStorageAtPath:(id)arg1 protected:(BOOL)arg2 ;
+(id)_timeToLeaveRefreshStoragePathWithName:(id)arg1 ;
+(id)_unprotectedTriggeredEventNotificationDataStorage;
+(id)_createTimeToLeaveRefreshStorageAtPath:(id)arg1 ;
+(id)_notificationStoragePathWithName:(id)arg1 ;
+(void)_migrateNotificationFiles;
+(id)_triggeredEventNotificationDataStoragePathWithName:(id)arg1 ;
+(id)_filesToMigrate;
+(void)_migrateNotificationFilesFromDirectory:(id)arg1 toDirectory:(id)arg2 ;
+(id)_createNotificationStorageAtPath:(id)arg1 protected:(BOOL)arg2 ;
+(id)_timeToLeaveRefreshStorage;
+(id)_unprotectedCalendarNotificationStorage;
+(void)_setProtectedClassForStorageAtPath:(id)arg1 ;
+(id)_protectedCalendarNotificationStorage;
-(void)receivedAlarmNamed:(id)arg1 ;
-(CALNNotificationIconCache *)iconCache;
-(id)_createNotificationSourcesWithNotificationManager:(id)arg1 eventStoreProvider:(id)arg2 inboxNotificationProvider:(id)arg3 alarmEngineMonitor:(id)arg4 travelEngine:(id)arg5 timeToLeaveRefreshMonitor:(id)arg6 timeToLeaveRefreshStorage:(id)arg7 ;
-(void)_reloadNotificationsFromUnprotectedStorage:(id)arg1 intoProtectedStorage:(id)arg2 withStorageWrapper:(id)arg3 forNotificationServer:(id)arg4 ;
-(id)init;
-(void)didRegisterForAlarms;
-(void)_updateSourceClientIdentifiersIfNeeded;
-(void)receivedNotificationNamed:(id)arg1 ;
-(void)updateIconsToNewVersionIfNeeded;
-(void)activate;
-(void)_registerSettingsCaptureHandlers;
-(void)_reloadNotificationsAfterFirstUnlock;
-(id)_createCalendarNotificationServerWithUserNotificationCenterFactory:(id)arg1 storage:(id)arg2 eventStoreProvider:(id)arg3 alarmEngineMonitor:(id)arg4 travelEngine:(id)arg5 timeToLeaveRefreshMonitor:(id)arg6 timeToLeaveRefreshStorage:(id)arg7 ;
-(CALNNotificationStorageWrapper *)calendarStorageWrapper;
-(CALNInboxNotificationMonitor *)inboxNotificationMonitor;
-(CALNCalendarAppBadgeUpdater *)calendarAppBadgeUpdater;
-(void)_reloadTriggeredEventNotificationData;
-(void)protectedDataDidBecomeAvailable;
-(CALNNotificationServer *)calendarNotificationServer;
-(CALNNotificationSourceRefresher *)notificationSourceRefresher;
-(void)_reloadNotificationRecords:(id)arg1 forNotificationServer:(id)arg2 ;
-(void)deactivate;
-(NSArray *)modules;
-(id<CALNNotificationIconProvider><CALNCalendarIconIdentifierProvider>)iconProvider;
-(CALNTriggeredEventNotificationSource *)triggeredEventNotificationSource;
-(id)_createNotificationServerWithUserNotificationCenter:(id)arg1 storage:(id)arg2 eventStoreProvider:(id)arg3 alarmEngineMonitor:(id)arg4 travelEngine:(id)arg5 timeToLeaveRefreshMonitor:(id)arg6 timeToLeaveRefreshStorage:(id)arg7 ;
-(void)_removeNotificationsFromUnprotectedStorage:(id)arg1 ;
-(void)refreshEventStoreInResponseToDatabaseChangeNotification:(id)arg1 ;
@end
