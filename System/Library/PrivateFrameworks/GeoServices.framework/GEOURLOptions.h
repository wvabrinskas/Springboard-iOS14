/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOURLCamera, GEOURLCenterSpan, NSString, GEOURLRouteHandle, GEOURLTimePoint;

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying> {

	PBDataReader* _reader;
	GEOURLCamera* _camera;
	GEOURLCenterSpan* _centerSpan;
	NSString* _referralIdentifier;
	GEOURLRouteHandle* _routeHandle;
	GEOURLTimePoint* _timePoint;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _mapType;
	int _transportType;
	int _userTrackingMode;
	BOOL _connectedToCar;
	BOOL _enableTraffic;
	struct {
		unsigned has_mapType : 1;
		unsigned has_transportType : 1;
		unsigned has_userTrackingMode : 1;
		unsigned has_connectedToCar : 1;
		unsigned has_enableTraffic : 1;
		unsigned read_camera : 1;
		unsigned read_centerSpan : 1;
		unsigned read_referralIdentifier : 1;
		unsigned read_routeHandle : 1;
		unsigned read_timePoint : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasEnableTraffic; 
@property (assign,nonatomic) BOOL enableTraffic; 
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (nonatomic,readonly) BOOL hasCenterSpan; 
@property (nonatomic,retain) GEOURLCenterSpan * centerSpan; 
@property (nonatomic,readonly) BOOL hasCamera; 
@property (nonatomic,retain) GEOURLCamera * camera; 
@property (nonatomic,readonly) BOOL hasReferralIdentifier; 
@property (nonatomic,retain) NSString * referralIdentifier; 
@property (assign,nonatomic) BOOL hasUserTrackingMode; 
@property (assign,nonatomic) int userTrackingMode; 
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) GEOURLRouteHandle * routeHandle; 
@property (nonatomic,readonly) BOOL hasTimePoint; 
@property (nonatomic,retain) GEOURLTimePoint * timePoint; 
@property (assign,nonatomic) BOOL hasConnectedToCar; 
@property (assign,nonatomic) BOOL connectedToCar; 
+(BOOL)isValid:(id)arg1 ;
-(GEOURLCamera *)camera;
-(void)setCamera:(GEOURLCamera *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(BOOL)hasMapType;
-(int)transportType;
-(id)init;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(id)jsonRepresentation;
-(int)StringAsTransportType:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(int)mapType;
-(void)setMapType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasCamera;
-(void)setUserTrackingMode:(int)arg1 ;
-(void)setHasEnableTraffic:(BOOL)arg1 ;
-(int)userTrackingMode;
-(void)setHasUserTrackingMode:(BOOL)arg1 ;
-(BOOL)hasUserTrackingMode;
-(id)userTrackingModeAsString:(int)arg1 ;
-(int)StringAsUserTrackingMode:(id)arg1 ;
-(void)setHasConnectedToCar:(BOOL)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(GEOURLCenterSpan *)centerSpan;
-(void)copyTo:(id)arg1 ;
-(void)setCenterSpan:(GEOURLCenterSpan *)arg1 ;
-(GEOURLTimePoint *)timePoint;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(void)setEnableTraffic:(BOOL)arg1 ;
-(void)setReferralIdentifier:(NSString *)arg1 ;
-(void)setRouteHandle:(GEOURLRouteHandle *)arg1 ;
-(void)setTimePoint:(GEOURLTimePoint *)arg1 ;
-(void)setConnectedToCar:(BOOL)arg1 ;
-(BOOL)hasEnableTraffic;
-(BOOL)hasCenterSpan;
-(BOOL)hasReferralIdentifier;
-(BOOL)hasRouteHandle;
-(BOOL)hasTimePoint;
-(BOOL)enableTraffic;
-(NSString *)referralIdentifier;
-(GEOURLRouteHandle *)routeHandle;
-(BOOL)hasConnectedToCar;
-(BOOL)connectedToCar;
-(id)mapTypeAsString:(int)arg1 ;
-(int)StringAsMapType:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)urlRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasMapType:(BOOL)arg1 ;
@end
