/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/iAd.framework/iAd
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ADCreativeControllerDelegate <NSObject>
@required
-(void)creativeControllerViewDidRequestExpandURL:(id)arg1 withMaximumSize:(CGSize)arg2 withTapLocation:(CGPoint)arg3;
-(void)creativeControllerVideoSkipAdTapped:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoExitFullScreenTapped:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoUnmuted:(float)arg1 volume:(float)arg2;
-(void)creativeControllerViewDidRequestOpenURL:(id)arg1 withTapLocation:(CGPoint)arg2;
-(void)creativeControllerNavigationAttemptBlockedDueToAccidentalTap;
-(void)creativeControllerVideoResumedPlaying:(float)arg1 volume:(float)arg2;
-(void)creativeControllerTapGestureTimerDidExpireBeforePrimaryActionWasInvoked;
-(void)creativeControllerVideoFullScreenTapped:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoCreativeViewLoaded;
-(void)creativeControllerVideoVolumeChanged:(float)arg1 playTime:(float)arg2;
-(void)creativeControllerViewDidRequestCreateCalendarEvent:(id)arg1 withTapLocation:(CGPoint)arg2;
-(void)creativeControllerVideoPaused:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoProgressed:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoViewabilityChanged:(BOOL)arg1 playTime:(float)arg2 volume:(float)arg3;
-(void)creativeControllerVideoStartedPlaying:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoMuted:(float)arg1;
-(void)creativeControllerVideoCompletedWithVolume:(float)arg1;
-(void)creativeControllerVideoTapped:(float)arg1 volume:(float)arg2;
-(void)creativeControllerVideoMoreInfoTapped:(float)arg1 volume:(float)arg2;
-(void)creativeControllerViewDidRequestCloseWithTapLocation:(CGPoint)arg1;

@end
