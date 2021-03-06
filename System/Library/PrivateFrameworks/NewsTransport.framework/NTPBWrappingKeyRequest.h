/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBWrappingKeyRequest : PBRequest <NSCopying> {

	NSMutableArray* _wrappingKeyIds;

}

@property (nonatomic,retain) NSMutableArray * wrappingKeyIds;              //@synthesize wrappingKeyIds=_wrappingKeyIds - In the implementation block
+(Class)wrappingKeyIdsType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)setWrappingKeyIds:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(void)addWrappingKeyIds:(id)arg1 ;
-(void)clearWrappingKeyIds;
-(unsigned long long)wrappingKeyIdsCount;
-(id)wrappingKeyIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)wrappingKeyIds;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

