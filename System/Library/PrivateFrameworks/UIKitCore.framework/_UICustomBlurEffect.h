/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIBlurEffect.h>

@class UIColor;

@interface _UICustomBlurEffect : UIBlurEffect

@property (assign,nonatomic) double grayscaleTintLevel; 
@property (assign,nonatomic) double grayscaleTintAlpha; 
@property (assign,nonatomic) BOOL lightenGrayscaleWithSourceOver; 
@property (nonatomic,retain) UIColor * colorTint; 
@property (assign,nonatomic) double colorTintAlpha; 
@property (assign,nonatomic) double colorBurnTintLevel; 
@property (assign,nonatomic) double colorBurnTintAlpha; 
@property (assign,nonatomic) double darkeningTintAlpha; 
@property (assign,nonatomic) double darkeningTintHue; 
@property (assign,nonatomic) double darkeningTintSaturation; 
@property (assign,nonatomic) BOOL darkenWithSourceOver; 
@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double saturationDeltaFactor; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double zoom; 
+(id)effectWithStyle:(long long)arg1 ;
-(void)setZoom:(double)arg1 ;
-(double)zoom;
-(double)saturationDeltaFactor;
-(double)blurRadius;
-(void)setSaturationDeltaFactor:(double)arg1 ;
-(UIColor *)colorTint;
-(void)setBlurRadius:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setLightenGrayscaleWithSourceOver:(BOOL)arg1 ;
-(BOOL)lightenGrayscaleWithSourceOver;
-(void)setColorTint:(UIColor *)arg1 ;
-(void)setDarkeningTintSaturation:(double)arg1 ;
-(double)colorTintAlpha;
-(id)effectSettings;
-(void)setDarkeningTintAlpha:(double)arg1 ;
-(void)setColorBurnTintLevel:(double)arg1 ;
-(void)setColorBurnTintAlpha:(double)arg1 ;
-(void)setDarkenWithSourceOver:(BOOL)arg1 ;
-(double)darkeningTintHue;
-(void)setDarkeningTintHue:(double)arg1 ;
-(BOOL)darkenWithSourceOver;
-(double)darkeningTintSaturation;
-(void)setColorTintAlpha:(double)arg1 ;
-(double)grayscaleTintAlpha;
-(double)scale;
-(double)colorBurnTintAlpha;
-(double)darkeningTintAlpha;
-(void)setGrayscaleTintLevel:(double)arg1 ;
-(void)setGrayscaleTintAlpha:(double)arg1 ;
-(double)grayscaleTintLevel;
-(double)colorBurnTintLevel;
@end
