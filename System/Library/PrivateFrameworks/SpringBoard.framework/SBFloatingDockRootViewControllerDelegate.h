/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBFloatingDockRootViewControllerDelegate <NSObject>
@optional
-(void)floatingDockRootViewController:(id)arg1 modifyProgress:(double)arg2 interactive:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(BOOL)floatingDockRootViewControllerShouldHandlePanGestureRecognizer:(id)arg1;
-(void)floatingDockRootViewController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(BOOL)arg3 withTransitionCoordinator:(id)arg4;
-(void)floatingDockRootViewControllerDidEndPresentationTransition:(id)arg1;
-(double)minimumHomeScreenScaleForFloatingDockRootViewController:(id)arg1;

@required
-(void)floatingDockRootViewController:(id)arg1 willChangeToHeight:(double)arg2;
-(void)floatingDockRootViewController:(id)arg1 didChangeToFrame:(CGRect)arg2;
-(void)floatingDockRootViewController:(id)arg1 floatingDockWantsToBePresented:(BOOL)arg2;

@end

