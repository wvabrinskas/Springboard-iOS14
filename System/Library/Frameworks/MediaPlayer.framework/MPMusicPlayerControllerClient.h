/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPMusicPlayerControllerClient <NSObject>
@required
-(void)setServerQueueDescriptor:(id)arg1;
-(void)setServerNowPlaying:(id)arg1;
-(void)setServerTimeSnapshot:(id)arg1;
-(void)serverPlaybackModeDidChangeAffectingQueue:(BOOL)arg1;
-(void)serverItemDidEnd;
-(void)serverQueueDidEnd;

@end

