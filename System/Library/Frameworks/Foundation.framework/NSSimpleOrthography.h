/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOrthography.h>

@interface NSSimpleOrthography : NSOrthography {

	unsigned _orthographyFlags;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)orthographyWithFlags:(unsigned)arg1 ;
-(id)initWithFlags:(unsigned)arg1 ;
-(id)allScripts;
-(id)dominantLanguage;
-(id)dominantLanguageForScript:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dominantScript;
-(id)languagesForScript:(id)arg1 ;
-(id)allLanguages;
-(id)initWithCoder:(id)arg1 ;
-(id)languageMap;
-(id)initWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
-(unsigned)orthographyFlags;
-(Class)classForCoder;
@end

