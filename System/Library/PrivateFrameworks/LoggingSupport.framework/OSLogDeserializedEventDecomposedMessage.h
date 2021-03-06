/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LoggingSupport/OSLogEventDecomposedMessage.h>

@class NSDictionary, NSArray;

@interface OSLogDeserializedEventDecomposedMessage : OSLogEventDecomposedMessage {

	NSDictionary* _backingDict;
	NSArray* _segments;

}

@property (nonatomic,readonly) NSArray * segments;                      //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) NSDictionary * backingDict;              //@synthesize backingDict=_backingDict - In the implementation block
-(id)argumentAtIndex:(unsigned long long)arg1 ;
-(id)placeholderAtIndex:(unsigned long long)arg1 ;
-(id)literalPrefixAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)placeholderCount;
-(NSArray *)segments;
-(unsigned long long)state;
-(id)initWithDict:(id)arg1 metadata:(id)arg2 ;
-(NSDictionary *)backingDict;
@end

