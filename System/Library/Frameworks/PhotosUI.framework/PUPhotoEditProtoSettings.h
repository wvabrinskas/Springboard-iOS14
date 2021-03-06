/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PUPhotoEditProtoSettings : PXSettings {

	BOOL _enableCoreImageDebugMode;
	BOOL _enableCoreImageDebugInputs;
	BOOL _enableCoreImageDebugOutputs;
	BOOL _enableCoreImageDebugIntermediates;
	BOOL _enableCoreImageDebugTiming;
	BOOL _enableModernPipeline;
	BOOL _enableVideoStabilizion;
	BOOL _enableFinalizerGesture;
	BOOL _useAsynchronousRenderingPhotos;
	BOOL _disableAsynchronousRenderingVideos;
	BOOL _enableLiveVideoRender;
	BOOL _enablePerfDebugHUD;
	BOOL _enableReframeDebugHUD;
	BOOL _enableSemanticDevelopmentHUD;
	BOOL _enablePerfTTRButton;
	BOOL _alwaysShowPortraitV2;
	BOOL _forceGlassesMatteOff;
	BOOL _forceSpillMatteOff;
	BOOL _allowSpillMatteOnOlderPortraitV2Captures;
	BOOL _showResetToolButton;
	BOOL _allowAnyPlugin;
	BOOL _attemptEditExtensionUndoAutoSetup;
	BOOL _cropMaskBlurred;
	BOOL _autoCropEnabled;
	BOOL _perspectiveViewDebugCropEnabled;
	BOOL _autoPerspectiveDisableOnPanos;
	BOOL _autoPerspectiveDisableOnFrontFacingCameraImages;
	BOOL _simulateDownload;
	BOOL _simulateDownloadFailure;
	BOOL _skipPHContentEditingInputDisplaySizeImage;
	BOOL _simulateEditEntryError;
	BOOL _showFileRadarButtonForEditEntryOnInternalInstalls;
	BOOL _previewOriginalTimesOut;
	BOOL _loopBounceTrimAllowed;
	BOOL _pauseAfterMovingPlayhead;
	BOOL _alwaysAllowKeyPhotoEditing;
	BOOL _showEffectsPicker;
	BOOL _allowApertureRedEye;
	BOOL _requireTapToShowMakePosterFrame;
	BOOL _allowMakePosterFrameForVideo;
	BOOL _showVideoScrubberDebugOverlay;
	BOOL _alwaysShowValueWhenAdjustmentIsSelected;
	BOOL _showSuggestedKeyFrame;
	BOOL _enableEnterEditSmartToneAutoCalc;
	BOOL _enableEnterEditSmartColorAutoCalc;
	BOOL _enableEnterEditCropAutoCalc;
	BOOL _enableEnterEditPerspectiveAutoCalc;
	BOOL _enableEnterEditDepthEffectAutoCalc;
	BOOL _enableEnterEditPortraitAutoCalc;
	BOOL _enableEnterEditFilterThumbnailGeneration;
	BOOL _useCALayerTileAssembly;
	BOOL _runNeutrinoSynchronously;
	BOOL _showSmartBlackAndWhiteAdjustment;
	BOOL _showHDRDebugAdjustments;
	BOOL _allAssetsCanUseHDRPipeline;
	BOOL _disablePacked10BitPixelFormats;
	BOOL _showSemanticDevelopmentSwitch;
	BOOL _showStabilizationWatermark;
	BOOL _applyVideoOrientationAsMetadata;
	double _videoStabilizeMaxCropFraction;
	long long _renderPriority;
	double _ttrButtonDurationThreshold;
	double _cropSideMargins;
	double _cropWheelSize;
	double _trackBallSize;
	double _cropRecomposeDelay;
	double _autoStraightenMaxAngle;
	double _autoPerspectiveMaxYaw;
	double _autoPerspectiveMaxPitch;
	double _autoPerspectiveMaxAngle;
	double _autoPerspectiveMaxFaceSize;
	long long _simulatedEditingEntryErrorType;
	double _previewOriginalDuration;
	double _strokeWidth;
	double _selectionRingStrokeWidth;
	double _adjustmentLabelPlatterAlpha;
	unsigned long long _videoCompositorDebugMode;

}

