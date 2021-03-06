/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBSystemPointerInteractionDelegate.h>
#import <libobjc.A.dylib/SBUIOptionalLegibility.h>

@protocol CSCoverSheetContextProviding;
@class _UILegibilitySettings, SBFHomeGrabberSettings, UIColor, MTStaticColorPillView, MTLumaDodgePillView, NSString;

@interface CSHomeAffordanceView : UIView <SBSystemPointerInteractionDelegate, SBUIOptionalLegibility> {

	SBFHomeGrabberSettings* _settings;
	BOOL _systemPointerInteractionEnabled;
	_UILegibilitySettings* _legibilitySettings;
	unsigned long long _style;
	UIColor* _overrideColor;
	id<CSCoverSheetContextProviding> _coverSheetContext;
	MTStaticColorPillView* _staticHomeAffordance;
	MTLumaDodgePillView* _dynamicHomeAffordance;

}

@property (assign,nonatomic,__weak) MTStaticColorPillView * staticHomeAffordance;                                        //@synthesize staticHomeAffordance=_staticHomeAffordance - In the implementation block
@property (assign,nonatomic,__weak) MTLumaDodgePillView * dynamicHomeAffordance;                                         //@synthesize dynamicHomeAffordance=_dynamicHomeAffordance - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIColor * overrideColor;                                                                    //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,retain) id<CSCoverSheetContextProviding> coverSheetContext;                                         //@synthesize coverSheetContext=_coverSheetContext - In the implementation block
@property (assign,getter=isSystemPointerInteractionEnabled,nonatomic) BOOL systemPointerInteractionEnabled;              //@synthesize systemPointerInteractionEnabled=_systemPointerInteractionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                 //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(_UILegibilitySettings *)legibilitySettings;
-(id)init;
-(id)styleForRegion:(id)arg1 forView:(id)arg2 ;
-(BOOL)shouldBeginPointerInteractionAtLocation:(CGPoint)arg1 forView:(id)arg2 ;
-(void)layoutSubviews;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(unsigned long long)style;
-(void)_updateForLegibility;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(UIEdgeInsets)pointerInteractionHitTestInsetsForView:(id)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(double)suggestedEdgeSpacing;
-(CGSize)suggestedSizeForContentWidth:(double)arg1 ;
-(void)setSystemPointerInteractionEnabled:(BOOL)arg1 ;
-(CGRect)extendedFrameForPointerAnimationSuppression;
-(void)setCoverSheetContext:(id<CSCoverSheetContextProviding>)arg1 ;
-(void)_createStaticHomeAffordance;
-(void)_createDynamicHomeAffordance;
-(void)setStaticHomeAffordance:(MTStaticColorPillView *)arg1 ;
-(void)setDynamicHomeAffordance:(MTLumaDodgePillView *)arg1 ;
-(void)_transitionToStyle:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(MTStaticColorPillView *)staticHomeAffordance;
-(id)_viewForStyle:(unsigned long long)arg1 ;
-(id<CSCoverSheetContextProviding>)coverSheetContext;
-(BOOL)isSystemPointerInteractionEnabled;
-(MTLumaDodgePillView *)dynamicHomeAffordance;
@end

