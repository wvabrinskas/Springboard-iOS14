/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout;

@interface SBSwipeToKillSwitcherModifier : SBSwitcherModifier {

	SBAppLayout* _appLayout;
	double _progress;
	BOOL _hasPrepared;
	BOOL _simulatingPostRemovalState;
	unsigned long long _interpolationDirection;

}
-(id)visibleAppLayouts;
-(id)topMostLayoutElements;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1 ;
-(double)lighteningAlphaForIndex:(unsigned long long)arg1 ;
-(id)initWithAppLayout:(id)arg1 ;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(id)handleSwipeToKillEvent:(id)arg1 ;
-(void)_calculateInterpolationDirection;
-(unsigned long long)_interpolatingAdjacentIndexForIndex:(unsigned long long)arg1 ;
-(void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(/*^block*/id)arg1 ;
@end

