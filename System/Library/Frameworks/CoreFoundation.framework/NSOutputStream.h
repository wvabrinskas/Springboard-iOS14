/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStream.h>

@interface NSOutputStream : NSStream {

	unsigned char _reserved[128];

}

@property (readonly) BOOL hasSpaceAvailable; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)outputStreamToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
+(id)outputStreamToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
+(id)outputStreamWithURL:(id)arg1 append:(BOOL)arg2 ;
+(id)outputStreamToMemory;
-(SCD_Struct_NS11)_cfStreamError;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(unsigned long long)_cfTypeID;
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(id)initToMemory;
-(BOOL)hasSpaceAvailable;
-(void)dealloc;
@end
