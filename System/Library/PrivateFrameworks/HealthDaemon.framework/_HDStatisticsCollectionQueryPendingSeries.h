/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HKQuantitySample, NSNumber, NSMutableArray;

@interface _HDStatisticsCollectionQueryPendingSeries : NSObject {

	HKQuantitySample* _series;
	NSNumber* _anchor;
	NSMutableArray* _quantities;

}

@property (nonatomic,readonly) HKQuantitySample * series;                //@synthesize series=_series - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * anchor;                   //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) NSMutableArray * quantities;              //@synthesize quantities=_quantities - In the implementation block
-(NSNumber *)anchor;
-(HKQuantitySample *)series;
-(NSMutableArray *)quantities;
-(id)initWithSeries:(id)arg1 anchor:(id)arg2 ;
-(void)addQuantity:(id)arg1 dateInterval:(id)arg2 ;
@end

