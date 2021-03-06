/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOEnrouteNotice, NSArray, NSString, GEOComposedTrafficCamera, GEOComposedTrafficSignal, GEOComposedRouteAnnotation, GEOLatLng;

@interface GEOComposedEnrouteNotice : NSObject <NSSecureCoding> {

	GEOEnrouteNotice* _enrouteNotice;
	NSArray* _guidanceEvents;
	SCD_Struct_GE87 _routeCoordinate;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) GEOComposedTrafficCamera * trafficCamera; 
@property (nonatomic,readonly) GEOComposedTrafficSignal * trafficSignal; 
@property (nonatomic,readonly) GEOComposedRouteAnnotation * routeAnnotation; 
@property (nonatomic,readonly) BOOL hasHighlightDistance; 
@property (nonatomic,readonly) unsigned highlightDistance; 
@property (nonatomic,readonly) BOOL hasGroupIdentifier; 
@property (nonatomic,readonly) unsigned groupIdentifier; 
@property (nonatomic,readonly) BOOL hasGroupItemHorizontalDisplayOrder; 
@property (nonatomic,readonly) unsigned groupItemHorizontalDisplayOrder; 
@property (nonatomic,readonly) BOOL hasGroupItemVerticalDisplayOrder; 
@property (nonatomic,readonly) unsigned groupItemVerticalDisplayOrder; 
@property (nonatomic,readonly) BOOL hasPriority; 
@property (nonatomic,readonly) unsigned priority; 
@property (nonatomic,readonly) NSArray * guidanceEvents;                                  //@synthesize guidanceEvents=_guidanceEvents - In the implementation block
@property (nonatomic,readonly) GEOLatLng * position; 
@property (nonatomic,readonly) SCD_Struct_GE87 routeCoordinate;                           //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)groupIdentifier;
-(unsigned)groupItemVerticalDisplayOrder;
-(unsigned)groupItemHorizontalDisplayOrder;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)hasPriority;
-(id)description;
-(id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 onRoute:(id)arg4 ;
-(NSArray *)guidanceEvents;
-(BOOL)hasHighlightDistance;
-(unsigned)highlightDistance;
-(BOOL)hasGroupItemHorizontalDisplayOrder;
-(BOOL)hasGroupItemVerticalDisplayOrder;
-(GEOComposedTrafficSignal *)trafficSignal;
-(id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 onRoute:(id)arg4 withPosition:(id)arg5 ;
-(GEOComposedTrafficCamera *)trafficCamera;
-(id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 onRoute:(id)arg4 withPolylineCoordinate:(SCD_Struct_GE87)arg5 ;
-(GEOComposedRouteAnnotation *)routeAnnotation;
-(id)titleFormatForLocation:(id)arg1 ;
-(id)detailFormatForLocation:(id)arg1 ;
-(BOOL)hasGroupIdentifier;
-(SCD_Struct_GE87)routeCoordinate;
-(unsigned)priority;
-(id)initWithCoder:(id)arg1 ;
@end

