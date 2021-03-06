/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VTKeywordDetectorContext : NSObject {

	BOOL _isMultiPhraseVTEnabled;
	NSString* _assetPath;
	NSString* _categoryKey;
	NSString* _locale;
	unsigned long long _audioSourceOption;

}

@property (nonatomic,readonly) NSString * assetPath;                              //@synthesize assetPath=_assetPath - In the implementation block
@property (nonatomic,readonly) NSString * categoryKey;                            //@synthesize categoryKey=_categoryKey - In the implementation block
@property (nonatomic,readonly) NSString * locale;                                 //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) unsigned long long audioSourceOption;              //@synthesize audioSourceOption=_audioSourceOption - In the implementation block
@property (nonatomic,readonly) BOOL isMultiPhraseVTEnabled;                       //@synthesize isMultiPhraseVTEnabled=_isMultiPhraseVTEnabled - In the implementation block
-(NSString *)locale;
-(BOOL)isMultiPhraseVTEnabled;
-(NSString *)assetPath;
-(id)initWithVTContext:(id)arg1 error:(id*)arg2 ;
-(NSString *)categoryKey;
-(unsigned long long)audioSourceOption;
@end

