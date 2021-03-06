/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBackdropView, UIView, _UINavigationBarAppearanceStorage, UIColor, NSString;

@interface SKUITabBarBackgroundView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _borderView;
	BOOL barWantsAdaptiveBackdrop;
	BOOL translucent;
	_UINavigationBarAppearanceStorage* appearanceStorage;
	long long barStyle;
	UIColor* barTintColor;
	UIView* _shadowView;
	long long _backdropStyle;

}

@property (nonatomic,retain) _UINavigationBarAppearanceStorage * appearanceStorage; 
@property (assign,nonatomic) long long barStyle; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (assign,nonatomic) BOOL barWantsAdaptiveBackdrop; 
@property (setter=_setShadowView:,nonatomic,retain) UIView * _shadowView;                        //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (nonatomic,copy) NSString * backdropGroupName; 
@property (assign,nonatomic) long long backdropStyle;                                            //@synthesize backdropStyle=_backdropStyle - In the implementation block
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(void)setBarStyle:(long long)arg1 ;
-(void)_setIsContainedInPopover:(BOOL)arg1 ;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(long long)barStyle;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2 ;
-(void)setAppearanceStorage:(_UINavigationBarAppearanceStorage *)arg1 ;
-(void)updateBackgroundImage;
-(void)setBarWantsAdaptiveBackdrop:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isTranslucent;
-(void)setBackdropStyle:(long long)arg1 ;
-(_UINavigationBarAppearanceStorage *)appearanceStorage;
-(void)setTranslucent:(BOOL)arg1 ;
-(NSString *)backdropGroupName;
-(void)layoutSubviews;
-(UIView *)_shadowView;
-(void)_setShadowView:(id)arg1 ;
-(id)_currentCustomBackground;
-(long long)backdropStyle;
-(id)_currentCustomBackgroundRespectOversize_legacy:(BOOL*)arg1 ;
-(BOOL)barWantsAdaptiveBackdrop;
@end

