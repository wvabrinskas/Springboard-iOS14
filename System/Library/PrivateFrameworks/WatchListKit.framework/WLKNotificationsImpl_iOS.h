/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegatePrivate.h>
#import <libobjc.A.dylib/WLKNotificationsImpl.h>

@protocol WLKNotificationCenterDelegate;
@class NSString;

@interface WLKNotificationsImpl_iOS : NSObject <UNUserNotificationCenterDelegate, UNUserNotificationCenterDelegatePrivate, WLKNotificationsImpl> {

	BOOL _topicsAreInitialized;
	id<WLKNotificationCenterDelegate> delegate;

}

@property (assign,nonatomic) BOOL topicsAreInitialized;                                      //@synthesize topicsAreInitialized=_topicsAreInitialized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WLKNotificationCenterDelegate> delegate; 
+(id)_JSONDictForResponse:(id)arg1 ;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setBadgeNumber:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setBadgeString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4 ;
-(id)init;
-(BOOL)isCategoryEnabledByUser:(long long)arg1 ;
-(id<WLKNotificationCenterDelegate>)delegate;
-(id)_displayNameForSubsectionID:(id)arg1 ;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_topicIdentifierForCategory:(long long)arg1 ;
-(void)_initializeTopics;
-(void)setTopicsAreInitialized:(BOOL)arg1 ;
-(BOOL)topicsAreInitialized;
-(void)setDelegate:(id<WLKNotificationCenterDelegate>)arg1 ;
-(unsigned long long)_authOptions;
-(id)_notificationCenter;
-(void)_storeFrontChangedNotification:(id)arg1 ;
-(void)userNotificationCenter:(id)arg1 didOpenApplicationForResponse:(id)arg2 ;
-(void)_fetchTopics:(/*^block*/id)arg1 ;
-(void)_networkReachabilityDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)userNotificationCenter:(id)arg1 didChangeSettings:(id)arg2 ;
@end
