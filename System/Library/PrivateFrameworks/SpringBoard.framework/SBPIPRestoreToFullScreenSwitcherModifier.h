/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBFullScreenToHomeIconZoomSwitcherModifier;

@interface SBPIPRestoreToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _fromAppLayout;
	SBAppLayout* _toAppLayout;
	SBFullScreenToHomeIconZoomSwitcherModifier* _zoomModifier;

}
-(id)visibleAppLayouts;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)_layoutSettings;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(BOOL)isHomeGrabberVisibleForIndex:(unsigned long long)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)transitionWillBegin;
-(BOOL)completesWhenChildrenComplete;
-(id)initWithTransitionID:(id)arg1 zoomModifier:(id)arg2 fromAppLayout:(id)arg3 toAppLayout:(id)arg4 ;
-(BOOL)_isFromAppLayout:(unsigned long long)arg1 ;
-(BOOL)_isToAppLayout:(unsigned long long)arg1 ;
@end
