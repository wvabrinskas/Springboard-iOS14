/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVTColorPreset, AVTCoreModelColor;

@interface AVTCoreModelColorVariation : NSObject {

	AVTColorPreset* _colorPreset;
	AVTCoreModelColor* _color;

}

@property (nonatomic,readonly) AVTColorPreset * colorPreset;              //@synthesize colorPreset=_colorPreset - In the implementation block
@property (nonatomic,readonly) AVTCoreModelColor * color;                 //@synthesize color=_color - In the implementation block
-(unsigned long long)hash;
-(id)initWithColor:(id)arg1 colorPreset:(id)arg2 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(AVTCoreModelColor *)color;
-(AVTColorPreset *)colorPreset;
@end

