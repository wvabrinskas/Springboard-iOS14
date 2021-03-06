/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIPanelControllerDelegate.h>
#import <UIKit/UIDimmingViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UISplitViewControllerImpl.h>

@protocol UISplitViewControllerDelegate;
@class NSMutableDictionary, UISplitViewController, UISplitViewControllerDisplayModeBarButtonItem, NSString, _UIFloatableBarButtonItem, UIView, UINavigationBar, UIBarButtonItem, UIPanGestureRecognizer, NSMutableArray, UITraitCollection, UISlidingBarStateRequest, UIResponder, _UIHyperregionUnion, _UIHyperrectangle, _UIHyperInteractor, _UIHyperConstantExtender, UIKeyCommand, UIScreenEdgePanGestureRecognizer, UIPanelController, UIDimmingView, UIImage, UITapGestureRecognizer, UIFocusContainerGuide, UISlidingBarConfiguration, UISlidingBarState, NSArray;

@interface UISplitViewControllerPanelImpl : NSObject <UIPanelControllerDelegate, UIDimmingViewDelegate, UIGestureRecognizerDelegate, UISplitViewControllerImpl> {

	NSMutableDictionary* _perColumnViewControllers;
	UISplitViewController* _svc;
	UISplitViewControllerDisplayModeBarButtonItem* _unspecifiedStyleDisplayModeButtonItem;
	NSString* _displayModeButtonItemTitle;
	_UIFloatableBarButtonItem* _sidebarToggleButtonItem;
	UIView* _floatableButtonContainer;
	UINavigationBar* _navBarForToggleButton;
	UIBarButtonItem* _secondaryOnlyShortcutButtonItem;
	UINavigationBar* _navBarForShortcutButton;
	double _presentationGestureDirection;
	UIPanGestureRecognizer* _sidebarPanGestureRecognizer;
	long long _lastNotifiedMode;
	NSMutableArray* _overrideReportedDisplayModeStack;
	long long _animatingToDisplayMode;
	BOOL _lastShouldAllowChange;
	BOOL _lastNotifiedIsCollapsed;
	long long _lastNotifiedTopColumnForCollapse;
	UITraitCollection* _transitioningToTraitCollection;
	SCD_Struct_UI36 _transitioningFlags;
	CGSize _transitioningToSize;
	long long _transitioningToOrientation;
	UITraitCollection* _suspendedTraitCollection;
	CGSize _suspendedSize;
	UISlidingBarStateRequest* _suspendedStateRequest;
	long long _suspendedState;
	UIResponder* _postTransitionResponder;
	long long _primaryEdge;
	NSMutableArray* _hyperpoints;
	_UIHyperregionUnion* _regionUnion;
	_UIHyperrectangle* _hyperrectangle;
	_UIHyperInteractor* _interactor;
	_UIHyperConstantExtender* _extender;
	UIKeyCommand* _sidebarDisplayKeyCommand;
	struct {
		unsigned usedNewSPI : 1;
		unsigned primaryHidingState : 2;
		unsigned userGeneratedDisplayMode : 3;
		unsigned isStrictUserGeneratedDisplayMode : 1;
		unsigned didSetLastShouldAllowChangeDuringUpdate : 1;
		unsigned hasTransitioningSizeAndOrientation : 1;
		unsigned hasPendingPreferredDisplayModeChange : 1;
		unsigned firstResponderChangedFromPostTransitionResponder : 1;
		unsigned firstResponderChangedFromPostTransitionResponderToNil : 1;
		unsigned usesExtraWidePrimaryColumn : 1;
		unsigned usesDeviceOverlayPreferences : 1;
		unsigned prefersOverlayInRegularWidthPhone : 1;
		unsigned isGestureShowingSupplementaryColumn : 1;
		unsigned isGestureHidingPrimaryWithSupplementaryVisible : 1;
		unsigned isForcingOverlayForGesture : 1;
		unsigned allowToggleSidebarButtonWithoutGesture : 1;
		unsigned alwaysHideToggleSidebarButton : 1;
		unsigned isSidebarKeyCommandInstalled : 1;
		unsigned allowsDimmedSecondaryAsDeepestUnambiguousResponder : 1;
		unsigned allowSecondaryOnlyButton : 1;
		unsigned lockedForDelegateCallback : 1;
		unsigned inCollapsingToProposedTopColumnCallback;
		unsigned sendDelegateWillShowColumn : 1;
		unsigned sendDelegateWillHideColumn : 1;
		unsigned skipDelegateWillShowHideColumn : 1;
		unsigned useUnderscoredWillShowHideColumn : 1;
		unsigned sendDelegateInteractiveGestureWillBegin : 1;
		unsigned sendDelegateInteractiveGestureWillBeginSPI : 1;
		unsigned sendDelegateInteractiveGestureDidEnd : 1;
		unsigned sendDelegateInteractiveGestureDidEndSPI : 1;
		unsigned sendDelegateAllowGestureForColumnSPI : 1;
	}  _flags;
	double _lastUserInitiatedPrimaryWidth;
	long long _primaryBackgroundStyle;
	BOOL _presentsWithGesture;
	id<UISplitViewControllerDelegate> _delegate;
	long long _preferredDisplayMode;
	double _preferredPrimaryColumnWidthFraction;
	double _preferredPrimaryColumnWidth;
	double _minimumPrimaryColumnWidth;
	double _maximumPrimaryColumnWidth;
	double _preferredSupplementaryColumnWidth;
	unsigned long long _lastFocusedChildViewControllerIndex;
	long long _preferredSplitBehavior;
	double _preferredSupplementaryColumnWidthFraction;
	double _minimumSupplementaryColumnWidth;
	double _maximumSupplementaryColumnWidth;
	UIScreenEdgePanGestureRecognizer* __fluidOpenSidebarPresentationGestureRecognizer;
	UIPanelController* _panelController;
	UIDimmingView* __dimmingView;
	UIImage* __fullScreenButtonImage;
	UITapGestureRecognizer* _menuGestureRecognizer;
	UIFocusContainerGuide* _masterFocusContainerGuide;
	UIFocusContainerGuide* _detailFocusContainerGuide;

}

