/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CoverSheet-Structs.h>
#import <SpringBoardUIServices/SBUIVibrantButton.h>

@protocol CSWallpaperView, CSWallpaperColorProvider, CSWallpaperViewProviding;
@class UIView;

@interface CSVibrantWallpaperButton : SBUIVibrantButton {

	UIView*<CSWallpaperView> _effectView;
	id<CSWallpaperColorProvider> _wallpaperColorProvider;
	id<CSWallpaperViewProviding> _wallpaperViewProvider;

}

@property (assign,nonatomic,__weak) id<CSWallpaperColorProvider> wallpaperColorProvider;              //@synthesize wallpaperColorProvider=_wallpaperColorProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CSWallpaperViewProviding> wallpaperViewProvider;               //@synthesize wallpaperViewProvider=_wallpaperViewProvider - In the implementation block
@property (nonatomic,readonly) UIView*<CSWallpaperView> effectView;                                   //@synthesize effectView=_effectView - In the implementation block
-(id<CSWallpaperColorProvider>)wallpaperColorProvider;
-(void)setWallpaperColorProvider:(id<CSWallpaperColorProvider>)arg1 ;
-(UIView*<CSWallpaperView>)effectView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setWallpaperViewProvider:(id<CSWallpaperViewProviding>)arg1 ;
-(id<CSWallpaperViewProviding>)wallpaperViewProvider;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)_updateVibrancy;
@end

