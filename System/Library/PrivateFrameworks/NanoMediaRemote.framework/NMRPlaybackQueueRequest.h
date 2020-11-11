/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRPlaybackQueueRequestProtobuf, NSString;

@interface NMRPlaybackQueueRequest : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRPlaybackQueueRequestProtobuf* _protobuf;

}

@property (nonatomic,readonly) void* request; 
@property (nonatomic,readonly) void* playerPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void*)playerPath;
-(void*)request;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(id)initWithRequest:(void*)arg1 playerPath:(void*)arg2 ;
-(void)performWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
