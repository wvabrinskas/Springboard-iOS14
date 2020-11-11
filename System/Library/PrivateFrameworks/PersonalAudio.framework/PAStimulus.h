/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalAudio.framework/PersonalAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVAudioEngine, AVAudioPlayerNode, AVAudioFile, AVAudioPCMBuffer, AXDispatchTimer, NSURL;

@interface PAStimulus : NSObject {

	/*^block*/id _stimulusMagnitudesCallback;
	unsigned long long _bucketCount;
	BOOL _ramping;
	AVAudioEngine* _engine;
	AVAudioPlayerNode* _audioPlayerNode;
	AVAudioFile* _audioFile;
	AVAudioPCMBuffer* _audioPCMBuffer;
	AXDispatchTimer* _timer;
	NSURL* _filePath;
	double _levelMultiplier;

}

@property (nonatomic,retain) AVAudioEngine * engine;                           //@synthesize engine=_engine - In the implementation block
@property (nonatomic,retain) AVAudioPlayerNode * audioPlayerNode;              //@synthesize audioPlayerNode=_audioPlayerNode - In the implementation block
@property (nonatomic,retain) AVAudioFile * audioFile;                          //@synthesize audioFile=_audioFile - In the implementation block
@property (nonatomic,retain) AVAudioPCMBuffer * audioPCMBuffer;                //@synthesize audioPCMBuffer=_audioPCMBuffer - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * timer;                          //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSURL * filePath;                                 //@synthesize filePath=_filePath - In the implementation block
@property (assign,nonatomic) double levelMultiplier;                           //@synthesize levelMultiplier=_levelMultiplier - In the implementation block
+(id)sinStimulus;
+(id)louderSinStimulus;
+(id)musicStimulus;
-(NSURL *)filePath;
-(void)setEngine:(AVAudioEngine *)arg1 ;
-(AVAudioEngine *)engine;
-(void)play;
-(BOOL)isPlaying;
-(AXDispatchTimer *)timer;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFilePath:(NSURL *)arg1 ;
-(void)stop;
-(void)setTimer:(AXDispatchTimer *)arg1 ;
-(id)initWithFile:(id)arg1 ;
-(void)audioSessionWasInterrupted:(id)arg1 ;
-(void)setLevelMultiplier:(double)arg1 ;
-(double)levelMultiplier;
-(void)setAudioFile:(AVAudioFile *)arg1 ;
-(void)setAudioPCMBuffer:(AVAudioPCMBuffer *)arg1 ;
-(void)setAudioPlayerNode:(AVAudioPlayerNode *)arg1 ;
-(AVAudioPlayerNode *)audioPlayerNode;
-(AVAudioPCMBuffer *)audioPCMBuffer;
-(void)rampVolumeUp:(BOOL)arg1 ;
-(void)unregisterListener;
-(void)calculateFFTForBuffer:(id)arg1 ;
-(void)registerListener:(/*^block*/id)arg1 forBucketCount:(unsigned long long)arg2 ;
-(AVAudioFile *)audioFile;
@end
