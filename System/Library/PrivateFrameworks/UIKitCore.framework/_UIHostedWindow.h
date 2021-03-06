/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@protocol _UIHostedWindowDelegate;
@class UIColor, UITraitCollection, _UIHostedWindowHostingHandle;

@interface _UIHostedWindow : UIWindow {

	BOOL _wantsTraitPropagation;
	BOOL __hostViewUnderlapsStatusBar;
	long long _hostTintAdjustmentMode;
	UIColor* __hostTintColor;
	UITraitCollection* _hostTraitCollection;
	id<_UIHostedWindowDelegate> __hostedWindowDelegate;

}

@property (assign,setter=_setHostTintAdjustmentMode:,nonatomic) long long _hostTintAdjustmentMode;                  //@synthesize hostTintAdjustmentMode=_hostTintAdjustmentMode - In the implementation block
@property (setter=_setHostTraitCollection:,nonatomic,retain) UITraitCollection * _hostTraitCollection;              //@synthesize hostTraitCollection=_hostTraitCollection - In the implementation block
@property (assign,setter=_setWantsTraitPropagation:,nonatomic) BOOL _wantsTraitPropagation;                         //@synthesize wantsTraitPropagation=_wantsTraitPropagation - In the implementation block
@property (setter=_setHostTintColor:,nonatomic,retain) UIColor * _hostTintColor;                                    //@synthesize _hostTintColor=__hostTintColor - In the implementation block
@property (assign,nonatomic,__weak) id<_UIHostedWindowDelegate> _hostedWindowDelegate;                              //@synthesize _hostedWindowDelegate=__hostedWindowDelegate - In the implementation block
@property (nonatomic,readonly) _UIHostedWindowHostingHandle * hostingHandle; 
-(long long)_orientationForSceneTransform;
-(void)_setWantsTraitPropagation:(BOOL)arg1 ;
-(void)_updateWindowTraitsAndNotify:(BOOL)arg1 ;
-(UITraitCollection *)_hostTraitCollection;
-(_UIHostedWindowHostingHandle *)hostingHandle;
-(long long)_orientationForRootTransform;
-(void)_setHostTintColor:(id)arg1 ;
-(void)_didCreateRootPresentationController;
-(void)_unregisterScrollToTopView:(id)arg1 ;
-(long long)_orientationForViewTransform;
-(BOOL)_extendsScreenSceneLifetime;
-(void)_registerScrollToTopView:(id)arg1 ;
-(long long)_defaultTintAdjustmentMode;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)_isWindowServerHostingManaged;
-(void)_setHostTraitCollection:(id)arg1 ;
-(BOOL)_updatesSafeAreaInsetsOnRead;
-(long long)_hostTintAdjustmentMode;
-(void)set_hostedWindowDelegate:(id<_UIHostedWindowDelegate>)arg1 ;
-(BOOL)_canPromoteFromKeyWindowStack;
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg1 ;
-(UIColor *)_hostTintColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_needsShakesWhenInactive;
-(id<_UIHostedWindowDelegate>)_hostedWindowDelegate;
-(BOOL)_wantsTraitPropagation;
-(BOOL)_preventsRootPresentationController;
-(void)_setFirstResponder:(id)arg1 ;
-(BOOL)_shouldPropagateTraitCollectionChanges;
-(void)_configureContextOptions:(id)arg1 ;
-(void)_didMoveFromScreen:(id)arg1 toScreen:(id)arg2 ;
-(id)_normalInheritedTintColor;
-(BOOL)_allowsLinkPreviewInteractionInViewServices;
-(void)didSetResponderTargetForCalloutBar:(id)arg1 ;
-(BOOL)__hostViewUnderlapsStatusBar;
-(void)_setHostTintAdjustmentMode:(long long)arg1 ;
-(id)_traitCollectionForSize:(CGSize)arg1 parentCollection:(id)arg2 ;
-(void)dealloc;
-(unsigned)contextID;
@end

