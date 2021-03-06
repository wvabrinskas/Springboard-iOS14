/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTSettings.h>

@interface _UIActivityIndicatorSettings : PTSettings {

	BOOL _customColor;
	double _fullLoopDuration;
	double _redValue;
	double _greenValue;
	double _blueValue;
	double _alphaValue;

}

@property (assign,nonatomic) double fullLoopDuration;              //@synthesize fullLoopDuration=_fullLoopDuration - In the implementation block
@property (assign,nonatomic) BOOL customColor;                     //@synthesize customColor=_customColor - In the implementation block
@property (assign,nonatomic) double redValue;                      //@synthesize redValue=_redValue - In the implementation block
@property (assign,nonatomic) double greenValue;                    //@synthesize greenValue=_greenValue - In the implementation block
@property (assign,nonatomic) double blueValue;                     //@synthesize blueValue=_blueValue - In the implementation block
@property (assign,nonatomic) double alphaValue;                    //@synthesize alphaValue=_alphaValue - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)redValue;
-(BOOL)customColor;
-(double)greenValue;
-(double)alphaValue;
-(void)setCustomColor:(BOOL)arg1 ;
-(void)setGreenValue:(double)arg1 ;
-(double)blueValue;
-(double)fullLoopDuration;
-(void)setAlphaValue:(double)arg1 ;
-(void)setFullLoopDuration:(double)arg1 ;
-(void)setRedValue:(double)arg1 ;
-(void)setBlueValue:(double)arg1 ;
@end

