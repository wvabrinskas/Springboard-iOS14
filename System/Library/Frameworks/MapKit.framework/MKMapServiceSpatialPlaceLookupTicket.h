/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class GEOMapRegion;


@protocol MKMapServiceSpatialPlaceLookupTicket <NSObject>
@property (nonatomic,readonly) GEOMapRegion * boundingRegion; 
@required
-(GEOMapRegion *)boundingRegion;
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2;
-(void)cancel;

@end

