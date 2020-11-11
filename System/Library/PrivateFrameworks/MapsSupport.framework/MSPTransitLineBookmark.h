/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, MSPTransitStorageLine;

@interface MSPTransitLineBookmark : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	MSPTransitStorageLine* _transitLineStorage;

}

@property (nonatomic,readonly) BOOL hasTransitLineStorage; 
@property (nonatomic,retain) MSPTransitStorageLine * transitLineStorage;              //@synthesize transitLineStorage=_transitLineStorage - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(MSPTransitStorageLine *)transitLineStorage;
-(void)setTransitLineStorage:(MSPTransitStorageLine *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasTransitLineStorage;
@end
