/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/AudioSession
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AudioSession/AudioSession-Structs.h>
@class NSArray, NSString, AVAudioSessionPortDescription;

@interface AVAudioSession : NSObject {

	void* _impl;

}

@property (readonly) BOOL isPrimary; 
@property (nonatomic,readonly) NSArray * availableCategories; 
@property (readonly) NSString * category; 
@property (readonly) unsigned long long categoryOptions; 
@property (readonly) unsigned long long routeSharingPolicy; 
@property (readonly) NSArray * availableModes; 
@property (readonly) NSString * mode; 
@property (readonly) BOOL allowHapticsAndSystemSoundsDuringRecording; 
@property (readonly) unsigned long long recordPermission; 
@property (readonly) AVAudioSessionPortDescription * preferredInput; 
+(id)sharedInstance;
+(id)auxiliarySession;
+(BOOL)categoryEnablesInput:(id)arg1 ;
+(id)retrieveSessionWithID:(unsigned)arg1 ;
+(id)primarySession;
-(BOOL)isPrimary;
-(oneway void)release;
-(NSString *)category;
-(id)init;
-(unsigned)opaqueSessionID;
-(BOOL)allowAllBuiltInDataSources;
-(void)privateInputIsAvailableChanged:(id)arg1 ;
-(void)privateInterruptionWithInfo:(id)arg1 ;
-(unsigned long long)promptStyle;
-(void)privateUpdateInputGain:(id)arg1 ;
-(void)privateUpdateOutputVolume:(id)arg1 ;
-(void)privateUpdatePromptStyle:(id)arg1 ;
-(void)privateHandleServerDied;
-(id)delegate;
-(void)privateUpdateAudioFormats:(id)arg1 ;
-(void)privateHandlePickableRoutesChange;
-(void)privateUpdateInputChannelCount:(id)arg1 ;
-(void)privateUpdateOutputChannelCount:(id)arg1 ;
-(void)privateHandleSecondaryAudioHintChange:(id)arg1 ;
-(id)initWithSessionType:(unsigned)arg1 ;
-(void)privateHandleOtherPrimaryAudioPlayStateChange;
-(void)privateUpdatePiPAvailabilityChange:(id)arg1 ;
-(BOOL)isInputAvailable;
-(void)privateHandleRoutingContextChange;
-(void)privateMarkKVOPropertiesDirty:(unsigned long long)arg1 ;
-(BOOL)setActive:(BOOL)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)privateHandleServerConnectionCompletion:(ConnectionResult)arg1 ;
-(BOOL)privateNeedsTranslationForNoSpeakerCategory:(id)arg1 ;
-(BOOL)isPiPAvailable;
-(int)privateSetCategoryWithOptions:(id)arg1 modes:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
-(id)privateGetDataSources:(BOOL)arg1 ;
-(double)outputLatency;
-(id)privateGetSelectedDataSource:(BOOL)arg1 ;
-(BOOL)privateSetRouteSharingPolicy:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)privateRefreshAvailableInputs;
-(BOOL)setPreferredSampleRate:(double)arg1 error:(id*)arg2 ;
-(long long)inputNumberOfChannels;
-(long long)outputNumberOfChannels;
-(unsigned long long)categoryOptions;
-(float)inputGain;
-(NSArray *)availableCategories;
-(BOOL)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned long long)recordPermission;
-(void)activateWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)deactivateAndSetInterruptionPriority:(long long)arg1 error:(id*)arg2 ;
-(long long)inputOrientation;
-(void)requestRecordPermission:(/*^block*/id)arg1 ;
-(BOOL)setPreferredIOBufferFrameSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setInterruptionPriority:(long long)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredInputNumberOfChannels:(long long)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id*)arg2 ;
-(BOOL)forceSoundCheck;
-(BOOL)setInputGain:(float)arg1 error:(id*)arg2 ;
-(BOOL)setInputDataSource:(id)arg1 error:(id*)arg2 ;
-(BOOL)setOutputDataSource:(id)arg1 error:(id*)arg2 ;
-(long long)preferredInputOrientation;
-(BOOL)setPreferredInputOrientation:(long long)arg1 error:(id*)arg2 ;
-(BOOL)setAllowHapticsAndSystemSoundsDuringRecording:(BOOL)arg1 error:(id*)arg2 ;
-(long long)audioFormat;
-(BOOL)allowHapticsAndSystemSoundsDuringRecording;
-(BOOL)isDolbyDigitalEncoderAvailable;
-(BOOL)setForceSoundCheck:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)isEarpieceActiveNoiseCancelationEnabled;
-(BOOL)lastActivationStoppedNowPlayingApp;
-(BOOL)requiresNoAudioResources;
-(BOOL)setRequiresNoAudioResources:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)allowMixableAudioWhileRecording;
-(BOOL)participatesInNowPlayingAppPolicy;
-(BOOL)setActivationContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAllowMixableAudioWhileRecording:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setParticipatesInNowPlayingAppPolicy:(BOOL)arg1 error:(id*)arg2 ;
-(AVAudioSessionPortDescription *)preferredInput;
-(BOOL)eligibleForBTSmartRoutingConsideration;
-(BOOL)setEligibleForBTSmartRoutingConsideration:(BOOL)arg1 error:(id*)arg2 ;
-(double)inputLatency;
-(BOOL)participatesInMutePriority;
-(BOOL)setParticipatesInMutePriority:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)recordingFromRemoteInput;
-(BOOL)decoupledIO;
-(BOOL)setRecordingFromRemoteInput:(BOOL)arg1 error:(id*)arg2 ;
-(void)setAllowAllBuiltInDataSources:(BOOL)arg1 ;
-(BOOL)setBypassRingerSwitchPolicy:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setAudioHardwareControlFlags:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setInterruptionFadeDuration:(id)arg1 error:(id*)arg2 ;
-(BOOL)setReporterID:(long long)arg1 error:(id*)arg2 ;
-(BOOL)isHardwareFormatFixedToMultiChannel;
-(BOOL)fixHardwareFormatToMultiChannel:(BOOL)arg1 error:(id*)arg2 ;
-(id)inputDataSources;
-(id)inputDataSource;
-(id)outputDataSources;
-(id)outputDataSource;
-(BOOL)isInputGainSettable;
-(BOOL)isOtherAudioPlaying;
-(BOOL)secondaryAudioShouldBeSilencedHint;
-(double)inputSafetyOffset;
-(double)outputSafetyOffset;
-(id)activeSessionDisplayIDs;
-(unsigned long long)IOBufferFrameSize;
-(long long)interruptionPriority;
-(unsigned long long)preferredIOBufferFrameSize;
-(long long)preferredInputNumberOfChannels;
-(long long)preferredOutputNumberOfChannels;
-(long long)maximumInputNumberOfChannels;
-(long long)maximumOutputNumberOfChannels;
-(BOOL)selectIndependentRoutingContext:(id*)arg1 ;
-(BOOL)overrideOutputAudioPort:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredInput:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAudioClockDevice:(id)arg1 error:(id*)arg2 ;
-(id)audioClockDevice;
-(double)speechDetectionDeviceSampleRate;
-(id)availableInputs;
-(BOOL)setDisallowedPorts:(id)arg1 error:(id*)arg2 ;
-(BOOL)setDefaultChatMode:(id)arg1 error:(id*)arg2 ;
-(BOOL)setIAmTheAssistant:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)prefersNoDucking;
-(BOOL)prefersNoInterruptionsByRingtonesAndAlerts;
-(BOOL)setPrefersNoInterruptionsByRingtonesAndAlerts:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setPrefersNoDucking:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)clearInputPreferences:(id*)arg1 ;
-(BOOL)preferDecoupledIO:(BOOL)arg1 error:(id*)arg2 ;
-(double)preferredInputSampleRate;
-(BOOL)setAggregatedIOPreference:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredInputSampleRate:(double)arg1 error:(id*)arg2 ;
-(double)preferredOutputSampleRate;
-(BOOL)setPreferredOutputSampleRate:(double)arg1 error:(id*)arg2 ;
-(double)inputSampleRate;
-(BOOL)setSpeakerThermalGain:(float)arg1 error:(id*)arg2 ;
-(float)speakerThermalGain;
-(BOOL)setHapticThermalGain:(float)arg1 error:(id*)arg2 ;
-(float)hapticThermalGain;
-(BOOL)enableNotifications:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)isDolbyAtmosAvailable;
-(BOOL)privateSetPropertyValue:(unsigned)arg1 withBool:(BOOL)arg2 error:(id*)arg3 ;
-(void)privateUpdateDataSources:(id)arg1 forInput:(BOOL)arg2 ;
-(void)privateUpdateAudioFormat:(id)arg1 ;
-(double)preferredHardwareSampleRate;
-(BOOL)setCategory:(id)arg1 error:(id*)arg2 ;
-(id)retain;
-(long long)currentHardwareInputNumberOfChannels;
-(float)outputVolume;
-(NSString *)mode;
-(id)audioFormats;
-(double)outputSampleRate;
-(BOOL)setCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(id*)arg5 ;
-(unsigned long long)sessionType;
-(id)initWithSessionID:(unsigned)arg1 ;
-(BOOL)silenceOutput:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(NSArray *)availableModes;
-(void)setDelegate:(id)arg1 ;
-(id)autorelease;
-(BOOL)inputIsAvailable;
-(double)preferredIOBufferDuration;
-(long long)currentHardwareOutputNumberOfChannels;
-(unsigned long long)retainCount;
-(BOOL)setActive:(BOOL)arg1 withFlags:(long long)arg2 error:(id*)arg3 ;
-(id)currentRoute;
-(double)preferredSampleRate;
-(BOOL)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2 ;
-(double)currentHardwareSampleRate;
-(id)initAuxiliarySession;
-(double)sampleRate;
-(long long)reporterID;
-(id)routingContextUID;
-(double)IOBufferDuration;
-(unsigned long long)routeSharingPolicy;
-(AVAudioSessionImpl*)privateGetImplementation;
-(BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2 ;
-(BOOL)setMode:(id)arg1 error:(id*)arg2 ;
-(id)pickedRoute;
-(void)dealloc;
@end

