/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@interface _NSClStr : NSString {

	unsigned long long length;
	unsigned short* characters;

}
-(const unsigned short*)_fastCharacterContents;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)initWithString:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(id)initWithUTF8String:(const char*)arg1 ;
-(id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end
