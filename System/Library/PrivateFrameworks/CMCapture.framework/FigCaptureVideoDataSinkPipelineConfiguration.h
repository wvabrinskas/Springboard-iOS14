/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration, NSDictionary;

@interface FigCaptureVideoDataSinkPipelineConfiguration : NSObject {

	FigCaptureVideoTransform _sourceVideoTransform;
	BOOL _sourceHasAppliedAllZoom;
	int _videoStabilizationType;
	int _motionAttachmentsSource;
	BOOL _faceTrackingEnabled;
	BOOL _offlineVISMotionDataEnabled;
	BOOL _P3ToBT2020ConversionEnabled;
	FigCaptureSourceConfiguration* _sourceConfiguration;
	int _sourceDeviceType;
	SCD_Struct_BW2 _visOutputDimensions;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	SCD_Struct_Fi80 _clientAuditToken;
	NSDictionary* _colorInfo;

}

@property (assign,nonatomic) FigCaptureVideoTransform sourceVideoTransform;                                          //@synthesize sourceVideoTransform=_sourceVideoTransform - In the implementation block
@property (assign,nonatomic) BOOL sourceHasAppliedAllZoom;                                                           //@synthesize sourceHasAppliedAllZoom=_sourceHasAppliedAllZoom - In the implementation block
@property (assign,nonatomic) int videoStabilizationType;                                                             //@synthesize videoStabilizationType=_videoStabilizationType - In the implementation block
@property (assign,nonatomic) int motionAttachmentsSource;                                                            //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (assign,nonatomic) BOOL faceTrackingEnabled;                                                               //@synthesize faceTrackingEnabled=_faceTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL offlineVISMotionDataEnabled;                                                       //@synthesize offlineVISMotionDataEnabled=_offlineVISMotionDataEnabled - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * sourceConfiguration;                                    //@synthesize sourceConfiguration=_sourceConfiguration - In the implementation block
@property (assign,nonatomic) int sourceDeviceType;                                                                   //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 visOutputDimensions;                                                     //@synthesize visOutputDimensions=_visOutputDimensions - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;              //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi80 clientAuditToken;                                                       //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
@property (nonatomic,retain) NSDictionary * colorInfo;                                                               //@synthesize colorInfo=_colorInfo - In the implementation block
@property (assign,nonatomic) BOOL P3ToBT2020ConversionEnabled;                                                       //@synthesize P3ToBT2020ConversionEnabled=_P3ToBT2020ConversionEnabled - In the implementation block
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(int)motionAttachmentsSource;
-(void)setVideoDataConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(int)sourceDeviceType;
-(NSDictionary *)colorInfo;
-(void)setP3ToBT2020ConversionEnabled:(BOOL)arg1 ;
-(void)setVisOutputDimensions:(SCD_Struct_BW2)arg1 ;
-(void)setFaceTrackingEnabled:(BOOL)arg1 ;
-(SCD_Struct_Fi80)clientAuditToken;
-(void)setClientAuditToken:(SCD_Struct_Fi80)arg1 ;
-(BOOL)P3ToBT2020ConversionEnabled;
-(FigCaptureVideoTransform)sourceVideoTransform;
-(BOOL)sourceHasAppliedAllZoom;
-(BOOL)offlineVISMotionDataEnabled;
-(SCD_Struct_BW2)visOutputDimensions;
-(BOOL)faceTrackingEnabled;
-(void)setSourceVideoTransform:(FigCaptureVideoTransform)arg1 ;
-(void)setColorInfo:(NSDictionary *)arg1 ;
-(void)setSourceHasAppliedAllZoom:(BOOL)arg1 ;
-(void)setOfflineVISMotionDataEnabled:(BOOL)arg1 ;
-(void)setSourceDeviceType:(int)arg1 ;
-(void)setVideoStabilizationType:(int)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(FigCaptureSourceConfiguration *)sourceConfiguration;
-(void)setSourceConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(int)videoStabilizationType;
-(void)dealloc;
@end

