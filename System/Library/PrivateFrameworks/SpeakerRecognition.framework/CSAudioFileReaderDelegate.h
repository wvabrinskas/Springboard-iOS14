/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSAudioFileReaderDelegate <NSObject>
@required
-(void)audioFileReaderDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
-(void)audioFileReaderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;
-(void)audioFileReaderDidStopRecording:(id)arg1 forReason:(long long)arg2;

@end

