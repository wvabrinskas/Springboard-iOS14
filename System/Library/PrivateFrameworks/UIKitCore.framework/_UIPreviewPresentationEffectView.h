/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface _UIPreviewPresentationEffectView : UIView {

	BOOL _shouldRasterizeForTransition;
	UIColor* _shadowColor;

}

@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double shadowAlpha; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowRadius; 
@property (nonatomic,copy) UIColor * shadowColor;                            //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterizeForTransition;              //@synthesize shouldRasterizeForTransition=_shouldRasterizeForTransition - In the implementation block
-(double)shadowAlpha;
-(void)setShadowAlpha:(double)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)blurRadius;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShouldRasterizeForTransition:(BOOL)arg1 ;
-(BOOL)shouldRasterizeForTransition;
-(CGSize)shadowOffset;
-(double)shadowRadius;
-(UIColor *)shadowColor;
-(void)setBlurRadius:(double)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
@end

