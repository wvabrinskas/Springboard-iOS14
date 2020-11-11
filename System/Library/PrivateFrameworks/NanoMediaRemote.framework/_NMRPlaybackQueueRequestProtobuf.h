/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _NMRPlaybackQueueRequestProtobuf : PBCodable <NSCopying> {

	NSData* _playerPath;
	NSData* _request;

}

@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) NSData * request;                  //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerPath; 
@property (nonatomic,retain) NSData * playerPath;               //@synthesize playerPath=_playerPath - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setPlayerPath:(NSData *)arg1 ;
-(NSData *)playerPath;
-(NSData *)request;
-(unsigned long long)hash;
-(void)setRequest:(NSData *)arg1 ;
-(BOOL)hasRequest;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasPlayerPath;
@end
