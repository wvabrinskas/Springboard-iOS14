/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, TLAlert, NSString;

@interface SBUISound : NSObject {

	long long _soundType;
	unsigned _systemSoundID;
	unsigned _resolvedSystemSoundID;
	unsigned long long _soundBehavior;
	NSDictionary* _vibrationPattern;
	TLAlert* _toneAlert;
	/*^block*/id _completionBlock;
	NSString* _songPath;
	long long _eventType;

}

@property (assign,nonatomic) long long soundType;                                                      //@synthesize soundType=_soundType - In the implementation block
@property (assign,nonatomic) unsigned systemSoundID;                                                   //@synthesize systemSoundID=_systemSoundID - In the implementation block
@property (assign,setter=_setResolvedSoundID:,nonatomic) unsigned _resolvedSystemSoundID;              //@synthesize resolvedSystemSoundID=_resolvedSystemSoundID - In the implementation block
@property (assign,nonatomic) unsigned long long soundBehavior;                                         //@synthesize soundBehavior=_soundBehavior - In the implementation block
@property (nonatomic,retain) NSDictionary * vibrationPattern;                                          //@synthesize vibrationPattern=_vibrationPattern - In the implementation block
@property (nonatomic,retain) TLAlert * toneAlert;                                                      //@synthesize toneAlert=_toneAlert - In the implementation block
@property (nonatomic,copy) NSString * songPath;                                                        //@synthesize songPath=_songPath - In the implementation block
@property (assign,nonatomic) long long eventType;                                                      //@synthesize eventType=_eventType - In the implementation block
+(id)soundWithFeedbackEventType:(long long)arg1 ;
-(void)setEventType:(long long)arg1 ;
-(TLAlert *)toneAlert;
-(long long)soundType;
-(id)initWithSystemSoundPath:(id)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3 ;
-(unsigned)systemSoundID;
-(void)setToneAlert:(TLAlert *)arg1 ;
-(long long)eventType;
-(unsigned)_resolvedSystemSoundID;
-(NSDictionary *)vibrationPattern;
-(/*^block*/id)_completionBlock;
-(BOOL)playInEvironments:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithToneAlertConfiguration:(id)arg1 ;
-(BOOL)isPlaying;
-(void)_setCompletionBlock:(/*^block*/id)arg1 ;
-(void)setSystemSoundID:(unsigned)arg1 ;
-(id)description;
-(id)initWithToneAlert:(long long)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4 ;
-(void)setSoundType:(long long)arg1 ;
-(NSString *)songPath;
-(void)stop;
-(void)setSongPath:(NSString *)arg1 ;
-(void)setSoundBehavior:(unsigned long long)arg1 ;
-(void)setVibrationPattern:(NSDictionary *)arg1 ;
-(id)initWithFeedbackEventType:(long long)arg1 ;
-(unsigned long long)soundBehavior;
-(id)initWithSystemSoundID:(unsigned)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3 ;
-(id)initWithToneAlert:(id)arg1 ;
-(void)_setResolvedSoundID:(unsigned)arg1 ;
@end

