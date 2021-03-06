/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBatteryView.h>

@interface _UIStaticBatteryView : _UIBatteryView {

	long long _inflightBoltAnimationCount;

}
+(id)_batteryBodyImageWithSize:(CGSize)arg1 forScale:(double)arg2 batteryRect:(CGRect)arg3 cornerRadius:(double)arg4 lineWidth:(double)arg5 withBoltCutOutOfSize:(CGSize)arg6 inRect:(CGRect)arg7 boltFlipped:(BOOL)arg8 ;
+(id)_batteryPinImageWithSize:(CGSize)arg1 forScale:(double)arg2 complexPinPath:(BOOL)arg3 ;
+(id)_batteryBoltMaskImageWithSize:(CGSize)arg1 boltSize:(CGSize)arg2 forScale:(double)arg3 ;
+(id)_imageWithRenderedBezierPath:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 pathScaleFactor:(double)arg4 stroke:(BOOL)arg5 ;
+(id)_batteryFillImageWithSize:(CGSize)arg1 forScale:(double)arg2 cornerRadius:(double)arg3 ;
+(id)_batteryFillImageWithSize:(CGSize)arg1 forScale:(double)arg2 cornerRadius:(double)arg3 withBoltCutOutOfSize:(CGSize)arg4 inRect:(CGRect)arg5 boltFlipped:(BOOL)arg6 ;
+(id)_imageByPunchingImage:(id)arg1 inRect:(CGRect)arg2 flippedHorizontally:(BOOL)arg3 outOfImage:(id)arg4 inRect:(CGRect)arg5 size:(CGSize)arg6 scale:(double)arg7 ;
+(id)_renderedImageOfSize:(CGSize)arg1 scale:(double)arg2 withActions:(/*^block*/id)arg3 ;
+(id)_batteryBodyImageWithSize:(CGSize)arg1 forScale:(double)arg2 batteryRect:(CGRect)arg3 cornerRadius:(double)arg4 lineWidth:(double)arg5 ;
+(id)_batteryBoltImageWithSize:(CGSize)arg1 boltSize:(CGSize)arg2 forScale:(double)arg3 ;
-(double)_batteryBoltSmallScaleFactor;
-(CGRect)_boltRectForTraitCollection:(id)arg1 boltSize:(CGSize)arg2 ;
-(void)_didFinishAnimatingBoltToVisible:(BOOL)arg1 ;
-(double)_batteryBoltLargeScaleFactor;
-(void)_createBoltLayersWithSize:(CGSize)arg1 ;
-(CGSize)_boltPathSize;
-(void)_createFillLayer;
-(void)_willBeginAnimatingBoltToVisible:(BOOL)arg1 ;
-(double)_batteryPathScaleFactor;
-(void)_updateFillLayer;
-(CGRect)_updateBodyLayers;
-(void)_updateBodyColors;
-(void)_updateBatteryFillColor;
-(BOOL)_useImagesWithCutoutsForBolt;
-(void)_createBodyLayers;
@end

