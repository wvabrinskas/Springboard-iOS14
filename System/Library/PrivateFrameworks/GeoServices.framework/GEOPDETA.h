/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEORouteTrafficDetail;

@interface GEOPDETA : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEORouteTrafficDetail* _routeTrafficDetail;
	unsigned _distance;
	unsigned _historicTravelTime;
	int _licensePlateRestrictionImpact;
	unsigned _time;
	int _transportType;
	struct {
		unsigned has_distance : 1;
		unsigned has_historicTravelTime : 1;
		unsigned has_licensePlateRestrictionImpact : 1;
		unsigned has_time : 1;
		unsigned has_transportType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTime; 
@property (assign,nonatomic) unsigned time; 
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (assign,nonatomic) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime; 
@property (nonatomic,readonly) BOOL hasRouteTrafficDetail; 
@property (nonatomic,retain) GEORouteTrafficDetail * routeTrafficDetail; 
@property (assign,nonatomic) BOOL hasLicensePlateRestrictionImpact; 
@property (assign,nonatomic) int licensePlateRestrictionImpact; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)setLicensePlateRestrictionImpact:(int)arg1 ;
-(int)licensePlateRestrictionImpact;
-(void)setHasLicensePlateRestrictionImpact:(BOOL)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(BOOL)hasLicensePlateRestrictionImpact;
-(id)licensePlateRestrictionImpactAsString:(int)arg1 ;
-(int)StringAsLicensePlateRestrictionImpact:(id)arg1 ;
-(int)transportType;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(id)jsonRepresentation;
-(int)StringAsTransportType:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(unsigned)distance;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)historicTravelTime;
-(void)copyTo:(id)arg1 ;
-(void)setTime:(unsigned)arg1 ;
-(BOOL)hasHistoricTravelTime;
-(PBUnknownFields *)unknownFields;
-(unsigned)time;
-(BOOL)hasTime;
-(BOOL)hasDistance;
-(void)writeTo:(id)arg1 ;
-(GEORouteTrafficDetail *)routeTrafficDetail;
-(void)setRouteTrafficDetail:(GEORouteTrafficDetail *)arg1 ;
-(BOOL)hasRouteTrafficDetail;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasHistoricTravelTime:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(void)setHasTime:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

