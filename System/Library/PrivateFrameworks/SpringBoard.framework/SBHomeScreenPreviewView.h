/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBIconViewProviding.h>
#import <libobjc.A.dylib/SBIconViewDelegate.h>

@protocol SBDockOffscreenFractionModifying;
@class UIView, SBRootFolderController, _SBHomeScreenFolderDelegate, SBIconController, SBWallpaperController, SBFloatingDockViewController, NSString;

@interface SBHomeScreenPreviewView : UIView <SBIconViewProviding, SBIconViewDelegate> {

	UIView* _folderContent;
	UIView* _floatingDock;
	UIView* _statusBar;
	SBRootFolderController* _rootFolderController;
	_SBHomeScreenFolderDelegate* _folderDelegate;
	SBIconController* _iconController;
	SBWallpaperController* _wallpaperController;
	SBFloatingDockViewController* _floatingDockViewController;
	unsigned long long _snapshotOptions;
	id<SBDockOffscreenFractionModifying> _dockOffscreenModifier;

}

@property (nonatomic,readonly) SBIconController * iconController;                                       //@synthesize iconController=_iconController - In the implementation block
@property (nonatomic,readonly) SBWallpaperController * wallpaperController;                             //@synthesize wallpaperController=_wallpaperController - In the implementation block
@property (nonatomic,readonly) SBFloatingDockViewController * floatingDockViewController;               //@synthesize floatingDockViewController=_floatingDockViewController - In the implementation block
@property (nonatomic,readonly) unsigned long long snapshotOptions;                                      //@synthesize snapshotOptions=_snapshotOptions - In the implementation block
@property (nonatomic,readonly) id<SBDockOffscreenFractionModifying> dockOffscreenModifier;              //@synthesize dockOffscreenModifier=_dockOffscreenModifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)recycleIconView:(id)arg1 ;
-(void)configureIconView:(id)arg1 forIcon:(id)arg2 ;
-(SBWallpaperController *)wallpaperController;
-(void)layoutSubviews;
-(BOOL)isIconViewRecycled:(id)arg1 ;
-(id)backgroundViewForComponentsOfIconView:(id)arg1 ;
-(SBIconController *)iconController;
-(id)behaviorDelegateForIconView:(id)arg1 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg1 ;
-(SBFloatingDockViewController *)floatingDockViewController;
-(id)initWithFrame:(CGRect)arg1 iconController:(id)arg2 wallpaperController:(id)arg3 options:(unsigned long long)arg4 wallpaperImage:(id)arg5 ;
-(unsigned long long)snapshotOptions;
-(id<SBDockOffscreenFractionModifying>)dockOffscreenModifier;
@end
