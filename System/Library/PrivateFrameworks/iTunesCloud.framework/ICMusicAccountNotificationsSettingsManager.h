/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ICMusicAccountNotificationsSettingsManager : NSObject
+(id)sharedManager;
-(id)storeRequestContext;
-(id)_getSwitchesDependingOnSubscriptionStatus:(id)arg1 withResponse:(id)arg2 togglingSwitchesToValue:(BOOL)arg3 ;
-(void)setAccountNotificationsArtistContentFeature:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)cachedAccountNotificationsShowInLibrarySwitch;
-(void)getAccountNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCachedAccountNotificationsShowInLibraryEnabled:(BOOL)arg1 ;
@end

