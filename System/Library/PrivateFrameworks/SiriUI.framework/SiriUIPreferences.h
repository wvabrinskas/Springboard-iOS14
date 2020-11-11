/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults, NSDate;

@interface SiriUIPreferences : NSObject {

	NSUserDefaults* _userDefaults;
	long long _numberOfTimesSiriCardShown;
	BOOL _voiceRequestMadeWhileInCarDND;
	NSDate* _previousSiriRequestErrorTimestamp;
	long long _siriRequestErrorCount;

}
+(id)sharedPreferences;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(id)init;
-(long long)integerForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(BOOL)voiceRequestMadeWhileInCarDND;
-(long long)numberOfTimesCarDNDSiriCardShown;
-(void)setNumberOfTimesCarDNDSiriCardShown:(long long)arg1 ;
-(id)previousSiriRequestErrorTimestamp;
-(void)setPreviousSiriRequestErrorTimestamp:(id)arg1 ;
-(long long)siriRequestErrorCount;
-(void)setSiriRequestErrorCount:(long long)arg1 ;
-(void)setVoiceRequestMadeWhileInCarDND:(BOOL)arg1 ;
@end
