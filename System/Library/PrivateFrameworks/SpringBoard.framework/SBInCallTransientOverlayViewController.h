/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateObserver.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBApplicationSceneBackgroundView, SBInCallTransientOverlayViewControllerDelegate;
@class UIView, SBIdleTimerCoordinatorHelper, SBSUIInCallSceneClientSettingsDiffInspector, _SBInCallProxySceneBackgroundView, SBDeviceApplicationSceneViewController, SBInCallSettings, SBDeviceApplicationSceneHandle, NSString;

@interface SBInCallTransientOverlayViewController : SBTransientOverlayViewController <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBIdleTimerCoordinating, BSInvalidatable> {

	UIView*<SBApplicationSceneBackgroundView> _existingSceneBackgroundView;
	SBIdleTimerCoordinatorHelper* _idleTimerCoordinatorHelper;
	SBSUIInCallSceneClientSettingsDiffInspector* _inCallSceneClientSettingsDiffInspector;
	_SBInCallProxySceneBackgroundView* _proxySceneBackgroundView;
	SBDeviceApplicationSceneViewController* _sceneViewController;
	SBInCallSettings* _settings;
	BOOL _shouldIgnoreHomeIndicatorAutoHiddenClientSettings;
	SBDeviceApplicationSceneHandle* _sceneHandle;
	id<SBInCallTransientOverlayViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * sceneHandle;                                  //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (assign,nonatomic,__weak) id<SBInCallTransientOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreHomeIndicatorAutoHiddenClientSettings;                          //@synthesize shouldIgnoreHomeIndicatorAutoHiddenClientSettings=_shouldIgnoreHomeIndicatorAutoHiddenClientSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleHomeButtonPress;
-(long long)preferredWhitePointAdaptivityStyle;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleOverridesToSuppressTo:(int)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(BOOL)canResignFirstResponder;
-(void)setIdleTimerCoordinator:(id)arg1 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2 ;
-(void)setContainerOrientation:(long long)arg1 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(BOOL)arg2 withAnimation:(long long)arg3 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 ;
-(id)initWithSceneHandle:(id)arg1 ;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(id<SBInCallTransientOverlayViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)handleLockButtonPress;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(SBDeviceApplicationSceneHandle *)sceneHandle;
-(void)setDelegate:(id<SBInCallTransientOverlayViewControllerDelegate>)arg1 ;
-(int)serviceProcessIdentifier;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isContentOpaque;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(id)succinctDescriptionBuilder;
-(void)invalidate;
-(void)dealloc;
-(long long)preferredUnlockedGestureDismissalStyle;
-(BOOL)allowsStackingOverlayContentAbove;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(id)_inCallSceneClientSettingsDiffInspector;
-(void)handleGestureDismissal;
-(long long)preferredLockedGestureDismissalStyle;
-(int)preferredStatusBarStyleOverridesToCancel;
-(id)preferredDisplayLayoutElementIdentifier;
-(void)setShouldIgnoreHomeIndicatorAutoHiddenClientSettings:(BOOL)arg1 ;
-(BOOL)shouldIgnoreHomeIndicatorAutoHiddenClientSettings;
-(/*^block*/id)sceneDeactivationPredicate;
-(BOOL)shouldUseSceneBasedKeyboardFocus;
@end

