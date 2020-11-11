/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIMotionEffectGroup, UIView;

@interface _UIInterfaceActionRepresentationViewContext_AppleTV : NSObject {

	UIMotionEffectGroup* _installedHighlightedActionMotionEffectsGroup;
	BOOL _highlighted;
	BOOL _pressed;
	UIView* _highlightTransformTargetView;

}

@property (assign,nonatomic,__weak) UIView * highlightTransformTargetView;              //@synthesize highlightTransformTargetView=_highlightTransformTargetView - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                          //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL pressed;                                              //@synthesize pressed=_pressed - In the implementation block
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)pressed;
-(id)_newMotionEffectsGroupForHighlightedAction;
-(CATransform3D)_enlargedTransformForSize:(CGSize)arg1 pressed:(BOOL)arg2 ;
-(id)initWithHighlightTransformTargetView:(id)arg1 ;
-(void)setHighlightTransformTargetView:(UIView *)arg1 ;
-(BOOL)highlighted;
-(UIView *)highlightTransformTargetView;
-(void)_applyHighlightTransform;
-(void)_removeMotionEffects;
-(void)_insertMotionEffects;
-(void)setHighlighted:(BOOL)arg1 ;
@end
