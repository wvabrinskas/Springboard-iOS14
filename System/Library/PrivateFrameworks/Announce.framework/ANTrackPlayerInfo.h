/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:49:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVAudioPlayer, NSString;

@interface ANTrackPlayerInfo : NSObject {

	AVAudioPlayer* _player;
	NSString* _announcementID;
	long long _trackType;

}

@property (nonatomic,readonly) AVAudioPlayer * player;                 //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) NSString * announcementID;              //@synthesize announcementID=_announcementID - In the implementation block
@property (nonatomic,readonly) long long trackType;                    //@synthesize trackType=_trackType - In the implementation block
-(AVAudioPlayer *)player;
-(long long)trackType;
-(NSString *)announcementID;
-(id)initWithPlayer:(id)arg1 announcementID:(id)arg2 trackType:(long long)arg3 ;
@end

