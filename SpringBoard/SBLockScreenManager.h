//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/CSCoverSheetViewControllerDelegate-Protocol.h>
#import <SpringBoard/CSWallpaperColorProvider-Protocol.h>
#import <SpringBoard/SBCoverSheetPresentationDelegate-Protocol.h>
#import <SpringBoard/SBFPrivateAuthenticationObserver-Protocol.h>
#import <SpringBoard/SBHomeButtonShowPasscodeRecognizerDelegate-Protocol.h>
#import <SpringBoard/SBHomeButtonSuppressAfterUnlockRecognizerDelegate-Protocol.h>
#import <SpringBoard/SBIdleTimerCoordinating-Protocol.h>
#import <SpringBoard/SBIdleTimerProviding-Protocol.h>
#import <SpringBoard/SBLockScreenBiometricAuthenticationCoordinatorDelegate-Protocol.h>
#import <SpringBoard/SBPasscodeEntryTransientOverlayViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBSRemoteAlertHandleObserver-Protocol.h>
#import <SpringBoard/SBTapToWakeDelegate-Protocol.h>
#import <SpringBoard/SBUILockStateProvider-Protocol.h>
#import <SpringBoard/SBWallpaperObserver-Protocol.h>

@class CSCoverSheetViewController, NSMutableDictionary, NSMutableSet, NSString, SBCoverSheetBiometricResourceObserver, SBFAuthenticationAssertion, SBFMouseButtonDownGestureRecognizer, SBFUserAuthenticationController, SBIdleTimerCoordinatorHelper, SBLiftToWakeManager, SBLockScreenAutoUnlockAggregateRule, SBLockScreenBiometricAuthenticationCoordinator, SBLockScreenDisabledAssertionManager, SBLockScreenOrientationManager, SBLockScreenUnlockRequest, SBPasscodeEntryTransientOverlayViewController, SBPearlInterlockObserver, SBSRemoteAlertHandle, SBTapToWakeController, UINotificationFeedbackGenerator;
@protocol BSInvalidatable, SBFLockOutStatusProvider, SBHomeButtonShowPasscodeRecognizer, SBHomeButtonSuppressAfterUnlockRecognizer, SBLockScreenEnvironment, SBNotificationDestination;

