/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOMapRegion : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _eastLng;
	double _northLat;
	double _southLat;
	NSMutableArray* _vertexs;
	double _westLng;
	int _mapRegionSourceType;
	struct {
		unsigned has_eastLng : 1;
		unsigned has_northLat : 1;
		unsigned has_southLat : 1;
		unsigned has_westLng : 1;
		unsigned has_mapRegionSourceType : 1;
	}  _flags;

}

@property (nonatomic,readonly) double centerLat; 
@property (nonatomic,readonly) double centerLng; 
@property (nonatomic,readonly) double spanLat; 
@property (nonatomic,readonly) double spanLng; 
@property (nonatomic,readonly) BOOL hasRectangleVertices; 
@property (assign,nonatomic) BOOL hasSouthLat; 
@property (assign,nonatomic) double southLat; 
@property (assign,nonatomic) BOOL hasWestLng; 
@property (assign,nonatomic) double westLng; 
@property (assign,nonatomic) BOOL hasNorthLat; 
@property (assign,nonatomic) double northLat; 
@property (assign,nonatomic) BOOL hasEastLng; 
@property (assign,nonatomic) double eastLng; 
@property (nonatomic,retain) NSMutableArray * vertexs; 
@property (assign,nonatomic) BOOL hasMapRegionSourceType; 
@property (assign,nonatomic) int mapRegionSourceType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)vertexType;
+(id)_geo_mapRegionForGEOCoordinateRegion:(SCD_Struct_GE36)arg1 ;
-(id)_initWithCLRegion:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)containsCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(id)vertexAtIndex:(unsigned long long)arg1 ;
-(id)jsonRepresentation;
-(void)setMapRect:(SCD_Struct_GE36)arg1 ;
-(unsigned long long)hash;
-(id)initWithMapRect:(SCD_Struct_GE36)arg1 ;
-(double)westLng;
-(double)eastLng;
-(NSMutableArray *)vertexs;
-(double)spanLat;
-(double)spanLng;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)intersectsMapRect:(SCD_Struct_GE36)arg1 ;
-(BOOL)containsCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 ;
-(BOOL)containsMapRect:(SCD_Struct_GE36)arg1 ;
-(id)intersectionsOnPolyline:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(double)southLat;
-(double)northLat;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoordinateRegion:(SCD_Struct_GE36)arg1 ;
-(BOOL)containsRegion:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addVertex:(id)arg1 ;
-(double)centerLat;
-(double)centerLng;
-(PBUnknownFields *)unknownFields;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(void)setMapRegionSourceType:(int)arg1 ;
-(void)clearVertexs;
-(void)setHasSouthLat:(BOOL)arg1 ;
-(void)setHasWestLng:(BOOL)arg1 ;
-(void)setHasNorthLat:(BOOL)arg1 ;
-(void)setHasEastLng:(BOOL)arg1 ;
-(void)setVertexs:(NSMutableArray *)arg1 ;
-(int)mapRegionSourceType;
-(void)setHasMapRegionSourceType:(BOOL)arg1 ;
-(BOOL)hasMapRegionSourceType;
-(id)mapRegionSourceTypeAsString:(int)arg1 ;
-(int)StringAsMapRegionSourceType:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)intersectsRegion:(id)arg1 ;
-(BOOL)hasEastLng;
-(BOOL)hasWestLng;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSouthLat:(double)arg1 ;
-(void)setWestLng:(double)arg1 ;
-(void)setNorthLat:(double)arg1 ;
-(void)setEastLng:(double)arg1 ;
-(BOOL)hasRectangleVertices;
-(unsigned long long)vertexsCount;
-(BOOL)hasNorthLat;
-(BOOL)hasSouthLat;
-(id)initWithRadialPlace:(id)arg1 ;
-(id)coordinates;
-(BOOL)isValid;
-(void)readAll:(BOOL)arg1 ;
@end

