/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol BWIrisStagingNodeIrisRequestDelegate, OS_dispatch_group;
@class NSURL, NSMutableArray, FigIrisAutoTrimmer, BWMotionDataPreserver, BWIrisSequenceAdjuster, BWMotionDataTimeMachine, BWIntermediateJPEGCompressor, NSDictionary, NSObject, NSString, BWStats, BWLimitedGMErrorLogger;

@interface BWIrisStagingNode : BWNode {

	SCD_Struct_BW8 _bufferingTime;
	SCD_Struct_BW8 _targetFrameDuration;
	SCD_Struct_BW8 _beginIrisMovieCaptureTime;
	SCD_Struct_BW8 _endIrisMovieCaptureTime;
	BOOL _compressSynchronizedSlaveAttachedMedia;
	SCD_Struct_BW8 _frameGovernorNextFrameThreshold;
	SCD_Struct_BW8 _frameGovernorReferenceTime;
	SCD_Struct_BW8 _readyToEmitPTS;
	SCD_Struct_BW8 _lastProcessedVideoPTS;
	SCD_Struct_BW8 _masterMovieStartPTS;
	NSURL* _temporaryMovieDirectoryURL;
	NSURL* _masterMovieURL;
	NSURL* _spatialOverCaptureMasterMovieURL;
	NSMutableArray* _stagingQueues;
	NSMutableArray* _lastEmittedBuffers;
	BOOL _valveOpen;
	BOOL _finishingAllEnqueuedRequests;
	BOOL _valveDraining;
	BOOL _emittedFirstAudio;
	long long _valveOpenerSettingsID;
	NSMutableArray* _irisRequestsInFlight;
	NSMutableArray* _irisRequestsSoonToBeEmitted;
	int _emittedIrisRequestCount;
	OpaqueFigSimpleMutexRef _stateMutex;
	SCD_Struct_BW8* _firstEmittedPTSArray;
	OpaqueCMClockRef _masterClock;
	int _trimMethod;
	BOOL _vitalityScoringEnabled;
	SCD_Struct_BW57 _vitalityScoringSmartCameraPipelineVersion;
	FigIrisAutoTrimmer* _trimmer;
	SCD_Struct_BW8 _firstTrimStartPTS;
	unsigned long long _inferencesInputIndex;
	BWMotionDataPreserver* _motionDataPreserver;
	BWIrisSequenceAdjuster* _sequenceAdjusterBackingStore;
	BWIrisSequenceAdjuster* _sequenceAdjuster;
	BWMotionDataTimeMachine* _motionDataTimeMachine;
	int _visMotionMetadataPreloadingMode;
	int _numEODMessagesReceived;
	id<BWIrisStagingNodeIrisRequestDelegate> _delegate;
	unsigned long long _compressedBufferPoolAllocationTimeoutMS;
	float _intermediateJPEGCompressionQuality;
	float _intermediateJPEGCompressionRate;
	int _intermediateJPEGDownstreamRetainedBufferCount;
	int _intermediateJPEGSurfaceLocalRetainedBufferCount;
	int _additionalCompressedBufferCount;
	BWIntermediateJPEGCompressor* _intermediateJPEGCompressor;
	BWIntermediateJPEGCompressor* _synchronizedSlaveJPEGCompressor;
	BOOL _doingJPEGCompression;
	NSDictionary* _cameraInfoByPortType;
	BOOL _haveSeenFirstAudioSampleBuffer;
	BOOL _haveSeenFirstVideoSampleBuffer;
	BOOL _readyToReceiveRequests;
	NSObject*<OS_dispatch_group> _readyToReceiveRequestsGroup;
	float _videoStabilizationOverscanOverride;
	BOOL _captureDeviceHasOverCaptureEnabled;
	float _spatialOverCapturePercentageToApply;
	NSString* _recommendedMasterPortType;
	SCD_Struct_BW8 _lastReceivedVideoTime;
	BWStats* _overallVideoFrameReceptionStats;
	BWStats* _valveActiveVideoFrameReceptionStats;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;

}

