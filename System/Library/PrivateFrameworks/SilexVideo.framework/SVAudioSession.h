/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class NSObject, NSMapTable, SVMediaPlaybackController;

@interface SVAudioSession : NSObject {

	BOOL _audioSessionActive;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSMapTable* _players;
	SVMediaPlaybackController* _playbackController;

}

@property (assign,getter=isAudioSessionActive,nonatomic) BOOL audioSessionActive;              //@synthesize audioSessionActive=_audioSessionActive - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;                     //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,readonly) NSMapTable * players;                                           //@synthesize players=_players - In the implementation block
@property (nonatomic,readonly) SVMediaPlaybackController * playbackController;                 //@synthesize playbackController=_playbackController - In the implementation block
+(id)sharedSession;
-(NSMapTable *)players;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(id)init;
-(BOOL)isAudioSessionActive;
-(void)addInterestForPlayer:(id)arg1 withMode:(int)arg2 ;
-(void)removeInterestForPlayer:(id)arg1 ;
-(SVMediaPlaybackController *)playbackController;
-(void)registerPlaybackControlForPlayer:(id)arg1 withMode:(int)arg2 ;
-(void)setupAudioSessionCategory;
-(void)activateAudioSessionCategory;
-(void)deactivateAudioSessionCategory;
-(id)desiredAudioSessionConfiguration;
-(BOOL)needsToSetupAudioSessionCategory;
-(BOOL)shouldActivateAudioSession;
-(void)setAudioSessionActive:(BOOL)arg1 ;
-(BOOL)canDeactivateAudioSession;
@end
