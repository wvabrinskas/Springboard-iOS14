/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdaterDelegate.h>

@protocol MapsSuggestionsLocationUpdater;
@class CLLocation, MapsSuggestionsCanKicker, NSString;

@interface MapsSuggestionsLocationChangedTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsLocationUpdaterDelegate> {

	CLLocation* _previousLocation;
	double _minDistance;
	id<MapsSuggestionsLocationUpdater> _locationUpdater;
	MapsSuggestionsCanKicker* _locationForceUpdate;
	id<MapsSuggestionsLocationUpdater> _forcingLocationUpdater;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didAddFirstObserver;
-(void)stop;
-(void)didLoseLocationPermission;
-(void)didRemoveLastObserver;
-(void)didUpdateLocation:(id)arg1 ;
-(void)_forceLocationUpdate;
-(id)initWithLocationUpdater:(id)arg1 forcingLocationUpdater:(id)arg2 ;
-(void)changeMinDistance:(double)arg1 ;
-(void)restartWithUpdateTime:(double)arg1 ;
-(void)startWithMinimumUpdateTime:(double)arg1 minimumDistance:(double)arg2 ;
@end

