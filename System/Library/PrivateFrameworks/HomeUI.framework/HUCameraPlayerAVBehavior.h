/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVHomeIPCameraBehavior.h>
#import <libobjc.A.dylib/HFCameraClipScrubbing.h>

@protocol HUCameraPlayerAVBehaviorDelegate;
@class NSString;

@interface HUCameraPlayerAVBehavior : AVHomeIPCameraBehavior <HFCameraClipScrubbing> {

	id<HUCameraPlayerAVBehaviorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HUCameraPlayerAVBehaviorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<HUCameraPlayerAVBehaviorDelegate>)delegate;
-(void)pictureInPictureActionButtonTapped;
-(void)playbackControlsDidChangePlayerVolume:(float)arg1 ;
-(void)playbackControlsDidToggleMuted:(BOOL)arg1 ;
-(void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg1 ;
-(void)setDelegate:(id<HUCameraPlayerAVBehaviorDelegate>)arg1 ;
-(void)beginScrubbing;
-(void)endScrubbingWithTargetTime:(double)arg1 ;
-(void)scrubToTime:(double)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

