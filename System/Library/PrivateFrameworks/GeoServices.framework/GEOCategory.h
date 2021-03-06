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

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOCategory : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _alias;
	long long _geoOntologyId;
	NSMutableArray* _localizedNames;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _level;
	struct {
		unsigned has_geoOntologyId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_alias : 1;
		unsigned read_localizedNames : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * alias; 
@property (assign,nonatomic) int level; 
@property (assign,nonatomic) BOOL hasGeoOntologyId; 
@property (assign,nonatomic) long long geoOntologyId; 
@property (nonatomic,retain) NSMutableArray * localizedNames; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)localizedNamesType;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)localizedNames;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)alias;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)addLocalizedNames:(id)arg1 ;
-(id)initWithPlaceDataCategory:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)localizedNamesCount;
-(int)level;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(void)setAlias:(NSString *)arg1 ;
-(void)clearLocalizedNames;
-(void)setLocalizedNames:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setGeoOntologyId:(long long)arg1 ;
-(id)localizedNamesAtIndex:(unsigned long long)arg1 ;
-(long long)geoOntologyId;
-(void)setHasGeoOntologyId:(BOOL)arg1 ;
-(BOOL)hasGeoOntologyId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

