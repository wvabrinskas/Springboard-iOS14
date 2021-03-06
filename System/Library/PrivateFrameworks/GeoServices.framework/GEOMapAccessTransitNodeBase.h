/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapTransitPoint.h>

@class NSString, GEOMapAccess;

@interface GEOMapAccessTransitNodeBase : NSObject <GEOMapTransitPoint> {

	GEOMapAccess* _map;
	shared_ptr<geo::MapNodeTransit>* _node;
	double _boundingRadius;
	SCD_Struct_GE36 _boundingRect;
	GEOCoarseLocationLatLng* _polygonPoints;
	long long _polygonPointsCount;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius;                               //@synthesize boundingRadius=_boundingRadius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE36 boundingRect;                        //@synthesize boundingRect=_boundingRect - In the implementation block
@property (nonatomic,readonly) GEOCoarseLocationLatLng* polygonPoints;              //@synthesize polygonPoints=_polygonPoints - In the implementation block
@property (nonatomic,readonly) long long polygonPointsCount;                        //@synthesize polygonPointsCount=_polygonPointsCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)internalName;
-(SCD_Struct_GE36)boundingRect;
-(GEOCoarseLocationLatLng)coordinate;
-(double)boundingRadius;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)distanceInMetersFrom:(GEOCoarseLocationLatLng)arg1 ;
-(GEOCoarseLocationLatLng*)polygonPoints;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)polygonPointsCount;
-(id)initWithMap:(id)arg1 node:(shared_ptr<geo::MapNodeTransit>*)arg2 ;
-(NSString *)description;
-(unsigned long long)transitID;
-(void)dealloc;
@end

