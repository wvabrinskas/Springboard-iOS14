/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSAudioSessionControllerDelegate <NSObject>
@optional
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;

@end
