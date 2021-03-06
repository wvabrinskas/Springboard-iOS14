/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class CLSInputPeopleClue, NSMapTable, CLSMeaningClue;

@interface CLSClueCollection : NSObject {

	unsigned long long _versionCount;
	os_unfair_recursive_lock_s _recursiveLock;
	CLSInputPeopleClue* _mePersonClue;
	NSMapTable* _inputCluesByKey;
	NSMapTable* _outputCluesByKey;
	NSMapTable* _meaningCluesByKey;

}

@property (nonatomic,retain) CLSInputPeopleClue * mePersonClue;              //@synthesize mePersonClue=_mePersonClue - In the implementation block
@property (readonly) unsigned long long versionCount;                        //@synthesize versionCount=_versionCount - In the implementation block
@property (readonly) CLSMeaningClue * locationMobilityClue; 
-(id)universalStartDate;
-(id)localStartDate;
-(id)localEndDate;
-(long long)year;
-(void)enumerateTimeClues:(/*^block*/id)arg1 ;
-(id)outputCluesForKey:(id)arg1 andValue:(id)arg2 ;
-(id)universalDates;
-(unsigned long long)numberOfLocations;
-(id)outputClueRelatedPeopleForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)universalEndDate;
-(id)uniqueOutputClueForKey:(id)arg1 andValue:(id)arg2 ;
-(id)init;
-(void)setMePersonClue:(CLSInputPeopleClue *)arg1 ;
-(unsigned long long)numberOfTimes;
-(void)_mergeInputClue:(id)arg1 ;
-(double)timeInterval;
-(CLSInputPeopleClue *)mePersonClue;
-(unsigned long long)numberOfPersons;
-(void)enumeratePeopleClues:(/*^block*/id)arg1 ;
-(id)uniqueMeaningCluesForKey:(id)arg1 ;
-(CLSMeaningClue *)locationMobilityClue;
-(BOOL)hasMeaningClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)meaningCluesForKey:(id)arg1 ;
-(void)enumerateTimeOfDayClues:(/*^block*/id)arg1 ;
-(id)peopleNames;
-(id)peopleDescriptionWithoutPeople:(id)arg1 ;
-(id)outputClueRelatedEventsForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)outputCluesForKey:(id)arg1 ;
-(id)mePerson;
-(id)description;
-(void)enumerateLocationClues:(/*^block*/id)arg1 ;
-(BOOL)hasOutputClueWithKey:(id)arg1 andValue:(id)arg2 ;
-(id)meaningClues;
-(BOOL)hasOutputClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)locationRegions;
-(id)peopleDescription;
-(id)locationPlacemarks;
-(id)localDates;
-(unsigned long long)numberOfDays;
-(void)prepareWithProgressBlock:(/*^block*/id)arg1 ;
-(void)mergeClues:(id)arg1 ;
-(BOOL)hasMeaningClueWithKey:(id)arg1 andValue:(id)arg2 ;
-(id)inputCluesForKey:(id)arg1 ;
-(id)uniqueMeaningClueForKey:(id)arg1 andValue:(id)arg2 ;
-(unsigned long long)versionCount;
-(id)outputClueRelatedPlacesForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)uniqueOutputCluesForKey:(id)arg1 ;
-(id)meaningCluesForKey:(id)arg1 andValue:(id)arg2 ;
-(id)uniqueMeaningClues;
-(id)uniqueInputClues;
-(void)_incrementVersionCount;
-(void)_mergeMeaningClue:(id)arg1 ;
-(id)uniqueOutputClues;
-(void)_mergeOutputClue:(id)arg1 ;
-(id)outputClues;
-(id)locationRegionsInPlacemarks;
-(id)locations;
-(id)inputClues;
@end

