/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOMapItemStorage, NSString, GEOWaypointTyped, GEOLocation;

@interface GEOCompanionWaypoint : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOMapItemStorage* _mapItem;
	NSString* _searchString;
	GEOWaypointTyped* _waypointTyped;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isCurrentLocation;
	struct {
		unsigned has_isCurrentLocation : 1;
		unsigned read_mapItem : 1;
		unsigned read_searchString : 1;
		unsigned read_waypointTyped : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) GEOLocation * location; 
@property (nonatomic,readonly) BOOL hasMapItem; 
@property (nonatomic,retain) GEOMapItemStorage * mapItem; 
@property (nonatomic,readonly) BOOL hasWaypointTyped; 
@property (nonatomic,retain) GEOWaypointTyped * waypointTyped; 
@property (assign,nonatomic) BOOL hasIsCurrentLocation; 
@property (assign,nonatomic) BOOL isCurrentLocation; 
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString; 
+(BOOL)isValid:(id)arg1 ;
-(NSString *)searchString;
-(void)mergeFrom:(id)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(BOOL)hasIsCurrentLocation;
-(GEOLocation *)location;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setMapItem:(GEOMapItemStorage *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithComposedWaypoint:(id)arg1 ;
-(BOOL)hasSearchString;
-(id)description;
-(BOOL)isCurrentLocation;
-(BOOL)isEqual:(id)arg1 ;
-(GEOWaypointTyped *)waypointTyped;
-(void)setWaypointTyped:(GEOWaypointTyped *)arg1 ;
-(BOOL)hasWaypointTyped;
-(void)copyTo:(id)arg1 ;
-(GEOMapItemStorage *)mapItem;
-(id)initWithData:(id)arg1 ;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(void)setHasIsCurrentLocation:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasMapItem;
@end

