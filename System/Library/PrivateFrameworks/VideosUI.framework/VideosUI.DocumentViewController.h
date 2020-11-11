/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSArray, UIViewController;

@interface VideosUI.DocumentViewController : UIViewController <UIGestureRecognizerDelegate> {

	 templateViewController;
	 documentDelegate;
	 document;
	 isTransitioning;
	 loadingView;
	 navBarOpacity;
	 navBarTitleOpacity;
	 navBarTintColor;
	 navBarPrefersLargeTitles;
	 pagePerformanceReporter;

}

@property (readonly,nonatomic) long long preferredStatusBarStyle; 
@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
@property (readonly,nonatomic) unsigned long long supportedInterfaceOrientations; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
@property (readonly,nonatomic) BOOL shouldAutomaticallyForwardAppearanceMethods; 
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(id)overrideTraitCollectionForChildViewController:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
@end
