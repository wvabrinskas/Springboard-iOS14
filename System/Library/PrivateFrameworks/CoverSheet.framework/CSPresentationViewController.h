/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol CSPresentationViewControllerDelegate;
@class NSMutableArray, NSArray, NSString;

@interface CSPresentationViewController : CSCoverSheetViewControllerBase <BSDescriptionProviding> {

	unsigned long long _mutatingPresentation;
	unsigned long long _transitioning;
	NSMutableArray* _contentViewControllers;
	NSArray* _activeContentViewControllers;
	id<CSPresentationViewControllerDelegate> _presentationDelegate;

}

@property (assign,nonatomic,__weak) id<CSPresentationViewControllerDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (getter=hasContent,nonatomic,readonly) BOOL hasContent; 
@property (getter=isPresentingContent,nonatomic,readonly) BOOL presentingContent; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,copy,readonly) NSArray * contentViewControllers;                                           //@synthesize contentViewControllers=_contentViewControllers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * presentedViewControllers;                                         //@synthesize activeContentViewControllers=_activeContentViewControllers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isTransitioning;
-(id)succinctDescription;
-(void)viewWillLayoutSubviews;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)hasContent;
-(BOOL)isPresentingContent;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)description;
-(void)viewDidLoad;
-(void)aggregateBehavior:(id)arg1 ;
-(long long)participantState;
-(id<CSPresentationViewControllerDelegate>)presentationDelegate;
-(void)rebuildEverythingForReason:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setPresentationDelegate:(id<CSPresentationViewControllerDelegate>)arg1 ;
-(void)aggregateAppearance:(id)arg1 ;
-(NSArray *)contentViewControllers;
-(NSArray *)presentedViewControllers;
-(void)presentContentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissContentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissPresentationAnimated:(BOOL)arg1 ;
-(void)updatePresentationAnimated:(BOOL)arg1 ;
-(void)dismissPresentationAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentContentViewControllers:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateContentViewControllersAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissContentViewControllers:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_reflowPresentationWithAnimationSettings:(id)arg1 ;
-(void)aggregatePresentation:(id)arg1 ;
-(BOOL)handleAppearanceUpdateFromController:(id)arg1 animationSettings:(inout id*)arg2 ;
-(void)_didTransitionViewController:(id)arg1 toPresented:(BOOL)arg2 ;
-(void)_updatePresentationForViewController:(id)arg1 presentation:(id)arg2 animationSettings:(id)arg3 ;
@end
