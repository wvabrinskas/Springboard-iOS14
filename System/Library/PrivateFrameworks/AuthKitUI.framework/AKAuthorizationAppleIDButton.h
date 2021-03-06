/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <AuthKitUI/AKAuthorizationButton.h>

@class CAFilter;

@interface AKAuthorizationAppleIDButton : AKAuthorizationButton {

	long long _type;
	long long _style;
	CAFilter* _highlightFilter;
	BOOL _changesInterfaceStyle;
	double _cornerRadius;

}

@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(Class)layerClass;
+(double)defaultCornerRadius;
+(id)buttonWithType:(long long)arg1 style:(long long)arg2 ;
+(long long)_buttonStyleForUIStyle;
-(id)accessibilityLabel;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_createHighlightFilterIfNecessary;
-(void)layoutSubviews;
-(double)cornerRadius;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)setCornerRadius:(double)arg1 ;
-(void)setButtonText:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithAuthorizationButtonType:(long long)arg1 authorizationButtonStyle:(long long)arg2 ;
-(void)_drawRect:(CGRect)arg1 inView:(id)arg2 ;
-(void)_performAnimationToSetHighlighted:(BOOL)arg1 ;
@end

