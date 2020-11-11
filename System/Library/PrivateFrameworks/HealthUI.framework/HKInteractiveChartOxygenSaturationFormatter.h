/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKInteractiveChartGenericStatFormatter.h>

@interface HKInteractiveChartOxygenSaturationFormatter : HKInteractiveChartGenericStatFormatter {

	long long _airPressureStatisticsType;

}

@property (assign,nonatomic) long long airPressureStatisticsType;              //@synthesize airPressureStatisticsType=_airPressureStatisticsType - In the implementation block
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2 ;
-(id)initWithStatisticsType:(long long)arg1 ;
-(long long)airPressureStatisticsType;
-(void)setAirPressureStatisticsType:(long long)arg1 ;
@end
