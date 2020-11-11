/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary;

@interface BWCameraParameters : NSObject {

	NSDictionary* _cameraParameters;
	NSDictionary* _meteorParameters;
	NSDictionary* _motionAttachmentsParameters;
	NSDictionary* _videoStabilizationParameters;
	NSDictionary* _stereoDisparityParameters;
	NSDictionary* _landmarksParameters;
	NSDictionary* _learnedMattingParameters;
	NSDictionary* _coreImagePortraitFilterParameters;

}

@property (nonatomic,readonly) NSDictionary * cameraParameters;                          //@synthesize cameraParameters=_cameraParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * cameraTuningParameters; 
@property (nonatomic,readonly) NSDictionary * motionAttachmentsParameters;               //@synthesize motionAttachmentsParameters=_motionAttachmentsParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * videoStabilizationParameters;              //@synthesize videoStabilizationParameters=_videoStabilizationParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * stereoDisparityParameters; 
@property (nonatomic,readonly) int meteorHeadroomProcessingType; 
+(id)sharedInstance;
+(void)initialize;
+(id)sensorIDStringFromMetadata:(id)arg1 ;
+(id)sensorIDStringFromModuleInfo:(id)arg1 ;
-(id)sensorIDDictionaryForStream:(id)arg1 ;
-(NSDictionary *)stereoDisparityParameters;
-(id)init;
-(int)disparityVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(BOOL)chromaticDefringingEnabledForSlomoForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)sdofRenderingVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(id)portraitSceneMonitoringParametersForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)mattingVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(NSDictionary *)cameraParameters;
-(id)sensorIDDictionaryForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)disparityVersion;
-(int)meteorHeadroomProcessingType;
-(NSDictionary *)motionAttachmentsParameters;
-(int)portraitSceneMonitorVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)coreImagePortraitFilterVersion;
-(BOOL)complementMatteSuppressionDecisionWithISPDetectedFaces;
-(int)disparityRefinementTypeForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)focusPixelDisparityVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(id)chromaticDefringingParametersForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(SCD_Struct_BW57)landmarksVersionForInferenceType:(int)arg1 ;
-(id)_initWithModelSpecificName:(id)arg1 ;
-(NSDictionary *)cameraTuningParameters;
-(BOOL)panoramaRequiresLTMLockingForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(unsigned)landmarksConstellationPointCountForInferenceType:(int)arg1 ;
-(NSDictionary *)videoStabilizationParameters;
-(int)learnedMattingVersion;
-(BOOL)chromaticDefringingEnabledForVideoForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(id)focalLengthCharacterizationForStream:(id)arg1 ;
-(void)dealloc;
@end
