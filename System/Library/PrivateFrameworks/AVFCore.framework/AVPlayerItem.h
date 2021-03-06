/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemInternal, MPAVItem, MPQueuePlayer, NSDate, NSArray, NSString, NSError;

@interface AVPlayerItem : NSObject <NSCopying> {

	AVPlayerItemInternal* _playerItem;

}

@property (nonatomic,retain) MPAVItem * MPAVItem; 
@property (assign,nonatomic,__weak) MPQueuePlayer * MP_associatedQueuePlayer; 
@property (getter=isAuthorizationRequiredForPlayback,nonatomic,readonly) BOOL authorizationRequiredForPlayback; 
@property (getter=isApplicationAuthorizedForPlayback,nonatomic,readonly) BOOL applicationAuthorizedForPlayback; 
@property (getter=isContentAuthorizedForPlayback,nonatomic,readonly) BOOL contentAuthorizedForPlayback; 
@property (assign,setter=_setExternalProtectionRequiredForPlayback:,getter=_isExternalProtectionRequiredForPlayback,nonatomic) BOOL _externalProtectionRequiredForPlayback; 
@property (getter=_isRental,nonatomic,readonly) BOOL _rental; 
@property (nonatomic,readonly) NSDate * _rentalStartDate; 
@property (nonatomic,readonly) NSDate * _rentalExpirationDate; 
@property (getter=_isRentalPlaybackStarted,nonatomic,readonly) BOOL _rentalPlaybackStarted; 
@property (nonatomic,readonly) NSDate * _rentalPlaybackStartedDate; 
@property (nonatomic,readonly) NSDate * _rentalPlaybackExpirationDate; 
@property (nonatomic,readonly) NSArray * outputs; 
@property (nonatomic,readonly) NSArray * mediaDataCollectors; 
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (retain) id<NSObject><NSCopying> AVKitData; 
@property (assign) BOOL playHapticTracks; 
@property (readonly) long long status; 
@property (readonly) NSError * error; 
+(void)initialize;
+(id)playerItemWithURL:(id)arg1 ;
+(BOOL)_hasOverrideForSelector:(SEL)arg1 ;
+(int)_createFigPlaybackItemForFigPlayer:(OpaqueFigPlayerRef)arg1 asset:(id)arg2 URL:(id)arg3 flags:(unsigned)arg4 options:(CFDictionaryRef)arg5 playbackItem:(OpaqueFigPlaybackItem*)arg6 ;
+(BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;
+(BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+(OpaqueCMTimebaseRef)_copyTimebaseFromFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 ;
+(BOOL)automaticallyNotifiesObserversOfStatus;
+(id)playerItemWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2 ;
+(BOOL)automaticallyNotifiesObserversOfVariantIndex;
+(BOOL)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;
+(BOOL)automaticallyNotifiesObserversOfUsesMinimalLatencyForVideoCompositionRendering;
+(BOOL)automaticallyNotifiesObserversOfHasEnabledVideo;
+(BOOL)automaticallyNotifiesObserversOfHasEnabledAudio;
+(BOOL)automaticallyNotifiesObserversOfNetworkUsuallyExceedsMaxBitRate;
+(BOOL)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;
+(BOOL)automaticallyNotifiesObserversOfAsset;
+(BOOL)automaticallyNotifiesObserversOfAllowProgressiveStartup;
+(BOOL)automaticallyNotifiesObserversOfTracks;
+(BOOL)automaticallyNotifiesObserversOfAllowProgressiveResume;
+(BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+(BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+(BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;
+(BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;
+(BOOL)automaticallyNotifiesObserversOfPresentationSize;
+(BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;
+(id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2 ;
+(void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1 ;
+(id)playerItemWithAsset:(id)arg1 ;
-(MPAVItem *)MPAVItem;
-(void)setMPAVItem:(MPAVItem *)arg1 ;
-(id)createLanguageOptions;
-(id)MP_shortDescription;
-(void)setMP_associatedQueuePlayer:(MPQueuePlayer *)arg1 ;
-(MPQueuePlayer *)MP_associatedQueuePlayer;
-(id)_URL;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(BOOL)hasVideo;
-(id)currentDate;
-(id)initWithAsset:(id)arg1 ;
-(id)asset;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(SCD_Struct_AV6)arg4 withLegibleOutputsDictionaryKey:(id)arg5 ;
-(id)mediaKind;
-(SCD_Struct_AV6)currentTime;
-(id)initWithURL:(id)arg1 ;
-(void)setAudioTimePitchAlgorithm:(id)arg1 ;
-(void)setVolumeAdjustment:(float)arg1 ;
-(void)setGaplessInfo:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(id)tracks;
-(void)addOutput:(id)arg1 ;
-(void)removeOutput:(id)arg1 ;
-(id)_tracks;
-(id)selectedMediaOptionInMediaSelectionGroup:(id)arg1 ;
-(id)init;
-(void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1 ;
-(void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 ;
-(void)setMediaKind:(id)arg1 ;
-(id)delegate;
-(opaqueMTAudioProcessingTapRef)audioTapProcessor;
-(OpaqueCMTimebaseRef)timebase;
-(CGSize)presentationSize;
-(SCD_Struct_AV6)forwardPlaybackEndTime;
-(void)setForwardPlaybackEndTime:(SCD_Struct_AV6)arg1 ;
-(unsigned long long)restrictions;
-(void)setRestrictions:(unsigned long long)arg1 ;
-(void)setSoundCheckVolumeNormalization:(float)arg1 ;
-(id)audioMix;
-(id)_seekableTimeRanges;
-(long long)status;
-(id)_loadedTimeRanges;
-(float)soundCheckVolumeNormalization;
-(void)_setURL:(id)arg1 ;
-(BOOL)_hasEnqueuedVideoFrame;
-(BOOL)isPlaybackLikelyToKeepUp;
-(BOOL)isPlaybackBufferFull;
-(void)_setRampInOutInfo:(id)arg1 ;
-(void)_setAudibleDRMInfo:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_AV6)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)seekableTimeRanges;
-(void)_changeStatusToFailedWithError:(id)arg1 ;
-(void)setReversePlaybackEndTime:(SCD_Struct_AV6)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSError *)error;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(id)_nameForLogging;
-(id)_player;
-(id<NSObject><NSCopying>)AVKitData;
-(id)videoComposition;
-(void)setVideoComposition:(id)arg1 ;
-(BOOL)_canPlayFastForward;
-(BOOL)_canPlayFastReverse;
-(BOOL)_isRental;
-(id)customVideoCompositor;
-(BOOL)canPlayFastReverse;
-(void)_playerChangeStatusToFailedWithError:(id)arg1 ;
-(id)_preferredPixelBufferAttributes;
-(BOOL)_suppressesVideoLayers;
-(BOOL)seekToDate:(id)arg1 ;
-(BOOL)_isReadyForInspectionOfPresentationSize;
-(BOOL)_getCachedPresentationSize:(CGSize*)arg1 ;
-(OpaqueCMTimebaseRef)_copyProxyTimebase;
-(BOOL)_getCachedNonForcedSubtitleEnabled:(BOOL*)arg1 ;
-(void)_makeReadyForEnqueueingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_insertAfterItem:(id)arg1 ;
-(BOOL)_addToPlayQueueOfFigPlayerOfPlayer:(id)arg1 afterFigPlaybackItemOfItem:(id)arg2 ;
-(void)_removeFromPlayQueueOfFigPlayerOfAttachedPlayer;
-(void)_removeFromItems;
-(SCD_Struct_AV6)currentUnfoldedTime;
-(BOOL)seekToDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_fpNotificationNames;
-(void)setAudioMix:(id)arg1 ;
-(void)_attachToPlayer:(id)arg1 ;
-(id)gaplessInfo;
-(BOOL)canPlayFastForward;
-(NSArray *)outputs;
-(void)_addFPListeners;
-(BOOL)_hasEnabledVideo;
-(long long)_fileSize;
-(void)seekToTime:(SCD_Struct_AV6)arg1 toleranceBefore:(SCD_Struct_AV6)arg2 toleranceAfter:(SCD_Struct_AV6)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(OpaqueFigPlaybackItemRef)_copyFigPlaybackItem;
-(void)_setTimedMetadata:(id)arg1 ;
-(void)cancelPendingSeeks;
-(id)automaticallyLoadedAssetKeys;
-(id)textStyleRules;
-(id)initialDate;
-(SCD_Struct_AV6)reversePlaybackEndTime;
-(SCD_Struct_AV6)advanceTimeForOverlappedPlayback;
-(BOOL)advanceTimeForOverlappedPlaybackWasSet;
-(SCD_Struct_AV6)configuredTimeOffsetFromLive;
-(SCD_Struct_AV6)recommendedTimeOffsetFromLive;
-(BOOL)seekingWaitsForVideoCompositionRendering;
-(id)textHighlightArray;
-(BOOL)canUseNetworkResourcesForLiveStreamingWhilePaused;
-(double)preferredPeakBitRate;
-(SCD_Struct_AV6)maximumForwardBufferDuration;
-(SCD_Struct_AV6)maximumTrailingBufferDuration;
-(BOOL)startsOnFirstEligibleVariant;
-(void)stepByCount:(long long)arg1 ;
-(unsigned)RTCReportingFlags;
-(float)volumeAdjustment;
-(BOOL)reversesMoreVideoFramesInMemory;
-(BOOL)reversesMoreVideoFramesInMemoryWasSet;
-(BOOL)aggressivelyCachesVideoFrames;
-(BOOL)aggressivelyCachesVideoFramesWasSet;
-(BOOL)suppressesAudioOnlyVariants;
-(BOOL)decodesAllFramesDuringOrdinaryPlayback;
-(BOOL)decodesAllFramesDuringOrdinaryPlaybackWasSet;
-(BOOL)playHapticTracks;
-(BOOL)usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
-(BOOL)usesIFrameOnlyPlaybackForHighRateScaledEdits;
-(SCD_Struct_AV6)minimumIntervalForIFrameOnlyPlayback;
-(BOOL)minimumIntervalForIFrameOnlyPlaybackWasSet;
-(id)initialEstimatedDate;
-(float)speedThresholdForIFrameOnlyPlayback;
-(BOOL)speedThresholdForIFrameOnlyPlaybackWasSet;
-(BOOL)requiresAccessLog;
-(id)imageQueueInterpolationCurve;
-(BOOL)imageQueueInterpolationCurveWasSet;
-(BOOL)blendsVideoFrames;
-(id)videoApertureMode;
-(BOOL)blendsVideoFramesWasSet;
-(BOOL)appliesPerFrameHDRDisplayMetadata;
-(BOOL)appliesPerFrameHDRDisplayMetadataWasSet;
-(BOOL)usesMinimalLatencyForVideoCompositionRendering;
-(BOOL)canPlaySlowReverse;
-(id)description;
-(BOOL)savesDownloadedDataToDiskWhenDone;
-(BOOL)allowProgressiveSwitchUp;
-(BOOL)networkUsuallyExceedsMaxBitRate;
-(BOOL)allowProgressiveStartup;
-(BOOL)allowProgressiveResume;
-(BOOL)canPlaySlowForward;
-(CGSize)IFramePrefetchTargetDimensions;
-(CGSize)preferredMaximumResolution;
-(CGSize)preferredMinimumResolution;
-(BOOL)canPlayReverse;
-(BOOL)canStepForward;
-(BOOL)canStepBackward;
-(BOOL)restrictsAutomaticMediaSelectionToAvailableOfflineOptions;
-(BOOL)hasEnabledVideo;
-(BOOL)hasEnabledAudio;
-(double)seekableTimeRangesLastModifiedTime;
-(SCD_Struct_AV7)loopTimeRange;
-(id)currentMediaSelection;
-(id)_nextItem;
-(BOOL)audioSpatializationAllowedWasSet;
-(unsigned long long)allowedAudioSpatializationFormats;
-(BOOL)allowedAudioSpatializationFormatsWasSet;
-(id)videoEnhancementMode;
-(id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2 ;
-(void)_removeFAListeners;
-(long long)variantIndex;
-(void)_removeFoldedTBListeners;
-(void)setTextStyleRules:(id)arg1 ;
-(void)setTextHighlightArray:(id)arg1 ;
-(void)setRequiresAccessLog:(BOOL)arg1 ;
-(void)setSuppressesAudioOnlyVariants:(BOOL)arg1 ;
-(void)setAdvanceTimeForOverlappedPlayback:(SCD_Struct_AV6)arg1 ;
-(void)setBlendsVideoFrames:(BOOL)arg1 ;
-(BOOL)automaticallyPreservesTimeOffsetFromLive;
-(void)setAutomaticallyPreservesTimeOffsetFromLive:(BOOL)arg1 ;
-(void)setAVKitData:(id<NSObject><NSCopying>)arg1 ;
-(void)setConfiguredTimeOffsetFromLive:(SCD_Struct_AV6)arg1 ;
-(void)setImageQueueInterpolationCurve:(id)arg1 ;
-(void)setAggressivelyCachesVideoFrames:(BOOL)arg1 ;
-(void)setAppliesPerFrameHDRDisplayMetadata:(BOOL)arg1 ;
-(void)setReversesMoreVideoFramesInMemory:(BOOL)arg1 ;
-(void)setPlayHapticTracks:(BOOL)arg1 ;
-(void)setDecodesAllFramesDuringOrdinaryPlayback:(BOOL)arg1 ;
-(BOOL)continuesPlayingDuringPrerollForRateChange;
-(void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)arg1 ;
-(BOOL)continuesPlayingDuringPrerollForSeek;
-(id)_cachedTracks;
-(void)setContinuesPlayingDuringPrerollForSeek:(BOOL)arg1 ;
-(void)setUsesIFrameOnlyPlaybackForHighRateScaledEdits:(BOOL)arg1 ;
-(void)setMinimumIntervalForIFrameOnlyPlayback:(SCD_Struct_AV6)arg1 ;
-(void)setSpeedThresholdForIFrameOnlyPlayback:(float)arg1 ;
-(id)_metadataCollectors;
-(void)setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 ;
-(BOOL)isAudioSpatializationAllowed;
-(void)setAudioSpatializationAllowed:(BOOL)arg1 ;
-(void)setAllowedAudioSpatializationFormats:(unsigned long long)arg1 ;
-(BOOL)isNonForcedSubtitleDisplayEnabled;
-(void)setNonForcedSubtitleDisplayEnabled:(BOOL)arg1 ;
-(void)setVideoEnhancementMode:(id)arg1 ;
-(void)setStartsOnFirstEligibleVariant:(BOOL)arg1 ;
-(BOOL)_isExternalProtectionRequiredForPlayback;
-(void)setSavesDownloadedDataToDiskWhenDone:(BOOL)arg1 ;
-(void)_updateLoopTimeRangeOnFigPlaybackItem;
-(void)_updateForwardPlaybackEndTimeOnFigPlaybackItem;
-(void)_updateTimebase;
-(void)_updateReversePlaybackEndTimeOnFigPlaybackItem;
-(void)_updateImageQueueInterpolationCurveOnFigPlaybackItem;
-(void)_updateAdvanceTimeForOverlappedPlaybackOnFigPlaybackItem;
-(void)_updateBlendsVideoFramesOnFigPlaybackItem;
-(void)_updateAppliesPerFrameHDRDisplayMetadataOnFigPlaybackItem;
-(void)_setVideoCompositionRenderScale:(float)arg1 ;
-(void)_updateReversesMoreVideoFramesInMemoryOnFigPlaybackItem;
-(void)_configureVideoCompositionColorProperties;
-(void)_updateAggressivelyCachesVideoFramesOnFigPlaybackItem;
-(void)_setVideoCompositionInstructions:(id)arg1 ;
-(void)_updateDecodesAllFramesDuringOrdinaryPlaybackOnFigPlaybackItem;
-(void)_updatePreservesTimeOffsetFromLive:(BOOL)arg1 ;
-(void)_updateContinuesPlayingDuringPrerollForSeekOnFigPlaybackItem;
-(void)_setVideoCompositionFrameDuration:(SCD_Struct_AV6)arg1 ;
-(void)_updateContinuesPlayingDuringPrerollForRateChangeOnFigPlaybackItem;
-(void)_updateAudioSpatializationAllowed;
-(void)_updateUsesIFrameOnlyPlaybackForHighRateScaledEditsOnFigPlaybackItem;
-(void)_updateMinimumIntervalForIFrameOnlyPlaybackOnFigPlaybackItem;
-(void)_setVideoCompositionRenderSize:(CGSize)arg1 ;
-(void)_updateSpeedThresholdForIFrameOnlyPlaybackOnFigPlaybackItem;
-(void)_updateAllowedAudioSpatializationFormats;
-(void)_updateCanUseNetworkResourcesForLiveStreamingWhilePausedOnFigPlaybackItem;
-(void)_setVideoCompositor:(void*)arg1 ;
-(void)_updateConfiguredTimeOffsetFromLiveOnFigPlaybackItem:(SCD_Struct_AV6)arg1 ;
-(void)_applyCurrentAudioMix;
-(void)_quietlySetEQPreset:(int)arg1 ;
-(void)_setVideoCompositionSourceTrackIDForFrameTiming:(int)arg1 ;
-(void)_updatePlaybackPropertiesOnFigPlaybackItem;
-(void)_updateSeekingWaitsForVideoCompositionRenderingOnFigPlaybackItem;
-(void)_quietlySetVariantIndex:(long long)arg1 ;
-(void)_updateSoundCheckVolumeNormalizationOnFigPlaybackItem;
-(void)_updateVolumeAdjustmentOnFigPlaybackItem;
-(void)_updateFigTimePitchAlgorithmOnFigPlaybackItem;
-(void)_updateLoudnessInfoOnFigPlaybackItem;
-(void)_addFAListeners;
-(void)_updateAudioTapProcessorOnFigPlaybackItem;
-(void)_applyMediaSelectionOptions;
-(long long)playbackLikelyToKeepUpTrigger;
-(void)_updateTextStyleRulesOnFigPlaybackItem;
-(void)_updateTextHighlightArrayOnFigPlaybackItem;
-(void)_attachToFigPlayer;
-(void)_updateMediaKindOnFigPlaybackItem;
-(void)_updateRestrictionsOnFigPlaybackItem;
-(void)_quietlySetServiceIdentifier:(id)arg1 ;
-(void)_setSyncLayersOnFigPlaybackItem:(id)arg1 ;
-(void)_updateIFramePrefetchTargetDimensionsOnFigPlaybackItem;
-(void)_updatePreferredPeakBitRateOnFigPlaybackItem;
-(void)_updatePreferredMaximumResolutionOnFigPlaybackItem;
-(void)_updatePreferredMinimumResolutionOnFigPlaybackItem;
-(void)_updateVideoEnhancementModeOnFigPlaybackItem;
-(void)_updateMaximumTrailingBufferDurationOnFigPlaybackItem;
-(void)_updateVideoApertureModeOnFigPlaybackItem;
-(void)_updateMaximumForwardBufferDurationOnFigPlaybackItem;
-(void)_updateRTCReportingFlagsOnFigPlaybackItem;
-(void)_updateStartsOnFirstEligibleVariantOnFigPlaybackItem;
-(BOOL)_configurePlaybackItemAndReturnError:(id*)arg1 ;
-(BOOL)willNeverSeekBackwardsHint;
-(void)_updateLimitReadAheadOnFigPlaybackItem;
-(void)_updatePlaybackLikelyToKeepUpTriggerOnFigPlaybackItem;
-(void)_updateWillNeverSeekBackwardsHintOnFigPlaybackItem;
-(BOOL)alwaysMonitorsPlayability;
-(void)_evaluateVideoOutputs;
-(void)_updateAlwaysMonitorsPlayabilityOnFigPlaybackItem;
-(CGSize)_presentationSize;
-(id)errorLog;
-(void)_updateNonForcedSubtitleDisplayEnabledOnFigPlaybackItem;
-(void)_respondToBecomingReadyForBasicInspection;
-(void)_updateUsesMinimalLatencyForVideoCompositionRenderingOnFigPlaybackItem;
-(void)_evaluateLegibleOutputs;
-(void)_updateRestrictsAutomaticMediaSelectionToAvailableOfflineOptions;
-(void)_evaluateMetadataOutputs;
-(BOOL)_isReadyForInspectionOfDuration;
-(void)_markAsReadyForInspectionOfDuration;
-(id)_figSelectedMediaArray;
-(void)_markAsReadyForInspectionOfTracks;
-(void)_markFigAssetAsReadyForInspectionOfMediaSelectionOptions;
-(void)_informObserversAboutAvailabilityOfCurrentMediaSelection;
-(BOOL)_isReadyForInspectionOfTracks;
-(int)_CreateSeekID;
-(id)_currentMediaSelectionFromFigSelectedMediaArray:(id)arg1 ;
-(void)_setCurrentMediaSelection:(id)arg1 ;
-(BOOL)_canStepForward;
-(BOOL)_isFigAssetReadyForInspectionOfMediaSelectionOptionsAndFigPlaybackItemIsReadyForInspection;
-(id)_ensureAssetWithFigPlaybackItemWithTrackIDs:(id)arg1 ;
-(id)_tracksWithFPTrackIDArray:(id)arg1 fromFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg2 ;
-(OpaqueCMTimebaseRef)_copyFoldedTimebase;
-(id)_tracksFromAssetTrackIDs;
-(void)_respondToBecomingReadyForBasicInspectionWithDuration:(SCD_Struct_AV6)arg1 ;
-(BOOL)limitReadAhead;
-(void)setLoudnessInfo:(id)arg1 ;
-(void)_informObserversAboutAvailabilityOfDuration:(SCD_Struct_AV6)arg1 ;
-(void)_markAsReadyForBasicInspection;
-(OpaqueCMTimebaseRef)_copyProxyFoldedTimebase;
-(void)_markAsReadyForInspectionOfPresentationSize;
-(void)_kickAssetObserversIfAppropriate;
-(void)_addFoldedTBListeners;
-(void)_informObserversAboutAvailabilityOfTracks:(id)arg1 ;
-(void)_informObserversAboutAvailabilityOfPresentationSize;
-(BOOL)_isReadyForBasicInspection;
-(void)_invokeReadyForEnqueueingHandlers;
-(SCD_Struct_AV6)_currentTimeWithOptionalFoldedTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(BOOL)_isReadyForInspectionOfRecommendedTimeOffsetFromLive;
-(OpaqueCMTimebaseRef)_copyProxyUnfoldedTimebase;
-(id)_videoOutputs;
-(int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(/*^block*/id)arg1 ;
-(void)setMaximumForwardBufferDuration:(SCD_Struct_AV6)arg1 ;
-(void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)arg1 finished:(BOOL)arg2 ;
-(void)_setAudioCurvesAccordingToInputParameters:(id)arg1 forTrackID:(int)arg2 ;
-(void)_setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 forTrackID:(int)arg2 ;
-(void)_setAudioTimePitchAlgorithm:(id)arg1 forTrackID:(int)arg2 ;
-(void)_setAudioEffectParameters:(id)arg1 forTrackID:(int)arg2 ;
-(id)_copyStateDispatchQueue;
-(id)_playbackProperties;
-(id)_seekableTimeRangesFromFPSeekableTimeIntervals:(id)arg1 ;
-(id)_loadedTimeRangesFromFPPlaybableTimeIntervals:(id)arg1 ;
-(id)_mediaOptionsSelectedByClient;
-(void)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3 ;
-(void)_setMediaOptionsSelectedByClient:(id)arg1 forKey:(id)arg2 ;
-(id)_mediaOptionsSelectedByClientForKey:(id)arg1 ;
-(id)_propertyListForMediaSelection:(id)arg1 forGroup:(id)arg2 ;
-(void)_clearCachedMediaSelectionGroup:(id)arg1 ;
-(void)_selectMediaOption:(id)arg1 usingFigSelectedMediaArrayObtainedFromGroup:(id)arg2 ;
-(void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2 ;
-(void)_selectMediaOption:(id)arg1 inGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3 ;
-(void)_allowSelectMediaOptionsAutomaticallyUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1 ;
-(BOOL)_canPlayReverse;
-(id)_propertyListForSelectedMediaOptionUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1 ;
-(BOOL)_canStepBackward;
-(BOOL)_hasSelectionInCachedMediaSelectionGroup:(id)arg1 ;
-(BOOL)_isFigAssetReadyForInspectionOfMediaSelectionOptions;
-(BOOL)_suppressionForOutputs:(id)arg1 ;
-(void)_setSuppressesVideoLayers:(BOOL)arg1 ;
-(void)setPreferredPeakBitRate:(double)arg1 ;
-(id)_legibleOutputsForKeys;
-(void)setPreferredMaximumResolution:(CGSize)arg1 ;
-(void)_updateVideoSuppressionOnFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 basedOnOutputs:(id)arg2 ;
-(void)_updateLegibleSuppressionOnFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 basedOnOutputs:(id)arg2 ;
-(id)_trackWithTrackID:(int)arg1 ;
-(void)setInitialDate:(id)arg1 ;
-(id)_playerConnection;
-(id)_enabledTrackFormatDescriptions;
-(void)_markAsNeedingNewAssetWithFigPlaybackItem;
-(BOOL)_isAFileBasedItemThatsReadyToPlay;
-(void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
-(void)_markAssetWithFigPlaybackItemAsNeedingNewTracks;
-(SCD_Struct_AV6)_configuredTimeOffsetFromLive;
-(id)currentEstimatedDate;
-(void)_markAsReadyForInspectionOfRecommendedTimeOffsetFromLive;
-(SCD_Struct_AV6)_recommendedTimeOffsetFromLive;
-(void)setInitialEstimatedDate:(id)arg1 ;
-(OpaqueCMTimebaseRef)_copyUnfoldedFigTimebase;
-(OpaqueCMTimebaseRef)unfoldedTimebase;
-(void)setRTCReportingFlags:(unsigned)arg1 ;
-(void)setLimitReadAhead:(BOOL)arg1 ;
-(BOOL)allowsExtendedReadAhead;
-(void)setAllowsExtendedReadAhead:(BOOL)arg1 ;
-(void)setAlwaysMonitorsPlayability:(BOOL)arg1 ;
-(double)preferredForwardBufferDuration;
-(void)setPreferredForwardBufferDuration:(double)arg1 ;
-(void)setMaximumTrailingBufferDuration:(SCD_Struct_AV6)arg1 ;
-(void)setPlaybackLikelyToKeepUpTrigger:(long long)arg1 ;
-(void)setWillNeverSeekBackwardsHint:(BOOL)arg1 ;
-(void)_setVideoCompositionColorPrimaries:(id)arg1 ;
-(void)_setVideoCompositionColorYCbCrMatrix:(id)arg1 ;
-(void)_setVideoCompositionColorTransferFunction:(id)arg1 ;
-(id)playabilityMetrics;
-(void)setSeekingWaitsForVideoCompositionRendering:(BOOL)arg1 ;
-(void)setUsesMinimalLatencyForVideoCompositionRendering:(BOOL)arg1 ;
-(BOOL)isPlaybackBufferEmpty;
-(float)progressTowardsPlaybackLikelyToKeepUp;
-(void)setLoopTimeRange:(SCD_Struct_AV7)arg1 ;
-(id)configurationGroup;
-(void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(BOOL)arg1 ;
-(double)liveUpdateInterval;
-(void)setVariantIndex:(long long)arg1 ;
-(void)_removeMediaOptionsSelectedByClient;
-(BOOL)playerAppliesAutomaticMediaSelectionToGroup:(id)arg1 ;
-(OpaqueFigCPEProtectorRef)_figCPEProtector;
-(void)setRestrictsAutomaticMediaSelectionToAvailableOfflineOptions:(BOOL)arg1 ;
-(BOOL)_isNonForcedSubtitleDisplayEnabled;
-(void)_removeSyncLayer:(id)arg1 ;
-(void)_addSyncLayer:(id)arg1 ;
-(id)_playbackItemNotificationPayloadToError:(CFDictionaryRef)arg1 ;
-(BOOL)_hasEnabledAudio;
-(void)setNetworkUsuallyExceedsMaxBitRate:(BOOL)arg1 ;
-(void)setAllowProgressiveSwitchUp:(BOOL)arg1 ;
-(void)setAllowProgressiveStartup:(BOOL)arg1 ;
-(void)setAllowProgressiveResume:(BOOL)arg1 ;
-(void)setIFramePrefetchTargetDimensions:(CGSize)arg1 ;
-(float)maximumBitRate;
-(void)setMaximumBitRate:(float)arg1 ;
-(CGSize)preferredPeakPresentationSize;
-(void)setPreferredPeakPresentationSize:(CGSize)arg1 ;
-(void)setPreferredMinimumResolution:(CGSize)arg1 ;
-(void)_renderingSuppressionDidChangeForOutput:(id)arg1 ;
-(void)setVideoApertureMode:(id)arg1 ;
-(BOOL)isAuthorizationRequiredForPlayback;
-(void)_updateCanPlayAndCanStepPropertiesWhenReadyToPlayWithNotificationPayload:(id)arg1 ;
-(NSDate *)_rentalStartDate;
-(BOOL)isApplicationAuthorizedForPlayback;
-(BOOL)isContentAuthorizedForPlayback;
-(NSDate *)_rentalExpirationDate;
-(id)_isExternalProtectionRequiredForPlaybackInternal;
-(void)_setExternalProtectionRequiredForPlayback:(BOOL)arg1 ;
-(BOOL)_isRentalPlaybackStarted;
-(NSDate *)_rentalPlaybackStartedDate;
-(NSDate *)_rentalPlaybackExpirationDate;
-(long long)_availableFileSize;
-(id)_metadataOutputsForKeys;
-(void)_addVideoOutput:(id)arg1 ;
-(void)_addLegibleOutput:(id)arg1 ;
-(void)_addMetadataOutput:(id)arg1 ;
-(void)_removeVideoOutput:(id)arg1 ;
-(NSArray *)mediaDataCollectors;
-(void)_removeLegibleOutput:(id)arg1 ;
-(void)_removeMetadataOutput:(id)arg1 ;
-(void)_addMetadataCollector:(id)arg1 ;
-(void)_removeMetadataCollector:(id)arg1 ;
-(void)addMediaDataCollector:(id)arg1 ;
-(void)removeMediaDataCollector:(id)arg1 ;
-(void)_updateTaggedMetadataArray:(id)arg1 ;
-(id)_legibleOutputForKey:(id)arg1 ;
-(id)_metadataOutputForKey:(id)arg1 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didFlushLegibleOutputWithDictionaryKey:(id)arg2 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didOutputSampleBuffers:(id)arg2 fromTrackWithID:(int)arg3 forMetadataOutputWithDictionaryKey:(id)arg4 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didFlushMetadataOutputWithDictionaryKey:(id)arg2 ;
-(id)loudnessInfo;
-(id)audioTimePitchAlgorithm;
-(void)_removeFPListeners;
-(void)seekToTime:(SCD_Struct_AV6)arg1 toleranceBefore:(SCD_Struct_AV6)arg2 toleranceAfter:(SCD_Struct_AV6)arg3 completionHandler:(/*^block*/id)arg4 ;
-(SCD_Struct_AV6)duration;
-(SCD_Struct_AV6)_duration;
-(void)_setEQPreset:(int)arg1 ;
-(id)accessLog;
-(void)seekToTime:(SCD_Struct_AV6)arg1 ;
-(id)loadedTimeRanges;
-(id)_weakReference;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_previousItem;
-(void)_setAsset:(id)arg1 ;
-(void)dealloc;
-(id)timedMetadata;
@end

