/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>

@class UIColor;

@interface SKUISizeToFitImageDataConsumer : SKUIImageDataConsumer {

	CGSize _constraintSize;
	BOOL _custom;
	UIColor* _gradientEndColor;
	double _gradientHeight;

}

@property (assign,nonatomic) CGSize constraintSize;                   //@synthesize constraintSize=_constraintSize - In the implementation block
@property (nonatomic,retain) UIColor * gradientEndColor;              //@synthesize gradientEndColor=_gradientEndColor - In the implementation block
@property (assign,nonatomic) double gradientHeight;                   //@synthesize gradientHeight=_gradientHeight - In the implementation block
+(id)consumerWithConstraintSize:(CGSize)arg1 ;
+(id)consumerWithConstraintSize2:(CGSize)arg1 ;
-(void)setGradientEndColor:(UIColor *)arg1 ;
-(UIColor *)gradientEndColor;
-(double)gradientHeight;
-(void)setGradientHeight:(double)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(void)_drawGradientWithContext:(CGContextRef)arg1 imageRect:(CGRect)arg2 ;
-(CGSize)constraintSize;
-(void)setConstraintSize:(CGSize)arg1 ;
@end
