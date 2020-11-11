/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppExposeGridSwitcherModifier, NSSet;

@interface SBSwitcherToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppExposeGridSwitcherModifier* _appExposeModifier;
	NSSet* _appLayoutsVisibleBeforeTransition;

}
-(id)visibleAppLayouts;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)transitionWillUpdate;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)handleTimerEvent:(id)arg1 ;
-(id)transitionWillBegin;
-(id)initWithTransitionID:(id)arg1 bundleIdentifier:(id)arg2 appExposeModifier:(id)arg3 ;
-(id)_newAppExposeModifier;
-(double)_offsetForPushingCardsOffscreenAtIndex:(unsigned long long)arg1 ;
@end