@property (assign,nonatomic) BOOL enableCoreImageDebugMode;                                       //@synthesize enableCoreImageDebugMode=_enableCoreImageDebugMode - In the implementation block
@property (assign,nonatomic) BOOL enableCoreImageDebugInputs;                                     //@synthesize enableCoreImageDebugInputs=_enableCoreImageDebugInputs - In the implementation block
@property (assign,nonatomic) BOOL enableCoreImageDebugOutputs;                                    //@synthesize enableCoreImageDebugOutputs=_enableCoreImageDebugOutputs - In the implementation block
@property (assign,nonatomic) BOOL enableCoreImageDebugIntermediates;                              //@synthesize enableCoreImageDebugIntermediates=_enableCoreImageDebugIntermediates - In the implementation block
@property (assign,nonatomic) BOOL enableCoreImageDebugTiming;                                     //@synthesize enableCoreImageDebugTiming=_enableCoreImageDebugTiming - In the implementation block
@property (assign,nonatomic) BOOL enableModernPipeline;                                           //@synthesize enableModernPipeline=_enableModernPipeline - In the implementation block
@property (assign,nonatomic) BOOL enableVideoStabilizion;                                         //@synthesize enableVideoStabilizion=_enableVideoStabilizion - In the implementation block
@property (assign,nonatomic) double videoStabilizeMaxCropFraction;                                //@synthesize videoStabilizeMaxCropFraction=_videoStabilizeMaxCropFraction - In the implementation block
@property (assign,nonatomic) BOOL enableFinalizerGesture;                                         //@synthesize enableFinalizerGesture=_enableFinalizerGesture - In the implementation block
@property (assign,nonatomic) long long renderPriority;                                            //@synthesize renderPriority=_renderPriority - In the implementation block
@property (assign,nonatomic) BOOL useAsynchronousRenderingPhotos;                                 //@synthesize useAsynchronousRenderingPhotos=_useAsynchronousRenderingPhotos - In the implementation block
@property (assign,nonatomic) BOOL disableAsynchronousRenderingVideos;                             //@synthesize disableAsynchronousRenderingVideos=_disableAsynchronousRenderingVideos - In the implementation block
@property (assign,nonatomic) BOOL enableLiveVideoRender;                                          //@synthesize enableLiveVideoRender=_enableLiveVideoRender - In the implementation block
@property (assign,nonatomic) BOOL enablePerfDebugHUD;                                             //@synthesize enablePerfDebugHUD=_enablePerfDebugHUD - In the implementation block
@property (assign,nonatomic) BOOL enableReframeDebugHUD;                                          //@synthesize enableReframeDebugHUD=_enableReframeDebugHUD - In the implementation block
@property (assign,nonatomic) BOOL enableSemanticDevelopmentHUD;                                   //@synthesize enableSemanticDevelopmentHUD=_enableSemanticDevelopmentHUD - In the implementation block
@property (assign,nonatomic) BOOL enablePerfTTRButton;                                            //@synthesize enablePerfTTRButton=_enablePerfTTRButton - In the implementation block
@property (assign,nonatomic) double ttrButtonDurationThreshold;                                   //@synthesize ttrButtonDurationThreshold=_ttrButtonDurationThreshold - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowPortraitV2;                                           //@synthesize alwaysShowPortraitV2=_alwaysShowPortraitV2 - In the implementation block
@property (assign,nonatomic) BOOL forceGlassesMatteOff;                                           //@synthesize forceGlassesMatteOff=_forceGlassesMatteOff - In the implementation block
@property (assign,nonatomic) BOOL forceSpillMatteOff;                                             //@synthesize forceSpillMatteOff=_forceSpillMatteOff - In the implementation block
@property (assign,nonatomic) BOOL allowSpillMatteOnOlderPortraitV2Captures;                       //@synthesize allowSpillMatteOnOlderPortraitV2Captures=_allowSpillMatteOnOlderPortraitV2Captures - In the implementation block
@property (assign,nonatomic) BOOL showResetToolButton;                                            //@synthesize showResetToolButton=_showResetToolButton - In the implementation block
@property (assign,nonatomic) BOOL allowAnyPlugin;                                                 //@synthesize allowAnyPlugin=_allowAnyPlugin - In the implementation block
@property (assign,nonatomic) BOOL attemptEditExtensionUndoAutoSetup;                              //@synthesize attemptEditExtensionUndoAutoSetup=_attemptEditExtensionUndoAutoSetup - In the implementation block
@property (assign,nonatomic) double cropSideMargins;                                              //@synthesize cropSideMargins=_cropSideMargins - In the implementation block
@property (assign,nonatomic) double cropWheelSize;                                                //@synthesize cropWheelSize=_cropWheelSize - In the implementation block
@property (assign,nonatomic) BOOL cropMaskBlurred;                                                //@synthesize cropMaskBlurred=_cropMaskBlurred - In the implementation block
@property (assign,nonatomic) BOOL autoCropEnabled;                                                //@synthesize autoCropEnabled=_autoCropEnabled - In the implementation block
@property (assign,nonatomic) double trackBallSize;                                                //@synthesize trackBallSize=_trackBallSize - In the implementation block
@property (assign,nonatomic) BOOL perspectiveViewDebugCropEnabled;                                //@synthesize perspectiveViewDebugCropEnabled=_perspectiveViewDebugCropEnabled - In the implementation block
@property (assign,nonatomic) double cropRecomposeDelay;                                           //@synthesize cropRecomposeDelay=_cropRecomposeDelay - In the implementation block
@property (assign,nonatomic) double autoStraightenMaxAngle;                                       //@synthesize autoStraightenMaxAngle=_autoStraightenMaxAngle - In the implementation block
@property (assign,nonatomic) double autoPerspectiveMaxYaw;                                        //@synthesize autoPerspectiveMaxYaw=_autoPerspectiveMaxYaw - In the implementation block
@property (assign,nonatomic) double autoPerspectiveMaxPitch;                                      //@synthesize autoPerspectiveMaxPitch=_autoPerspectiveMaxPitch - In the implementation block
@property (assign,nonatomic) double autoPerspectiveMaxAngle;                                      //@synthesize autoPerspectiveMaxAngle=_autoPerspectiveMaxAngle - In the implementation block
@property (assign,nonatomic) double autoPerspectiveMaxFaceSize;                                   //@synthesize autoPerspectiveMaxFaceSize=_autoPerspectiveMaxFaceSize - In the implementation block
@property (assign,nonatomic) BOOL autoPerspectiveDisableOnPanos;                                  //@synthesize autoPerspectiveDisableOnPanos=_autoPerspectiveDisableOnPanos - In the implementation block
@property (assign,nonatomic) BOOL autoPerspectiveDisableOnFrontFacingCameraImages;                //@synthesize autoPerspectiveDisableOnFrontFacingCameraImages=_autoPerspectiveDisableOnFrontFacingCameraImages - In the implementation block
@property (assign,nonatomic) BOOL simulateDownload;                                               //@synthesize simulateDownload=_simulateDownload - In the implementation block
@property (assign,nonatomic) BOOL simulateDownloadFailure;                                        //@synthesize simulateDownloadFailure=_simulateDownloadFailure - In the implementation block
@property (assign,nonatomic) BOOL skipPHContentEditingInputDisplaySizeImage;                      //@synthesize skipPHContentEditingInputDisplaySizeImage=_skipPHContentEditingInputDisplaySizeImage - In the implementation block
@property (assign,nonatomic) BOOL simulateEditEntryError;                                         //@synthesize simulateEditEntryError=_simulateEditEntryError - In the implementation block
@property (assign,nonatomic) long long simulatedEditingEntryErrorType;                            //@synthesize simulatedEditingEntryErrorType=_simulatedEditingEntryErrorType - In the implementation block
@property (assign,nonatomic) BOOL showFileRadarButtonForEditEntryOnInternalInstalls;              //@synthesize showFileRadarButtonForEditEntryOnInternalInstalls=_showFileRadarButtonForEditEntryOnInternalInstalls - In the implementation block
@property (assign,nonatomic) BOOL previewOriginalTimesOut;                                        //@synthesize previewOriginalTimesOut=_previewOriginalTimesOut - In the implementation block
@property (assign,nonatomic) double previewOriginalDuration;                                      //@synthesize previewOriginalDuration=_previewOriginalDuration - In the implementation block
@property (assign,nonatomic) BOOL loopBounceTrimAllowed;                                          //@synthesize loopBounceTrimAllowed=_loopBounceTrimAllowed - In the implementation block
@property (assign,nonatomic) BOOL pauseAfterMovingPlayhead;                                       //@synthesize pauseAfterMovingPlayhead=_pauseAfterMovingPlayhead - In the implementation block
@property (assign,nonatomic) BOOL alwaysAllowKeyPhotoEditing;                                     //@synthesize alwaysAllowKeyPhotoEditing=_alwaysAllowKeyPhotoEditing - In the implementation block
@property (assign,nonatomic) BOOL showEffectsPicker;                                              //@synthesize showEffectsPicker=_showEffectsPicker - In the implementation block
@property (assign,nonatomic) BOOL allowApertureRedEye;                                            //@synthesize allowApertureRedEye=_allowApertureRedEye - In the implementation block
@property (assign,nonatomic) BOOL requireTapToShowMakePosterFrame;                                //@synthesize requireTapToShowMakePosterFrame=_requireTapToShowMakePosterFrame - In the implementation block
@property (assign,nonatomic) BOOL allowMakePosterFrameForVideo;                                   //@synthesize allowMakePosterFrameForVideo=_allowMakePosterFrameForVideo - In the implementation block
@property (assign,nonatomic) BOOL showVideoScrubberDebugOverlay;                                  //@synthesize showVideoScrubberDebugOverlay=_showVideoScrubberDebugOverlay - In the implementation block
@property (assign,nonatomic) double strokeWidth;                                                  //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (assign,nonatomic) double selectionRingStrokeWidth;                                     //@synthesize selectionRingStrokeWidth=_selectionRingStrokeWidth - In the implementation block
@property (assign,nonatomic) double adjustmentLabelPlatterAlpha;                                  //@synthesize adjustmentLabelPlatterAlpha=_adjustmentLabelPlatterAlpha - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowValueWhenAdjustmentIsSelected;                        //@synthesize alwaysShowValueWhenAdjustmentIsSelected=_alwaysShowValueWhenAdjustmentIsSelected - In the implementation block
@property (assign,nonatomic) BOOL showSuggestedKeyFrame;                                          //@synthesize showSuggestedKeyFrame=_showSuggestedKeyFrame - In the implementation block
@property (assign,nonatomic) BOOL enableEnterEditSmartToneAutoCalc;                               //@synthesize enableEnterEditSmartToneAutoCalc=_enableEnterEditSmartToneAutoCalc - In the implementation block
@property (assign,nonatomic) BOOL enableEnterEditSmartColorAutoCalc;                              //@synthesize enableEnterEditSmartColorAutoCalc=_enableEnterEditSmartColorAutoCalc - In the implementation block
@property (assign,nonatomic) BOOL enableEnterEditCropAutoCalc;                                    //@synthesize enableEnterEditCropAutoCalc=_enableEnterEditCropAutoCalc - In the implementation block
@property (assign,nonatomic) BOOL enableEnterEditPerspectiveAutoCalc;                             //@synthesize enableEnterEditPerspectiveAutoCalc=_enableEnterEditPerspectiveAutoCalc - In the implementation block
@property (assign,nonatomic) BOOL enableEnterEditDepthEffectAutoCalc;                             //@synthesize enableEnterEditDepthEffectAutoCalc=_enableEnterEditDepthEffectAutoCalc - In the implementation block
@property (assign,nonatomic) BOOL enableEnterEditPortraitAutoCalc;                                //@synthesize enableEnterEditPortraitAutoCalc=_enableEnterEditPortraitAutoCalc - In the implementation block
@property (assign,nonatomic) BOOL enableEnterEditFilterThumbnailGeneration;                       //@synthesize enableEnterEditFilterThumbnailGeneration=_enableEnterEditFilterThumbnailGeneration - In the implementation block
@property (assign,nonatomic) BOOL useCALayerTileAssembly;                                         //@synthesize useCALayerTileAssembly=_useCALayerTileAssembly - In the implementation block
@property (assign,nonatomic) BOOL runNeutrinoSynchronously;                                       //@synthesize runNeutrinoSynchronously=_runNeutrinoSynchronously - In the implementation block
@property (assign,nonatomic) BOOL showSmartBlackAndWhiteAdjustment;                               //@synthesize showSmartBlackAndWhiteAdjustment=_showSmartBlackAndWhiteAdjustment - In the implementation block
@property (assign,nonatomic) BOOL showHDRDebugAdjustments;                                        //@synthesize showHDRDebugAdjustments=_showHDRDebugAdjustments - In the implementation block
@property (assign,nonatomic) BOOL allAssetsCanUseHDRPipeline;                                     //@synthesize allAssetsCanUseHDRPipeline=_allAssetsCanUseHDRPipeline - In the implementation block
@property (assign,nonatomic) BOOL disablePacked10BitPixelFormats;                                 //@synthesize disablePacked10BitPixelFormats=_disablePacked10BitPixelFormats - In the implementation block
@property (assign,nonatomic) BOOL showSemanticDevelopmentSwitch;                                  //@synthesize showSemanticDevelopmentSwitch=_showSemanticDevelopmentSwitch - In the implementation block
@property (assign,nonatomic) BOOL showStabilizationWatermark;                                     //@synthesize showStabilizationWatermark=_showStabilizationWatermark - In the implementation block
@property (assign,nonatomic) BOOL applyVideoOrientationAsMetadata;                                //@synthesize applyVideoOrientationAsMetadata=_applyVideoOrientationAsMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long videoCompositorDebugMode;                         //@synthesize videoCompositorDebugMode=_videoCompositorDebugMode - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(BOOL)loopBounceTrimAllowed;
-(double)autoPerspectiveMaxAngle;
-(BOOL)disableAsynchronousRenderingVideos;
-(void)setSimulateDownloadFailure:(BOOL)arg1 ;
-(void)setEnableCoreImageDebugMode:(BOOL)arg1 ;
-(BOOL)autoPerspectiveDisableOnPanos;
-(BOOL)enableSemanticDevelopmentHUD;
-(void)setDefaultValues;
-(double)cropRecomposeDelay;
-(double)autoPerspectiveMaxYaw;
-(double)ttrButtonDurationThreshold;
-(void)setShowEffectsPicker:(BOOL)arg1 ;
-(double)cropSideMargins;
-(BOOL)disablePacked10BitPixelFormats;
-(void)setEnableCoreImageDebugOutputs:(BOOL)arg1 ;
-(void)setPreviewOriginalDuration:(double)arg1 ;
-(void)setVideoStabilizeMaxCropFraction:(double)arg1 ;
-(BOOL)showSmartBlackAndWhiteAdjustment;
-(BOOL)allowMakePosterFrameForVideo;
-(void)setAllowAnyPlugin:(BOOL)arg1 ;
-(void)setVideoCompositorDebugMode:(unsigned long long)arg1 ;
-(void)setAutoPerspectiveDisableOnPanos:(BOOL)arg1 ;
-(BOOL)enableLiveVideoRender;
-(void)setAutoPerspectiveMaxYaw:(double)arg1 ;
-(BOOL)enableEnterEditSmartToneAutoCalc;
-(BOOL)enableCoreImageDebugTiming;
-(void)setCropWheelSize:(double)arg1 ;
-(void)setEnableEnterEditSmartColorAutoCalc:(BOOL)arg1 ;
-(BOOL)alwaysShowValueWhenAdjustmentIsSelected;
-(void)setAutoCropEnabled:(BOOL)arg1 ;
-(BOOL)showEffectsPicker;
-(double)adjustmentLabelPlatterAlpha;
-(double)autoPerspectiveMaxPitch;
-(BOOL)allowAnyPlugin;
-(BOOL)enableEnterEditPerspectiveAutoCalc;
-(BOOL)enableEnterEditSmartColorAutoCalc;
-(BOOL)enableEnterEditDepthEffectAutoCalc;
-(void)setAlwaysAllowKeyPhotoEditing:(BOOL)arg1 ;
-(BOOL)enableCoreImageDebugOutputs;
-(void)setAutoPerspectiveDisableOnFrontFacingCameraImages:(BOOL)arg1 ;
-(void)setEnableSemanticDevelopmentHUD:(BOOL)arg1 ;
-(void)setUseAsynchronousRenderingPhotos:(BOOL)arg1 ;
-(double)autoPerspectiveMaxFaceSize;
-(void)setAutoPerspectiveMaxFaceSize:(double)arg1 ;
-(void)setApplyVideoOrientationAsMetadata:(BOOL)arg1 ;
-(BOOL)useCALayerTileAssembly;
-(void)setEnableEnterEditFilterThumbnailGeneration:(BOOL)arg1 ;
-(BOOL)skipPHContentEditingInputDisplaySizeImage;
-(void)setCropMaskBlurred:(BOOL)arg1 ;
-(BOOL)enablePerfTTRButton;
-(void)setAlwaysShowValueWhenAdjustmentIsSelected:(BOOL)arg1 ;
-(BOOL)simulateDownloadFailure;
-(BOOL)enableModernPipeline;
-(BOOL)attemptEditExtensionUndoAutoSetup;
-(BOOL)enableEnterEditPortraitAutoCalc;
-(BOOL)perspectiveViewDebugCropEnabled;
-(void)setEnableVideoStabilizion:(BOOL)arg1 ;
-(void)setEnableCoreImageDebugInputs:(BOOL)arg1 ;
-(void)setEnableCoreImageDebugTiming:(BOOL)arg1 ;
-(long long)simulatedEditingEntryErrorType;
-(BOOL)enableEnterEditFilterThumbnailGeneration;
-(BOOL)showFileRadarButtonForEditEntryOnInternalInstalls;
-(void)setAllowSpillMatteOnOlderPortraitV2Captures:(BOOL)arg1 ;
-(void)setPauseAfterMovingPlayhead:(BOOL)arg1 ;
-(void)setEnableCoreImageDebugIntermediates:(BOOL)arg1 ;
-(BOOL)forceSpillMatteOff;
-(void)setShowSmartBlackAndWhiteAdjustment:(BOOL)arg1 ;
-(BOOL)enableCoreImageDebugIntermediates;
-(void)setShowVideoScrubberDebugOverlay:(BOOL)arg1 ;
-(void)setEnableReframeDebugHUD:(BOOL)arg1 ;
-(void)setEnableModernPipeline:(BOOL)arg1 ;
-(BOOL)allAssetsCanUseHDRPipeline;
-(void)setShowResetToolButton:(BOOL)arg1 ;
-(void)setSimulateDownload:(BOOL)arg1 ;
-(void)setUseCALayerTileAssembly:(BOOL)arg1 ;
-(BOOL)simulateEditEntryError;
-(void)setPreviewOriginalTimesOut:(BOOL)arg1 ;
-(double)trackBallSize;
-(void)setStrokeWidth:(double)arg1 ;
-(void)setEnableFinalizerGesture:(BOOL)arg1 ;
-(BOOL)runNeutrinoSynchronously;
-(void)setAutoPerspectiveMaxPitch:(double)arg1 ;
-(BOOL)enableVideoStabilizion;
-(void)setEnableEnterEditPortraitAutoCalc:(BOOL)arg1 ;
-(void)setSkipPHContentEditingInputDisplaySizeImage:(BOOL)arg1 ;
-(double)selectionRingStrokeWidth;
-(void)setShowSuggestedKeyFrame:(BOOL)arg1 ;
-(double)cropWheelSize;
-(void)setEnablePerfDebugHUD:(BOOL)arg1 ;
-(void)setEnableEnterEditDepthEffectAutoCalc:(BOOL)arg1 ;
-(void)setEnablePerfTTRButton:(BOOL)arg1 ;
-(void)setForceGlassesMatteOff:(BOOL)arg1 ;
-(BOOL)showHDRDebugAdjustments;
-(void)setForceSpillMatteOff:(BOOL)arg1 ;
-(double)autoStraightenMaxAngle;
-(void)setAlwaysShowPortraitV2:(BOOL)arg1 ;
-(void)setRenderPriority:(long long)arg1 ;
-(void)setAutoStraightenMaxAngle:(double)arg1 ;
-(void)setAllowMakePosterFrameForVideo:(BOOL)arg1 ;
-(BOOL)showSuggestedKeyFrame;
-(void)setShowFileRadarButtonForEditEntryOnInternalInstalls:(BOOL)arg1 ;
-(void)setShowHDRDebugAdjustments:(BOOL)arg1 ;
-(BOOL)cropMaskBlurred;
-(void)setEnableEnterEditPerspectiveAutoCalc:(BOOL)arg1 ;
-(long long)renderPriority;
-(BOOL)simulateDownload;
-(BOOL)alwaysAllowKeyPhotoEditing;
-(BOOL)autoPerspectiveDisableOnFrontFacingCameraImages;
-(void)setEnableEnterEditSmartToneAutoCalc:(BOOL)arg1 ;
-(void)setSimulatedEditingEntryErrorType:(long long)arg1 ;
-(void)setAllAssetsCanUseHDRPipeline:(BOOL)arg1 ;
-(void)setCropSideMargins:(double)arg1 ;
-(void)setEnableEnterEditCropAutoCalc:(BOOL)arg1 ;
-(void)setDisablePacked10BitPixelFormats:(BOOL)arg1 ;
-(BOOL)applyVideoOrientationAsMetadata;
-(void)setAdjustmentLabelPlatterAlpha:(double)arg1 ;
-(void)setTrackBallSize:(double)arg1 ;
-(BOOL)showHDRDebugAdjustment;
-(void)setShowStabilizationWatermark:(BOOL)arg1 ;
-(double)videoStabilizeMaxCropFraction;
-(BOOL)autoCropEnabled;
-(BOOL)showResetToolButton;
-(void)setLoopBounceTrimAllowed:(BOOL)arg1 ;
-(BOOL)showVideoScrubberDebugOverlay;
-(void)setShowSemanticDevelopmentSwitch:(BOOL)arg1 ;
-(unsigned long long)videoCompositorDebugMode;
-(BOOL)allowApertureRedEye;
-(BOOL)previewOriginalTimesOut;
-(BOOL)enableCoreImageDebugInputs;
-(double)strokeWidth;
-(void)setPerspectiveViewDebugCropEnabled:(BOOL)arg1 ;
-(BOOL)pauseAfterMovingPlayhead;
-(BOOL)enableReframeDebugHUD;
-(BOOL)showStabilizationWatermark;
-(void)setTtrButtonDurationThreshold:(double)arg1 ;
-(double)previewOriginalDuration;
-(BOOL)enableEnterEditCropAutoCalc;
-(void)setSimulateEditEntryError:(BOOL)arg1 ;
-(BOOL)alwaysShowPortraitV2;
-(BOOL)enableCoreImageDebugMode;
-(void)setEnableLiveVideoRender:(BOOL)arg1 ;
-(void)updateCoreImageDebug;
-(void)setRunNeutrinoSynchronously:(BOOL)arg1 ;
-(BOOL)showSemanticDevelopmentSwitch;
-(BOOL)enablePerfDebugHUD;
-(BOOL)forceGlassesMatteOff;
-(void)setRequireTapToShowMakePosterFrame:(BOOL)arg1 ;
-(void)setDisableAsynchronousRenderingVideos:(BOOL)arg1 ;
-(BOOL)requireTapToShowMakePosterFrame;
-(void)setAttemptEditExtensionUndoAutoSetup:(BOOL)arg1 ;
-(void)setAutoPerspectiveMaxAngle:(double)arg1 ;
-(void)setAllowApertureRedEye:(BOOL)arg1 ;
-(void)setSelectionRingStrokeWidth:(double)arg1 ;
-(void)setCropRecomposeDelay:(double)arg1 ;
-(BOOL)useAsynchronousRenderingPhotos;
-(BOOL)allowSpillMatteOnOlderPortraitV2Captures;
-(BOOL)enableFinalizerGesture;
@end

