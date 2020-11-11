/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {

	MapsSuggestionsSignalPack* _signalPack;

}
+(id)evaluatorFromSignalPack:(id)arg1 ;
-(BOOL)isUserPreferenceDriving;
-(BOOL)isCarPlayConnected;
-(BOOL)hasTouristInfo;
-(BOOL)hasDistanceFromOriginToDestinationInfo;
-(BOOL)hasWeatherPrecipitationInfo;
-(BOOL)isColdWeather;
-(BOOL)isLowChanceOfSnowing;
-(BOOL)isMildWeather;
-(BOOL)isBadWeather;
-(BOOL)hasWeatherInfo;
-(BOOL)isHotWeather;
-(BOOL)isTouristHere;
-(id)initWithSignalPack:(id)arg1 ;
-(BOOL)isEasilyWalkable;
-(BOOL)isRideSharingAppsInstalled;
-(BOOL)isLowChanceOfRaining;
-(BOOL)hasTransitInfo;
-(BOOL)hasRidesharingInfo;
-(BOOL)isHighChanceOfRaining;
-(BOOL)hasWeatherTemperatureInfo;
-(BOOL)isTransitCurrentlyPossible;
-(BOOL)isHighChanceOfSnowing;
-(BOOL)isWalkable;
-(BOOL)hasDistanceFromHereToOriginInfo;
-(BOOL)isUserPreferenceRidesharing;
-(BOOL)hasDistanceFromHereToDestinationInfo;
-(BOOL)isUserPreferenceTransit;
-(BOOL)hasMapTypeInfo;
-(BOOL)hasCarPlayInfo;
-(BOOL)isMapTypeTransit;
-(BOOL)hasUserTransportTypePreferenceInfo;
-(BOOL)isUserPreferenceWalking;
@end
