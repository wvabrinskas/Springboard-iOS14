/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <libobjc.A.dylib/DDActionDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol DDDetectionControllerInteractionDelegate;
@class UIViewController, UIView, DDAction, UIWindow, NSString, UIAlertController;

@interface DDActionController : NSObject <DDActionDelegate, UIPopoverPresentationControllerDelegate> {

	UIViewController* _presentedViewController;
	UIView* _baseView;
	UIViewController* _currentBaseViewController;
	DDAction* _currentAction;
	id<DDDetectionControllerInteractionDelegate> _interactionDelegate;
	UIWindow* _originalWindow;
	NSString* _idsListenerID;
	UIAlertController* _alertController;

}

@property (retain) DDAction * currentAction;                                                                //@synthesize currentAction=_currentAction - In the implementation block
@property (nonatomic,retain) id<DDDetectionControllerInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (nonatomic,retain) UIView * baseView;                                                             //@synthesize baseView=_baseView - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                           //@synthesize alertController=_alertController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)_cleanup;
-(UIAlertController *)alertController;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(id)init;
-(void)performAction:(id)arg1 ;
-(void)setCurrentAction:(DDAction *)arg1 ;
-(void)setInteractionDelegate:(id<DDDetectionControllerInteractionDelegate>)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)actionDidFinish:(id)arg1 ;
-(void)actionDidFinish:(id)arg1 shouldDismiss:(BOOL)arg2 ;
-(BOOL)isPerformingAction;
-(void)cancelAction;
-(id<DDDetectionControllerInteractionDelegate>)interactionDelegate;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(UIView *)baseView;
-(DDAction *)currentAction;
-(void)dealloc;
-(void)setBaseView:(UIView *)arg1 ;
-(id)actionsForURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(BOOL)actionIsCancellable;
-(BOOL)isPresentingInPopover;
-(void)action:(id)arg1 becameCancellable:(BOOL)arg2 ;
-(BOOL)facetimeAvailable;
-(id)actionsForURL:(id)arg1 result:(DDResultRef)arg2 enclosingResult:(DDResultRef)arg3 context:(id)arg4 ;
-(void)_willPresentViewController;
-(void)_presentCurrentViewControllerOurselves;
-(void)tellDelegateActionDidFinishShouldDismiss:(BOOL)arg1 ;
-(void)_didDismissActionViewController;
-(void)tellDelegateActionDidFinish;
-(void)_dismissCurrentViewControllerOurselves;
-(void)viewControllerRequiresModalInPopover:(BOOL)arg1 ;
-(void)_presentController:(id)arg1 ;
-(void)dismissCurrentController;
-(void)cleanupNoDismiss;
-(id)defaultActionForURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(void)action:(id)arg1 viewControllerReady:(id)arg2 ;
-(void)failedToPrepareViewControllerForAction:(id)arg1 ;
@end
