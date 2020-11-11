/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface FAFamilyNotificationObserver : NSObject {

	BOOL _observing;
	/*^block*/id _notificationHandler;

}
+(void)initialize;
+(id)familyNotificationObserverWithNotificationHandler:(/*^block*/id)arg1 ;
-(void)stopObserving;
-(id)init;
-(void)_startObserving;
-(void)dealloc;
-(id)_initWithNotificationHandler:(/*^block*/id)arg1 ;
-(void)_didReceiveNotification;
@end
