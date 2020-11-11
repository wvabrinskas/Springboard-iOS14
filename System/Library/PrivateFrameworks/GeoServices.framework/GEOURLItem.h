/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOMapItemStorage, GEOPlace;

@interface GEOURLItem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOMapItemStorage* _mapItemStorage;
	GEOPlace* _place;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _currentLocation;
	struct {
		unsigned has_currentLocation : 1;
		unsigned read_mapItemStorage : 1;
		unsigned read_place : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPlace * place; 
@property (assign,nonatomic) BOOL hasCurrentLocation; 
@property (assign,nonatomic) BOOL currentLocation; 
@property (nonatomic,readonly) BOOL hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOPlace *)place;
-(BOOL)currentLocation;
-(void)setCurrentLocation:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setMapItem:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPlace;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(void)setHasCurrentLocation:(BOOL)arg1 ;
-(BOOL)hasCurrentLocation;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)mapItem;
-(void)setPlace:(GEOPlace *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOMapItemStorage *)mapItemStorage;
-(BOOL)hasMapItemStorage;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
