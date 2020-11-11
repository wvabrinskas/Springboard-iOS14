/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCharacterSet;

@interface VSSpeechCharacterSet : NSObject {

	NSCharacterSet* _characterSet;

}

@property (nonatomic,retain) NSCharacterSet * characterSet;              //@synthesize characterSet=_characterSet - In the implementation block
+(id)languageMapping;
-(NSCharacterSet *)characterSet;
-(id)initWithLanguage:(id)arg1 ;
-(id)unspeakableRangeOfText:(id)arg1 ;
-(void)setCharacterSet:(NSCharacterSet *)arg1 ;
@end
