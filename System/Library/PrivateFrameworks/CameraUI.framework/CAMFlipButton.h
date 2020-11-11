/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@class UIImageView, NSString;

@interface CAMFlipButton : UIButton <CAMAccessibilityHUDImageProvider> {

	BOOL __useCTMAppearance;
	long long _layoutStyle;
	long long _orientation;
	UIImageView* __imageView;
	UIImageView* __circleBackgroundView;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (nonatomic,readonly) UIImageView * _imageView;                       //@synthesize _imageView=__imageView - In the implementation block
@property (nonatomic,retain) UIImageView * _circleBackgroundView;              //@synthesize _circleBackgroundView=__circleBackgroundView - In the implementation block
@property (nonatomic,readonly) BOOL _useCTMAppearance;                         //@synthesize _useCTMAppearance=__useCTMAppearance - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                            //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                  //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (assign,nonatomic) long long orientation;                            //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)flipButtonOverContent;
+(id)flipButtonWithLayoutStyle:(long long)arg1 ;
-(id)imageForAccessibilityHUD;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(UIImageView *)_imageView;
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)tappableEdgeInsets;
-(id)mainImageNameForAccessibilityHUD:(BOOL)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_useCTMAppearance;
-(UIEdgeInsets)alignmentRectInsets;
-(void)_updateImages;
-(long long)layoutStyle;
-(void)layoutSubviews;
-(UIImageView *)_circleBackgroundView;
-(void)set_circleBackgroundView:(UIImageView *)arg1 ;
-(void)_commonCAMFlipButtonInitializationWithStyle:(long long)arg1 overContent:(BOOL)arg2 ;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(void)setHighlighted:(BOOL)arg1 ;
@end
