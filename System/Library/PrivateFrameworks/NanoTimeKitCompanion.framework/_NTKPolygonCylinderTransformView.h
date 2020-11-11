/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableDictionary;

@interface _NTKPolygonCylinderTransformView : UIView {

	unsigned long long _numberOfFaces;
	double _interiorAngle;
	double _exteriorAngle;
	NSMutableDictionary* _faceViews;
	unsigned long long _numberOfVisibleFaces;
	double _faceDistanceToCenter;

}

@property (nonatomic,readonly) unsigned long long numberOfFaces;                     //@synthesize numberOfFaces=_numberOfFaces - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfVisibleFaces;              //@synthesize numberOfVisibleFaces=_numberOfVisibleFaces - In the implementation block
@property (nonatomic,readonly) double faceDistanceToCenter;                          //@synthesize faceDistanceToCenter=_faceDistanceToCenter - In the implementation block
@property (nonatomic,readonly) double rotationAnglePerFace; 
+(Class)layerClass;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)numberOfFaces;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithNumberOfFaces:(unsigned long long)arg1 ;
-(unsigned long long)numberOfVisibleFaces;
-(void)setView:(id)arg1 forFaceAtIndex:(unsigned long long)arg2 ;
-(id)viewForFaceAtIndex:(unsigned long long)arg1 ;
-(void)enumerateFaceViewsWithBlock:(/*^block*/id)arg1 ;
-(double)rotationAnglePerFace;
-(double)faceDistanceToCenter;
-(CATransform3D)_transformForFaceIndex:(unsigned long long)arg1 ;
@end
