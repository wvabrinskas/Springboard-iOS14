/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapRegion, GEOLocation, GEOComposedWaypoint, GEODirectionsRequestFeedback, GEORouteAttributes, NSString;

@interface MNDirectionsRequestDetails : PBCodable <NSCopying> {

	GEOMapRegion* _currentMapRegion;
	GEOLocation* _currentUserLocation;
	GEOComposedWaypoint* _destination;
	GEODirectionsRequestFeedback* _directionsRequestFeedback;
	unsigned _maxRouteCount;
	GEOComposedWaypoint* _origin;
	GEORouteAttributes* _routeAttributes;
	NSString* _tracePath;
	SCD_Struct_MN18 _has;

}

@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOComposedWaypoint * origin;                                          //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOComposedWaypoint * destination;                                     //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                                  //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRouteCount; 
@property (assign,nonatomic) unsigned maxRouteCount;                                                //@synthesize maxRouteCount=_maxRouteCount - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation;                                     //@synthesize currentUserLocation=_currentUserLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentMapRegion; 
@property (nonatomic,retain) GEOMapRegion * currentMapRegion;                                       //@synthesize currentMapRegion=_currentMapRegion - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsRequestFeedback; 
@property (nonatomic,retain) GEODirectionsRequestFeedback * directionsRequestFeedback;              //@synthesize directionsRequestFeedback=_directionsRequestFeedback - In the implementation block
@property (nonatomic,readonly) BOOL hasTracePath; 
@property (nonatomic,retain) NSString * tracePath;                                                  //@synthesize tracePath=_tracePath - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasOrigin;
-(GEORouteAttributes *)routeAttributes;
-(GEOComposedWaypoint *)origin;
-(GEOMapRegion *)currentMapRegion;
-(void)setOrigin:(GEOComposedWaypoint *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasRouteAttributes;
-(GEOComposedWaypoint *)destination;
-(id)dictionaryRepresentation;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTracePath:(NSString *)arg1 ;
-(BOOL)hasDestination;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(NSString *)tracePath;
-(GEOLocation *)currentUserLocation;
-(BOOL)hasCurrentMapRegion;
-(BOOL)hasCurrentUserLocation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCurrentMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasTracePath;
-(GEODirectionsRequestFeedback *)directionsRequestFeedback;
-(unsigned)maxRouteCount;
-(void)setMaxRouteCount:(unsigned)arg1 ;
-(void)setDirectionsRequestFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(void)setHasMaxRouteCount:(BOOL)arg1 ;
-(BOOL)hasMaxRouteCount;
-(BOOL)hasDirectionsRequestFeedback;
@end
