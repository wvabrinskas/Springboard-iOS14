/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSInputStream.h>

@protocol NSStreamDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSRunLoop, NSObject, NSMutableData;

@interface MRAVBufferedInputStream : NSInputStream {

	unsigned long long _status;
	id<NSStreamDelegate> _delegate;
	NSMutableDictionary* _properties;
	NSRunLoop* _scheduledRunLoop;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableData* _buffer;

}
-(void)open;
-(void)close;
-(id)initWithURL:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(BOOL)hasBytesAvailable;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)delegate;
-(id)propertyForKey:(id)arg1 ;
-(void)handleDataReceived:(id)arg1 ;
-(id)initWithFileAtPath:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(unsigned long long)streamStatus;
-(id)initWithData:(id)arg1 ;
-(void)notifyDelegateOfStreamEvent:(unsigned long long)arg1 ;
-(void)handleStreamDisconnect;
-(id)streamError;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
@end
