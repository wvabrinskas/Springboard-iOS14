/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSOrderedSet;

@interface MRNotificationClient : NSObject {

	unsigned long long _registeredNowPlayingObservers;
	NSObject*<OS_dispatch_queue> _customNotificationsQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSOrderedSet* _nowPlayingNotifications;
	NSOrderedSet* _routesChangedNotifications;
	NSOrderedSet* _volumeControlNotifications;
	NSOrderedSet* _externalScreenNotifications;
	NSOrderedSet* _originNotifications;
	NSOrderedSet* _supportedCommandsNotifications;
	NSOrderedSet* _voiceInputNotifications;
	NSOrderedSet* _errorNotifications;
	BOOL _receivesExternalScreenTypeChangedNotifications;
	BOOL _receivesSupportedCommandsNotifications;
	BOOL _receivesRoutesChangedNotifications;
	BOOL _receivesVolumeControlNotifications;
	BOOL _receivesOriginChangedNotifications;
	BOOL _receivesPlaybackErrorNotifications;
	BOOL _receivesVoiceInputRecordingStateNotifications;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notificationQueue; 
@property (getter=isRegisteredForNowPlayingNotifications,nonatomic,readonly) BOOL registeredForNowPlayingNotifications; 
@property (assign,nonatomic) BOOL receivesExternalScreenTypeChangedNotifications;                                                    //@synthesize receivesExternalScreenTypeChangedNotifications=_receivesExternalScreenTypeChangedNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesSupportedCommandsNotifications;                                                            //@synthesize receivesSupportedCommandsNotifications=_receivesSupportedCommandsNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesRoutesChangedNotifications;                                                                //@synthesize receivesRoutesChangedNotifications=_receivesRoutesChangedNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesVolumeControlNotifications;                                                                //@synthesize receivesVolumeControlNotifications=_receivesVolumeControlNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesOriginChangedNotifications;                                                                //@synthesize receivesOriginChangedNotifications=_receivesOriginChangedNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesPlaybackErrorNotifications;                                                                //@synthesize receivesPlaybackErrorNotifications=_receivesPlaybackErrorNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesVoiceInputRecordingStateNotifications;                                                     //@synthesize receivesVoiceInputRecordingStateNotifications=_receivesVoiceInputRecordingStateNotifications - In the implementation block
+(id)nowPlayingNotifications;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)registerForNowPlayingNotificationsWithQueue:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)receivesVolumeControlNotifications;
-(id)init;
-(BOOL)receivesOriginChangedNotifications;
-(void)setReceivesVoiceInputRecordingStateNotifications:(BOOL)arg1 ;
-(void)setReceivesPlaybackErrorNotifications:(BOOL)arg1 ;
-(void)registerForNowPlayingNotificationsWithQueue:(id)arg1 ;
-(BOOL)receivesRoutesChangedNotifications;
-(BOOL)receivesSupportedCommandsNotifications;
-(void)dispatchNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3 ;
-(BOOL)receivesExternalScreenTypeChangedNotifications;
-(void)setReceivesRoutesChangedNotifications:(BOOL)arg1 ;
-(BOOL)receivesVoiceInputRecordingStateNotifications;
-(BOOL)receivesPlaybackErrorNotifications;
-(BOOL)_postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)setReceivesSupportedCommandsNotifications:(BOOL)arg1 ;
-(void)unregisterForNowPlayingNotifications;
-(BOOL)_processAlwaysNeedsNowPlayingNotifications;
-(void)setReceivesVolumeControlNotifications:(BOOL)arg1 ;
-(void)setReceivesExternalScreenTypeChangedNotifications:(BOOL)arg1 ;
-(void)setReceivesOriginChangedNotifications:(BOOL)arg1 ;
-(BOOL)postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3 ;
-(BOOL)isRegisteredForNowPlayingNotifications;
@end

