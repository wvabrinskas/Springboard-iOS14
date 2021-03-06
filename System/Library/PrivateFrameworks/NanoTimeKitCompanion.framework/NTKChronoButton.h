/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, UIColor;

@interface NTKChronoButton : UIControl {

	UIImageView* _ringView;
	UIImageView* _fillView;
	CGPoint _originalCenter;
	UIColor* _color;
	UIColor* _swapColor;
	UIColor* _highlightColor;
	UIColor* _ringColor;
	UIColor* _ringSwapColor;
	UIEdgeInsets _touchEdgeInsets;

}

@property (nonatomic,retain) UIColor * color;                           //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIColor * swapColor;                       //@synthesize swapColor=_swapColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                  //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) UIColor * ringColor;                       //@synthesize ringColor=_ringColor - In the implementation block
@property (nonatomic,retain) UIColor * ringSwapColor;                   //@synthesize ringSwapColor=_ringSwapColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets touchEdgeInsets;              //@synthesize touchEdgeInsets=_touchEdgeInsets - In the implementation block
-(void)_updateColors;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(UIColor *)ringColor;
-(void)setColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIColor *)color;
-(void)setRingColor:(UIColor *)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIColor *)highlightColor;
-(void)setTouchEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setSwapColor:(UIColor *)arg1 ;
-(void)setRingSwapColor:(UIColor *)arg1 ;
-(void)_performTouchAnimationThroughColor:(id)arg1 toColor:(id)arg2 toRingColor:(id)arg3 ;
-(UIColor *)swapColor;
-(UIColor *)ringSwapColor;
-(UIEdgeInsets)touchEdgeInsets;
@end

