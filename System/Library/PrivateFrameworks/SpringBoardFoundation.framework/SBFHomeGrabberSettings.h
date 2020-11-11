/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <PrototypeTools/PTSettings.h>

@class SBFAnimationSettings, SBFFluidBehaviorSettings;

@interface SBFHomeGrabberSettings : PTSettings {

	BOOL _enabled;
	BOOL _removeViewOnHide;
	BOOL _resetAutoHideTimeOnRotation;
	long long _initializationStyle;
	long long _edgeProtectOverride;
	long long _autoHideOverride;
	double _autoHideTime;
	double _autoHideTimeOnAppRequest;
	double _delayForUnhideOnTouch;
	double _delayForUnhideOnAppRequest;
	double _bounceHitTestOutsetTop;
	double _bounceHitTestOutsetSides;
	SBFAnimationSettings* _hideAnimationSettings;
	SBFAnimationSettings* _unhideAnimationSettings;
	SBFAnimationSettings* _hideForHomeGestureOwnershipAnimationSettings;
	SBFAnimationSettings* _unhideForHomeGestureOwnershipAnimationSettings;
	SBFAnimationSettings* _thinToProminentAnimationSettings;
	SBFAnimationSettings* _prominentToThinAnimationSettings;
	SBFAnimationSettings* _forcedProminentToThinAnimationSettings;
	SBFAnimationSettings* _lumaResponseAnimationSettings;
	SBFAnimationSettings* _initialLumaResponseAnimationSettings;
	SBFAnimationSettings* _rotationFadeOutAnimationSettings;
	SBFAnimationSettings* _rotationFadeInAnimationSettings;
	SBFFluidBehaviorSettings* _edgeProtectAnimationSettings;
	double _coverSheetHomeAffordanceCursorTopEdgeInset;
	double _coverSheetHomeAffordanceCursorBottomEdgeInset;
	double _coverSheetHomeAffordanceCursorLeftEdgeInset;
	double _coverSheetHomeAffordanceCursorRightEdgeInset;
	double _coverSheetSuppressAnimationForPointerTopEdgeInset;
	double _coverSheetSuppressAnimationForPointerBottomEdgeInset;
	double _coverSheetSuppressAnimationForPointerLeftEdgeInset;
	double _coverSheetSuppressAnimationForPointerRightEdgeInset;

}

