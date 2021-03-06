/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@class UNUserNotificationCenter, NSMutableSet, NSMutableDictionary, NSString;

@interface WFUserNotificationManager : NSObject <UNUserNotificationCenterDelegate> {

	UNUserNotificationCenter* _notificationCenter;
	NSMutableSet* _categories;
	NSMutableDictionary* _observers;

}

@property (nonatomic,retain) NSMutableSet * categories;                                    //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observers;                              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) UNUserNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)categories;
-(UNUserNotificationCenter *)notificationCenter;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)observers;
-(void)setObservers:(NSMutableDictionary *)arg1 ;
-(void)setCategories:(NSMutableSet *)arg1 ;
-(void)removeStaleNotificationsWithCompletion:(/*^block*/id)arg1 ;
-(id)categoryIdentifiers;
-(void)registerCategoriesIfNecessary:(id)arg1 ;
-(void)addObserver:(id)arg1 forCategory:(id)arg2 ;
-(void)removeNotificationsWithIdentifiers:(id)arg1 ;
@end

