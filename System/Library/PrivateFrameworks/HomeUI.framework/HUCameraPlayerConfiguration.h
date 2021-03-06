/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMHome, HMCameraProfile, NSUUID, NSDate;

@interface HUCameraPlayerConfiguration : NSObject {

	HMHome* _home;
	HMCameraProfile* _cameraProfile;
	long long _scrubberType;
	NSUUID* _notificationUUID;
	NSUUID* _clipUUID;
	NSDate* _startingPlaybackDate;

}

@property (nonatomic,readonly) HMHome * home;                                //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMCameraProfile * cameraProfile;              //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,readonly) long long scrubberType;                       //@synthesize scrubberType=_scrubberType - In the implementation block
@property (nonatomic,readonly) NSUUID * notificationUUID;                    //@synthesize notificationUUID=_notificationUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * clipUUID;                            //@synthesize clipUUID=_clipUUID - In the implementation block
@property (nonatomic,retain) NSDate * startingPlaybackDate;                  //@synthesize startingPlaybackDate=_startingPlaybackDate - In the implementation block
-(NSUUID *)clipUUID;
-(id)description;
-(HMHome *)home;
-(NSUUID *)notificationUUID;
-(HMCameraProfile *)cameraProfile;
-(id)initWithHome:(id)arg1 cameraProfile:(id)arg2 scrubberType:(long long)arg3 notificationUUID:(id)arg4 clipUUID:(id)arg5 ;
-(void)setStartingPlaybackDate:(NSDate *)arg1 ;
-(NSDate *)startingPlaybackDate;
-(long long)scrubberType;
-(BOOL)isConfiguredForLiveStream;
@end

