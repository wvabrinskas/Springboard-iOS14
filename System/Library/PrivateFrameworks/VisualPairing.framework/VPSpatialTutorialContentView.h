/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VisualPairing.framework/VisualPairing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VisualPairing/VisualPairing-Structs.h>
#import <UIKitCore/UIView.h>

@class AVQueuePlayer, AVPlayerLooper, AVPlayerItem, AVPlayerLayer;

@interface VPSpatialTutorialContentView : UIView {

	int _mode;
	AVQueuePlayer* _playerStereo;
	AVQueuePlayer* _playerSpatial;
	AVPlayerLooper* _looperStereo;
	AVPlayerLooper* _looperSpatial;
	AVPlayerItem* _playerItemStereo;
	AVPlayerItem* _playerItemSpatial;
	AVPlayerLayer* _playerLayerStereo;
	AVPlayerLayer* _playerLayerSpatial;
	BOOL _playersPlaying;
	BOOL _playersStartTriggered;
	MediaContentStatus _spatialStatus;
	MediaContentStatus _stereoStatus;

}
-(id)initWithMode:(int)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(int)mode;
-(void)setMode:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 mode:(int)arg2 ;
-(void)startPlayers;
-(void)stopPlayers;
-(void)initPlayerStereo;
-(void)initPlayerSpatial;
-(void)updatePlayersValuesBasedOnMode;
-(void)syncPlayersWithRate:(float)arg1 ;
@end
