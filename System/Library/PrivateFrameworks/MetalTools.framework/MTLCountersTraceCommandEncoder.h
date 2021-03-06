/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MetalTools/MetalTools-Structs.h>
@interface MTLCountersTraceCommandEncoder : NSObject {

	BinaryBuffer* _stream;
	unsigned long long _flags;
	NSRange _segment;

}

@property (nonatomic,readonly) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSRange segment;                       //@synthesize segment=_segment - In the implementation block
-(void)popDebugGroup;
-(void)insertDebugSignpost:(id)arg1 ;
-(unsigned long long)flags;
-(NSRange)segment;
-(void)setLabel:(id)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)endEncoding;
-(id)init:(BinaryBuffer*)arg1 flags:(unsigned long long)arg2 ;
@end

