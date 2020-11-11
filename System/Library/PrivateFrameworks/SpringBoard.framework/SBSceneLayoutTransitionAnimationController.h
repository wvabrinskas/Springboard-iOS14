/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@class SBSceneLayoutViewController, SBUIBlockAnimationController;

@interface SBSceneLayoutTransitionAnimationController : SBUIWorkspaceAnimationController {

	SBSceneLayoutViewController* _layoutController;
	SBUIBlockAnimationController* _blockAnimation;

}
-(BOOL)_canBeInterrupted;
-(id)animationSettings;
-(id)containerView;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(id)_getTransitionWindow;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 ;
-(id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 animationBlock:(/*^block*/id)arg4 ;
-(id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 stepped:(BOOL)arg4 animationBlock:(/*^block*/id)arg5 ;
@end
