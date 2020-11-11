/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_MKMotionEffectDelegate.h>

@class MKAnnotationView;

@interface MKCalloutView : UIView <_MKMotionEffectDelegate> {

	BOOL _parallaxEnabled;
	MKAnnotationView* _annotationView;

}

@property (nonatomic,__weak,readonly) MKAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
@property (nonatomic,readonly) long long anchorPosition; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (nonatomic,readonly) BOOL hasPendingVisibility; 
@property (assign,nonatomic) BOOL parallaxEnabled;                                    //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
-(BOOL)isVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)parallaxEnabled;
-(MKAnnotationView *)annotationView;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAnnotationView:(id)arg1 ;
-(void)annotationViewFrameDidChange;
-(void)motionEffectDidUpdate:(id)arg1 ;
-(BOOL)hasPendingVisibility;
-(void)showAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)anchorPosition;
@end
