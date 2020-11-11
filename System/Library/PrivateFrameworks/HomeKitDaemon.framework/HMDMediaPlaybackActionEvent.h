/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>
#import <libobjc.A.dylib/HMDCoreDuetLogEvent.h>

@class NSNumber, NSArray, NSString;

@interface HMDMediaPlaybackActionEvent : HMDLogEvent <HMDCoreAnalyticsLogging, HMDCoreDuetLogEvent> {

	BOOL _isPlaybackArchivePresent;
	NSNumber* _playbackStateNumber;
	NSNumber* _volumeNumber;
	NSNumber* _sourceNumber;
	unsigned long long _numberOfMediaProfiles;
	NSArray* _accessories;
	unsigned long long _numAccessoriesInHome;
	unsigned long long _numNonEmptyScenesInHome;

}

@property (readonly) unsigned long long duetEventType; 
@property (copy,readonly) NSArray * eventDataToLog; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isPlaybackArchivePresent;                                     //@synthesize isPlaybackArchivePresent=_isPlaybackArchivePresent - In the implementation block
@property (copy,readonly) NSNumber * playbackStateNumber;                               //@synthesize playbackStateNumber=_playbackStateNumber - In the implementation block
@property (copy,readonly) NSNumber * volumeNumber;                                      //@synthesize volumeNumber=_volumeNumber - In the implementation block
@property (copy,readonly) NSNumber * sourceNumber;                                      //@synthesize sourceNumber=_sourceNumber - In the implementation block
@property (readonly) unsigned long long numberOfMediaProfiles;                          //@synthesize numberOfMediaProfiles=_numberOfMediaProfiles - In the implementation block
@property (copy,readonly) NSArray * accessories;                                        //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,readonly) unsigned long long numAccessoriesInHome;                 //@synthesize numAccessoriesInHome=_numAccessoriesInHome - In the implementation block
@property (nonatomic,readonly) unsigned long long numNonEmptyScenesInHome;              //@synthesize numNonEmptyScenesInHome=_numNonEmptyScenesInHome - In the implementation block
@property (copy,readonly) NSString * playbackStateString; 
@property (copy,readonly) NSString * sourceString; 
+(id)identifier;
-(id)eventName;
-(NSString *)sourceString;
-(NSArray *)accessories;
-(id)serializedEvent;
-(unsigned long long)numAccessoriesInHome;
-(unsigned long long)numNonEmptyScenesInHome;
-(id)initWithIsPlaybackArchivePresent:(BOOL)arg1 playbackStateNumber:(id)arg2 volumeNumber:(id)arg3 sourceNumber:(id)arg4 accessories:(id)arg5 ;
-(BOOL)isPlaybackArchivePresent;
-(unsigned long long)numberOfMediaProfiles;
-(NSNumber *)volumeNumber;
-(NSString *)playbackStateString;
-(NSNumber *)playbackStateNumber;
-(NSNumber *)sourceNumber;
-(unsigned long long)duetEventType;
-(NSArray *)eventDataToLog;
-(id)metadataForAccessoryAtIndex:(unsigned long long)arg1 ;
-(id)valueForAccessoryAtIndex:(unsigned long long)arg1 ;
@end
