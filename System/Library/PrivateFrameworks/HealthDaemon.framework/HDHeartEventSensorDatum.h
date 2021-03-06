/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDDataCollectorSensorDatum.h>

@class NSArray, HKQuantity;

@interface HDHeartEventSensorDatum : HDDataCollectorSensorDatum {

	NSArray* _associatedSampleUUIDs;
	HKQuantity* _heartRateThreshold;

}

@property (nonatomic,readonly) NSArray * associatedSampleUUIDs;              //@synthesize associatedSampleUUIDs=_associatedSampleUUIDs - In the implementation block
@property (nonatomic,readonly) HKQuantity * heartRateThreshold;              //@synthesize heartRateThreshold=_heartRateThreshold - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)metadata;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartRateThreshold:(id)arg3 associatedSampleUUIDs:(id)arg4 resumeContext:(id)arg5 ;
-(NSArray *)associatedSampleUUIDs;
-(HKQuantity *)heartRateThreshold;
@end

