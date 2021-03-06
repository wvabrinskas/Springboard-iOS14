/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/SBFView.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@class SBAppSwitcherSettings, SBMedusaSettings, SBFView, UIView, NSString;

@interface SBAppSwitcherPageShadowView : SBFView <PTSettingsKeyObserver> {

	SBAppSwitcherSettings* _switcherSettings;
	SBMedusaSettings* _medusaSettings;
	SBFView* _diffuseShadowView;
	SBFView* _rimShadowView;
	double _rimShadowRadius;
	double _rimShadowOpacity;
	double _diffuseShadowRadius;
	double _diffuseShadowOpacity;
	CGSize _diffuseShadowOffset;
	double _diffuseShadowRadiusWhileTouched;
	double _diffuseShadowOpacityWhileTouched;
	CGSize _diffuseShadowOffsetWhileTouched;
	double _diffuseShadowRadiusWhileCursorHovered;
	double _diffuseShadowOpacityWhileCursorHovered;
	CGSize _diffuseShadowOffsetWhileCursorHovered;
	double _switcherCardScale;
	long long _style;
	unsigned long long _highlightType;
	double _shadowOffset;

}

@property (nonatomic,readonly) UIView * _diffuseShadowView; 
@property (nonatomic,readonly) UIView * _rimShadowView; 
@property (assign,nonatomic) double switcherCardScale;                      //@synthesize switcherCardScale=_switcherCardScale - In the implementation block
@property (assign,nonatomic) long long style;                               //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long highlightType;              //@synthesize highlightType=_highlightType - In the implementation block
@property (assign,nonatomic) double shadowOffset;                           //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHighlightType:(unsigned long long)arg1 ;
-(void)setShadowOffset:(double)arg1 ;
-(double)shadowOffset;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_applyPrototypeSettingsToConstants;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)highlightType;
-(double)switcherCardScale;
-(long long)style;
-(void)setSwitcherCardScale:(double)arg1 ;
-(UIView *)_rimShadowView;
-(void)_updateShadowViews;
-(UIView *)_diffuseShadowView;
-(void)_updateShadowParameters;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setStyle:(long long)arg1 ;
@end

