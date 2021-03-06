/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMCameraControl.h>

@class _HMCameraAudioControl, HMCharacteristic;

@interface HMCameraAudioControl : HMCameraControl {

	_HMCameraAudioControl* _audioControl;

}

@property (nonatomic,retain) _HMCameraAudioControl * audioControl;              //@synthesize audioControl=_audioControl - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * mute; 
@property (nonatomic,readonly) HMCharacteristic * volume; 
-(HMCharacteristic *)volume;
-(HMCharacteristic *)mute;
-(_HMCameraAudioControl *)audioControl;
-(void)setAudioControl:(_HMCameraAudioControl *)arg1 ;
-(id)initWithAudioControl:(id)arg1 ;
@end

