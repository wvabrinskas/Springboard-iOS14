/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _direction;
	NSString* _headsign;
	unsigned long long _lineId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_lineId : 1;
		unsigned read_direction : 1;
		unsigned read_headsign : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLineId; 
@property (assign,nonatomic) unsigned long long lineId; 
@property (nonatomic,readonly) BOOL hasDirection; 
@property (nonatomic,retain) NSString * direction; 
@property (nonatomic,readonly) BOOL hasHeadsign; 
@property (nonatomic,retain) NSString * headsign; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)lineId;
-(NSString *)direction;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDirection:(NSString *)arg1 ;
-(BOOL)hasLineId;
-(BOOL)hasHeadsign;
-(id)dictionaryRepresentation;
-(BOOL)hasDirection;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)headsign;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLineId:(unsigned long long)arg1 ;
-(void)setHeadsign:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasLineId:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
