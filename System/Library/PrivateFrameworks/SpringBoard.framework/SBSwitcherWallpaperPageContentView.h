/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBAppSwitcherPageContentView.h>

@class SBOrientationTransformWrapperView, SBWallpaperEffectView, NSString;

@interface SBSwitcherWallpaperPageContentView : UIView <SBAppSwitcherPageContentView> {

	SBOrientationTransformWrapperView* _wallpaperWrapperView;
	BOOL _active;
	BOOL _visible;
	double _cornerRadius;
	long long _orientation;
	long long _desiredWallpaperOrientation;
	long long _wallpaperStyle;
	SBWallpaperEffectView* _wallpaperEffectView;

}

@property (assign,nonatomic) long long desiredWallpaperOrientation;                      //@synthesize desiredWallpaperOrientation=_desiredWallpaperOrientation - In the implementation block
@property (assign,nonatomic) long long wallpaperStyle;                                   //@synthesize wallpaperStyle=_wallpaperStyle - In the implementation block
@property (nonatomic,readonly) SBWallpaperEffectView * wallpaperEffectView;              //@synthesize wallpaperEffectView=_wallpaperEffectView - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) long long orientation;                                      //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) BOOL contentRequiresGroupOpacity; 
@property (assign,getter=isActive,nonatomic) BOOL active;                                //@synthesize active=_active - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                              //@synthesize visible=_visible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isVisible;
-(void)setVisible:(BOOL)arg1 ;
-(void)setDesiredWallpaperOrientation:(long long)arg1 ;
-(long long)desiredWallpaperOrientation;
-(CGRect)_wallpaperFrame;
-(SBWallpaperEffectView *)wallpaperEffectView;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateCornerRadius;
-(void)setWallpaperStyle:(long long)arg1 ;
-(id)_viewForWallpaperWrapper;
-(BOOL)_deviceSupportsEdgeAntiAliasing;
-(long long)wallpaperStyle;
-(BOOL)contentRequiresGroupOpacity;
-(void)_updateWallpaperOrientation;
-(void)layoutSubviews;
-(BOOL)isActive;
-(double)cornerRadius;
-(void)setOrientation:(long long)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(long long)orientation;
-(void)invalidate;
@end

