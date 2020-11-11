/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:44:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBFolderControllerDelegate <NSObject>
@optional
-(void)folderControllerWillOpen:(id)arg1;
-(void)folderController:(id)arg1 didEndEditingTitle:(id)arg2;
-(id)folderControllerWantsToHideStatusBar:(id)arg1 animated:(BOOL)arg2;
-(void)folderControllerDidClose:(id)arg1;
-(void)folderController:(id)arg1 willRemoveFakeStatusBar:(id)arg2;
-(void)folderController:(id)arg1 willUseIconTransitionAnimator:(id)arg2 forOperation:(long long)arg3 onViewController:(id)arg4 animated:(BOOL)arg5;
-(id)folderController:(id)arg1 accessibilityTintColorForScreenRect:(CGRect)arg2;
-(id)statusBarStyleRequestForFolderController:(id)arg1;
-(id)fakeStatusBarForFolderController:(id)arg1;
-(id)folderController:(id)arg1 iconAnimatorForOperation:(long long)arg2 onViewController:(id)arg3 animated:(BOOL)arg4 initialDelay:(double*)arg5;
-(void)folderController:(id)arg1 willCreateInnerFolderControllerWithConfiguration:(id)arg2;
-(UIEdgeInsets*)contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1;
-(void)folderControllerDidOpen:(id)arg1;
-(UIEdgeInsets*)statusBarEdgeInsetsForFolderController:(id)arg1;
-(void)folderControllerWillClose:(id)arg1;
-(double)minimumHomeScreenScaleForFolderController:(id)arg1;
-(void)folderController:(id)arg1 didBeginEditingTitle:(id)arg2;

@required
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(CGPoint)arg4;
-(BOOL)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;
-(Class)controllerClassForFolder:(id)arg1;
-(void)folderControllerDidEndScrolling:(id)arg1;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
-(BOOL)folderController:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg3 onIconView:(id)arg4;
-(void)folderControllerShouldBeginEditing:(id)arg1 withHaptic:(BOOL)arg2;
-(BOOL)folderController:(id)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2;
-(void)folderController:(id)arg1 iconListView:(id)arg2 willUseIconView:(id)arg3 forDroppingIconDragItem:(id)arg4;
-(void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
-(BOOL)folderController:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
-(void)folderController:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
-(id)folderController:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;
-(id)folderController:(id)arg1 iconListView:(id)arg2 customSpringAnimationBehaviorForDroppingItem:(id)arg3;
-(id)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
-(void)folderControllerShouldEndEditing:(id)arg1;
-(void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
-(void)folderControllerWillBeginScrolling:(id)arg1;

@end
