/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEORPTransitLineTileInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	unsigned long long _transitLineMuid;
	NSString* _transitLineName;
	NSString* _transitSystemName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_transitLineMuid : 1;
		unsigned read_transitLineName : 1;
		unsigned read_transitSystemName : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTransitLineMuid; 
@property (assign,nonatomic) unsigned long long transitLineMuid; 
@property (nonatomic,readonly) BOOL hasTransitLineName; 
@property (nonatomic,retain) NSString * transitLineName; 
@property (nonatomic,readonly) BOOL hasTransitSystemName; 
@property (nonatomic,retain) NSString * transitSystemName; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)transitSystemName;
-(BOOL)hasTransitSystemName;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)transitLineMuid;
-(void)setTransitLineMuid:(unsigned long long)arg1 ;
-(BOOL)hasTransitLineMuid;
-(void)copyTo:(id)arg1 ;
-(void)setTransitSystemName:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasTransitLineMuid:(BOOL)arg1 ;
-(NSString *)transitLineName;
-(void)setTransitLineName:(NSString *)arg1 ;
-(BOOL)hasTransitLineName;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

