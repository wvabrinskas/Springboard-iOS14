/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary;

@interface VCImageConverterBase : NSObject {

	CVPixelBufferPoolRef _bufferPool;
	NSMutableDictionary* _bufferPoolDictionary;

}
-(void)dealloc;
-(BOOL)setUpBufferPoolForOutputWidth:(unsigned long long)arg1 outputHeight:(unsigned long long)arg2 ;
-(id)initWithFormatType:(unsigned)arg1 ;
-(BOOL)ensureBufferPoolSupportsOutputWidth:(unsigned long long)arg1 outputHeight:(unsigned long long)arg2 ;
@end
