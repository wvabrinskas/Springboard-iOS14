/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NCNotificationListCellDelegate <NSObject>
@optional
-(void)notificationListCell:(id)arg1 didMoveToNewXPosition:(double)arg2;
-(BOOL)notificationListCellShouldPerformClipping:(id)arg1;

@required
-(void)willTearDownNotificationListCell:(id)arg1;
-(void)notificationListCellDidHideCellActions:(id)arg1 resetCellScrollPosition:(BOOL)arg2 animated:(BOOL)arg3;
-(void)notificationListCellRequestsPresentingLongLook:(id)arg1 completion:(/*^block*/id)arg2;
-(void)notificationListCellRequestsPresentingManagementView:(id)arg1 withPresentingView:(id)arg2 completion:(/*^block*/id)arg3;
-(void)notificationListCellRequestsDismissAction:(id)arg1 completion:(/*^block*/id)arg2;
-(void)notificationListCellRequestsDefaultAction:(id)arg1 completion:(/*^block*/id)arg2;
-(void)notificationListCellDidRevealCellActions:(id)arg1;
-(BOOL)notificationListCellShouldPanHorizontally:(id)arg1;
-(void)notificationListCellDidSignificantUserInteraction:(id)arg1;
-(id)notificationListCellRequestsSectionSettings:(id)arg1 sectionIdentifier:(id)arg2;

@end

