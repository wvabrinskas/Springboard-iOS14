/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLChangePublisher.h>

@class NSString;

@interface PLServerChangePublisher : NSObject <PLChangePublisher> {

	Aq _postCount;
	AB _hasPendingWatchNotification;
	AB _suppressWatchNotification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_postWatchUpdateNotification;
-(void)_postWatchUpdateNotificationIfNotPaused;
-(void)distributeChangeEvent:(id)arg1 transaction:(id)arg2 ;
-(void)_postWatchUpdateNotificationIfPending;
-(id)publishChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3 ;
-(void)_postChangeHubNotification;
-(void)pauseLaunchEventNotifications;
-(void)dealloc;
-(void)unpauseLaunchEventNotifications;
@end

