/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPolyline.h>

@class MKRoutePolyline;

@interface MKRouteStepPolyline : MKPolyline {

	MKRoutePolyline* _fullRoute;

}
-(CLLocationCoordinate2D)coordinate;
-(id)_initWithRoute:(id)arg1 range:(NSRange)arg2 ;
-(void)dealloc;
@end