@property (nonatomic,retain) UIPanelController * panelController;                                                                                                                                                             //@synthesize panelController=_panelController - In the implementation block
@property (setter=_setPresentationGestureRecognizer:,nonatomic,retain) UIPanGestureRecognizer * _presentationGestureRecognizer; 
@property (setter=_setFluidSidebarPresentationGestureRecognizer:,nonatomic,retain) UIPanGestureRecognizer * _fluidSidebarPresentationGestureRecognizer; 
@property (setter=_setFluidOpenSidebarPresentationGestureRecognizer:,nonatomic,retain) UIScreenEdgePanGestureRecognizer * _fluidOpenSidebarPresentationGestureRecognizer;                                                     //@synthesize _fluidOpenSidebarPresentationGestureRecognizer=__fluidOpenSidebarPresentationGestureRecognizer - In the implementation block
@property (setter=_setDimmingView:,nonatomic,retain) UIDimmingView * _dimmingView;                                                                                                                                            //@synthesize _dimmingView=__dimmingView - In the implementation block
@property (setter=_setFullScreenButtonImage:,nonatomic,retain) UIImage * _fullScreenButtonImage;                                                                                                                              //@synthesize _fullScreenButtonImage=__fullScreenButtonImage - In the implementation block
@property (getter=_menuGestureRecognizer,nonatomic,readonly) UITapGestureRecognizer * menuGestureRecognizer;                                                                                                                  //@synthesize menuGestureRecognizer=_menuGestureRecognizer - In the implementation block
@property (getter=_lastFocusedChildViewControllerIndex,nonatomic,readonly) unsigned long long lastFocusedChildViewControllerIndex;                                                                                            //@synthesize lastFocusedChildViewControllerIndex=_lastFocusedChildViewControllerIndex - In the implementation block
@property (getter=_masterFocusContainerGuide,nonatomic,readonly) UIFocusContainerGuide * masterFocusContainerGuide;                                                                                                           //@synthesize masterFocusContainerGuide=_masterFocusContainerGuide - In the implementation block
@property (getter=_detailFocusContainerGuide,nonatomic,readonly) UIFocusContainerGuide * detailFocusContainerGuide;                                                                                                           //@synthesize detailFocusContainerGuide=_detailFocusContainerGuide - In the implementation block
@property (nonatomic,copy) UISlidingBarConfiguration * configuration; 
@property (nonatomic,readonly) UISlidingBarState * currentState; 
@property (nonatomic,readonly) NSArray * possibleStates; 
@property (nonatomic,copy) UISlidingBarStateRequest * stateRequest; 
@property (assign,nonatomic) double preferredPrimaryColumnWidth;                                                                                                                                                              //@synthesize preferredPrimaryColumnWidth=_preferredPrimaryColumnWidth - In the implementation block
@property (assign,nonatomic) long long style; 
@property (assign,nonatomic) BOOL showsSecondaryOnlyButton; 
@property (assign,nonatomic) long long preferredSplitBehavior;                                                                                                                                                                //@synthesize preferredSplitBehavior=_preferredSplitBehavior - In the implementation block
@property (nonatomic,readonly) long long splitBehavior; 
@property (assign,nonatomic) double preferredSupplementaryColumnWidthFraction;                                                                                                                                                //@synthesize preferredSupplementaryColumnWidthFraction=_preferredSupplementaryColumnWidthFraction - In the implementation block
@property (assign,nonatomic) double preferredSupplementaryColumnWidth;                                                                                                                                                        //@synthesize preferredSupplementaryColumnWidth=_preferredSupplementaryColumnWidth - In the implementation block
@property (assign,nonatomic) double minimumSupplementaryColumnWidth;                                                                                                                                                          //@synthesize minimumSupplementaryColumnWidth=_minimumSupplementaryColumnWidth - In the implementation block
@property (assign,nonatomic) double maximumSupplementaryColumnWidth;                                                                                                                                                          //@synthesize maximumSupplementaryColumnWidth=_maximumSupplementaryColumnWidth - In the implementation block
@property (nonatomic,readonly) double supplementaryColumnWidth; 
@property (assign,setter=_setVisibleToggleButtonRequiresPresentsWithGesture:,nonatomic) BOOL _visibleToggleButtonRequiresPresentsWithGesture; 
@property (assign,setter=_setForceDisplayModeBarButtonHidden:,nonatomic) BOOL _forceDisplayModeBarButtonHidden; 
@property (assign,setter=_setAllowsDimmedSecondaryAsDeepestUnambiguousResponder:,getter=_allowsDimmedSecondaryAsDeepestUnambiguousResponder,nonatomic) BOOL _allowsDimmedSecondaryAsDeepestUnambiguousResponder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic,__weak) id<UISplitViewControllerDelegate> delegate;                                                                                                                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL presentsWithGesture;                                                                                                                                                                        //@synthesize presentsWithGesture=_presentsWithGesture - In the implementation block
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (assign,nonatomic) long long preferredDisplayMode;                                                                                                                                                                  //@synthesize preferredDisplayMode=_preferredDisplayMode - In the implementation block
@property (assign,nonatomic) double preferredPrimaryColumnWidthFraction;                                                                                                                                                      //@synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction - In the implementation block
@property (assign,nonatomic) double minimumPrimaryColumnWidth;                                                                                                                                                                //@synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth - In the implementation block
@property (assign,nonatomic) double maximumPrimaryColumnWidth;                                                                                                                                                                //@synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth - In the implementation block
@property (assign,nonatomic) long long primaryEdge; 
@property (assign,nonatomic) float gutterWidth; 
@property (assign,nonatomic) BOOL hidesMasterViewInPortrait; 
@property (assign,nonatomic) BOOL prefersOverlayInRegularWidthPhone; 
@property (assign,nonatomic) BOOL usesDeviceOverlayPreferences; 
@property (setter=_setDisplayModeButtonItemTitle:,nonatomic,copy) NSString * _displayModeButtonItemTitle; 
@property (assign,setter=_setUsesExtraWidePrimaryColumn:,getter=_usesExtraWidePrimaryColumn,nonatomic) BOOL usesExtraWidePrimaryColumn; 
@property (assign,nonatomic) long long primaryBackgroundStyle; 
@property (nonatomic,readonly) BOOL lockedForDelegateCallback; 
@property (nonatomic,readonly) BOOL inCollapsingToProposedTopColumnCallback; 
-(void)setPrefersOverlayInRegularWidthPhone:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2 ;
-(void)_setPrimaryHidingState:(long long)arg1 ;
-(BOOL)_iPhoneShouldUseOverlayInCurrentEnvironment;
-(void)removeChildViewController:(id)arg1 ;
-(double)minimumPrimaryColumnWidth;
-(void)setPreferredPrimaryColumnWidthFraction:(double)arg1 ;
-(BOOL)_gestureIsForcingOverlay;
-(void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2 ;
-(BOOL)_usesExtraWidePrimaryColumn;
-(void)setGutterWidth:(float)arg1 ;
-(BOOL)isCollapsed;
-(UISlidingBarState *)currentState;
-(id)masterViewController;
-(double)maximumPrimaryColumnWidth;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(BOOL)_layoutPrimaryOnRight;
-(long long)primaryEdge;
-(void)setPresentsWithGesture:(BOOL)arg1 ;
-(void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2 ;
-(void)setPrimaryBackgroundStyle:(long long)arg1 ;
-(long long)_columnForMonitoredNavigationController:(id)arg1 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(void)_triggerDisplayModeAction:(id)arg1 ;
-(void)unloadViewForced:(BOOL)arg1 ;
-(void)_addFocusPromiseRegionInContext:(id)arg1 ;
-(void)setPrimaryEdge:(long long)arg1 ;
-(/*^block*/id)panelControllerWillUpdate:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(long long)_currentInterfaceIdiom;
-(id)_allContainedViewControllers;
-(double)preferredPrimaryColumnWidthFraction;
-(void)_didEndSnapshotSession;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)_isAnimating;
-(BOOL)inCollapsingToProposedTopColumnCallback;
-(void)_setDisplayModeButtonItemTitle:(id)arg1 ;
-(void)_willBeginSnapshotSession;
-(id)_masterFocusContainerGuide;
-(id)_childContainingSender:(id)arg1 ;
-(id)_deepestActionResponder;
-(BOOL)_allowMoveToSecondaryOnlyGetIsInForcedOverlayFromGesture:(BOOL*)arg1 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_nextVisibleViewControllerForResponderAfterChildViewController:(id)arg1 ;
-(double)_contentMarginForChildViewController:(id)arg1 ;
-(id)initWithSplitViewController:(id)arg1 ;
-(BOOL)_shouldPersistViewWhenCoding;
-(long long)_unspecifiedStyleDisplayModeForState:(id)arg1 ;
-(long long)_effectiveTargetDisplayModeForDisplayMode:(long long)arg1 ;
-(BOOL)usesDeviceOverlayPreferences;
-(id)_primaryContentResponder;
-(double)_primaryDividerPosition;
-(float)gutterWidth;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2 ;
-(void)_updateDisplayModeButtonItem;
-(void)_updateChildContentMargins;
-(NSString *)_displayModeButtonItemTitle;
-(void)setViewControllers:(NSArray *)arg1 ;
-(BOOL)presentsWithGesture;
-(id)preferredFocusEnvironments;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)prefersOverlayInRegularWidthPhone;
-(void)_viewControllerChildViewControllersDidChange:(id)arg1 ;
-(id)detailViewController;
-(unsigned long long)_lastFocusedChildViewControllerIndex;
-(long long)primaryBackgroundStyle;
-(long long)preferredDisplayMode;
-(long long)allowedDisplayModeForCurrentSplitBehaviorGivenDisplayMode:(long long)arg1 ;
-(CGRect)_frameForChildContentContainer:(id)arg1 ;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)_unspecifiedStylePresentationGestureRecognizerChanged:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_detailFocusContainerGuide;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(double)_primaryColumnWidthForSize:(CGSize)arg1 shouldUseOverlay:(BOOL)arg2 ;
-(BOOL)_isCollapsed;
-(id)displayModeButtonItem;
-(void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(BOOL)arg4 ;
-(void)_displayModeBarButtonItemWasUsedForFirstTime:(id)arg1 ;
-(void)toggleMasterVisible:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(long long)preferredTrailingStatusBarStyle;
-(void)setUsesDeviceOverlayPreferences:(BOOL)arg1 ;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(void)setMaximumPrimaryColumnWidth:(double)arg1 ;
-(void)_didChangeToFirstResponder:(id)arg1 ;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3 ;
-(void)_stopTransitionsInViewController:(id)arg1 ;
-(long long)_primaryHidingState;
-(BOOL)_setPanelConfigurationWithIsPrimaryShown:(BOOL)arg1 shouldUseOverlay:(BOOL)arg2 ;
-(void)_setUpFocusContainerGuides;
-(double)primaryColumnWidth;
-(BOOL)_handlesCounterRotationForPresentation;
-(BOOL)hidesMasterViewInPortrait;
-(void)setHidesMasterViewInPortrait:(BOOL)arg1 ;
-(id)_additionalViewControllersToCheckForUserActivity;
-(void)sendWillHideColumn:(long long)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(BOOL)_isRotating;
-(id)_hiddenColumnsInCurrentEnvironmentWithConcreteDisplayMode:(long long)arg1 ;
-(void)setPreferredDisplayMode:(long long)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI53*)arg1 ;
-(void)_setVisibleToggleButtonRequiresPresentsWithGesture:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(long long)preferredLeadingStatusBarStyle;
-(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(BOOL)lockedForDelegateCallback;
-(NSArray *)viewControllers;
-(void)_setUsesExtraWidePrimaryColumn:(BOOL)arg1 ;
-(id)_unspecifiedStyleChildViewControllersToSendViewWillTransitionToSize;
-(id)_multitaskingDragExclusionRects;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(double)_supplementaryDividerPosition;
-(double)_defaultMaximumPrimaryColumnWidthForSize:(CGSize)arg1 ;
-(id)_primaryDimmingView;
-(void)setMinimumPrimaryColumnWidth:(double)arg1 ;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(long long)_effectiveTargetDisplayMode;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(void)_initWithCoder:(id)arg1 ;
-(id)_fullScreenSymbolImageForDisplayMode:(long long)arg1 ;
-(id<UISplitViewControllerDelegate>)delegate;
-(long long)splitBehaviorInCurrentEnvironment;
-(long long)_columnForView:(id)arg1 getIsContent:(BOOL*)arg2 ;
-(CGSize)_predictedDetailSizeForPredictedEndState:(id)arg1 ;
-(BOOL)_forceDisplayModeBarButtonHidden;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_fluidUpdatePresentationGestureRecognizers;
-(void)setPreferredSupplementaryColumnWidthFraction:(double)arg1 ;
-(BOOL)_configurationPermitsFluidOpenGestureWithPrimaryShown:(BOOL)arg1 supplementaryShown:(BOOL)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)showsSecondaryOnlyButton;
-(double)_primaryColumnWidthForSize:(CGSize)arg1 isCompact:(BOOL)arg2 shouldUseOverlay:(BOOL)arg3 ;
-(void)_navigationControllerDidUpdateStack:(id)arg1 ;
-(void)_unspecifiedStyleSetViewControllers:(id)arg1 ;
-(void)_revealSecondaryColumnIfNecessary;
-(long long)splitBehaviorForSize:(CGSize)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)_fullScreenButtonImage;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_isDisplayModeBarButtonVisible;
-(CGSize)_defaultViewSizeForResolvingDisplayModeOrSplitBehavior;
-(BOOL)_iPadShouldUseOverlayInCurrentEnvironment;
-(BOOL)allowsSecondaryOnlyShortcutButton;
-(void)updatePanelControllerForViewControllerChangeInColumn:(long long)arg1 alwaysAnimate:(BOOL)arg2 ;
-(UIDimmingView *)_dimmingView;
-(BOOL)_allowClientAnimationCoordination;
-(BOOL)_alwaysHideSidebarToggleButton;
-(void)hideColumn:(long long)arg1 ;
-(void)setPanelController:(UIPanelController *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_unspecifiedStyleChangeToDisplayMode:(long long)arg1 fromPreferredDisplayMode:(long long)arg2 ;
-(id)childViewControllerForStatusBarStyle;
-(void)setPreferredSupplementaryColumnWidth:(double)arg1 ;
-(long long)topColumnForCollapsingPanelController:(id)arg1 ;
-(void)panelController:(id)arg1 didChangeToState:(id)arg2 withSize:(CGSize)arg3 ;
-(void)_presentationGestureRecognizerChanged:(id)arg1 ;
-(void)setViewController:(id)arg1 forColumn:(long long)arg2 ;
-(BOOL)_setPanelConfigurationWithIsPrimaryShown:(BOOL)arg1 isSupplementaryShown:(BOOL)arg2 shouldUseOverlay:(BOOL)arg3 dimMainIfNecessary:(BOOL)arg4 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setPreferredPrimaryColumnWidth:(double)arg1 ;
-(void)callDeprecatedWillShowDelegateCallbackIfNecessary;
-(Class)viewClassForPanelController:(id)arg1 ;
-(long long)_displayModeForState:(id)arg1 ;
-(id)_navigationBarForSidebarButtonForColumn:(long long)arg1 ;
-(id)transitionCoordinator;
-(id)primaryViewControllerForExpandingPanelController:(id)arg1 ;
-(double)supplementaryColumnWidth;
-(void)panelController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2 ;
-(BOOL)_shouldReturnBoundsWidthForColumnWidth;
-(void)updateDisplayModeButtonItem;
-(void)panelController:(id)arg1 willBeginAnimationToPrimarySize:(CGSize)arg2 supplementarySize:(CGSize)arg3 secondarySize:(CGSize)arg4 ;
-(void)_unspecifiedStyleSetPrimaryShownFromGesture:(BOOL)arg1 ;
-(void)_getPrimaryShown:(BOOL*)arg1 shouldUseOverlay:(BOOL*)arg2 ;
-(double)preferredPrimaryColumnWidth;
-(UISlidingBarStateRequest *)stateRequest;
-(void)_unspecifiedStyleUpdateDisplayModeButtonItem;
-(double)preferredSupplementaryColumnWidth;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateConfigurationBackgroundStyle;
-(void)panelController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3 predictedDuration:(double)arg4 ;
-(void)_supplementaryOrPrimaryColumnWidthAffectingPropertyDidChange;
-(void)setDelegate:(id<UISplitViewControllerDelegate>)arg1 ;
-(id)_navigationController:(id)arg1 navigationBarAdditionalActionsForBackButtonMenu:(id)arg2 ;
-(void)animateToRequest:(id)arg1 ;
-(void)_getPrimaryShown:(BOOL*)arg1 supplementaryShown:(BOOL*)arg2 shouldUseOverlay:(BOOL*)arg3 dimMainIfNecessary:(BOOL*)arg4 ;
-(id)panelController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(long long)displayMode;
-(UIPanGestureRecognizer *)_presentationGestureRecognizer;
-(NSString *)description;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)_updateFocusContainerGuideFrames;
-(BOOL)_scrollViewPreventsGestureForHitView:(id)arg1 ;
-(void)_tabBarControllerDidChangeSelection:(id)arg1 ;
-(void)_transitionFromDisplayMode:(long long)arg1 toDisplayMode:(long long)arg2 ;
-(id)_columnStyleDelegate;
-(long long)_concreteDisplayModeForCurrentEnvironment;
-(void)panelController:(id)arg1 adjustLeadingViewController:(id)arg2 forKeyboardInfo:(id)arg3 ;
-(void)_setPresentationGestureRecognizer:(id)arg1 ;
-(void)panelControllerDidExpand:(id)arg1 ;
-(long long)_svcOrientation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)_defaultMaximumIPadWidthForColumn:(long long)arg1 withSize:(CGSize)arg2 ;
-(void)_updateDisplayModeButtonItemForDisplayMode:(long long)arg1 ;
-(id)_currentSupplementaryChildViewController;
-(void)getPrimaryColumnWidth:(double*)arg1 supplementaryColumnWidth:(double*)arg2 forSize:(CGSize)arg3 displayMode:(long long)arg4 isCompact:(BOOL)arg5 shouldUseOverlay:(BOOL)arg6 forceNoSupplementaryFill:(BOOL)arg7 ;
-(void)_updateDisplayModeButtonItemIfNecessaryForChangingNavigationController:(id)arg1 ;
-(id)_menuGestureRecognizer;
-(void)_setDimmingView:(id)arg1 ;
-(BOOL)_fluidGestureRecognizerShouldBegin:(id)arg1 ;
-(id)_displayModeButtonItem;
-(id)preferredFocusedView;
-(double)_defaultMaximumSupplementaryColumnWidthForSize:(CGSize)arg1 ;
-(void)_notifyFluidPresentationGestureDidEnd;
-(long long)validDisplayModeWithAllColumns;
-(unsigned long long)_effectivePrimaryRectEdge;
-(void)panelController:(id)arg1 animateTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3 predictedDuration:(double)arg4 ;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(void)_unspecifiedStyleTriggerDisplayModeAction:(id)arg1 ;
-(long long)style;
-(double)minimumSupplementaryColumnWidth;
-(BOOL)_gestureIsForcingOverlayForDisplayMode:(long long)arg1 ;
-(id)_leaveFullScreenSymbolImage;
-(BOOL)panelController:(id)arg1 collapsePrimaryViewController:(id)arg2 withFallbackSecondaryViewController:(id)arg3 onTopOfSupplementaryViewController:(id)arg4 transitionCoordinator:(id)arg5 ;
-(void)sendColumnShowHideNotificationsForNewState:(id)arg1 newDisplayMode:(long long)arg2 oldDisplayMode:(long long)arg3 ;
-(void)_notifyFluidPresentationGestureWillBegin;
-(UIScreenEdgePanGestureRecognizer *)_fluidOpenSidebarPresentationGestureRecognizer;
-(void)_popOverrideOfReportedDisplayMode;
-(void)_changeToDisplayMode:(long long)arg1 fromPreferredDisplayMode:(long long)arg2 ;
-(id)_unspecifiedStyleViewControllers;
-(void)panelControllerDidCollapse:(id)arg1 ;
-(void)_updateDisplayModeButtonItemAndResetForCanceledAnimationWithTransitionCoordinator:(id)arg1 ;
-(void)_setNumberOfSidebarColumnsVisibleFromGesture:(unsigned long long)arg1 withVelocity:(double)arg2 ;
-(void)_setFluidOpenSidebarPresentationGestureRecognizer:(id)arg1 ;
-(BOOL)_visibleToggleButtonRequiresPresentsWithGesture;
-(double)preferredSupplementaryColumnWidthFraction;
-(BOOL)_unspecifiedStyleGestureRecognizerShouldBegin:(id)arg1 ;
-(id)_currentPrimaryChildViewController;
-(UIPanGestureRecognizer *)_fluidSidebarPresentationGestureRecognizer;
-(void)setMaximumSupplementaryColumnWidth:(double)arg1 ;
-(id)primaryViewControllerForCollapsingPanelController:(id)arg1 ;
-(id)_enterFullScreenSymbolImage;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updatePanelControllerForViewControllerChangeInColumn:(long long)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_fluidPresentationGestureRecognizerChanged:(id)arg1 ;
-(id)panelController:(id)arg1 unspecifiedStyleSeparateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(void)getPrimaryColumnWidth:(double*)arg1 supplementaryColumnWidth:(double*)arg2 forSize:(CGSize)arg3 displayMode:(long long)arg4 isCompact:(BOOL)arg5 shouldUseOverlay:(BOOL)arg6 ;
-(void)_getPrimaryShown:(BOOL*)arg1 supplementaryShown:(BOOL*)arg2 shouldUseOverlay:(BOOL*)arg3 dimMainIfNecessary:(BOOL*)arg4 forDisplayMode:(long long)arg5 ;
-(long long)_nextTargetDisplayModeForDisplayMode:(long long)arg1 showMoreIfPossible:(BOOL)arg2 ;
-(BOOL)_configurationPermitsFluidCloseGestureWithPrimaryShown:(BOOL)arg1 supplementaryShown:(BOOL)arg2 ;
-(BOOL)_navigationControllerShouldNotAdjustTransitioningSizeForChildContainer:(id)arg1 ;
-(void)panelController:(id)arg1 adjustTrailingViewController:(id)arg2 forKeyboardInfo:(id)arg3 ;
-(void)_unspecifiedStylePanelController:(id)arg1 didChangeToState:(id)arg2 withSize:(CGSize)arg3 ;
-(void)panelController:(id)arg1 willChangeToState:(id)arg2 ;
-(void)_commonInit;
-(void)_triggerSecondaryOnlyShortcutAction:(id)arg1 ;
-(void)callDeprecatedWillHideDelegateCallbackIfNecessary;
-(long long)preferredSplitBehavior;
-(BOOL)_shouldUseFluidSidebarGestures;
-(void)_setAllowsDimmedSecondaryAsDeepestUnambiguousResponder:(BOOL)arg1 ;
-(void)loadView;
-(void)_pushOverrideOfReportedDisplayMode:(long long)arg1 ;
-(void)_setInteractiveSidebarWidth:(double)arg1 ;
-(long long)defaultDisplayModeForSize:(CGSize)arg1 ;
-(void)_navigationController:(id)arg1 navigationBar:(id)arg2 topItemUpdatedContentLayout:(id)arg3 ;
-(void)setShowsSecondaryOnlyButton:(BOOL)arg1 ;
-(BOOL)_isPrimaryLeading;
-(long long)userGeneratedDisplayMode;
-(id)_newBarContentAnimationClippingView;
-(BOOL)_isPrimaryShown;
-(BOOL)_isCollapsedOrCollapsing;
-(void)_unspecifiedShowDetailViewController:(id)arg1 onTargetVC:(id)arg2 sender:(id)arg3 ;
-(void)panelController:(id)arg1 collapsePrimaryViewController:(id)arg2 withFallbackSecondaryViewController:(id)arg3 transitionCoordinator:(id)arg4 ;
-(void)setPreferredSplitBehavior:(long long)arg1 ;
-(void)_primaryColumnWidthAffectingPropertyDidChange;
-(BOOL)_allowsDimmedSecondaryAsDeepestUnambiguousResponder;
-(void)_setFluidSidebarPresentationGestureRecognizer:(id)arg1 ;
-(id)_unspecifiedCompositionDisplayModeButtonItem;
-(UIEdgeInsets)_tvOSColumnStyleExtraInsetsForChildViewController:(id)arg1 ;
-(void)_updatePresentationGestureRecognizer;
-(void)setConfiguration:(UISlidingBarConfiguration *)arg1 ;
-(long long)_columnForViewController:(id)arg1 ;
-(double)maximumSupplementaryColumnWidth;
-(void)showColumn:(long long)arg1 ;
-(void)_allowingMutationsInDelegateCallback:(/*^block*/id)arg1 ;
-(void)_setPrimaryShownFromGesture:(BOOL)arg1 hideAll:(BOOL)arg2 ;
-(void)_updateSidebarDisplayKeyCommand;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(long long)splitBehavior;
-(void)_updateDimmingView;
-(void)setUserGeneratedDisplayMode:(long long)arg1 ;
-(double)panelController:(id)arg1 expectedWidthForColumnForViewController:(id)arg2 forceNoSupplementaryFill:(BOOL)arg3 ;
-(void)_setFullScreenButtonImage:(id)arg1 ;
-(long long)_svcViewWindowOrientation;
-(void)setMinimumSupplementaryColumnWidth:(double)arg1 ;
-(void)preparePanelControllerForCollapse;
-(BOOL)_supplementaryColumnFills;
-(BOOL)panelController:(id)arg1 collapseOntoPrimaryViewController:(id)arg2 ;
-(BOOL)_usePaddingForEdgeInsetsForChildViewController:(id)arg1 ;
-(void)_setForceDisplayModeBarButtonHidden:(BOOL)arg1 ;
-(void)getPrimaryColumnWidth:(double*)arg1 supplementaryColumnWidth:(double*)arg2 forSize:(CGSize)arg3 displayMode:(long long)arg4 shouldUseOverlay:(BOOL)arg5 ;
-(long long)_fullScreenStateForOrientation:(long long)arg1 viewWidth:(double)arg2 ;
-(void)setStyle:(long long)arg1 ;
-(UISlidingBarConfiguration *)configuration;
-(id)panelController:(id)arg1 separateSupplementaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(void)sendWillShowColumn:(long long)arg1 ;
-(double)_defaultMaximumTVWidthForColumn:(long long)arg1 withSize:(CGSize)arg2 ;
-(void)_triggerSidebarKeyCommandAction:(id)arg1 ;
-(id)panelController:(id)arg1 navigationBarForViewController:(id)arg2 ;
-(void)_navigationControllerDidChangeNavigationBarHidden:(id)arg1 ;
-(UIPanelController *)panelController;
-(id)_sidebarChevronSymbolImage;
-(id)_sidebarToggleSymbolImage;
-(NSArray *)possibleStates;
-(CGSize)_screenSize;
-(id)viewControllerForColumn:(long long)arg1 ;
@end

