/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWObjectRingBuffer.h>

@interface BWObjectRingBufferThreadSafe : BWObjectRingBuffer {

	OpaqueFigReentrantMutexRef _lock;

}
-(void)clear;
-(void)setCapacity:(int)arg1 ;
-(void)appendObject:(id)arg1 forTime:(SCD_Struct_BW8)arg2 ;
-(void)enumerateObjectsStartingAt:(SCD_Struct_BW8)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)lastObject;
-(SCD_Struct_BW8)firstTime;
-(void)reverseEnumerateObjectsStartingAt:(SCD_Struct_BW8)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)extractTimeRangeFrom:(SCD_Struct_BW8)arg1 until:(SCD_Struct_BW8)arg2 into:(id)arg3 times:(id)arg4 ;
-(void)flushEntriesEarlierThan:(SCD_Struct_BW8)arg1 ;
-(id)description;
-(SCD_Struct_BW8)lastTime;
-(id)initWithCapacity:(int)arg1 ;
-(id)firstObject;
-(void)dealloc;
@end
