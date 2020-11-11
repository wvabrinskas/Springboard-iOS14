/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NTKZeudleColorPalette;
@interface NTKZeudleComplicationBackgroundView : UIView {

	unsigned long long _style;
	id<NTKZeudleColorPalette> _palette;
	CGRect _contentFrame;

}

@property (assign,nonatomic) CGRect contentFrame;                            //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) unsigned long long style;                       //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) id<NTKZeudleColorPalette> palette;              //@synthesize palette=_palette - In the implementation block
-(void)setContentFrame:(CGRect)arg1 ;
-(CGRect)contentFrame;
-(id<NTKZeudleColorPalette>)palette;
-(void)setPalette:(id<NTKZeudleColorPalette>)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 ;
-(void)applyStyleChange;
@end
