/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>
#import <AVKit/AVTransitionDelegate.h>
#import <AVKit/AVTransitionDriverDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol AVTransitionControllerDelegate, AVTransitionDriver;
@class UIView, AVDisplayLink, AVTransition, AVInteractiveTransitionGestureTracker, AVPresentationController, CAMediaTimingFunction, AVPresentationContext, NSString;

@interface AVTransitionController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, AVTransitionDelegate, AVTransitionDriverDelegate, UIViewControllerTransitioningDelegate> {

	id<AVTransitionControllerDelegate> _delegate;
	id<AVTransitionDriver> _interactiveGestureTracker;
	UIView* _interactionView;
	long long _state;
	AVDisplayLink* _displayLink;
	AVTransition* _activeTransition;
	AVInteractiveTransitionGestureTracker* _gestureTracker;
	UIView* _sourceView;
	AVPresentationController* _presentationController;
	/*^block*/id _transitionDidBeginHandler;
	CAMediaTimingFunction* _easeInFunction;
	CAMediaTimingFunction* _easeOutFunction;
	CGPoint _touchGravity;

}

@property (assign,nonatomic) long long state;                                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AVDisplayLink * displayLink;                                           //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) AVTransition * activeTransition;                                       //@synthesize activeTransition=_activeTransition - In the implementation block
@property (nonatomic,readonly) AVInteractiveTransitionGestureTracker * gestureTracker;              //@synthesize gestureTracker=_gestureTracker - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                                            //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic,__weak) AVPresentationController * presentationController;              //@synthesize presentationController=_presentationController - In the implementation block
@property (nonatomic,copy) id transitionDidBeginHandler;                                            //@synthesize transitionDidBeginHandler=_transitionDidBeginHandler - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * easeInFunction;                                //@synthesize easeInFunction=_easeInFunction - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * easeOutFunction;                               //@synthesize easeOutFunction=_easeOutFunction - In the implementation block
@property (assign,nonatomic) CGPoint touchGravity;                                                  //@synthesize touchGravity=_touchGravity - In the implementation block
@property (nonatomic,__weak,readonly) AVPresentationContext * presentationContext; 
@property (assign,nonatomic,__weak) id<AVTransitionControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<AVTransitionDriver> interactiveGestureTracker;                      //@synthesize interactiveGestureTracker=_interactiveGestureTracker - In the implementation block
@property (assign,nonatomic,__weak) UIView * interactionView;                                       //@synthesize interactionView=_interactionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(void)animationEnded:(BOOL)arg1 ;
-(AVPresentationContext *)presentationContext;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(UIView *)sourceView;
-(void)setDisplayLink:(AVDisplayLink *)arg1 ;
-(void)setState:(long long)arg1 ;
-(id<AVTransitionControllerDelegate>)delegate;
-(void)setSourceView:(UIView *)arg1 ;
-(BOOL)wantsInteractiveStart;
-(AVPresentationController *)presentationController;
-(double)transitionDuration:(id)arg1 ;
-(long long)state;
-(void)startInteractiveTransition:(id)arg1 ;
-(UIView *)interactionView;
-(void)setDelegate:(id<AVTransitionControllerDelegate>)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(AVDisplayLink *)displayLink;
-(void)animateTransition:(id)arg1 ;
-(AVInteractiveTransitionGestureTracker *)gestureTracker;
-(CGPoint)touchGravity;
-(void)transitionWillComplete:(id)arg1 success:(BOOL)arg2 ;
-(id)transitionPresentedViewBackgroundColor:(id)arg1 ;
-(id)transitionBackgroundViewBackgroundColor:(id)arg1 ;
-(BOOL)transitionDriver:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3 ;
-(BOOL)transitionDriver:(id)arg1 shouldDriveTransitionInteractionOfType:(long long)arg2 ;
-(void)transitionDriver:(id)arg1 didBeginTrackingTransitionInteraction:(long long)arg2 readyToProceedHandler:(/*^block*/id)arg3 ;
-(void)transitionDriverDidContinueInteraction:(id)arg1 ;
-(void)transitionDriverDidCancelInteraction:(id)arg1 ;
-(void)transitionDriverDidFinishInteraction:(id)arg1 ;
-(void)setInteractiveGestureTracker:(id<AVTransitionDriver>)arg1 ;
-(void)setInteractionView:(UIView *)arg1 ;
-(void)addTransitionDriver:(id)arg1 toView:(id)arg2 ;
-(void)beginFullScreenPresentationOfViewController:(id)arg1 fromView:(id)arg2 isInteractive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_cancelTransition;
-(void)_finishTransition;
-(AVTransition *)activeTransition;
-(void)beginFullScreenDismissalOfViewController:(id)arg1 animated:(BOOL)arg2 isInteractive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_fireDidBeginHandlerIfNeeded;
-(void)_startObservingAnimatorProgress;
-(id<AVTransitionDriver>)interactiveGestureTracker;
-(void)setActiveTransition:(AVTransition *)arg1 ;
-(id)transitionDidBeginHandler;
-(void)setTransitionDidBeginHandler:(id)arg1 ;
-(CAMediaTimingFunction *)easeInFunction;
-(void)setEaseInFunction:(CAMediaTimingFunction *)arg1 ;
-(CAMediaTimingFunction *)easeOutFunction;
-(void)setEaseOutFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setTouchGravity:(CGPoint)arg1 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(void)setPresentationController:(AVPresentationController *)arg1 ;
@end

