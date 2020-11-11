/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOTransitVehicleTime, NSString;

@interface GEOTransitVehicleInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _clusteredRouteLineArtworkIndexs;
	GEOTransitVehicleTime* _arrivalTime;
	GEOTransitVehicleTime* _departureTime;
	unsigned long long _tripMuid;
	NSString* _vehicleNumber;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _departureFrequencyMax;
	unsigned _departureFrequencyMin;
	unsigned _lineIndex;
	int _pickupDropoffType;
	unsigned _routeLineArtworkIndex;
	struct {
		unsigned has_tripMuid : 1;
		unsigned has_departureFrequencyMax : 1;
		unsigned has_departureFrequencyMin : 1;
		unsigned has_lineIndex : 1;
		unsigned has_pickupDropoffType : 1;
		unsigned has_routeLineArtworkIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_clusteredRouteLineArtworkIndexs : 1;
		unsigned read_arrivalTime : 1;
		unsigned read_departureTime : 1;
		unsigned read_vehicleNumber : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasArrivalTime; 
@property (nonatomic,retain) GEOTransitVehicleTime * arrivalTime; 
@property (nonatomic,readonly) BOOL hasDepartureTime; 
@property (nonatomic,retain) GEOTransitVehicleTime * departureTime; 
@property (assign,nonatomic) BOOL hasLineIndex; 
@property (assign,nonatomic) unsigned lineIndex; 
@property (assign,nonatomic) BOOL hasRouteLineArtworkIndex; 
@property (assign,nonatomic) unsigned routeLineArtworkIndex; 
@property (nonatomic,readonly) unsigned long long clusteredRouteLineArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* clusteredRouteLineArtworkIndexs; 
@property (assign,nonatomic) BOOL hasPickupDropoffType; 
@property (assign,nonatomic) int pickupDropoffType; 
@property (assign,nonatomic) BOOL hasDepartureFrequencyMin; 
@property (assign,nonatomic) unsigned departureFrequencyMin; 
@property (assign,nonatomic) BOOL hasDepartureFrequencyMax; 
@property (assign,nonatomic) unsigned departureFrequencyMax; 
@property (assign,nonatomic) BOOL hasTripMuid; 
@property (assign,nonatomic) unsigned long long tripMuid; 
@property (nonatomic,readonly) BOOL hasVehicleNumber; 
@property (nonatomic,retain) NSString * vehicleNumber; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(unsigned)lineIndex;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)tripMuid;
-(GEOTransitVehicleTime *)departureTime;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTripMuid:(unsigned long long)arg1 ;
-(void)setHasTripMuid:(BOOL)arg1 ;
-(BOOL)hasTripMuid;
-(void)setDepartureTime:(GEOTransitVehicleTime *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasDepartureTime;
-(id)initWithData:(id)arg1 ;
-(GEOTransitVehicleTime *)arrivalTime;
-(NSString *)vehicleNumber;
-(void)setArrivalTime:(GEOTransitVehicleTime *)arg1 ;
-(void)setLineIndex:(unsigned)arg1 ;
-(void)setRouteLineArtworkIndex:(unsigned)arg1 ;
-(void)addClusteredRouteLineArtworkIndex:(unsigned)arg1 ;
-(void)setPickupDropoffType:(int)arg1 ;
-(void)setDepartureFrequencyMin:(unsigned)arg1 ;
-(void)setDepartureFrequencyMax:(unsigned)arg1 ;
-(void)setVehicleNumber:(NSString *)arg1 ;
-(BOOL)hasArrivalTime;
-(unsigned long long)clusteredRouteLineArtworkIndexsCount;
-(void)clearClusteredRouteLineArtworkIndexs;
-(BOOL)hasLineIndex;
-(unsigned)clusteredRouteLineArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)setHasLineIndex:(BOOL)arg1 ;
-(unsigned)routeLineArtworkIndex;
-(void)setHasRouteLineArtworkIndex:(BOOL)arg1 ;
-(BOOL)hasRouteLineArtworkIndex;
-(unsigned*)clusteredRouteLineArtworkIndexs;
-(void)setClusteredRouteLineArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(int)pickupDropoffType;
-(void)setHasPickupDropoffType:(BOOL)arg1 ;
-(BOOL)hasPickupDropoffType;
-(id)pickupDropoffTypeAsString:(int)arg1 ;
-(int)StringAsPickupDropoffType:(id)arg1 ;
-(unsigned)departureFrequencyMin;
-(void)setHasDepartureFrequencyMin:(BOOL)arg1 ;
-(BOOL)hasDepartureFrequencyMin;
-(unsigned)departureFrequencyMax;
-(void)setHasDepartureFrequencyMax:(BOOL)arg1 ;
-(BOOL)hasDepartureFrequencyMax;
-(BOOL)hasVehicleNumber;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)dealloc;
@end
