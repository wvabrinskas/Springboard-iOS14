/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MNTracePlayerTimelineStreamObjectType.h>

@class NSString;

@interface MNTraceVehicleHeadingRow : NSObject <MNTracePlayerTimelineStreamObjectType> {

	double _timestamp;
	double _vehicleHeading;

}

@property (nonatomic,readonly) double position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double vehicleHeading;                 //@synthesize vehicleHeading=_vehicleHeading - In the implementation block
-(double)position;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(double)vehicleHeading;
-(void)setVehicleHeading:(double)arg1 ;
@end