@interface SBLockScreenManager : NSObject <BSDescriptionProviding, SBPasscodeEntryTransientOverlayViewControllerDelegate, SBFPrivateAuthenticationObserver, CSCoverSheetViewControllerDelegate, CSWallpaperColorProvider, SBLockScreenBiometricAuthenticationCoordinatorDelegate, SBHomeButtonShowPasscodeRecognizerDelegate, SBHomeButtonSuppressAfterUnlockRecognizerDelegate, SBWallpaperObserver, SBCoverSheetPresentationDelegate, SBUILockStateProvider, SBTapToWakeDelegate, SBSRemoteAlertHandleObserver, SBIdleTimerProviding, SBIdleTimerCoordinating>
{
    SBLockScreenBiometricAuthenticationCoordinator *_biometricAuthenticationCoordinator;
    SBCoverSheetBiometricResourceObserver *_biometricResourceObserver;
    SBPearlInterlockObserver *_pearlInterlockObserver;
    id <SBLockScreenEnvironment> _lockScreenEnvironment;
    id <SBHomeButtonShowPasscodeRecognizer> _homeButtonShowPasscodeRecognizer;
    id <SBHomeButtonSuppressAfterUnlockRecognizer> _homeButtonSuppressAfterUnlockRecognizer;
    _Bool _allowDisablePasscodeLockAssertion;
    _Bool _allowUILockUnlock;
    _Bool _isScreenOn;
    _Bool _isUILocked;
    SBLockScreenUnlockRequest *_unlockRequest;
    _Bool _saveUnlockRequest;
    _Bool _uiHasBeenLockedOnce;
    _Bool _uiUnlocking;
    SBPasscodeEntryTransientOverlayViewController *_passcodeEntryTransientOverlayViewController;
    _Bool _passcodeEntryTransientOverlayViewControllerPresentedAnimated;
    SBFAuthenticationAssertion *_sustainAuthenticationWhileUIUnlockedAssertion;
    SBLockScreenDisabledAssertionManager *_lockScreenDisabledAssertionManager;
    _Bool _isInLostMode;
    SBLockScreenAutoUnlockAggregateRule *_autoUnlockRuleAggregator;
    _Bool _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
    SBSRemoteAlertHandle *_wakeToRemoteAlertHandle;
    CDUnknownBlockType _alertLaunchFinish;
    id <SBFLockOutStatusProvider> _lockOutController;
    SBFUserAuthenticationController *_userAuthController;
    SBLiftToWakeManager *_liftToWakeManager;
    SBTapToWakeController *_tapToWakeController;
    SBFMouseButtonDownGestureRecognizer *_mouseButtonDownGesture;
    NSMutableDictionary *_mesaCoordinatorDisabledAssertions;
    NSMutableDictionary *_mesaWalletPreArmDisabledAssertions;
    NSMutableSet *_mesaWalletPreArmDisabledReasons;
    NSMutableDictionary *_mesaAutoUnlockingDisabledAssertions;
    NSMutableDictionary *_mesaUnlockingDisabledAssertions;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    UINotificationFeedbackGenerator *_authenticationFeedbackGenerator;
    id <BSInvalidatable> _bannerSuppressionAssertion;
    id <BSInvalidatable> _pipInterruptionAssertion;
    _Bool _isWaitingToLockUI;
    SBLockScreenOrientationManager *_lockScreenOrientationManager;
    CDUnknownBlockType _unlockActionBlock;
}


// Remaining properties
@property(nonatomic, getter=isUIUnlocking) _Bool UIUnlocking; // @synthesize UIUnlocking=_uiUnlocking;
@property(readonly) _Bool bioAuthenticatedWhileMenuButtonDown;
@property(readonly, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isLockScreenActive;
@property(readonly) _Bool isLockScreenVisible;
@property(readonly) _Bool isUILocked; // @synthesize isUILocked=_isUILocked;
@property(readonly) _Bool isWaitingToLockUI; // @synthesize isWaitingToLockUI=_isWaitingToLockUI;
@property(retain, nonatomic, getter=_liftToWakeManager, setter=_setLiftToWakeManager:) SBLiftToWakeManager *liftToWakeManager; // @synthesize liftToWakeManager=_liftToWakeManager;
@property(retain, nonatomic, getter=_lockOutController, setter=_setLockOutController:) id <SBFLockOutStatusProvider> lockOutController; // @synthesize lockOutController=_lockOutController;
@property(readonly, nonatomic) id <SBLockScreenEnvironment> lockScreenEnvironment; // @synthesize lockScreenEnvironment=_lockScreenEnvironment;
@property(readonly, nonatomic) SBLockScreenOrientationManager *lockScreenOrientationManager; // @synthesize lockScreenOrientationManager=_lockScreenOrientationManager;
@property(readonly, nonatomic) id <SBNotificationDestination> notificationDestination;
@property(readonly) _Bool shouldHandlePocketStateChanges;
@property(readonly) _Bool shouldPlayLockSound;
@property(readonly) _Bool shouldTapToWake;
@property(readonly) Class superclass;
@property(retain, nonatomic, getter=_tapToWakeController, setter=_setTapToWakeController:) SBTapToWakeController *tapToWakeController; // @synthesize tapToWakeController=_tapToWakeController;
@property(copy, nonatomic) CDUnknownBlockType unlockActionBlock; // @synthesize unlockActionBlock=_unlockActionBlock;
@property(retain, nonatomic, getter=_userAuthController, setter=_setUserAuthController:) SBFUserAuthenticationController *userAuthController; // @synthesize userAuthController=_userAuthController;
@end
