/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CSPageViewController.h>
#import <libobjc.A.dylib/CSTodayViewControllerDelegate.h>
#import <libobjc.A.dylib/SBUICoronaAnimationControllerParticipant.h>
#import <libobjc.A.dylib/CSPageViewControllerProtocol.h>
#import <libobjc.A.dylib/SBUISpotlightInitiating.h>

@class SBViewControllerTransitionContext, CSLayoutStrategy, CSTodayContentViewController, CSTodayViewController, NSString, CSAppearance, CSBehavior, CSPresentation, NSSet, _UILegibilitySettings, UIColor, NSArray;

@interface CSTodayPageViewController : CSPageViewController <CSTodayViewControllerDelegate, SBUICoronaAnimationControllerParticipant, CSPageViewControllerProtocol, SBUISpotlightInitiating> {

	CSLayoutStrategy* _layoutStrategy;
	CSTodayContentViewController* _contentViewController;

}

@property (nonatomic,retain) CSTodayContentViewController * contentViewController;                                //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) CSTodayViewController * todayViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CSCoverSheetViewControllerProtocol> coverSheetViewController; 
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning; 
@property (nonatomic,readonly) BOOL authenticated; 
@property (nonatomic,retain) CSLayoutStrategy * layoutStrategy;                                                   //@synthesize layoutStrategy=_layoutStrategy - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageRole; 
@property (nonatomic,copy,readonly) CSAppearance * activeAppearance; 
@property (nonatomic,copy,readonly) CSBehavior * activeBehavior; 
@property (nonatomic,copy,readonly) CSPresentation * externalPresentation; 
@property (assign,nonatomic,__weak) id<CSCoverSheetViewPresenting> presenter; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) long long presentationType; 
@property (nonatomic,readonly) long long presentationTransition; 
@property (nonatomic,readonly) long long presentationPriority; 
@property (nonatomic,readonly) long long presentationAltitude; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
@property (nonatomic,retain) SBViewControllerTransitionContext * transitionContext; 
+(unsigned long long)requiredCapabilities;
+(BOOL)isAvailableForConfiguration;
-(void)cleanupAfterSpotlightDismissal;
-(void)resetForSpotlightDismissalAnimated:(BOOL)arg1 ;
-(CSTodayViewController *)todayViewController;
-(unsigned long long)listWidthStrategy;
-(double)listInsetX;
-(NSString *)pageRole;
-(void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2 ;
-(BOOL)_isPortrait;
-(id)displayLayoutElementIdentifier;
-(double)minimumDateToListSpacing;
-(void)setTransitionContext:(SBViewControllerTransitionContext *)arg1 ;
-(unsigned long long)listLayout;
-(id)spotlightHeaderAcquiringViewController;
-(double)customListWidth;
-(void)setContentViewController:(CSTodayContentViewController *)arg1 ;
-(void)coverSheetTodayViewController:(id)arg1 contentViewsDidChange:(id)arg2 ;
-(void)coverSheetTodayViewControllerDidFocusSearchView:(id)arg1 ;
-(CSLayoutStrategy *)layoutStrategy;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_listBelowDateTime;
-(SBViewControllerTransitionContext *)transitionContext;
-(void)setLayoutStrategy:(CSLayoutStrategy *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)dateTimeLayout;
-(void)aggregateBehavior:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)updateTransitionWhileRubberBandingInProgress:(BOOL)arg1 ;
-(CSTodayContentViewController *)contentViewController;
-(double)dateTimeInsetX;
-(void)aggregateAppearance:(id)arg1 ;
@end

