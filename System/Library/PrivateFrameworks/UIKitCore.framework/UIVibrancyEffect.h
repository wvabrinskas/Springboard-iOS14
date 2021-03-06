/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIVisualEffect.h>

@class _UIVibrancyEffectImpl;

@interface UIVibrancyEffect : UIVisualEffect {

	_UIVibrancyEffectImpl* _impl;

}

@property (getter=_vibrancyStyle,nonatomic,readonly) long long _vibrancyStyle; 
+(id)darkVibrantEffectWithDodgeColor:(id)arg1 lightenColor:(id)arg2 compositingColor:(id)arg3 ;
+(id)lightVibrantEffectWithBurnColor:(id)arg1 darkenColor:(id)arg2 compositingColor:(id)arg3 ;
+(id)_lightVibrantEffectWithDarkenColor:(id)arg1 burnColor:(id)arg2 compositingColor:(id)arg3 ;
+(id)_darkVibrantEffectWithLightenColor:(id)arg1 dodgeColor:(id)arg2 compositingColor:(id)arg3 ;
+(id)_vibrancyEntryWithType:(id)arg1 inputColor1:(id)arg2 inputColor2:(id)arg3 inputReversed:(BOOL)arg4 ;
+(id)_vibrantEffectForLightMaterial:(id)arg1 darkMaterial:(id)arg2 vibrancyStyle:(long long)arg3 ;
+(id)vibrantEffectWithCompositingMode:(long long)arg1 compositingColor:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)_vibrantEffectWithCAColorMatrix:(CAColorMatrix)arg1 alpha:(double)arg2 ;
+(id)_effectWithStyle:(long long)arg1 ignoreSimpleVibrancy:(BOOL)arg2 ;
+(id)_effectForBlurEffect:(id)arg1 vibrancyStyle:(long long)arg2 ;
+(id)effectForBlurEffect:(id)arg1 style:(long long)arg2 ;
+(id)vibrantMediumShadowEffect;
+(id)vibrantChromeShadowEffect;
+(id)effectForBlurEffect:(id)arg1 ;
+(id)_vibrantShadowEffect;
+(id)vibrantHeavyShadowEffect;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)_effectReplacingTintColor:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(id)_reduceTransparencyEffectConfig;
-(id)effectConfigForReducedTransperancy:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isATVStyle;
-(id)_initWithImplementation:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)effectForUserInterfaceStyle:(long long)arg1 ;
-(id)effectConfig;
-(BOOL)_isAutomaticStyle;
-(id)initWithCoder:(id)arg1 ;
-(long long)_vibrancyStyle;
-(id)effectConfigForQuality:(long long)arg1 ;
-(long long)_blurStyle;
-(long long)_expectedUsage;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

