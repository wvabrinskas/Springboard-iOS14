/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIPinchGestureRecognizer.h>

@class PUValueFilter;

@interface PUPhotoPinchGestureRecognizer : UIPinchGestureRecognizer {

	CGPoint _initialTouchLocations[2];
	CGPoint _latestTouchLocations[2];
	BOOL _initialTouchLocationsSet;
	BOOL __touchesNeedUpdate;
	double _rotationHysteresisDegrees;
	PUValueFilter* __rotationFilter;
	CGRect _initialPinchRect;

}

@property (assign,setter=_setTouchesNeedUpdate:,nonatomic) BOOL _touchesNeedUpdate;                   //@synthesize _touchesNeedUpdate=__touchesNeedUpdate - In the implementation block
@property (setter=_setRotationFilter:,nonatomic,retain) PUValueFilter * _rotationFilter;              //@synthesize _rotationFilter=__rotationFilter - In the implementation block
@property (assign,nonatomic) double rotationHysteresisDegrees;                                        //@synthesize rotationHysteresisDegrees=_rotationHysteresisDegrees - In the implementation block
@property (assign,nonatomic) CGRect initialPinchRect;                                                 //@synthesize initialPinchRect=_initialPinchRect - In the implementation block
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(PUValueFilter *)_rotationFilter;
-(void)_updateIfNeeded;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)initialPinchRect;
-(CGPoint)adjustedInitialCenterInView:(id)arg1 ;
-(double)adjustedRotationInView:(id)arg1 ;
-(double)adjustedRotationVelocityInView:(id)arg1 ;
-(double)rotationHysteresisDegrees;
-(void)setRotationHysteresisDegrees:(double)arg1 ;
-(BOOL)_touchesNeedUpdate;
-(void)_setTouchesNeedUpdate:(BOOL)arg1 ;
-(void)_setRotationFilter:(id)arg1 ;
-(void)setInitialPinchRect:(CGRect)arg1 ;
-(double)adjustedScaleVelocityInView:(id)arg1 ;
-(CGPoint)adjustedTranslationVelocityInView:(id)arg1 ;
-(double)adjustedScaleInView:(id)arg1 ;
-(CGPoint)adjustedTranslationInView:(id)arg1 ;
@end