@property (readonly) NSURL * temporaryMovieDirectoryURL; 
@property (readonly) BWMotionDataTimeMachine * motionDataTimeMachine; 
@property (assign) SCD_Struct_BW8 beginIrisMovieCaptureTime; 
@property (assign) SCD_Struct_BW8 endIrisMovieCaptureTime; 
+(void)initialize;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(OpaqueCMClockRef)masterClock;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)_tagStillImageVISKeyFrames;
-(void)_emitIrisRequestsOlderThanTime:(SCD_Struct_BW8)arg1 withEndTime:(SCD_Struct_BW8)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(int)_emissionStatusForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setVitalityScoringSmartCameraPipelineVersion:(SCD_Struct_BW57)arg1 ;
-(SCD_Struct_BW8)targetFrameDuration;
-(void)_emitIrisRequest:(id)arg1 withEndTime:(SCD_Struct_BW8)arg2 ;
-(int)openValveWithIrisRequest:(id)arg1 ;
-(void)setBufferingTime:(SCD_Struct_BW8)arg1 ;
-(void)_prepareToEmitFramesFromStartTime:(SCD_Struct_BW8)arg1 throughEndTime:(SCD_Struct_BW8)arg2 ;
-(SCD_Struct_BW8)bufferingTime;
-(void)setIntermediateJPEGDownstreamRetainedBufferCount:(int)arg1 ;
-(int)enqueueIrisRequest:(id)arg1 ;
-(SCD_Struct_BW8)_hostPTSForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setStagingQueues:(id)arg1 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(BOOL)_haveEnoughVideoStagedToStartFirstIrisRecording:(id)arg1 currentTime:(SCD_Struct_BW8)arg2 ;
-(void)setBeginIrisMovieCaptureTime:(SCD_Struct_BW8)arg1 ;
-(int)intermediateJPEGDownstreamRetainedBufferCount;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)_temporaryURLForIrisWithSettingsID:(long long)arg1 isOriginalRecording:(BOOL)arg2 ;
-(SCD_Struct_BW8)_adjustedStartTimeForTrimmedStartTime:(SCD_Struct_BW8)arg1 ensuringAtLeast3FramesBeforeStillTime:(SCD_Struct_BW8)arg2 ensuringFrameIsAfterTrimmedStartTime:(BOOL)arg3 butNotEarlierThanOriginalStartTime:(SCD_Struct_BW8)arg4 ;
-(SCD_Struct_BW8)movieStopPTSForIrisRequest:(id)arg1 ;
-(SCD_Struct_BW57)vitalityScoringSmartCameraPipelineVersion;
-(unsigned long long)_indexOfBufferBeforeOrEqualToHostPTS:(SCD_Struct_BW8)arg1 inputIndex:(unsigned long long)arg2 tolerance:(SCD_Struct_BW8)arg3 ;
-(void)_processQueuedVideoFrames;
-(void)_setupDepthMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(BOOL)_fillInRefMovieStartAndTrimTimesForStillImageTimesBeforeTime:(SCD_Struct_BW8)arg1 ;
-(void)setEndIrisMovieCaptureTime:(SCD_Struct_BW8)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(NSURL *)temporaryMovieDirectoryURL;
-(void)closeValve;
-(void)_setupDepthMediaConfigurationForInput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(BOOL)_momentCaptureMovieRecordingInProgress;
-(void)_emitIrisMovieRequestWithInfo:(id)arg1 ;
-(BWMotionDataTimeMachine *)motionDataTimeMachine;
-(BOOL)valveIsOpen;
-(SCD_Struct_BW8)endIrisMovieCaptureTime;
-(BOOL)waitUntilReadyToReceiveRequestsWithTimeout:(float)arg1 ;
-(SCD_Struct_BW8)_earliestAllowedStillHostPTS;
-(void)_emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 ;
-(id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 autoTrimMethod:(int)arg4 vitalityScoringEnabled:(BOOL)arg5 captureDeviceHasOverCaptureEnabled:(BOOL)arg6 overCaptureEnabled:(BOOL)arg7 depthEnabled:(BOOL)arg8 videoStabilizationOverscanOverride:(float)arg9 sequenceAdjusterEnabled:(BOOL)arg10 visMotionMetadataPreloadingMode:(int)arg11 intermediateJPEGCompressionQuality:(float)arg12 intermediateJPEGCompressionRate:(float)arg13 temporaryMovieDirectoryURL:(id)arg14 cameraInfoByPortType:(id)arg15 irisRequestDelegate:(id)arg16 ;
-(void)_informDelegateOfSoonToBeEmittedIrisRequestsForTime:(SCD_Struct_BW8)arg1 ;
-(unsigned long long)_indexOfBufferBeforeOrEqualToPTS:(SCD_Struct_BW8)arg1 inputIndex:(unsigned long long)arg2 applyFrameDropsMitigation:(BOOL)arg3 ;
-(unsigned long long)_emittingInputsCount;
-(void)_updateRetainedBufferCount;
-(void)setMomentCaptureMovieRecordingMasterEndTime:(SCD_Struct_BW8)arg1 forRequestWithSettingsID:(long long)arg2 ;
-(SCD_Struct_BW8)_maxPTSForIrisRequest:(id)arg1 ;
-(void)_enqueueIrisRequest:(id)arg1 ;
-(void)_trimQueueForInputIndex:(unsigned long long)arg1 ;
-(SCD_Struct_BW8)beginIrisMovieCaptureTime;
-(void)prepareToFinishAllEnqueuedIrisRequestsWithEndTime:(SCD_Struct_BW8)arg1 ;
-(void)_feedTrimmerWithInferencesSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_feedTrimmerWithVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_serviceIrisRequestsForCurrentTime:(SCD_Struct_BW8)arg1 emitBuffers:(BOOL)arg2 ensureStillImageTimesAreStaged:(BOOL)arg3 ;
-(int)_emitBuffersThroughPTS:(SCD_Struct_BW8)arg1 forInputIndex:(unsigned long long)arg2 inOutBufferIndex:(unsigned long long*)arg3 bufferCount:(unsigned long long)arg4 ;
-(float)_appliedZoomFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_emitBuffersThroughPTS:(SCD_Struct_BW8)arg1 ;
-(BOOL)_fillInStartAndTrimTimesForMasterMovieWithInfo:(id)arg1 ;
-(BOOL)_spatialOverCaptureRecordingInProgress;
-(void)setTargetFrameDuration:(SCD_Struct_BW8)arg1 ;
-(void)dealloc;
@end
