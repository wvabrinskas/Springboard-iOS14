/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterCompactModule.bundle/HomeControlCenterCompactModule
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeControlCenterCompactModule/HomeControlCenterCompactModule-Structs.h>
#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>
#import <libobjc.A.dylib/HUCCDashboardContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/HUCCCompactModulePropertyAnimatorDelegate.h>

@protocol NSObject, HUCCCompactModuleContentViewControllerDelegate;
@class UIView, HUCCDashboardContainerViewController, NSString;

@interface HUCCCompactModuleContentViewController : CCUIButtonModuleViewController <HUCCDashboardContainerViewControllerDelegate, HUCCCompactModulePropertyAnimatorDelegate> {

	id<NSObject> _activeAssertion;
	UIView* _expandedView;
	HUCCDashboardContainerViewController* _dashboardContainerViewController;
	id<HUCCCompactModuleContentViewControllerDelegate> _delegate;
	UIView* _transitionIconView;
	double _transitionDeviceCornerRadius;
	CGRect _transitionCompressedAnimationStartFrame;

}

@property (nonatomic,retain) id<NSObject> activeAssertion;                                                         //@synthesize activeAssertion=_activeAssertion - In the implementation block
@property (nonatomic,retain) UIView * expandedView;                                                                //@synthesize expandedView=_expandedView - In the implementation block
@property (nonatomic,retain) HUCCDashboardContainerViewController * dashboardContainerViewController;              //@synthesize dashboardContainerViewController=_dashboardContainerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<HUCCCompactModuleContentViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * transitionIconView;                                                          //@synthesize transitionIconView=_transitionIconView - In the implementation block
@property (assign,nonatomic) double transitionDeviceCornerRadius;                                                  //@synthesize transitionDeviceCornerRadius=_transitionDeviceCornerRadius - In the implementation block
@property (assign,nonatomic) CGRect transitionCompressedAnimationStartFrame;                                       //@synthesize transitionCompressedAnimationStartFrame=_transitionCompressedAnimationStartFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)displayWillTurnOff;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(id<HUCCCompactModuleContentViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(double)preferredExpandedContentHeight;
-(BOOL)shouldExpandModuleOnTouch:(id)arg1 ;
-(double)preferredExpandedContinuousCornerRadius;
-(void)setDelegate:(id<HUCCCompactModuleContentViewControllerDelegate>)arg1 ;
-(id)customAnimator;
-(double)preferredExpandedContentWidth;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)quickControlsPresentationDidUpdate:(BOOL)arg1 ;
-(void)setTransitionIconView:(UIView *)arg1 ;
-(UIView *)transitionIconView;
-(id<NSObject>)activeAssertion;
-(void)setActiveAssertion:(id<NSObject>)arg1 ;
-(UIView *)expandedView;
-(void)setExpandedView:(UIView *)arg1 ;
-(void)setTransitionDeviceCornerRadius:(double)arg1 ;
-(void)_setUpHomeControlService;
-(void)setTransitionCompressedAnimationStartFrame:(CGRect)arg1 ;
-(void)_tearDownHomeControlService;
-(HUCCDashboardContainerViewController *)dashboardContainerViewController;
-(void)setDashboardContainerViewController:(HUCCDashboardContainerViewController *)arg1 ;
-(void)resetToInitialState;
-(void)_openHomeApp;
-(CGRect)_iconViewInHomeGridCellFrame;
-(CGRect)_iconViewInNavigationHeaderViewFrame;
-(CGRect)_expandedContentFrame;
-(CGRect)transitionCompressedAnimationStartFrame;
-(double)transitionDeviceCornerRadius;
-(CGSize)preferredExpandedSize;
-(void)remoteDashboard:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(void)requestAuthenticationIfLockedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)propertyAnimatorDidStartAnimating:(id)arg1 ;
@end

