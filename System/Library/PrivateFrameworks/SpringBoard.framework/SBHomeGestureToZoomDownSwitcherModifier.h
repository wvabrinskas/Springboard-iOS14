/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBHomeGestureToZoomDownSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _appLayout;
	SBSwitcherModifier* _nonGestureInitiatedZoomModifier;
	long long _startingEnvironmentMode;
	CGPoint _liftOffVelocity;
	unsigned long long _iconGridSizeClass;
	BOOL _overshootScaleForWidgetZoomDown;

}
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(id)_layoutSettings;
-(BOOL)isWallpaperRequiredForSwitcher;
-(long long)wallpaperStyle;
-(id)appLayoutsToCacheSnapshots;
-(id)transitionWillUpdate;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(BOOL)isSwitcherWindowVisible;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)handleTimerEvent:(id)arg1 ;
-(long long)homeScreenBackdropBlurType;
-(id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3 ;
-(id)_scaleSettings;
-(id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3 ;
-(BOOL)completesWhenChildrenComplete;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 nonGestureInitiatedZoomModifier:(id)arg3 effectiveStartingEnvironmentMode:(long long)arg4 liftOffVelocity:(CGPoint)arg5 ;
-(id)_positionSettings;
-(double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom;
@end

