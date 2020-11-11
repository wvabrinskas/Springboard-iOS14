/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMAVCore/IMAVCore-Structs.h>
#import <libobjc.A.dylib/AVConferencePreviewClientDelegate.h>
#import <IMAVCore/IMSystemMonitorListener.h>

@class AVConferencePreview;

@interface IMAVLocalPreviewClient : NSObject <AVConferencePreviewClientDelegate, IMSystemMonitorListener> {

	BOOL _shouldAlterPreviewState;
	BOOL _wantsPreview;
	BOOL _wantsPausedPreview;
	BOOL _wantsUnpausedPreview;
	AVConferencePreview* _conferencePreview;

}

@property (nonatomic,retain) AVConferencePreview * conferencePreview;              //@synthesize conferencePreview=_conferencePreview - In the implementation block
@property (nonatomic,readonly) BOOL isPreviewRunning; 
@property (assign,nonatomic) unsigned cameraType; 
@property (assign,nonatomic) unsigned cameraOrientation; 
@property (assign,nonatomic) void* localVideoLayer; 
@property (assign,nonatomic) void* localVideoBackLayer; 
+(id)sharedInstance;
+(CGSize)localPortraitAspectRatio;
-(void)pausePreview;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(id)init;
-(BOOL)isPreviewRunning;
-(void)didStartPreview;
-(void)didPausePreview;
-(void)didStopPreview;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1 ;
-(void)didChangeLocalVideoAttributes:(id)arg1 ;
-(void)didChangeLocalScreenAttributes:(id)arg1 ;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2 ;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg1 ;
-(unsigned)cameraOrientation;
-(void)systemScreenDidPowerUp;
-(void)systemScreenDidPowerDown;
-(void)setCameraType:(unsigned)arg1 ;
-(void)stopPreview;
-(void)systemApplicationWillEnterForeground;
-(void)setCameraOrientation:(unsigned)arg1 ;
-(void)systemApplicationDidEnterBackground;
-(unsigned)cameraType;
-(void)startPreview;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(void)dealloc;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoLayer;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)arg1 ;
-(void)avChat:(id)arg1 setLocalPortraitRatio:(CGSize)arg2 localLandscapeRatio:(CGSize)arg3 ;
-(void)_avDaemonConnected;
-(AVConferencePreview *)conferencePreview;
-(BOOL)_shouldPreviewBeRunning;
-(void)_updatePreviewState;
-(void)updateLocalScreenAtrributes;
-(void)unpausePreview;
-(void)beginAnimationToPIP;
-(void)endAnimationToPIP;
-(void)beginAnimationToPreview;
-(void)endAnimationToPreview;
-(void)setConferencePreview:(AVConferencePreview *)arg1 ;
@end
