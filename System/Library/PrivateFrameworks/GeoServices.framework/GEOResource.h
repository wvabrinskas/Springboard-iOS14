/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSData, NSString, NSMutableArray;

@interface GEOResource : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _regions;
	unsigned long long _regionsCount;
	unsigned long long _regionsSpace;
	NSData* _checksum;
	NSString* _filename;
	NSMutableArray* _filters;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _alternateResourceURLIndex;
	int _connectionType;
	unsigned _preferWiFiAllowedStaleThreshold;
	int _resourceType;
	unsigned _timeToLiveSeconds;
	int _updateMethod;
	int _validationMethod;
	struct {
		unsigned has_alternateResourceURLIndex : 1;
		unsigned has_connectionType : 1;
		unsigned has_preferWiFiAllowedStaleThreshold : 1;
		unsigned has_resourceType : 1;
		unsigned has_timeToLiveSeconds : 1;
		unsigned has_updateMethod : 1;
		unsigned has_validationMethod : 1;
		unsigned read_unknownFields : 1;
		unsigned read_regions : 1;
		unsigned read_checksum : 1;
		unsigned read_filename : 1;
		unsigned read_filters : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResourceType; 
@property (assign,nonatomic) int resourceType; 
@property (nonatomic,readonly) BOOL hasFilename; 
@property (nonatomic,retain) NSString * filename; 
@property (nonatomic,readonly) BOOL hasChecksum; 
@property (nonatomic,retain) NSData * checksum; 
@property (nonatomic,readonly) unsigned long long regionsCount; 
@property (nonatomic,readonly) GEOTileSetRegion* regions; 
@property (nonatomic,retain) NSMutableArray * filters; 
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) int connectionType; 
@property (assign,nonatomic) BOOL hasPreferWiFiAllowedStaleThreshold; 
@property (assign,nonatomic) unsigned preferWiFiAllowedStaleThreshold; 
@property (assign,nonatomic) BOOL hasValidationMethod; 
@property (assign,nonatomic) int validationMethod; 
@property (assign,nonatomic) BOOL hasAlternateResourceURLIndex; 
@property (assign,nonatomic) unsigned alternateResourceURLIndex; 
@property (assign,nonatomic) BOOL hasUpdateMethod; 
@property (assign,nonatomic) int updateMethod; 
@property (assign,nonatomic) BOOL hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)filterType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setConnectionType:(int)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(void)setHasTimeToLiveSeconds:(BOOL)arg1 ;
-(NSMutableArray *)filters;
-(BOOL)hasTimeToLiveSeconds;
-(int)connectionType;
-(void)clearFilters;
-(id)init;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasAlternateResourceURLIndex;
-(BOOL)hasConnectionType;
-(id)jsonRepresentation;
-(unsigned)timeToLiveSeconds;
-(void)setAlternateResourceURLIndex:(unsigned)arg1 ;
-(BOOL)hasResourceType;
-(unsigned long long)hash;
-(void)clearRegions;
-(void)setUpdateMethod:(int)arg1 ;
-(id)resourceTypeAsString:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)regionsCount;
-(void)setPreferWiFiAllowedStaleThreshold:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)alternateResourceURLIndex;
-(NSData *)checksum;
-(int)StringAsUpdateMethod:(id)arg1 ;
-(void)setChecksum:(NSData *)arg1 ;
-(void)setHasValidationMethod:(BOOL)arg1 ;
-(int)validationMethod;
-(BOOL)hasFilename;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)filtersCount;
-(NSString *)filename;
-(GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)hasPreferWiFiAllowedStaleThreshold;
-(BOOL)isEqual:(id)arg1 ;
-(void)addFilter:(id)arg1 ;
-(id)connectionTypeAsString:(int)arg1 ;
-(BOOL)hasChecksum;
-(void)setFilename:(NSString *)arg1 ;
-(id)updateMethodAsString:(int)arg1 ;
-(void)setHasUpdateMethod:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)StringAsConnectionType:(id)arg1 ;
-(void)addRegion:(GEOTileSetRegion)arg1 ;
-(int)resourceType;
-(void)setValidationMethod:(int)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setResourceType:(int)arg1 ;
-(int)updateMethod;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasUpdateMethod;
-(void)setHasResourceType:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasPreferWiFiAllowedStaleThreshold:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasAlternateResourceURLIndex:(BOOL)arg1 ;
-(unsigned)preferWiFiAllowedStaleThreshold;
-(int)StringAsResourceType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)validationMethodAsString:(int)arg1 ;
-(BOOL)_geo_isRelevantForScales:(id)arg1 scenarios:(id)arg2 ;
-(void)readAll:(BOOL)arg1 ;
-(int)StringAsValidationMethod:(id)arg1 ;
-(BOOL)hasValidationMethod;
-(void)dealloc;
-(GEOTileSetRegion*)regions;
@end

