/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class NSString, NSDictionary, AVCameraCalibrationData, AVCaptureResolvedPhotoSettings, AVCapturePhotoSettings, AVDepthData, AVPortraitEffectsMatte, AVSemanticSegmentationMatte, AVCaptureBracketedStillImageSettings, AVCapturePhotoPrivateClientMetadata, AVApplePortraitMetadata;

@interface AVCapturePhotoInternal : NSObject {

	SCD_Struct_AV0 timestamp;
	IOSurfaceRef photoSurface;
	unsigned long long photoSurfaceSize;
	NSString* processedFileType;
	CVBufferRef photoPixelBuffer;
	CVBufferRef previewPixelBuffer;
	CVBufferRef embeddedThumbnailSourcePixelBuffer;
	NSDictionary* embeddedThumbnailPhotoFormat;
	NSDictionary* metadata;
	AVCameraCalibrationData* cameraCalibrationData;
	AVCaptureResolvedPhotoSettings* resolvedSettings;
	AVCapturePhotoSettings* unresolvedSettings;
	AVDepthData* depthData;
	BOOL didTryToDecodeDepthData;
	AVPortraitEffectsMatte* portraitEffectsMatte;
	BOOL didTryToDecodePortraitEffectsMatte;
	AVSemanticSegmentationMatte* hairSegmentationMatte;
	BOOL didTryToDecodeHairSegmentationMatte;
	AVSemanticSegmentationMatte* skinSegmentationMatte;
	BOOL didTryToDecodeSkinSegmentationMatte;
	AVSemanticSegmentationMatte* teethSegmentationMatte;
	BOOL didTryToDecodeTeethSegmentationMatte;
	AVSemanticSegmentationMatte* glassesSegmentationMatte;
	BOOL didTryToDecodeGlassesSegmentationMatte;
	BOOL isRawPhoto;
	AVCaptureBracketedStillImageSettings* bracketSettings;
	unsigned long long sequenceCount;
	unsigned long long photoCount;
	NSString* sourceDeviceType;
	unsigned expectedPhotoProcessingFlags;
	unsigned actualPhotoProcessingFlags;
	AVCapturePhotoPrivateClientMetadata* privateClientMetadata;
	AVApplePortraitMetadata* portraitMetadata;
	BOOL lensStabilizationSupported;

}
@end

