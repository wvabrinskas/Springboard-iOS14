/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VFX/VFX-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface VFXCore.VFXCoreView : UIView {

	 displayClockHandle;
	 renderTargetHandle;
	 metalLayer;
	 colorPixelFormat;
	 depthStencilPixelFormat;
	 sampleCount;
	 entityManager;
	 paused;
	 sizeDirty;
	 drawableSize;
	 isTicking;
	 _currentDrawable;

}

@property (assign,nonatomic) CGRect frame; 
@property (retain,nonatomic) UIColor * backgroundColor; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)frame;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

