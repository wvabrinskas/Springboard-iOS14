/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBFilter.h>

@interface CBSensorOverrideFilter : CBFilter {

	SCD_Struct_CB13 _chromaticity;
	double _illuminance;
	int _orientation;

}

@property (assign) int orientation;              //@synthesize orientation=_orientation - In the implementation block
-(id)filterEvent:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)dealloc;
@end

