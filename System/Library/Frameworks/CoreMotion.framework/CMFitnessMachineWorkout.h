/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMWorkout.h>

@class NSString;

@interface CMFitnessMachineWorkout : CMWorkout {

	NSString* fManufacturerName;
	NSString* fModel;

}

@property (nonatomic,readonly) NSString * manufacturerName; 
@property (nonatomic,readonly) NSString * model; 
+(BOOL)isAvailable;
+(BOOL)supportsSecureCoding;
+(id)fitnessMachineWorkoutInstance:(id)arg1 ;
-(NSString *)model;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSessionId:(id)arg1 workoutType:(long long)arg2 manufacturerName:(id)arg3 model:(id)arg4 ;
-(NSString *)manufacturerName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end
