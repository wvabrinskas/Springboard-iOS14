/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration, FigAudioCaptureConnectionConfiguration, FigMetadataItemCaptureConnectionConfiguration, NSArray, NSString;

@interface FigCaptureMovieFileSinkPipelineConfiguration : NSObject {

	FigCaptureSourceConfiguration* _cameraConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoConnectionConfiguration;
	FigAudioCaptureConnectionConfiguration* _audioConnectionConfiguration;
	FigMetadataItemCaptureConnectionConfiguration* _cameraDebugInfoMetadataConnectionConfiguration;
	NSArray* _detectedObjectMetadataConnectionConfigurations;
	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _sceneClassifierConnectionConfiguration;
	FigCaptureVideoTransform _videoSourceCaptureTransform;
	SCD_Struct_BW2 _visOutputDimensions;
	int _videoStabilizationType;
	BOOL _boxedMetadataPostVISEnabled;
	int _motionAttachmentsSource;
	SCD_Struct_BW57 _smartCameraPipelineVersion;
	BOOL _offlineVISEnabled;
	BOOL _vitalityScoringEnabled;
	BOOL _captureDeviceHasOverCaptureEnabled;
	BOOL _overCaptureEnabled;
	BOOL _P3ToBT2020ConversionEnabled;
	float _videoStabilizationOverscanOverride;
	NSString* _clientApplicationID;

}

@property (nonatomic,retain) FigCaptureSourceConfiguration * cameraConfiguration;                                                         //@synthesize cameraConfiguration=_cameraConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoConnectionConfiguration;                                       //@synthesize videoConnectionConfiguration=_videoConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigAudioCaptureConnectionConfiguration * audioConnectionConfiguration;                                       //@synthesize audioConnectionConfiguration=_audioConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigMetadataItemCaptureConnectionConfiguration * cameraDebugInfoMetadataConnectionConfiguration;              //@synthesize cameraDebugInfoMetadataConnectionConfiguration=_cameraDebugInfoMetadataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * detectedObjectMetadataConnectionConfigurations;                                                    //@synthesize detectedObjectMetadataConnectionConfigurations=_detectedObjectMetadataConnectionConfigurations - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                                  //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * sceneClassifierConnectionConfiguration;                             //@synthesize sceneClassifierConnectionConfiguration=_sceneClassifierConnectionConfiguration - In the implementation block
@property (assign,nonatomic) FigCaptureVideoTransform videoSourceCaptureTransform;                                                        //@synthesize videoSourceCaptureTransform=_videoSourceCaptureTransform - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 visOutputDimensions;                                                                          //@synthesize visOutputDimensions=_visOutputDimensions - In the implementation block
@property (assign,nonatomic) int videoStabilizationType;                                                                                  //@synthesize videoStabilizationType=_videoStabilizationType - In the implementation block
@property (assign,nonatomic) BOOL boxedMetadataPostVISEnabled;                                                                            //@synthesize boxedMetadataPostVISEnabled=_boxedMetadataPostVISEnabled - In the implementation block
@property (assign,nonatomic) int motionAttachmentsSource;                                                                                 //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW57 smartCameraPipelineVersion;                                                                  //@synthesize smartCameraPipelineVersion=_smartCameraPipelineVersion - In the implementation block
@property (assign,nonatomic) BOOL offlineVISEnabled;                                                                                      //@synthesize offlineVISEnabled=_offlineVISEnabled - In the implementation block
@property (assign,nonatomic) BOOL vitalityScoringEnabled;                                                                                 //@synthesize vitalityScoringEnabled=_vitalityScoringEnabled - In the implementation block
@property (assign,nonatomic) BOOL captureDeviceHasOverCaptureEnabled;                                                                     //@synthesize captureDeviceHasOverCaptureEnabled=_captureDeviceHasOverCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL overCaptureEnabled;                                                                                     //@synthesize overCaptureEnabled=_overCaptureEnabled - In the implementation block
@property (assign,nonatomic) float videoStabilizationOverscanOverride;                                                                    //@synthesize videoStabilizationOverscanOverride=_videoStabilizationOverscanOverride - In the implementation block
@property (nonatomic,retain) NSString * clientApplicationID;                                                                              //@synthesize clientApplicationID=_clientApplicationID - In the implementation block
@property (assign,nonatomic) BOOL P3ToBT2020ConversionEnabled;                                                                            //@synthesize P3ToBT2020ConversionEnabled=_P3ToBT2020ConversionEnabled - In the implementation block
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(int)motionAttachmentsSource;
-(void)setOverCaptureEnabled:(BOOL)arg1 ;
-(FigCaptureSourceConfiguration *)cameraConfiguration;
-(BOOL)overCaptureEnabled;
-(void)setVideoSourceCaptureTransform:(FigCaptureVideoTransform)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)sceneClassifierConnectionConfiguration;
-(NSArray *)detectedObjectMetadataConnectionConfigurations;
-(void)setCameraConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(void)setStillImageConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setCameraDebugInfoMetadataConnectionConfiguration:(FigMetadataItemCaptureConnectionConfiguration *)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(void)setCaptureDeviceHasOverCaptureEnabled:(BOOL)arg1 ;
-(void)setP3ToBT2020ConversionEnabled:(BOOL)arg1 ;
-(BOOL)boxedMetadataPostVISEnabled;
-(void)setVisOutputDimensions:(SCD_Struct_BW2)arg1 ;
-(NSString *)clientApplicationID;
-(BOOL)P3ToBT2020ConversionEnabled;
-(BOOL)offlineVISEnabled;
-(void)setVideoConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(void)setDetectedObjectMetadataConnectionConfigurations:(NSArray *)arg1 ;
-(FigMetadataItemCaptureConnectionConfiguration *)cameraDebugInfoMetadataConnectionConfiguration;
-(FigCaptureVideoTransform)videoSourceCaptureTransform;
-(FigVideoCaptureConnectionConfiguration *)videoConnectionConfiguration;
-(SCD_Struct_BW2)visOutputDimensions;
-(BOOL)vitalityScoringEnabled;
-(void)setOfflineVISEnabled:(BOOL)arg1 ;
-(void)setClientApplicationID:(NSString *)arg1 ;
-(FigAudioCaptureConnectionConfiguration *)audioConnectionConfiguration;
-(void)setVideoStabilizationType:(int)arg1 ;
-(BOOL)captureDeviceHasOverCaptureEnabled;
-(void)setAudioConnectionConfiguration:(FigAudioCaptureConnectionConfiguration *)arg1 ;
-(int)videoStabilizationType;
-(void)setBoxedMetadataPostVISEnabled:(BOOL)arg1 ;
-(void)setVitalityScoringEnabled:(BOOL)arg1 ;
-(void)setVideoStabilizationOverscanOverride:(float)arg1 ;
-(void)setSmartCameraPipelineVersion:(SCD_Struct_BW57)arg1 ;
-(SCD_Struct_BW57)smartCameraPipelineVersion;
-(float)videoStabilizationOverscanOverride;
-(void)dealloc;
-(void)setSceneClassifierConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
@end
