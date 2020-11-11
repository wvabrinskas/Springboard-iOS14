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

@class PBDataReader, NSData, GEOTransitRouteUpdate;

@interface GEOCompanionRouteUpdate : PBCodable <NSCopying> {

	PBDataReader* _reader;
	double _lastUpdated;
	NSData* _routeID;
	GEOTransitRouteUpdate* _transitRouteUpdate;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _type;
	struct {
		unsigned has_lastUpdated : 1;
		unsigned has_type : 1;
		unsigned read_routeID : 1;
		unsigned read_transitRouteUpdate : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasLastUpdated; 
@property (assign,nonatomic) double lastUpdated; 
@property (nonatomic,readonly) BOOL hasTransitRouteUpdate; 
@property (nonatomic,retain) GEOTransitRouteUpdate * transitRouteUpdate; 
+(BOOL)isValid:(id)arg1 ;
-(void)setLastUpdated:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)routeID;
-(id)typeAsString:(int)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithTransitRouteUpdate:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(GEOTransitRouteUpdate *)transitRouteUpdate;
-(void)setTransitRouteUpdate:(GEOTransitRouteUpdate *)arg1 ;
-(void)setHasLastUpdated:(BOOL)arg1 ;
-(BOOL)hasLastUpdated;
-(BOOL)hasTransitRouteUpdate;
-(void)setRouteID:(NSData *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(int)type;
-(double)lastUpdated;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasRouteID;
@end
