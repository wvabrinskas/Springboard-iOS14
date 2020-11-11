/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVPPlayer, RTCReporting;

@interface TVPPlayerReporter : NSObject {

	TVPPlayer* _player;
	RTCReporting* _rtcAgent;
	id _reportingHierarchyToken;

}

@property (assign,nonatomic,__weak) TVPPlayer * player;               //@synthesize player=_player - In the implementation block
@property (retain) RTCReporting * rtcAgent;                           //@synthesize rtcAgent=_rtcAgent - In the implementation block
@property (nonatomic,retain) id reportingHierarchyToken;              //@synthesize reportingHierarchyToken=_reportingHierarchyToken - In the implementation block
+(void)initialize;
-(void)setPlayer:(TVPPlayer *)arg1 ;
-(id)reportingHierarchyToken;
-(void)setReportingHierarchyToken:(id)arg1 ;
-(TVPPlayer *)player;
-(id)initWithPlayer:(id)arg1 ;
-(void)dealloc;
-(void)_playerStateWillChange:(id)arg1 ;
-(void)_playerCurrentMediaItemWillChange:(id)arg1 ;
-(void)_playerCurrentMediaItemDidChange:(id)arg1 ;
-(RTCReporting *)rtcAgent;
-(void)_setupRTCAgent;
-(void)_sendPlaybackStartupEventsIfNecessary;
-(void)_tearDownRTCAgent;
-(id)_rtcAgentUserInfo;
-(void)setRtcAgent:(RTCReporting *)arg1 ;
-(void)_sendRTCEvent:(id)arg1 withCategory:(unsigned short)arg2 type:(unsigned short)arg3 values:(id)arg4 ;
-(void)sendPlaybackStartupMetricsManually;
@end
