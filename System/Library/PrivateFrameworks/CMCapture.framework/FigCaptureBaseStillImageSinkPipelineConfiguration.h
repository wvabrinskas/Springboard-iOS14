/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class FigCaptureSinkConfiguration;

@interface FigCaptureBaseStillImageSinkPipelineConfiguration : NSObject {

	BOOL _allowsMultipleInflightCaptures;
	BOOL _clientIsCameraOrDerivative;
	BOOL _allowedToModifyInputBuffers;
	BOOL _inputIs10Bit;
	int _horizontalSensorBinningFactor;
	int _verticalSensorBinningFactor;
	float _maxSupportedFrameRate;
	int _motionAttachmentsSource;
	BOOL _stillImageOutputDerivesFromVideoCaptureOutput;
	FigCaptureSinkConfiguration* _sinkConfiguration;
	BOOL _usesHighEncodingPriority;
	unsigned _outputPixelFormat;
	int _outputColorSpaceProperties;
	BOOL _stillImageStabilizationSupported;
	int _noiseReductionAndStabilizationScheme;
	SCD_Struct_BW2 _depthDataDimensions;
	float _portraitEffectsMatteMainImageDownscalingFactor;

}

@property (assign,nonatomic) BOOL allowsMultipleInflightCaptures;                               //@synthesize allowsMultipleInflightCaptures=_allowsMultipleInflightCaptures - In the implementation block
@property (assign,nonatomic) BOOL clientIsCameraOrDerivative;                                   //@synthesize clientIsCameraOrDerivative=_clientIsCameraOrDerivative - In the implementation block
@property (assign,nonatomic) BOOL allowedToModifyInputBuffers;                                  //@synthesize allowedToModifyInputBuffers=_allowedToModifyInputBuffers - In the implementation block
@property (assign,nonatomic) BOOL inputIs10Bit;                                                 //@synthesize inputIs10Bit=_inputIs10Bit - In the implementation block
@property (assign,nonatomic) int horizontalSensorBinningFactor;                                 //@synthesize horizontalSensorBinningFactor=_horizontalSensorBinningFactor - In the implementation block
@property (assign,nonatomic) int verticalSensorBinningFactor;                                   //@synthesize verticalSensorBinningFactor=_verticalSensorBinningFactor - In the implementation block
@property (assign,nonatomic) float maxSupportedFrameRate;                                       //@synthesize maxSupportedFrameRate=_maxSupportedFrameRate - In the implementation block
@property (assign,nonatomic) int motionAttachmentsSource;                                       //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (nonatomic,retain) FigCaptureSinkConfiguration * sinkConfiguration;                   //@synthesize sinkConfiguration=_sinkConfiguration - In the implementation block
@property (assign,nonatomic) BOOL usesHighEncodingPriority;                                     //@synthesize usesHighEncodingPriority=_usesHighEncodingPriority - In the implementation block
@property (assign,nonatomic) unsigned outputPixelFormat;                                        //@synthesize outputPixelFormat=_outputPixelFormat - In the implementation block
@property (assign,nonatomic) int outputColorSpaceProperties;                                    //@synthesize outputColorSpaceProperties=_outputColorSpaceProperties - In the implementation block
@property (assign,nonatomic) BOOL stillImageStabilizationSupported;                             //@synthesize stillImageStabilizationSupported=_stillImageStabilizationSupported - In the implementation block
@property (assign,nonatomic) int noiseReductionAndStabilizationScheme;                          //@synthesize noiseReductionAndStabilizationScheme=_noiseReductionAndStabilizationScheme - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 depthDataDimensions;                                //@synthesize depthDataDimensions=_depthDataDimensions - In the implementation block
@property (assign,nonatomic) float portraitEffectsMatteMainImageDownscalingFactor;              //@synthesize portraitEffectsMatteMainImageDownscalingFactor=_portraitEffectsMatteMainImageDownscalingFactor - In the implementation block
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(int)motionAttachmentsSource;
-(BOOL)clientIsCameraOrDerivative;
-(BOOL)inputIs10Bit;
-(BOOL)allowsMultipleInflightCaptures;
-(void)setAllowsMultipleInflightCaptures:(BOOL)arg1 ;
-(BOOL)allowedToModifyInputBuffers;
-(void)setAllowedToModifyInputBuffers:(BOOL)arg1 ;
-(void)setInputIs10Bit:(BOOL)arg1 ;
-(void)setMaxSupportedFrameRate:(float)arg1 ;
-(FigCaptureSinkConfiguration *)sinkConfiguration;
-(void)setStillImageStabilizationSupported:(BOOL)arg1 ;
-(int)noiseReductionAndStabilizationScheme;
-(void)setNoiseReductionAndStabilizationScheme:(int)arg1 ;
-(SCD_Struct_BW2)depthDataDimensions;
-(void)setDepthDataDimensions:(SCD_Struct_BW2)arg1 ;
-(void)setPortraitEffectsMatteMainImageDownscalingFactor:(float)arg1 ;
-(int)verticalSensorBinningFactor;
-(void)setClientIsCameraOrDerivative:(BOOL)arg1 ;
-(void)setSinkConfiguration:(FigCaptureSinkConfiguration *)arg1 ;
-(BOOL)stillImageStabilizationSupported;
-(void)setOutputColorSpaceProperties:(int)arg1 ;
-(float)maxSupportedFrameRate;
-(void)setVerticalSensorBinningFactor:(int)arg1 ;
-(void)setOutputPixelFormat:(unsigned)arg1 ;
-(int)outputColorSpaceProperties;
-(void)setUsesHighEncodingPriority:(BOOL)arg1 ;
-(unsigned)outputPixelFormat;
-(void)dealloc;
-(float)portraitEffectsMatteMainImageDownscalingFactor;
-(void)setHorizontalSensorBinningFactor:(int)arg1 ;
-(int)horizontalSensorBinningFactor;
-(BOOL)usesHighEncodingPriority;
@end
