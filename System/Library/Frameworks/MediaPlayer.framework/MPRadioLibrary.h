/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPRadioController, NSArray;

@interface MPRadioLibrary : NSObject {

	MPRadioController* _radioController;

}

@property (nonatomic,readonly) BOOL isEnabled; 
@property (nonatomic,readonly) unsigned long long stationCount; 
@property (nonatomic,readonly) NSArray * stations; 
+(id)defaultRadioLibrary;
-(id)init;
-(NSArray *)stations;
-(void)getRecentStationGroupsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isEnabled;
-(unsigned long long)stationCount;
-(id)stationWithIdentifier:(long long)arg1 ;
-(void)addStationBasedOnTrackIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)_radioAvailabilityDidChangeNotification:(id)arg1 ;
-(void)_radioRecentStationsDidChangeNotification:(id)arg1 ;
-(id)_radioModel;
-(void)dealloc;
@end

