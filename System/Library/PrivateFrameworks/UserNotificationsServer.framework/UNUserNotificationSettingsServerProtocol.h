/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UNUserNotificationSettingsServerProtocol <NSObject>
@required
-(void)getAllNotificationSourcesWithCompletionHandler:(/*^block*/id)arg1;
-(void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3;
-(void)setNotificationSystemSettings:(id)arg1;
-(void)getNotificationSource:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2;
-(void)getNotificationSources:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)getNotificationSystemSettingsWithCompletionHandler:(/*^block*/id)arg1;

@end

