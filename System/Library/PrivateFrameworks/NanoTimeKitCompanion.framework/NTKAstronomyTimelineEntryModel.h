/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSDate, CLLocation;

@interface NTKAstronomyTimelineEntryModel : NTKTimelineEntryModel {

	unsigned long long _vista;
	NSDate* _currentDate;
	CLLocation* _currentLocation;
	CLLocation* _anyLocation;

}

@property (nonatomic,readonly) unsigned long long vista;                  //@synthesize vista=_vista - In the implementation block
@property (nonatomic,readonly) NSDate * currentDate;                      //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,readonly) CLLocation * currentLocation;              //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) CLLocation * anyLocation;                  //@synthesize anyLocation=_anyLocation - In the implementation block
-(NSDate *)currentDate;
-(CLLocation *)currentLocation;
-(unsigned long long)vista;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(CLLocation *)anyLocation;
-(id)initWithVista:(unsigned long long)arg1 entryDate:(id)arg2 currentDate:(id)arg3 currentLocation:(id)arg4 anyLocation:(id)arg5 ;
-(id)_graphicRectangular;
@end
