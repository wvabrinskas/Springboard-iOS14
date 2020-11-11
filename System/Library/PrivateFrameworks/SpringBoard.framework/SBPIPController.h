/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/PGPictureInPictureControllerDelegate.h>
#import <libobjc.A.dylib/SBPIPContainerViewControllerObserver.h>
#import <libobjc.A.dylib/SBAlertItemsControllerObserver.h>
#import <libobjc.A.dylib/SBAssistantObserver.h>
#import <libobjc.A.dylib/SBSensorActivityObserver.h>
#import <libobjc.A.dylib/SBPIPMorphAnimatorControllerDelegate.h>
#import <libobjc.A.dylib/SBWorkspaceKeyboardFocusControllerObserver.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>

@protocol BSInvalidatable, SBIdleTimerCoordinating;
@class PGPictureInPictureController, SBIdleTimerCoordinatorHelper, NSMutableArray, NSMutableSet, SBPIPWindow, NSMutableDictionary, NSHashTable, BSCompoundAssertion, SBPIPStashAssertion, SBPIPInterruptionDebouncingTimer, UIView, FBSDisplayLayoutMonitor, SBPIPAnalytics, BSTimer, NSString;

@interface SBPIPController : NSObject <PGPictureInPictureControllerDelegate, SBPIPContainerViewControllerObserver, SBAlertItemsControllerObserver, SBAssistantObserver, SBSensorActivityObserver, SBPIPMorphAnimatorControllerDelegate, SBWorkspaceKeyboardFocusControllerObserver, SBIdleTimerProviding> {

	PGPictureInPictureController* _pictureInPictureController;
	BOOL _isReducingResourcesUsage;
	id<BSInvalidatable> _stateCaptureInvalidatable;
	BOOL _hasIdleTimerBehaviors;
	id<SBIdleTimerCoordinating> _idleTimerCoordinator;
	SBIdleTimerCoordinatorHelper* _idleTimerCoordinatorHelper;
	NSMutableArray* _windowLevelOverrideAssertions;
	NSMutableSet* _pictureInPictureWindowHiddenReasons;
	SBPIPWindow* _pictureInPictureWindow;
	UIEdgeInsets _pictureInPictureWindowMargin;
	NSMutableDictionary* _pictureInPictureInsetsForSource;
	BOOL _expectKeyboardVisible;
	NSMutableArray* _stashAssertions;
	NSHashTable* _interruptionAssertions;
	BSCompoundAssertion* _insetsOverrideAssertions;
	NSMutableDictionary* _cameraInterruptionAssertions;
	id<BSInvalidatable> _fullscreenModalElementInsetOverrideAssertion;
	SBPIPStashAssertion* _stashForInterruptionAssertion;
	SBPIPInterruptionDebouncingTimer* _interruptionEndDebouncingTimer;
	BOOL _defaultToStashed;
	NSMutableSet* _pictureInPictureMorphAnimatorControllers;
	UIView* _keyboardInsetsVisualizerView;
	long long _unlockedEnvironmentModeWhenKeyboardFocusChanged;
	FBSDisplayLayoutMonitor* _displayLayoutMonitor;
	SBPIPAnalytics* _analyticsHelper;
	BSTimer* _pipDefaultContentSizeResetTimer;

}

