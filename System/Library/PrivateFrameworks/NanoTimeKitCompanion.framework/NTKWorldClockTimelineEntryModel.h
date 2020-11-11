/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class WorldClockCity;

@interface NTKWorldClockTimelineEntryModel : NTKTimelineEntryModel {

	BOOL _showIdealizedTime;
	WorldClockCity* _city;

}

@property (nonatomic,retain) WorldClockCity * city;               //@synthesize city=_city - In the implementation block
@property (assign,nonatomic) BOOL showIdealizedTime;              //@synthesize showIdealizedTime=_showIdealizedTime - In the implementation block
+(id)_analogImageProvider;
-(void)setCity:(WorldClockCity *)arg1 ;
-(WorldClockCity *)city;
-(id)_timeZone;
-(id)init;
-(double)_timeZoneOffset;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(id)_newCircularMediumTemplate;
-(id)_newSmallModularTemplate;
-(id)_newLargeModularTemplate;
-(id)_newCircularSmallTemplate;
-(id)_newSmallFlatUtilityTemplate;
-(id)_newExtraLargeTemplate;
-(id)_newSignatureBezelTemplate;
-(id)_newSignatureCircularTemplate;
-(id)_newSignatureExtraLargeCircularTemplate;
-(void)setShowIdealizedTime:(BOOL)arg1 ;
-(id)_newLargeUtilityTemplate;
-(id)_newSignatureRectangularTemplate;
-(id)_signatureCorner;
-(id)_abbreviationTextProvider;
-(id)_timeAndDifferenceOffsetTextProvider;
-(id)_timeAndAbbreviationTextProvider;
-(id)_timeTextProvider;
-(id)_cityNameTextProvider;
-(id)_timeAndDayOffsetTextProvider;
-(id)_differenceTextProvider;
-(id)_timeAndCityNameOffsetTextProvider;
-(BOOL)showIdealizedTime;
-(id)_graphicCircularMetadata;
-(id)_timeCityNameTimeZoneOffsetTextProvider;
-(id)_differenceTextProviderWithSize:(long long)arg1 andCaps:(BOOL)arg2 ;
-(id)_dayOffsetTextProvider;
@end
