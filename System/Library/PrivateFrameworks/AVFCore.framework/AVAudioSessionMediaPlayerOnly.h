/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVAudioSessionMediaPlayerOnlyInternal, NSString;

@interface AVAudioSessionMediaPlayerOnly : NSObject {

	AVAudioSessionMediaPlayerOnlyInternal* _audioSession;

}

@property (assign) id<AVAudioSessionDelegateMediaPlayerOnly> delegate; 
@property (readonly) NSString * category; 
@property (readonly) NSString * mode; 
@property (readonly) double preferredHardwareSampleRate; 
@property (readonly) double preferredIOBufferDuration; 
@property (readonly) BOOL inputIsAvailable; 
@property (readonly) double currentHardwareSampleRate; 
@property (readonly) long long currentHardwareInputNumberOfChannels; 
@property (readonly) long long currentHardwareOutputNumberOfChannels; 
@property (readonly) BOOL canEnterPIPMode; 
+(void)initialize;
-(NSString *)category;
-(id)init;
-(id<AVAudioSessionDelegateMediaPlayerOnly>)delegate;
-(BOOL)canEnterPIPMode;
-(BOOL)setActivationContext:(id)arg1 error:(id*)arg2 ;
-(double)preferredHardwareSampleRate;
-(BOOL)setCategory:(id)arg1 error:(id*)arg2 ;
-(long long)currentHardwareInputNumberOfChannels;
-(NSString *)mode;
-(void)_attachToPlayer:(id)arg1 ;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(void)_addFPListeners;
-(void)setDelegate:(id<AVAudioSessionDelegateMediaPlayerOnly>)arg1 ;
-(void)setApplicationAudioSession:(BOOL)arg1 ;
-(BOOL)inputIsAvailable;
-(double)preferredIOBufferDuration;
-(long long)currentHardwareOutputNumberOfChannels;
-(BOOL)setActive:(BOOL)arg1 withFlags:(long long)arg2 error:(id*)arg3 ;
-(void)_removeFPListeners;
-(BOOL)setUsingLongFormAudio:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2 ;
-(double)currentHardwareSampleRate;
-(BOOL)isApplicationAudioSession;
-(id)_weakReference;
-(BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2 ;
-(BOOL)setMode:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

