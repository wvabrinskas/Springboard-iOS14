/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSourceFormat.h>

@class NSArray;

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) SCD_Struct_BW2 dimensions; 
@property (readonly) float minSupportedFrameRate; 
@property (readonly) float maxSupportedFrameRate; 
@property (readonly) float fieldOfView; 
@property (readonly) SCD_Struct_BW2 highResStillImageDimensions; 
@property (getter=isStillImageOnlyDepthData,readonly) BOOL stillImageOnlyDepthData; 
@property (readonly) float portraitEffectsMatteMainImageDownscalingFactor; 
@property (readonly) BOOL RGBIRStereoFusionSupported; 
@property (readonly) NSArray * supportedSemanticSegmentationMatteURNs; 
-(SCD_Struct_BW2)dimensions;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(unsigned)mediaType;
-(float)fieldOfView;
-(SCD_Struct_BW2)highResStillImageDimensions;
-(float)minSupportedFrameRate;
-(float)maxSupportedFrameRate;
-(id)copyWithNewPixelFormat:(unsigned)arg1 ;
-(BOOL)isStillImageOnlyDepthData;
-(SCD_Struct_BW2)depthEngineOutputDimensions;
-(BOOL)RGBIRStereoFusionSupported;
-(float)portraitEffectsMatteMainImageDownscalingFactor;
-(NSArray *)supportedSemanticSegmentationMatteURNs;
@end

