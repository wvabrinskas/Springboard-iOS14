/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSPlaceholderMutableString : NSMutableString
-(id)initWithString:(id)arg1 ;
-(oneway void)release;
-(id)init;
-(id)initWithCString:(const char*)arg1 encoding:(unsigned long long)arg2 ;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)retain;
-(unsigned long long)length;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(id)initWithUTF8String:(const char*)arg1 ;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(BOOL)arg4 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
-(BOOL)_tryRetain;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(BOOL)_isDeallocating;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char*)arg3 ;
-(void)dealloc;
@end
