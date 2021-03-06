/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSString, NSDateComponents;

@interface HKInteractiveChartTimePeriodData : NSObject <HKGraphSeriesChartData> {

	double _timePeriod;
	NSString* _timePeriodPrefix;
	NSDateComponents* _statisticsInterval;
	long long _recordCount;

}

@property (assign,nonatomic) double timePeriod;                                  //@synthesize timePeriod=_timePeriod - In the implementation block
@property (nonatomic,retain) NSString * timePeriodPrefix;                        //@synthesize timePeriodPrefix=_timePeriodPrefix - In the implementation block
@property (nonatomic,retain) NSDateComponents * statisticsInterval;              //@synthesize statisticsInterval=_statisticsInterval - In the implementation block
@property (assign,nonatomic) long long recordCount;                              //@synthesize recordCount=_recordCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRecordCount:(long long)arg1 ;
-(long long)recordCount;
-(void)setStatisticsInterval:(NSDateComponents *)arg1 ;
-(NSDateComponents *)statisticsInterval;
-(void)setTimePeriod:(double)arg1 ;
-(void)setTimePeriodPrefix:(NSString *)arg1 ;
-(double)timePeriod;
-(NSString *)timePeriodPrefix;
@end

