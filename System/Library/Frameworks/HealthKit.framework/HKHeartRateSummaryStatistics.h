/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSDateInterval, NSUUID, NSArray;

@interface HKHeartRateSummaryStatistics : NSObject <NSSecureCoding> {

	NSMutableArray* _sortedBuckets;
	NSDateInterval* _dateInterval;
	long long _numberOfBuckets;
	long long _numberOfReadings;
	NSUUID* _sessionUUID;
	NSArray* _highlightedReadings;

}

@property (setter=_setHighlightedReadings:,nonatomic,retain) NSArray * highlightedReadings;              //@synthesize highlightedReadings=_highlightedReadings - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval;                                            //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) long long numberOfBuckets;                                                //@synthesize numberOfBuckets=_numberOfBuckets - In the implementation block
@property (nonatomic,readonly) long long numberOfReadings;                                               //@synthesize numberOfReadings=_numberOfReadings - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionUUID;                                                     //@synthesize sessionUUID=_sessionUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)sessionUUID;
-(id)_dictionaryRepresentation;
-(unsigned long long)hash;
-(id)_bucketAtIndex:(long long)arg1 createdIfNeeded:(BOOL)arg2 ;
-(long long)numberOfReadings;
-(NSArray *)highlightedReadings;
-(void)_setHighlightedReadings:(id)arg1 ;
-(id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 sessionUUID:(id)arg3 ;
-(void)addHeartRateInBeatsPerMinute:(double)arg1 forTime:(double)arg2 ;
-(long long)numberOfBuckets;
-(void)enumerateBucketsWithBlock:(/*^block*/id)arg1 ;
-(id)_bucketsDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDateInterval *)dateInterval;
-(id)bucketAtIndex:(long long)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

