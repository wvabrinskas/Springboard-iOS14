/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HKMCLoggedDataAnalytics : NSObject
+(BOOL)_isMetricEnabled;
+(BOOL)_isAllowed;
+(BOOL)shouldSubmit;
+(void)submitMetricForMethod:(id)arg1 loggedDayIndex:(long long)arg2 currentDayIndex:(long long)arg3 ;
@end
