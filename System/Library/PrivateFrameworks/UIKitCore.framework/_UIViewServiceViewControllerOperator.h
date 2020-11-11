/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKitCore/_UIViewServiceViewControllerOperator_RemoteViewControllerInterface.h>
#import <UIKitCore/_UIHostedTextServiceSessionDelegate.h>
#import <UIKitCore/_UIViewServiceDummyPopoverControllerDelegate.h>
#import <UIKitCore/_UISheetPresentationControllerDelegate.h>
#import <UIKitCore/_UIFocusMovementActionForwarding.h>
#import <UIKitCore/_UIViewServiceDeputy.h>
#import <UIKitCore/_UIViewServiceDeputyRotationSource.h>

@protocol _UIViewServiceViewControllerOperatorDelegate;
@class NSMutableArray, NSString, NSArray, UIViewController, _UIHostedWindow, _UIHostedTextServiceSession, _UIAsyncInvocation, UIPopoverController, _UIViewServiceDummyPopoverController, _UIViewControllerOneToOneTransitionContext, NSUndoManager;

@interface _UIViewServiceViewControllerOperator : UIViewController <_UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UISheetPresentationControllerDelegate, _UIFocusMovementActionForwarding, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource> {

	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
	NSMutableArray* _deferredToViewDidAppear;
	int _hostPID;
	int _mediaPID;
	NSString* _hostBundleID;
	SCD_Struct_UI61 _hostAuditToken;
	id _remoteViewControllerProxyToOperator;
	id _remoteViewControllerProxyToViewController;
	NSArray* _pluginDisplayConfigurations;
	UIViewController* _localViewController;
	NSString* _presentationControllerClassName;
	_UIHostedWindow* _hostedWindow;
	BOOL _disableAutomaticKeyboardBehavior;
	BOOL _serviceInPopover;
	long long _hostStatusBarOrientation;
	double _hostStatusBarHeight;
	NSMutableArray* _deputyRotationDelegates;
	unsigned _hostAccessibilityServerPort;
	_UIHostedTextServiceSession* _textServiceSession;
	_UIAsyncInvocation* _prepareForDisconnectionInvocation;
	_UIAsyncInvocation* _invalidationInvocation;
	UIPopoverController* _displayedPopoverController;
	_UIViewServiceDummyPopoverController* _dummyPopoverController;
	unsigned long long _supportedOrientations;
	long long _availableTextServices;
	UIEdgeInsets _localViewControllerRequestedInsets;
	double _localViewControllerRequestedLeftMargin;
	double _localViewControllerRequestedRightMargin;
	_UIViewControllerOneToOneTransitionContext* _viewControllerTransitioningContext;
	long long _editAlertToken;
	NSUndoManager* _editAlertUndoManager;
	id<_UIViewServiceViewControllerOperatorDelegate> _delegate;
	/*^block*/id __traitsWillChangeHandler;
	/*^block*/id __traitsDidChangeHandler;

}

