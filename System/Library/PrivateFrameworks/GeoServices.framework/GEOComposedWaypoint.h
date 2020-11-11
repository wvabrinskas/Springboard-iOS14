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

@class PBDataReader, GEOLatLng, GEOMapItemStorage, GEOWaypointTyped;

@interface GEOComposedWaypoint : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOLatLng* _latLng;
	GEOMapItemStorage* _mapItemStorage;
	GEOWaypointTyped* _waypoint;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_latLng : 1;
		unsigned read_mapItemStorage : 1;
		unsigned read_waypoint : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasWaypoint; 
@property (nonatomic,retain) GEOWaypointTyped * waypoint; 
@property (nonatomic,readonly) BOOL hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage; 
@property (nonatomic,readonly) BOOL hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng; 
+(id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 completionHandler:(/*^block*/id)arg5 networkActivityHandler:(/*^block*/id)arg6 ;
+(id)composedWaypointForIncompleteMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForIdentifier:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 completionHandler:(/*^block*/id)arg5 networkActivityHandler:(/*^block*/id)arg6 ;
+(id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(/*^block*/id)arg5 networkActivityHandler:(/*^block*/id)arg6 ;
+(id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 clientResolvedCompletionHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 networkActivityHandler:(/*^block*/id)arg7 ;
+(id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(/*^block*/id)arg5 networkActivityHandler:(/*^block*/id)arg6 ;
+(id)composedWaypointForAddressString:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForTransitID:(unsigned long long)arg1 coordinate:(GEOCoarseLocationLatLng)arg2 isCurrentLocation:(BOOL)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(/*^block*/id)arg6 networkActivityHandler:(/*^block*/id)arg7 ;
+(id)composedWaypointForID:(unsigned long long)arg1 resultsProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(/*^block*/id)arg6 networkActivityHandler:(/*^block*/id)arg7 ;
+(BOOL)isValid:(id)arg1 ;
+(void)composedWaypointForMapServiceResponse:(id)arg1 clientAttributes:(id)arg2 error:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 completionHandler:(/*^block*/id)arg3 networkActivityHandler:(/*^block*/id)arg4 ;
+(id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
+(id)composedWaypointForWaypointTyped:(id)arg1 completionHandler:(/*^block*/id)arg2 networkActivityHandler:(/*^block*/id)arg3 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)muid;
-(id)timezone;
-(id)init;
-(id)jsonRepresentation;
-(id)initWithLocation:(id)arg1 isCurrentLocation:(BOOL)arg2 ;
-(SCD_Struct_GE98)coordinate;
-(unsigned long long)hash;
-(id)chargingInfo;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithCompanionWaypoint:(id)arg1 ;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(id)name;
-(BOOL)hasWaypoint;
-(GEOLatLng *)latLng;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(void)setWaypoint:(GEOWaypointTyped *)arg1 ;
-(GEOWaypointTyped *)waypoint;
-(id)description;
-(double)distanceToWaypoint:(id)arg1 ;
-(BOOL)isCurrentLocation;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isSameAs:(id)arg1 comparisonCriteria:(unsigned long long)arg2 ;
-(id)_muidCandidatesForComparison;
-(id)_locationCandidatesForComparison;
-(id)_addressCandidatesForComparison;
-(id)_regionCandidatesForContainment;
-(void)copyTo:(id)arg1 ;
-(id)artwork;
-(BOOL)hasLatLng;
-(id)initWithData:(id)arg1 ;
-(BOOL)isSameAs:(id)arg1 ;
-(id)geoMapItem;
-(GEOMapItemStorage *)mapItemStorage;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(BOOL)hasMapItemStorage;
-(id)styleAttributes;
-(void)writeTo:(id)arg1 ;
-(id)bestLatLng;
-(BOOL)isLocationWaypointType;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
