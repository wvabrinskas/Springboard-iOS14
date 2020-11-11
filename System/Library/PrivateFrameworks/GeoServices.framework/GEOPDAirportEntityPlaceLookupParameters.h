/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDAirportEntityPlaceLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _airportCode;
	NSString* _gateCode;
	NSString* _terminalCode;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_airportCode : 1;
		unsigned read_gateCode : 1;
		unsigned read_terminalCode : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAirportCode; 
@property (nonatomic,retain) NSString * airportCode; 
@property (nonatomic,readonly) BOOL hasTerminalCode; 
@property (nonatomic,retain) NSString * terminalCode; 
@property (nonatomic,readonly) BOOL hasGateCode; 
@property (nonatomic,retain) NSString * gateCode; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)gateCode;
-(unsigned long long)hash;
-(NSString *)airportCode;
-(NSString *)terminalCode;
-(void)setAirportCode:(NSString *)arg1 ;
-(void)setTerminalCode:(NSString *)arg1 ;
-(void)setGateCode:(NSString *)arg1 ;
-(BOOL)hasAirportCode;
-(BOOL)hasGateCode;
-(BOOL)hasTerminalCode;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
