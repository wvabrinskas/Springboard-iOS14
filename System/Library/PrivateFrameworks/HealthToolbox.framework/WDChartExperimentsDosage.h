/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSNumber;

@interface WDChartExperimentsDosage : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSNumber* _doseInMilligrams;

}

@property (nonatomic,retain) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSNumber * doseInMilligrams;              //@synthesize doseInMilligrams=_doseInMilligrams - In the implementation block
-(NSDate *)endDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setDoseInMilligrams:(NSNumber *)arg1 ;
-(NSNumber *)doseInMilligrams;
@end