@property (nonatomic,readonly) BOOL hasIdleTimerBehaviors; 
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;              //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isAutoPictureInPictureSupported;
+(BOOL)isPictureInPictureSupported;
+(id)sharedInstanceIfLoaded;
-(void)assistantWillAppear:(id)arg1 ;
-(id)_overrideInsetsForReason:(id)arg1 withIdentifier:(id)arg2 ;
-(void)_lockStateDidChange:(id)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(BOOL)hasIdleTimerBehaviors;
-(void)assistantDidDisappear:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)_isContentViewAlignedLeftWithPosition:(unsigned long long)arg1 orientation:(long long)arg2 ;
-(void)containerViewControllerStartReducingResourcesUsage:(id)arg1 ;
-(void)_updateHasIdleTimerBehaviors;
-(id)pictureInPictureMorphAnimatorControllerForProcessIdentifier:(int)arg1 ;
-(void)activityDidChangeForSensorActivityDataProvider:(id)arg1 ;
-(void)endPiPInterruptionForAssertion:(id)arg1 ;
-(id)acquireInterruptionAssertionForReason:(long long)arg1 identifier:(id)arg2 cameraSensorBundleIdentifier:(id)arg3 ;
-(id)init;
-(void)_createWindowAndRootViewControllerIfNeeded;
-(void)updatePictureInPictureWindowLevel;
-(UIEdgeInsets)_pictureInPictureWindowMargins;
-(void)_keyboardWillShowOrHide:(id)arg1 ;
-(void)applyPictureInPictureInsets:(UIEdgeInsets)arg1 forSource:(long long)arg2 ;
-(id)_morphAnimatorControllerForProcessIdentifier:(int)arg1 ;
-(CGSize)preferredContentSizeForInteractivelyEnteringBackgroundForApplicationWithProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2 ;
-(id)acquireStashAssertionForReason:(long long)arg1 identifier:(id)arg2 ;
-(void)keyboardFocusController:(id)arg1 didUpdateFocusToPID:(int)arg2 sceneID:(id)arg3 ;
-(void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2 ;
-(void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3 ;
-(void)containerViewControllerStopReducingResourcesUsage:(id)arg1 ;
-(void)startPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)createAndRegisterPictureInPictureMorphAnimatorControllerWithTargetProcessIdentifier:(int)arg1 uuid:(id)arg2 scenePersistenceIdentifier:(id)arg3 direction:(long long)arg4 gestureInitiated:(BOOL)arg5 ;
-(void)morphAnimatorControllerDidTerminate:(id)arg1 ;
-(id)acquirePictureInPictureWindowLevelOverrideAssertionForWindowLevel:(unsigned long long)arg1 withReason:(long long)arg2 identifier:(id)arg3 ;
-(void)_keyboardWillRotate:(id)arg1 ;
-(void)containerViewController:(id)arg1 didFinishStartAnimationWithInitialInterfaceOrientation:(long long)arg2 ;
-(void)_addPictureInPictureMorphAnimatorController:(id)arg1 ;
-(void)_floatingDockHeightWillChange:(id)arg1 ;
-(void)pictureInPictureController:(id)arg1 willHidePictureInPictureViewController:(id)arg2 ;
-(void)beginPiPInterruptionForAssertion:(id)arg1 ;
-(BOOL)pictureInPictureController:(id)arg1 shouldDenyNewConnection:(id)arg2 ;
-(void)pictureInPictureController:(id)arg1 didRequestStopForPictureInPictureViewController:(id)arg2 sourceSceneSessionIdentifier:(id)arg3 animated:(BOOL)arg4 ;
-(BOOL)_pointInside:(CGPoint)arg1 ;
-(void)_updateFloatingDockInsets;
-(void)_managePictureInPictureWindowVisibilityAnimated:(BOOL)arg1 ;
-(void)_visualizeKeyboardFrameIfNeeded:(id)arg1 ;
-(void)pictureInPictureController:(id)arg1 didCreatePictureInPictureViewController:(id)arg2 ;
-(void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2 ;
-(UIEdgeInsets)_updatePictureInPictureOverlayInsetsWithCurrentLayoutState:(BOOL)arg1 shouldUpdate:(BOOL)arg2 ;
-(void)_setPictureInPictureWindowMargin:(UIEdgeInsets)arg1 ;
-(BOOL)_isContentViewAlignedTopWithPosition:(unsigned long long)arg1 orientation:(long long)arg2 ;
-(void)_setContainersStashed:(BOOL)arg1 ;
-(CGRect)defaultHomeScreenInitialPiPFrame:(CGRect)arg1 withPreferredContentSize:(CGSize)arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4 shouldUpdate:(BOOL)arg5 gestureInitiated:(BOOL)arg6 ;
-(void)containerViewControllerUserMayUpdateStashState:(id)arg1 ;
-(id)acquireInterruptionAssertionForReason:(long long)arg1 identifier:(id)arg2 ;
-(void)_removePictureInPictureMorphAnimatorController:(id)arg1 ;
-(long long)_reasonForAssertion:(id)arg1 ;
-(void)_updateContainerViewControllersContentPadding;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(id)_pipWindow;
-(void)pictureInPictureController:(id)arg1 didHidePictureInPictureViewController:(id)arg2 ;
-(void)_cancelInterruptionDebouncingTimer;
-(void)forcePictureInPictureContainerWithView:(id)arg1 toFrame:(CGRect)arg2 ;
-(CGRect)_keyboardFrameInScreenSpaceFromNotification:(id)arg1 ;
-(void)pictureInPictureController:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2 ;
-(void)setPictureInPictureWindowHidden:(BOOL)arg1 withReason:(id)arg2 ;
-(void)_destroyWindowAndRootViewControllerIfPossible;
-(void)containerViewController:(id)arg1 userDidUpdateStashState:(BOOL)arg2 ;
-(void)_updateFloatingDockInsetsWithHeight:(double)arg1 ;
-(void)_adjustPIPInsetsForKeyboardFrameChangeNotification:(id)arg1 ;
-(void)displayLayoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(id)_pictureInPictureApplicationForProcessIdentifier:(int)arg1 ;
-(BOOL)shouldStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2 ;
-(CGRect)initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplicationWithProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2 ;
-(BOOL)isPictureInPictureWindowVisible;
-(UIEdgeInsets)_updatePictureInPictureOverlayInsetsWithCurrentLayoutState:(BOOL)arg1 ;
-(CGSize)preferredContentSizeForActivePictureInPictureWithApplicationWithProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2 ;
-(void)_appSwitcherWillQuitApp:(id)arg1 ;
-(void)cancelPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)_managePictureInPictureWindowLevel;
-(id)_currentLayoutState;
@end
