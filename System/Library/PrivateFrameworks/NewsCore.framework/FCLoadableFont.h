/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FCLoadableFont : NSObject <NSCopying> {

	NSString* _fontName;
	NSURL* _fontURL;

}

@property (nonatomic,copy) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,retain) NSURL * fontURL;                //@synthesize fontURL=_fontURL - In the implementation block
+(id)loadableFontWithName:(id)arg1 url:(id)arg2 ;
-(void)setFontName:(NSString *)arg1 ;
-(NSString *)fontName;
-(unsigned long long)hash;
-(NSURL *)fontURL;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFontURL:(NSURL *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
