/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSAudioStreamProviding <NSObject>
@required
-(void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;
-(BOOL)isRecording;
-(id)audioChunkToEndFrom:(unsigned long long)arg1;
-(id)holdAudioStreamWithDescription:(id)arg1 timeout:(double)arg2;
-(void)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 completion:(/*^block*/id)arg3;
-(id)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id*)arg3;
-(void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(id)arg2;
-(id)audioChunkToEndFrom:(unsigned long long)arg1 channelIdx:(unsigned long long)arg2;
-(id)recordSettings;
-(void)cancelAudioStreamHold:(id)arg1;
-(BOOL)setCurrentContext:(id)arg1 error:(id*)arg2;
-(BOOL)isNarrowBand;
-(id)recordRoute;
-(id)recordDeviceInfo;
-(void)startAudioStream:(id)arg1 option:(id)arg2 completion:(/*^block*/id)arg3;
-(id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
-(void)stopAudioStream:(id)arg1 option:(id)arg2 completion:(/*^block*/id)arg3;
-(id)playbackRoute;
-(id)UUID;
-(void)prepareAudioStream:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id*)arg3;

@end
