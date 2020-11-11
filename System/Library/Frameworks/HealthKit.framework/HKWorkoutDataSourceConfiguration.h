/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKWorkoutConfiguration, NSSet, NSDictionary;

@interface HKWorkoutDataSourceConfiguration : HKTaskConfiguration {

	HKWorkoutConfiguration* _workoutConfiguration;
	NSSet* _sampleTypesToCollect;
	NSDictionary* _filtersBySampleType;
	NSSet* _eventTypesToCollect;

}

@property (copy,readonly) HKWorkoutConfiguration * workoutConfiguration;              //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
@property (copy,readonly) NSSet * sampleTypesToCollect;                               //@synthesize sampleTypesToCollect=_sampleTypesToCollect - In the implementation block
@property (copy,readonly) NSDictionary * filtersBySampleType;                         //@synthesize filtersBySampleType=_filtersBySampleType - In the implementation block
@property (copy,readonly) NSSet * eventTypesToCollect;                                //@synthesize eventTypesToCollect=_eventTypesToCollect - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithWorkoutConfiguration:(id)arg1 sampleTypesToCollect:(id)arg2 filters:(id)arg3 eventTypesToCollect:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(NSSet *)sampleTypesToCollect;
-(NSDictionary *)filtersBySampleType;
-(NSSet *)eventTypesToCollect;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
