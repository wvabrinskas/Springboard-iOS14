/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIResponder, UIKBRenderConfig, UIView, UIInputViewController, UIKeyboard;

@interface UIInputViewSet : NSObject {

	BOOL _isSplit;
	double _splitHeightDelta;
	UIResponder* _restorableResponder;
	UIKBRenderConfig* _restorableRenderConfig;
	UIResponder* _accessoryViewNextResponder;
	BOOL _restoreUsingBecomeFirstResponder;
	UIView* _inputView;
	UIView* _inputAccessoryView;
	UIView* _inputAssistantView;
	UIInputViewController* _inputViewController;
	UIInputViewController* _accessoryViewController;
	UIInputViewController* _assistantViewController;
	BOOL _isNullInputView;
	BOOL _isCustomInputView;
	BOOL _isRemoteKeyboard;
	CGRect _inputAssistantViewBounds;

}

@property (nonatomic,retain) UIView * inputView;                                           //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) UIView * inputAssistantView;                                  //@synthesize inputAssistantView=_inputAssistantView - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                                  //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,retain) UIInputViewController * inputViewController;                  //@synthesize inputViewController=_inputViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * assistantViewController;              //@synthesize assistantViewController=_assistantViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * accessoryViewController;              //@synthesize accessoryViewController=_accessoryViewController - In the implementation block
@property (nonatomic,readonly) UIView * layeringView; 
@property (nonatomic,readonly) BOOL visible; 
@property (nonatomic,readonly) BOOL usesKeyClicks; 
@property (nonatomic,readonly) UIKeyboard * keyboard; 
@property (nonatomic,readonly) CGRect inputAccessoryViewBounds; 
@property (nonatomic,readonly) CGRect inputAssistantViewBounds;                            //@synthesize inputAssistantViewBounds=_inputAssistantViewBounds - In the implementation block
@property (nonatomic,readonly) CGRect inputViewBounds; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) BOOL hasNonPlaceholderViews; 
@property (nonatomic,readonly) BOOL supportsSplit; 
@property (nonatomic,readonly) BOOL isSplit;                                               //@synthesize isSplit=_isSplit - In the implementation block
@property (nonatomic,readonly) BOOL inputViewKeyboardCanSplit; 
@property (assign,nonatomic,__weak) UIResponder * restorableResponder;                     //@synthesize restorableResponder=_restorableResponder - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * restorableRenderConfig;                    //@synthesize restorableRenderConfig=_restorableRenderConfig - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * accessoryViewNextResponder;              //@synthesize accessoryViewNextResponder=_accessoryViewNextResponder - In the implementation block
@property (nonatomic,readonly) BOOL isInputViewPlaceholder; 
@property (nonatomic,readonly) BOOL isInputAssistantViewPlaceholder; 
@property (nonatomic,readonly) BOOL isInputAccessoryViewPlaceholder; 
@property (nonatomic,readonly) BOOL _inputViewIsSplit; 
@property (assign,nonatomic) double splitHeightDelta;                                      //@synthesize splitHeightDelta=_splitHeightDelta - In the implementation block
@property (nonatomic,readonly) UIView * splitExemptSubview; 
@property (assign,nonatomic) BOOL restoreUsingBecomeFirstResponder; 
@property (assign,nonatomic) BOOL isCustomInputView;                                       //@synthesize isCustomInputView=_isCustomInputView - In the implementation block
@property (assign,nonatomic) BOOL isRemoteKeyboard;                                        //@synthesize isRemoteKeyboard=_isRemoteKeyboard - In the implementation block
@property (nonatomic,readonly) BOOL isNullInputView;                                       //@synthesize isNullInputView=_isNullInputView - In the implementation block
+(id)inputSetWithPlaceholderAndAccessoryView:(id)arg1 ;
+(id)emptyInputSet;
+(id)inputSetWithKeyboardAndAccessoryView:(id)arg1 assistantView:(id)arg2 ;
+(id)inputSetWithOriginalInputSet:(id)arg1 duplicateInputView:(BOOL)arg2 duplicateInputAccessoryView:(BOOL)arg3 duplicateInputAssistantView:(BOOL)arg4 ;
+(id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 ;
+(id)inputSetWithKeyboardAndAccessoryView:(id)arg1 ;
+(id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 ;
-(UIView *)inputAccessoryView;
-(BOOL)isSplit;
-(BOOL)_isFullscreen;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setSplitHeightDelta:(double)arg1 ;
-(BOOL)_inputViewIsSplit;
-(BOOL)inputViewKeyboardCanSplit;
-(BOOL)_actLikeInputAccessoryViewSupportsSplit;
-(BOOL)visible;
-(BOOL)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2 ;
-(BOOL)isRemoteKeyboard;
-(void)setRestorableRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)setInputAssistantView:(UIView *)arg1 ;
-(BOOL)supportsSplit;
-(BOOL)containsResponder:(id)arg1 ;
-(BOOL)isStrictSupersetOfViewSet:(id)arg1 ;
-(id)_splittableInputAccessoryView;
-(CGRect)inputAccessoryViewBounds;
-(void)setAccessoryViewNextResponder:(UIResponder *)arg1 ;
-(void)setInputViewController:(UIInputViewController *)arg1 ;
-(BOOL)hierarchyContainsView:(id)arg1 ;
-(UIView *)inputAssistantView;
-(BOOL)isInputAccessoryViewPlaceholder;
-(BOOL)isEmpty;
-(BOOL)containsView:(id)arg1 ;
-(UIView *)splitExemptSubview;
-(BOOL)restoreUsingBecomeFirstResponder;
-(BOOL)usesKeyClicks;
-(BOOL)isInputViewPlaceholder;
-(void)_forceRestoreUsingBecomeFirstResponder:(BOOL)arg1 ;
-(id)inputSetWithInputAccessoryViewFromInputSet:(id)arg1 ;
-(id)inputSetWithInputAccessoryViewOnly;
-(double)splitHeightDelta;
-(id)description;
-(void)_beginSplitTransitionIfNeeded;
-(BOOL)isEqual:(id)arg1 ;
-(CGRect)_rightInputViewSetFrame;
-(UIInputViewController *)assistantViewController;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(BOOL)__isCKAccessoryView;
-(UIKeyboard *)keyboard;
-(UIView *)inputView;
-(BOOL)_inputViewSupportsSplit;
-(void)setAccessoryViewController:(UIInputViewController *)arg1 ;
-(void)_endSplitTransitionIfNeeded;
-(id)_themableInputAccessoryView;
-(id)initWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 isKeyboard:(BOOL)arg4 ;
-(BOOL)_isKeyboard;
-(void)setIsCustomInputView:(BOOL)arg1 ;
-(CGRect)inputViewBounds;
-(void)setRestorableResponder:(UIResponder *)arg1 ;
-(BOOL)_inputAccessoryViewSupportsSplit;
-(void)setRestoreUsingBecomeFirstResponder:(BOOL)arg1 ;
-(BOOL)isCustomInputView;
-(BOOL)_inputViewIsVisible;
-(void)setAssistantViewController:(UIInputViewController *)arg1 ;
-(long long)keyboardOrientation:(id)arg1 ;
-(void)refreshPresentation;
-(UIInputViewController *)accessoryViewController;
-(UIKBRenderConfig *)restorableRenderConfig;
-(BOOL)isNullInputView;
-(void)setIsRemoteKeyboard:(BOOL)arg1 ;
-(BOOL)setAccessoryViewVisible:(BOOL)arg1 delay:(double)arg2 ;
-(void)_setSplitProgress:(double)arg1 ;
-(CGRect)inputAssistantViewBounds;
-(CGRect)_leftInputViewSetFrame;
-(UIView *)layeringView;
-(BOOL)hasNonPlaceholderViews;
-(BOOL)canAnimateToInputViewSet:(id)arg1 ;
-(BOOL)_accessorySuppressesShadow;
-(UIInputViewController *)inputViewController;
-(void)inheritNullState:(id)arg1 ;
-(BOOL)isInputAssistantViewPlaceholder;
-(id)normalizePlaceholders;
-(BOOL)_inputViewSetSupportsSplit;
-(void)setInputView:(UIView *)arg1 ;
-(void)dealloc;
-(UIResponder *)restorableResponder;
-(UIResponder *)accessoryViewNextResponder;
-(void)setKeyboardAssistantBar:(id)arg1 ;
@end