@property (assign,nonatomic) double coverSheetHomeAffordanceCursorTopEdgeInset;                                  //@synthesize coverSheetHomeAffordanceCursorTopEdgeInset=_coverSheetHomeAffordanceCursorTopEdgeInset - In the implementation block
@property (assign,nonatomic) double coverSheetHomeAffordanceCursorBottomEdgeInset;                               //@synthesize coverSheetHomeAffordanceCursorBottomEdgeInset=_coverSheetHomeAffordanceCursorBottomEdgeInset - In the implementation block
@property (assign,nonatomic) double coverSheetHomeAffordanceCursorLeftEdgeInset;                                 //@synthesize coverSheetHomeAffordanceCursorLeftEdgeInset=_coverSheetHomeAffordanceCursorLeftEdgeInset - In the implementation block
@property (assign,nonatomic) double coverSheetHomeAffordanceCursorRightEdgeInset;                                //@synthesize coverSheetHomeAffordanceCursorRightEdgeInset=_coverSheetHomeAffordanceCursorRightEdgeInset - In the implementation block
@property (assign,nonatomic) double coverSheetSuppressAnimationForPointerTopEdgeInset;                           //@synthesize coverSheetSuppressAnimationForPointerTopEdgeInset=_coverSheetSuppressAnimationForPointerTopEdgeInset - In the implementation block
@property (assign,nonatomic) double coverSheetSuppressAnimationForPointerBottomEdgeInset;                        //@synthesize coverSheetSuppressAnimationForPointerBottomEdgeInset=_coverSheetSuppressAnimationForPointerBottomEdgeInset - In the implementation block
@property (assign,nonatomic) double coverSheetSuppressAnimationForPointerLeftEdgeInset;                          //@synthesize coverSheetSuppressAnimationForPointerLeftEdgeInset=_coverSheetSuppressAnimationForPointerLeftEdgeInset - In the implementation block
@property (assign,nonatomic) double coverSheetSuppressAnimationForPointerRightEdgeInset;                         //@synthesize coverSheetSuppressAnimationForPointerRightEdgeInset=_coverSheetSuppressAnimationForPointerRightEdgeInset - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long initializationStyle;                                                      //@synthesize initializationStyle=_initializationStyle - In the implementation block
@property (assign,nonatomic) BOOL removeViewOnHide;                                                              //@synthesize removeViewOnHide=_removeViewOnHide - In the implementation block
@property (assign,nonatomic) long long edgeProtectOverride;                                                      //@synthesize edgeProtectOverride=_edgeProtectOverride - In the implementation block
@property (assign,nonatomic) long long autoHideOverride;                                                         //@synthesize autoHideOverride=_autoHideOverride - In the implementation block
@property (assign,nonatomic) double autoHideTime;                                                                //@synthesize autoHideTime=_autoHideTime - In the implementation block
@property (assign,nonatomic) double autoHideTimeOnAppRequest;                                                    //@synthesize autoHideTimeOnAppRequest=_autoHideTimeOnAppRequest - In the implementation block
@property (assign,nonatomic) BOOL resetAutoHideTimeOnRotation;                                                   //@synthesize resetAutoHideTimeOnRotation=_resetAutoHideTimeOnRotation - In the implementation block
@property (assign,nonatomic) double delayForUnhideOnTouch;                                                       //@synthesize delayForUnhideOnTouch=_delayForUnhideOnTouch - In the implementation block
@property (assign,nonatomic) double delayForUnhideOnAppRequest;                                                  //@synthesize delayForUnhideOnAppRequest=_delayForUnhideOnAppRequest - In the implementation block
@property (assign,nonatomic) double bounceHitTestOutsetTop;                                                      //@synthesize bounceHitTestOutsetTop=_bounceHitTestOutsetTop - In the implementation block
@property (assign,nonatomic) double bounceHitTestOutsetSides;                                                    //@synthesize bounceHitTestOutsetSides=_bounceHitTestOutsetSides - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * hideAnimationSettings;                                       //@synthesize hideAnimationSettings=_hideAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * unhideAnimationSettings;                                     //@synthesize unhideAnimationSettings=_unhideAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * hideForHomeGestureOwnershipAnimationSettings;                //@synthesize hideForHomeGestureOwnershipAnimationSettings=_hideForHomeGestureOwnershipAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * unhideForHomeGestureOwnershipAnimationSettings;              //@synthesize unhideForHomeGestureOwnershipAnimationSettings=_unhideForHomeGestureOwnershipAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * thinToProminentAnimationSettings;                            //@synthesize thinToProminentAnimationSettings=_thinToProminentAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * prominentToThinAnimationSettings;                            //@synthesize prominentToThinAnimationSettings=_prominentToThinAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * forcedProminentToThinAnimationSettings;                      //@synthesize forcedProminentToThinAnimationSettings=_forcedProminentToThinAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * lumaResponseAnimationSettings;                               //@synthesize lumaResponseAnimationSettings=_lumaResponseAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * initialLumaResponseAnimationSettings;                        //@synthesize initialLumaResponseAnimationSettings=_initialLumaResponseAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * rotationFadeOutAnimationSettings;                            //@synthesize rotationFadeOutAnimationSettings=_rotationFadeOutAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * rotationFadeInAnimationSettings;                             //@synthesize rotationFadeInAnimationSettings=_rotationFadeInAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * edgeProtectAnimationSettings;                            //@synthesize edgeProtectAnimationSettings=_edgeProtectAnimationSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)coverSheetHomeAffordanceCursorTopEdgeInset;
-(void)setEdgeProtectOverride:(long long)arg1 ;
-(void)setForcedProminentToThinAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(double)autoHideTime;
-(void)setHideAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(void)setHideForHomeGestureOwnershipAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(double)delayForUnhideOnAppRequest;
-(BOOL)removeViewOnHide;
-(void)setInitializationStyle:(long long)arg1 ;
-(void)setAutoHideOverride:(long long)arg1 ;
-(SBFAnimationSettings *)lumaResponseAnimationSettings;
-(void)setResetAutoHideTimeOnRotation:(BOOL)arg1 ;
-(void)setCoverSheetHomeAffordanceCursorBottomEdgeInset:(double)arg1 ;
-(UIEdgeInsets)coverSheetHomeAffordanceCursorEdgeInsets;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDelayForUnhideOnAppRequest:(double)arg1 ;
-(double)autoHideTimeOnAppRequest;
-(long long)edgeProtectOverride;
-(double)bounceHitTestOutsetTop;
-(long long)initializationStyle;
-(SBFFluidBehaviorSettings *)edgeProtectAnimationSettings;
-(void)setUnhideAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(void)setInitialLumaResponseAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(void)setCoverSheetHomeAffordanceCursorTopEdgeInset:(double)arg1 ;
-(SBFAnimationSettings *)unhideAnimationSettings;
-(long long)autoHideOverride;
-(void)setRotationFadeInAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(void)setUnhideForHomeGestureOwnershipAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(void)setRemoveViewOnHide:(BOOL)arg1 ;
-(SBFAnimationSettings *)prominentToThinAnimationSettings;
-(SBFAnimationSettings *)unhideForHomeGestureOwnershipAnimationSettings;
-(void)setCoverSheetHomeAffordanceCursorRightEdgeInset:(double)arg1 ;
-(void)setLumaResponseAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(SBFAnimationSettings *)hideAnimationSettings;
-(double)coverSheetHomeAffordanceCursorLeftEdgeInset;
-(SBFAnimationSettings *)thinToProminentAnimationSettings;
-(void)setRotationFadeOutAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(double)bounceHitTestOutsetSides;
-(double)coverSheetHomeAffordanceCursorRightEdgeInset;
-(SBFAnimationSettings *)rotationFadeOutAnimationSettings;
-(void)setThinToProminentAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(void)setBounceHitTestOutsetSides:(double)arg1 ;
-(void)setCoverSheetSuppressAnimationForPointerLeftEdgeInset:(double)arg1 ;
-(void)setProminentToThinAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(double)coverSheetSuppressAnimationForPointerRightEdgeInset;
-(double)delayForUnhideOnTouch;
-(double)coverSheetSuppressAnimationForPointerTopEdgeInset;
-(double)coverSheetHomeAffordanceCursorBottomEdgeInset;
-(void)setCoverSheetSuppressAnimationForPointerBottomEdgeInset:(double)arg1 ;
-(void)setBounceHitTestOutsetTop:(double)arg1 ;
-(void)setAutoHideTime:(double)arg1 ;
-(BOOL)isEnabled;
-(double)coverSheetSuppressAnimationForPointerLeftEdgeInset;
-(void)setAutoHideTimeOnAppRequest:(double)arg1 ;
-(void)setCoverSheetHomeAffordanceCursorLeftEdgeInset:(double)arg1 ;
-(SBFAnimationSettings *)hideForHomeGestureOwnershipAnimationSettings;
-(void)setEdgeProtectAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setDelayForUnhideOnTouch:(double)arg1 ;
-(SBFAnimationSettings *)forcedProminentToThinAnimationSettings;
-(void)setCoverSheetSuppressAnimationForPointerTopEdgeInset:(double)arg1 ;
-(double)coverSheetSuppressAnimationForPointerBottomEdgeInset;
-(SBFAnimationSettings *)initialLumaResponseAnimationSettings;
-(BOOL)resetAutoHideTimeOnRotation;
-(void)setCoverSheetSuppressAnimationForPointerRightEdgeInset:(double)arg1 ;
-(UIEdgeInsets)coverSheetSuppressAnimationForPointerInsets;
-(SBFAnimationSettings *)rotationFadeInAnimationSettings;
@end
