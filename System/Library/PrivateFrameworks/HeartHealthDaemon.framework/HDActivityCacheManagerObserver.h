/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HDActivityCacheManagerObserver <NSObject>
@optional
-(void)activityCacheManager:(id)arg1 changedYesterdayActivityCache:(id)arg2;
-(void)activityCacheManager:(id)arg1 changedHeartRateSummary:(id)arg2 isToday:(BOOL)arg3;

@required
-(void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;

@end

