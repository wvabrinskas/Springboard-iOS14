/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UISheetPresentationController.h>
#import <UIKitCore/_UIStatusBarAnimationProviding.h>

@class UIStatusBarStyleAnimationParameters, UIStatusBarHideAnimationParameters, UIWindow, NSString;

@interface _UIRootPresentationController : _UISheetPresentationController <_UIStatusBarAnimationProviding> {

	UIWindow* _presentingWindow;

}

@property (nonatomic,__weak,readonly) UIWindow * presentingWindow;                                                                                                               //@synthesize presentingWindow=_presentingWindow - In the implementation block
@property (nonatomic,readonly) long long preferredStatusBarStyle; 
@property (nonatomic,readonly) int _preferredStatusBarVisibility; 
@property (getter=_preferredStatusBarStyleAnimationParameters,nonatomic,readonly) UIStatusBarStyleAnimationParameters * preferredStatusBarStyleAnimationParameters; 
@property (getter=_preferredStatusBarHideAnimationParameters,nonatomic,readonly) UIStatusBarHideAnimationParameters * preferredStatusBarHideAnimationParameters; 
@property (nonatomic,readonly) long long preferredStatusBarUpdateAnimation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_allowsDeferredTransitions;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_preferredStatusBarStyleAnimationParameters;
-(id)_preferredStatusBarHideAnimationParameters;
-(id)initWithPresentedViewController:(id)arg1 presentingWindow:(id)arg2 ;
-(id)_parentTraitEnvironment;
-(int)_preferredStatusBarVisibility;
-(BOOL)_mayChildGrabPresentedViewControllerView;
-(long long)preferredStatusBarStyle;
-(BOOL)_isRootPresentation;
-(id)_fullscreenPresentationSuperview;
-(long long)preferredStatusBarUpdateAnimation;
-(UIWindow *)presentingWindow;
@end

