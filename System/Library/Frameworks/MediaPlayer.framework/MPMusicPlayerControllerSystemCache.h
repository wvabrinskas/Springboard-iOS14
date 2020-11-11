/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults, MPMusicPlayerControllerNowPlaying, MPMusicPlayerQueueDescriptor;

@interface MPMusicPlayerControllerSystemCache : NSObject {

	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) MPMusicPlayerControllerNowPlaying * nowPlaying; 
@property (nonatomic,retain) MPMusicPlayerQueueDescriptor * queueDescriptor; 
@property (nonatomic,readonly) BOOL hasCachedData; 
+(id)sharedCache;
-(void)setQueueDescriptor:(MPMusicPlayerQueueDescriptor *)arg1 ;
-(void)clearCache;
-(MPMusicPlayerControllerNowPlaying *)nowPlaying;
-(void)setNowPlaying:(MPMusicPlayerControllerNowPlaying *)arg1 ;
-(BOOL)hasCachedData;
-(void)_saveObject:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)_objectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)_init;
-(MPMusicPlayerQueueDescriptor *)queueDescriptor;
@end
