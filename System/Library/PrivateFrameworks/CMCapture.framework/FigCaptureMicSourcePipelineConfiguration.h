/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class FigCaptureSourceConfiguration, NSArray, BWZoomCommandHandler, NSString;

@interface FigCaptureMicSourcePipelineConfiguration : NSObject {

	FigCaptureSourceConfiguration* _micConfiguration;
	NSArray* _micConnectionConfigurations;
	FigCaptureSourceConfiguration* _cameraConfigurationForStereoAudioCapture;
	BWZoomCommandHandler* _zoomCommandHandlerForStereoAudioCapture;
	BOOL _flipStereoAudioCaptureChannels;
	NSString* _sessionPreset;
	BOOL _configuresAppAudioSession;
	BOOL _audioSourceNodeShouldCallEndInterruption;
	unsigned _clientVersionOfLinkedSDK;
	SCD_Struct_Fi80 _clientAuditToken;

}

@property (nonatomic,retain) FigCaptureSourceConfiguration * micConfiguration;                                      //@synthesize micConfiguration=_micConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * micConnectionConfigurations;                                                 //@synthesize micConnectionConfigurations=_micConnectionConfigurations - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * cameraConfigurationForStereoAudioCapture;              //@synthesize cameraConfigurationForStereoAudioCapture=_cameraConfigurationForStereoAudioCapture - In the implementation block
@property (nonatomic,retain) BWZoomCommandHandler * zoomCommandHandlerForStereoAudioCapture;                        //@synthesize zoomCommandHandlerForStereoAudioCapture=_zoomCommandHandlerForStereoAudioCapture - In the implementation block
@property (assign,nonatomic) BOOL flipStereoAudioCaptureChannels;                                                   //@synthesize flipStereoAudioCaptureChannels=_flipStereoAudioCaptureChannels - In the implementation block
@property (nonatomic,retain) NSString * sessionPreset;                                                              //@synthesize sessionPreset=_sessionPreset - In the implementation block
@property (assign,nonatomic) BOOL configuresAppAudioSession;                                                        //@synthesize configuresAppAudioSession=_configuresAppAudioSession - In the implementation block
@property (assign,nonatomic) BOOL audioSourceNodeShouldCallEndInterruption;                                         //@synthesize audioSourceNodeShouldCallEndInterruption=_audioSourceNodeShouldCallEndInterruption - In the implementation block
@property (assign,nonatomic) unsigned clientVersionOfLinkedSDK;                                                     //@synthesize clientVersionOfLinkedSDK=_clientVersionOfLinkedSDK - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi80 clientAuditToken;                                                      //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
-(BOOL)audioSourceNodeShouldCallEndInterruption;
-(void)setSessionPreset:(NSString *)arg1 ;
-(BWZoomCommandHandler *)zoomCommandHandlerForStereoAudioCapture;
-(void)setMicConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(NSString *)sessionPreset;
-(void)setMicConnectionConfigurations:(NSArray *)arg1 ;
-(NSArray *)micConnectionConfigurations;
-(void)setAudioSourceNodeShouldCallEndInterruption:(BOOL)arg1 ;
-(BOOL)configuresAppAudioSession;
-(FigCaptureSourceConfiguration *)cameraConfigurationForStereoAudioCapture;
-(SCD_Struct_Fi80)clientAuditToken;
-(void)setClientAuditToken:(SCD_Struct_Fi80)arg1 ;
-(void)setFlipStereoAudioCaptureChannels:(BOOL)arg1 ;
-(void)setConfiguresAppAudioSession:(BOOL)arg1 ;
-(void)setClientVersionOfLinkedSDK:(unsigned)arg1 ;
-(FigCaptureSourceConfiguration *)micConfiguration;
-(void)setCameraConfigurationForStereoAudioCapture:(FigCaptureSourceConfiguration *)arg1 ;
-(unsigned)clientVersionOfLinkedSDK;
-(BOOL)flipStereoAudioCaptureChannels;
-(id)micConnectionConfigurationsForMicSourcePosition:(int)arg1 ;
-(void)setZoomCommandHandlerForStereoAudioCapture:(BWZoomCommandHandler *)arg1 ;
-(void)dealloc;
@end

