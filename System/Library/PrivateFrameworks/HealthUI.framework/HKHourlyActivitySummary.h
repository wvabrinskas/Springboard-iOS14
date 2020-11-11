/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKActivitySummary.h>

@class NSDateComponents;

@interface HKHourlyActivitySummary : HKActivitySummary {

	NSDateComponents* _hourlyDateComponents;

}

@property (nonatomic,retain) NSDateComponents * hourlyDateComponents;              //@synthesize hourlyDateComponents=_hourlyDateComponents - In the implementation block
-(id)dateComponentsForCalendar:(id)arg1 ;
-(BOOL)_useHourlyGoalComparison;
-(NSDateComponents *)hourlyDateComponents;
-(void)setHourlyDateComponents:(NSDateComponents *)arg1 ;
@end
