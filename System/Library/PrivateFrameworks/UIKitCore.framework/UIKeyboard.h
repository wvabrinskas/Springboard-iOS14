/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKBFocusGuideDelegate.h>
#import <UIKit/UIKeyboardImplGeometryDelegate.h>

@class UIView, UITextInputTraits, NSMutableDictionary, _UIKeyboardPasscodeObscuringInteraction, UITextCursorAssertionController, NSString;

@interface UIKeyboard : UIView <UIKBFocusGuideDelegate, UIKeyboardImplGeometryDelegate> {

	UIView* m_snapshot;
	UITextInputTraits* m_defaultTraits;
	UITextInputTraits* m_overrideTraits;
	BOOL m_typingDisabled;
	BOOL m_minimized;
	BOOL m_respondingToImplGeometryChange;
	long long m_orientation;
	long long m_idiom;
	BOOL m_hasExplicitOrientation;
	BOOL m_disableTouchInput;
	BOOL m_useRecentsAlert;
	NSMutableDictionary* m_focusGuides;
	UIEdgeInsets m_unfocusedFocusGuideOutsets;
	_UIKeyboardPasscodeObscuringInteraction* _passcodeObscuringInteraction;
	CGRect _forcedFrame;
	BOOL _hasImpendingCursorLocation;
	unsigned long long _impendingCursorLocation;
	unsigned long long _requestedInteractionModel;

}

