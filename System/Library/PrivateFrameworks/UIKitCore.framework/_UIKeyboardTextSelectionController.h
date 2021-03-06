/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UITextInput;
#import <UIKitCore/UIKitCore-Structs.h>
@class UITextPosition, UITextRange, UIResponder, UITextInteractionAssistant, UIView;

@interface _UIKeyboardTextSelectionController : NSObject {

	BOOL _hasInteractionAssistant;
	BOOL _hasSelectionInteractionAssistant;
	BOOL _hasTextInputView;
	UITextPosition* _cursorPosition;
	UITextRange* _initialSelection;
	long long _selectionGranularity;
	UITextRange* _selectionBase;
	UIResponder*<UITextInput> _inputDelegate;
	CGRect _caretRectForCursorPosition;

}

@property (assign,nonatomic) CGRect caretRectForCursorPosition;                                                //@synthesize caretRectForCursorPosition=_caretRectForCursorPosition - In the implementation block
@property (nonatomic,retain) UITextRange * initialSelection;                                                   //@synthesize initialSelection=_initialSelection - In the implementation block
@property (nonatomic,retain) UITextRange * selectionBase;                                                      //@synthesize selectionBase=_selectionBase - In the implementation block
@property (nonatomic,readonly) UIResponder*<UITextInput> inputDelegate;                                        //@synthesize inputDelegate=_inputDelegate - In the implementation block
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (nonatomic,readonly) id<UISelectionInteractionAssistant> selectionInteractionAssistant; 
@property (assign,nonatomic) long long selectionGranularity;                                                   //@synthesize selectionGranularity=_selectionGranularity - In the implementation block
@property (nonatomic,retain) UITextPosition * cursorPosition; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (nonatomic,readonly) BOOL hasCaretSelection; 
@property (nonatomic,readonly) BOOL hasRangedSelection; 
@property (nonatomic,readonly) CGRect caretRectForFirstSelectedPosition; 
@property (nonatomic,readonly) CGRect caretRectForLastSelectedPosition; 
@property (nonatomic,readonly) CGRect caretRectForLeftmostSelectedPosition; 
@property (nonatomic,readonly) CGRect caretRectForRightmostSelectedPosition; 
-(CGRect)caretRectForLeftmostSelectedPosition;
-(CGRect)selectedRectInLineWithPoint:(CGPoint)arg1 ;
-(CGRect)caretRectForLastSelectedPosition;
-(void)setSelectedTextRange:(id)arg1 ;
-(id<UISelectionInteractionAssistant>)selectionInteractionAssistant;
-(UITextRange *)selectionBase;
-(void)updateSelectionRects;
-(void)willBeginFloatingCursor:(BOOL)arg1 ;
-(void)updateGestureRecognizers;
-(void)beginLoupeMagnifierAtPoint:(CGPoint)arg1 ;
-(UITextInteractionAssistant *)interactionAssistant;
-(void)setCaretRectForCursorPosition:(CGRect)arg1 ;
-(UIResponder*<UITextInput>)inputDelegate;
-(void)endSelectionChange;
-(UIView *)textInputView;
-(void)showSelectionCommands;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)setSelectionGranularity:(long long)arg1 ;
-(CGRect)caretRectForRightmostSelectedPosition;
-(void)willBeginHighlighterGesture;
-(void)endSelection;
-(BOOL)hasRangedSelection;
-(void)endFloatingCursor;
-(void)beginSelectionChange;
-(void)textDidChange;
-(void)beginSelection;
-(BOOL)hasCaretSelection;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)setSelectionBase:(UITextRange *)arg1 ;
-(long long)selectionGranularity;
-(void)selectPositionAtPoint:(CGPoint)arg1 granularity:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateLoupeMagnifierAtPoint:(CGPoint)arg1 ;
-(id)initWithInputDelegate:(id)arg1 ;
-(void)setRangedSelectionShouldShowGrabbers:(BOOL)arg1 ;
-(void)updateLoupeGestureAtPoint:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(UITextRange *)initialSelection;
-(BOOL)beginLoupeGestureAtPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 andExtentPosition:(id)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4 ;
-(void)selectionDidChange;
-(void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(void)setCursorPosition:(UITextPosition *)arg1 ;
-(void)updateRangedMagnifierAtPoint:(CGPoint)arg1 ;
-(void)willHandoffLoupeMagnifier;
-(BOOL)cursorPositionIsContainedByRange:(id)arg1 ;
-(void)selectPositionAtPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateImmediateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(void)resetCursorPosition;
-(CGPoint)boundedDeltaForTranslation:(CGPoint)arg1 cursorLocationBase:(CGPoint)arg2 ;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4 ;
-(CGRect)caretRectForCursorPosition;
-(void)modifySelectionWithExtentPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)restartSelection;
-(void)beginSelectionWithBasePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 withInitialExtentPoint:(CGPoint)arg3 executionContext:(id)arg4 ;
-(void)selectPositionAtPoint:(CGPoint)arg1 granularity:(long long)arg2 executionContext:(id)arg3 ;
-(void)switchToRangedSelection;
-(UITextPosition *)cursorPosition;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionWithExtentPosition:(id)arg1 executionContext:(id)arg2 ;
-(CGRect)caretRectForFirstSelectedPosition;
-(void)endRangedMagnifierAtPoint:(CGPoint)arg1 ;
-(void)scrollSelectionToVisible;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3 ;
-(void)beginRangedMagnifierAtPoint:(CGPoint)arg1 ;
-(void)endLoupeMagnifierAtPoint:(CGPoint)arg1 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)selectImmediatePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(void)setInitialSelection:(UITextRange *)arg1 ;
-(void)endLoupeGestureAtPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(void)dealloc;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
@end

