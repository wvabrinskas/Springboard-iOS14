/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol LPMediaPlayer <NSObject>
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (getter=isFullScreen,nonatomic,readonly) BOOL fullScreen; 
@property (nonatomic,readonly) BOOL usesSharedAudioSession; 
@property (nonatomic,readonly) BOOL shouldUnmuteWhenUserAdjustsVolume; 
@property (nonatomic,readonly) unsigned long long lastInteractionTimestamp; 
@property (nonatomic,readonly) double unobscuredAreaFraction; 
@optional
-(BOOL)releaseDecodingResourcesIfInactive;
-(unsigned long long)lastInteractionTimestamp;
-(double)unobscuredAreaFraction;

@required
-(BOOL)isFullScreen;
-(void)setActive:(BOOL)arg1;
-(BOOL)isMuted;
-(BOOL)isPlaying;
-(BOOL)isActive;
-(BOOL)usesSharedAudioSession;
-(BOOL)shouldUnmuteWhenUserAdjustsVolume;

@end