@property (assign,nonatomic) BOOL hasImpendingCursorLocation;                                             //@synthesize hasImpendingCursorLocation=_hasImpendingCursorLocation - In the implementation block
@property (assign,nonatomic) unsigned long long impendingCursorLocation;                                  //@synthesize impendingCursorLocation=_impendingCursorLocation - In the implementation block
@property (assign,nonatomic) unsigned long long requestedInteractionModel;                                //@synthesize requestedInteractionModel=_requestedInteractionModel - In the implementation block
@property (assign,nonatomic) BOOL caretBlinks; 
@property (assign,nonatomic) BOOL caretVisible; 
@property (nonatomic,readonly) UITextCursorAssertionController * _activeAssertionController; 
@property (assign,nonatomic) long long keyboardIdiom; 
@property (assign,nonatomic) BOOL typingEnabled; 
@property (assign,getter=isMinimized,nonatomic) BOOL minimized; 
@property (assign,nonatomic) BOOL showsCandidatesInline; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isOnScreen;
+(BOOL)hasInputOrAssistantViewsOnScreen;
+(UIEdgeInsets)_keyboardFocusGuideMargins;
+(CGSize)keyboardSizeForInterfaceOrientation:(long long)arg1 ;
+(void)clearActiveForScreen:(id)arg1 ;
+(void)makeKeyboardActive:(id)arg1 forScreen:(id)arg2 ;
+(void)_clearActiveKeyboard;
+(void)initImplementationNow;
+(BOOL)respondsToProxGesture;
+(BOOL)splitKeyboardEnabled;
+(BOOL)shouldMinimizeForHardwareKeyboard;
+(void)setSuppressionPolicyDelegate:(id)arg1 ;
+(BOOL)shouldSuppressSoftwareKeyboardForResponder:(id)arg1 ;
+(id)homeGestureExclusionZones;
+(UIEdgeInsets)keyplanePadding;
+(BOOL)candidateDisplayIsExtended;
+(double)predictionViewHeightForCurrentInputMode;
+(id)snapshotViewForPredictionViewTransition;
+(BOOL)predictionViewPrewarmsPredictiveCandidates;
+(void)setPredictionViewPrewarmsPredictiveCandidates:(BOOL)arg1 ;
+(CGSize)defaultSizeForInterfaceOrientation:(long long)arg1 ;
+(CGSize)defaultSize;
+(void)removeAllDynamicDictionaries;
+(CGSize)sizeForInterfaceOrientation:(long long)arg1 ;
+(id)activeKeyboardForScreen:(id)arg1 ;
+(id)suppressionPolicyDelegate;
+(BOOL)isInHardwareKeyboardMode;
+(id)activeKeyboard;
+(CGRect)defaultFrameForInterfaceOrientation:(long long)arg1 ;
+(CGSize)sizeForInterfaceOrientation:(long long)arg1 ignoreInputView:(BOOL)arg2 ;
-(BOOL)_hasCandidates;
-(void)setCaretBlinks:(BOOL)arg1 ;
-(unsigned long long)requestedInteractionModel;
-(void)setRequestedInteractionModel:(unsigned long long)arg1 ;
-(BOOL)caretVisible;
-(void)maximize;
-(BOOL)caretBlinks;
-(void)_showAutofillExtras;
-(BOOL)returnKeyEnabled;
-(void)updateLayout;
-(void)minimize;
-(void)_setRenderConfig:(id)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)setNeedsDisplay;
-(BOOL)canBecomeFocused;
-(BOOL)_isAutomaticKeyboard;
-(id)_getAutocorrection;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(int)textEffectsVisibilityLevel;
-(void)setDefaultTextInputTraits:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setReturnKeyEnabled:(BOOL)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id)_getCurrentKeyboardName;
-(void)setCorrectionLearningAllowed:(BOOL)arg1 ;
-(void)syncMinimizedStateToHardwareKeyboardAttachedState;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(id)delegate;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDisableInteraction:(BOOL)arg1 ;
-(void)setTypingEnabled:(BOOL)arg1 ;
-(UITextCursorAssertionController *)_activeAssertionController;
-(id)initLazily;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)disableInteraction;
-(long long)interfaceOrientation;
-(void)activate;
-(void)prepareForGeometryChange;
-(void)_setDisableTouchInput:(BOOL)arg1 ;
-(UIEdgeInsets)unfocusedFocusGuideOutsets;
-(BOOL)canDismiss;
-(id)_initWithFrame:(CGRect)arg1 lazily:(BOOL)arg2 ;
-(void)clearActivePerScreenIfNeeded;
-(id)targetWindow;
-(void)setUnfocusedFocusGuideOutsets:(UIEdgeInsets)arg1 fromView:(id)arg2 ;
-(BOOL)isActivePerScreen;
-(void)setupKeyFocusGuides;
-(void)autoAdjustOrientation;
-(void)clearSnapshot;
-(void)setHasImpendingCursorLocation:(BOOL)arg1 ;
-(BOOL)hasImpendingCursorLocation;
-(unsigned long long)impendingCursorLocation;
-(BOOL)typingEnabled;
-(void)updateFocusMarginsUpToView:(id)arg1 ;
-(void)updateKeyFocusGuides;
-(BOOL)allowExternalChangeForFocusHeading:(unsigned long long)arg1 cursorLocation:(unsigned long long)arg2 ;
-(long long)keyboardIdiom;
-(void)setImpendingCursorLocation:(unsigned long long)arg1 ;
-(id)_keyplaneNamed:(id)arg1 ;
-(UIPeripheralAnimationGeometry)geometryForMinimize:(BOOL)arg1 ;
-(void)_setUseRecentsAlert:(BOOL)arg1 ;
-(void)keyboardMinMaximized:(BOOL)arg1 ;
-(UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(double)arg1 ;
-(void)_setUndocked:(BOOL)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithDefaultSize;
-(void)didFocusGuideWithHeading:(unsigned long long)arg1 ;
-(BOOL)shouldSaveMinimizationState;
-(id)initWithRequestedInteractionModel:(unsigned long long)arg1 ;
-(BOOL)hasAutocorrectPrompt;
-(id)_overrideTextInputTraits;
-(void)set_overrideTextInputTraits:(id)arg1 ;
-(void)_setSplit:(BOOL)arg1 ;
-(void)_didChangeCursorLocation;
-(void)_setPreferredHeight:(double)arg1 ;
-(BOOL)showPredictionBar;
-(void)textInputTraitsDidChange;
-(void)_setPasscodeOutlineAlpha:(double)arg1 ;
-(void)_setDisableUpdateMaskForSecureTextEntry:(BOOL)arg1 ;
-(BOOL)showsCandidatesInline;
-(void)setShowsCandidatesInline:(BOOL)arg1 ;
-(void)_didChangeCandidateList;
-(void)_setInputMode:(id)arg1 ;
-(BOOL)_mayRemainFocused;
-(void)setKeyboardIdiom:(long long)arg1 ;
-(id)_touchPoint:(CGPoint)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)manualKeyboardWillBeOrderedIn;
-(void)manualKeyboardWasOrderedIn;
-(void)manualKeyboardWillBeOrderedOut;
-(void)manualKeyboardWasOrderedOut;
-(id)_baseKeyForRepresentedString:(id)arg1 ;
-(id)_keyplaneForKey:(id)arg1 ;
-(void)_changeToKeyplane:(id)arg1 ;
-(void)_acceptCurrentCandidate;
-(id)_typeCharacter:(id)arg1 withError:(CGPoint)arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4 ;
-(CGRect)_floatingKeyboardDraggableRect;
-(id)_getCurrentKeyplaneName;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canHandleEvent:(id)arg1 ;
-(long long)_positionInCandidateList:(id)arg1 ;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)acceptAutocorrection;
-(BOOL)isActive;
-(void)didMoveToWindow;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(void)setUnfocusedFocusGuideOutsets:(UIEdgeInsets)arg1 ;
-(void)_setAutocorrects:(BOOL)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isAutomatic;
-(id)defaultTextInputTraits;
-(unsigned long long)cursorLocation;
-(void)takeSnapshot;
-(void)_deactivateForBackgrounding;
-(void)activateIfNeeded;
-(long long)_focusTouchSensitivityStyle;
-(void)setMinimized:(BOOL)arg1 ;
-(void)responseContextDidChange;
-(BOOL)isMinimized;
-(id)_getLocalizedInputMode;
-(void)removeAutocorrectPrompt;
-(void)setOrientation:(long long)arg1 ;
-(void)deactivate;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)setCaretVisible:(BOOL)arg1 ;
-(CGRect)_globalFocusCastingFrameForHeading:(unsigned long long)arg1 ;
-(void)geometryChangeDone:(BOOL)arg1 ;
-(long long)_focusedSound;
-(void)setCursorLocation:(unsigned long long)arg1 ;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(BOOL)_useRecentsAlert;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_disableTouchInput;
@end
