/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol GEOMapTransitPoint <NSObject>
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE36 boundingRect; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@required
-(NSString *)internalName;
-(SCD_Struct_GE36)boundingRect;
-(GEOCoarseLocationLatLng)coordinate;
-(double)boundingRadius;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(double)distanceInMetersFrom:(GEOCoarseLocationLatLng)arg1;
-(GEOCoarseLocationLatLng*)polygonPoints;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1;
-(long long)polygonPointsCount;
-(unsigned long long)transitID;

@end

