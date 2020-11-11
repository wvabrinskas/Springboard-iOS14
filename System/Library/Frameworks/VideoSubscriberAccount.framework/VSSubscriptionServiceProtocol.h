/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VSSubscriptionServiceProtocol <NSObject>
@required
-(void)registerSubscription:(id)arg1;
-(void)fetchActiveSubscriptionsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeSubscriptions:(id)arg1;

@end
