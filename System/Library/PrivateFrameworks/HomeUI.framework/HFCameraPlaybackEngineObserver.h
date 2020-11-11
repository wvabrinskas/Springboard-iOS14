/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HFCameraPlaybackEngineObserver <NSObject>
@optional
-(void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
-(void)playbackEngine:(id)arg1 didUpdateScrubbingStatus:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdateTimelineState:(unsigned long long)arg2;
-(void)playbackEngine:(id)arg1 didUpdateLiveCameraSource:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdateMicrophoneEnabled:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdateStreamAudioEnabled:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdateStreamAudioVolume:(BOOL)arg2;
-(void)playbackEngine:(id)arg1 didUpdateClipPlayer:(id)arg2;
-(void)playbackEngine:(id)arg1 didUpdateEvents:(id)arg2;
-(void)playbackEngine:(id)arg1 didRemoveEvents:(id)arg2;

@end
