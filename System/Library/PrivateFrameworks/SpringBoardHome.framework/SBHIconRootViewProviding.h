/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class SBFolder, UIView, _UILegibilitySettings, UIViewController, SBFolderIconImageCache, SBHIconImageCache;


@protocol SBHIconRootViewProviding <SBIconLocationPresenting,SBIconViewQuerying,NSObject>
@property (nonatomic,retain) SBFolder * folder; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIViewController * deepestFolderController; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (getter=isScrollTracking,nonatomic,readonly) BOOL scrollTracking; 
@property (assign,nonatomic) long long currentPageIndex; 
@property (nonatomic,retain) SBFolderIconImageCache * folderIconImageCache; 
@property (nonatomic,retain) SBHIconImageCache * iconImageCache; 
@required
-(_UILegibilitySettings *)legibilitySettings;
-(void)setIdleText:(id)arg1;
-(void)setCurrentPageIndex:(long long)arg1;
-(UIViewController *)deepestFolderController;
-(BOOL)isScrollTracking;
-(void)revealIcon:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)noteUserIsInteractingWithIcons;
-(long long)currentPageIndex;
-(SBFolder *)folder;
-(void)setFolder:(id)arg1;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
-(SBFolderIconImageCache *)folderIconImageCache;
-(BOOL)isScrolling;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)setLegibilitySettings:(id)arg1;
-(void)setFolderIconImageCache:(id)arg1;
-(BOOL)isEditing;
-(UIView *)contentView;
-(void)setIconImageCache:(id)arg1;
-(void)cancelScrolling;
-(SBHIconImageCache *)iconImageCache;
-(void)setEditing:(BOOL)arg1;

@end
