/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSLocale;

@interface AMPICUNumberFormatter : NSObject {

	unsigned long long _extendedStyle;
	NSLocale* _locale;
	void* _icuNumberFormatter;

}

@property (assign,nonatomic) void* icuNumberFormatter;                      //@synthesize icuNumberFormatter=_icuNumberFormatter - In the implementation block
@property (assign,nonatomic) unsigned long long extendedStyle;              //@synthesize extendedStyle=_extendedStyle - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                             //@synthesize locale=_locale - In the implementation block
-(NSLocale *)locale;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)stringFromNumber:(id)arg1 ;
-(void)dealloc;
-(id)initWithExtendedStyle:(unsigned long long)arg1 locale:(id)arg2 ;
-(void)setExtendedStyle:(unsigned long long)arg1 ;
-(void*)icuNumberFormatter;
-(void)setIcuNumberFormatter:(void*)arg1 ;
-(unsigned long long)extendedStyle;
@end