@property (setter=_setTraitsWillChangeHandler:,nonatomic,copy) id _traitsWillChangeHandler;                 //@synthesize _traitsWillChangeHandler=__traitsWillChangeHandler - In the implementation block
@property (setter=_setTraitsDidChangeHandler:,nonatomic,copy) id _traitsDidChangeHandler;                   //@synthesize _traitsDidChangeHandler=__traitsDidChangeHandler - In the implementation block
@property (nonatomic,readonly) UIViewController * localViewController; 
@property (assign,nonatomic,__weak) id<_UIViewServiceViewControllerOperatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)XPCInterface;
+(id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostBundleID:(id)arg3 hostAuditToken:(SCD_Struct_UI61)arg4 ;
-(void)__hostDidEnterBackground;
-(void)_prepareForDisconnectionUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)addDeputyRotationDelegate:(id)arg1 ;
-(void)__prepareForDisconnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)__hostWillEnterForeground;
-(BOOL)becomeFirstResponder;
-(void)__hostViewWillDisappear:(BOOL)arg1 ;
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)_sessionForStateRestoration:(id)arg1 ;
-(oneway void)release;
-(id)_viewControllersForRotationCallbacks;
-(void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
-(id)preferredFocusEnvironments;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(BOOL)arg2 ;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3 ;
-(int)__automatic_invalidation_logic;
-(void)__hostViewWillTransitionToSize:(CGSize)arg1 withContextDescription:(id)arg2 boundingPath:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(BOOL)arg5 fence:(id)arg6 whenDone:(/*^block*/id)arg7 ;
-(void)_setTraitsWillChangeHandler:(/*^block*/id)arg1 ;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)__hostSceneDidEnterBackground;
-(id)_queue;
-(double)_canvasSystemMinimumMargin;
-(id<_UIViewServiceViewControllerOperatorDelegate>)delegate;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)__hostViewDidAppear:(BOOL)arg1 ;
-(void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(long long)arg2 traitCollection:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)__hostDidAttachDisplay:(id)arg1 ;
-(id)retain;
-(BOOL)_shouldForwardLegacyRotationOnly;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg1 ;
-(void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2 ;
-(void)setNeedsUpdateOfPrefersPointerLocked;
-(void)__setServiceInPopover:(BOOL)arg1 ;
-(void)__dimmingViewWasTapped;
-(void)__hostDidSetContentOverlayInsets:(UIEdgeInsets)arg1 andLeftMargin:(double)arg2 rightMargin:(double)arg3 ;
-(void)__setBoundingPath:(id)arg1 ;
-(id)_window;
-(void)_firstResponderDidChange:(id)arg1 ;
-(void)__cancelAlertActionWithToken:(long long)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(id)childViewControllerForStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)__setHostTraitCollection:(id)arg1 deferIfAnimated:(BOOL)arg2 ;
-(void)_sheetInteractionDidChangeOffset:(CGPoint)arg1 dragging:(BOOL)arg2 dismissible:(BOOL)arg3 indexOfCurrentDetent:(unsigned long long)arg4 duration:(double)arg5 timingCurve:(id)arg6 ;
-(void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 ;
-(void)__showEditAlertView;
-(void)_setNeedsUserInterfaceAppearanceUpdate;
-(void)__createViewControllerWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(BOOL)arg2 ;
-(void)__hostViewDidMoveToScreenWithFBSDisplayIdentity:(id)arg1 newHostingHandleReplyHandler:(/*^block*/id)arg2 ;
-(UIEdgeInsets)_customBasePresentationInsetsForView:(id)arg1 ;
-(id)_appearanceSource;
-(void)__hostSceneWillEnterForeground;
-(void)setNeedsUpdateOfHomeIndicatorAutoHidden;
-(void)setDelegate:(id<_UIViewServiceViewControllerOperatorDelegate>)arg1 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(void)_setTraitsDidChangeHandler:(/*^block*/id)arg1 ;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1 ;
-(void)__undoActionWithToken:(long long)arg1 ;
-(id)_traitsWillChangeHandler;
-(BOOL)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char*)arg3 ;
-(void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3 ;
-(id)_showServiceForText:(id)arg1 selectedTextRange:(NSRange)arg2 type:(long long)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(void)__hostReadyToReceiveMessagesFromServiceViewController;
-(void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)childViewControllerForPointerLock;
-(void)_windowDidBecomeKey:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)_dataFromPressesEvent:(id)arg1 ;
-(id)autorelease;
-(void)viewDidLoad;
-(void)_popoverDidDismiss:(id)arg1 ;
-(void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_forwardFocusMovementAction:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)__hostDidUpdateDisplay:(id)arg1 ;
-(void)setNeedsWhitePointAdaptivityStyleUpdate;
-(unsigned long long)retainCount;
-(id)childViewControllerForStatusBarHidden;
-(BOOL)_providesCustomBasePresentationInsets;
-(void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_presentationControllerClassName;
-(void)_popoverWillPresent:(id)arg1 ;
-(void)__hostDidChangeStatusBarHeight:(double)arg1 ;
-(long long)_availableTextServices;
-(id)_childViewControllerForMultitaskingDragExclusionRects;
-(void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(BOOL)arg3 inRemoteViewHierarchy:(BOOL)arg4 ;
-(BOOL)_tryRetain;
-(id)_traitsDidChangeHandler;
-(void)__hostDidPromoteFirstResponder;
-(void)__hostWillResignActive;
-(id)_supportedInterfaceOrientationsForViewController:(id)arg1 ;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(void)__hostDidBecomeActive;
-(void)__textServiceDidDismiss;
-(id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3 ;
-(void)__setContentSize:(CGSize)arg1 boundingPath:(id)arg2 ;
-(id)_inputViewsKey;
-(void)dummyPopoverController:(id)arg1 didChangeContentSize:(CGSize)arg2 animated:(BOOL)arg3 ;
-(BOOL)_isDeallocating;
-(void)_viewServiceIsDisplayingPopoverController:(id)arg1 ;
-(void)setNeedsStatusBarAppearanceUpdate;
-(void)_didBecomeContentViewControllerOfPopover:(id)arg1 ;
-(UIViewController *)localViewController;
-(void)_updateSupportedInterfaceOrientationsIfNecessary;
-(void)__hostViewDidDisappear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)loadView;
-(UIEdgeInsets)_viewSafeAreaInsetsFromScene;
-(void)_windowDidUnregisterScrollToTopView;
-(void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(long long)arg2 ;
-(void)__setContentSize:(CGSize)arg1 boundingPath:(id)arg2 withFence:(id)arg3 ;
-(void)__redoActionWithToken:(long long)arg1 ;
-(BOOL)_isHostedRootViewController;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1 ;
-(void)_windowDidRegisterScrollToTopView;
-(void)_willResignContentViewControllerOfPopover:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)isModalInPresentation;
-(void)_setNeedsUpdateOfMultitaskingDragExclusionRects;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)_showServiceForType:(long long)arg1 withContext:(id)arg2 ;
-(void)dismissHostedTextServiceSession:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)__knownPresentationWithoutPresentationControllerInstance;
-(BOOL)_forwardPresses:(id)arg1 withEvent:(id)arg2 canceled:(BOOL)arg3 ;
-(void)__setMediaOverridePID:(int)arg1 ;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3 ;
-(void)__setSheetConfiguration:(id)arg1 ;
-(id)invalidate;
-(CGSize)contentSizeForViewInPopover;
-(void)__hostDisablesAutomaticKeyboardBehavior:(BOOL)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)__hostDidDetachDisplay:(id)arg1 ;
-(void)__hostDidSetPresentationControllerClassName:(id)arg1 ;
-(void)dealloc;
-(void)__scrollToTopFromTouchAtViewLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
@end
