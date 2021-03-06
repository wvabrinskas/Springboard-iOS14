/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EARCaesuraSilencePosteriorGeneratorDelegate <NSObject>
@optional
-(void)silenceDurationEstimateAvailable:(float*)arg1 numEstimates:(unsigned long long)arg2 clientProcessedAudioMs:(float)arg3;

@required
-(void)clientSilenceFeaturesAvailable:(id)arg1;

@end

