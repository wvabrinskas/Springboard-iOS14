/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <VectorKit/VKAnchorWrapper.h>

@class MKAnnotationView;

@interface _MKAnnotationViewAnchor : VKAnchorWrapper {

	MKAnnotationView* _annotationView;

}

@property (assign,nonatomic) MKAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(CGSize)coordinate;
-(MKAnnotationView *)annotationView;
-(double)pointOffsetForDistanceOffset:(double)arg1 ;
-(CGPoint)pointInLayer:(id)arg1 bound:(CGRect)arg2 ;
@end

