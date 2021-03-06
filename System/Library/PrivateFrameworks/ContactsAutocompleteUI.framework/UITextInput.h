/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UITextRange, NSDictionary, UITextPosition, UIView;


@protocol UITextInput <UIKeyInput>
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
@property (nonatomic,readonly) id insertDictationResultPlaceholder; 
@optional
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
-(UIView *)textInputView;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1;
-(void)endFloatingCursor;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1;
-(void)setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(void)insertText:(id)arg1 alternatives:(id)arg2 style:(long long)arg3;
-(CGRect*)frameForDictationResultPlaceholder:(id)arg1;
-(void)removeTextPlaceholder:(id)arg1;
-(long long)selectionAffinity;
-(id)insertTextPlaceholderWithSize:(CGSize)arg1;
-(BOOL)shouldChangeTextInRange:(id)arg1 replacementText:(id)arg2;
-(id)positionWithinRange:(id)arg1 atCharacterOffset:(long long)arg2;
-(long long)characterOffsetOfPosition:(id)arg1 withinRange:(id)arg2;
-(void)insertDictationResult:(id)arg1;
-(void)dictationRecordingDidEnd;
-(void)dictationRecognitionFailed;
-(void)setSelectionAffinity:(long long)arg1;
-(id)insertDictationResultPlaceholder;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;

@required
-(void)setSelectedTextRange:(id)arg1;
-(void)unmarkText;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
-(id)characterRangeAtPoint:(CGPoint)arg1;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
-(id)closestPositionToPoint:(CGPoint)arg1;
-(UITextPosition *)endOfDocument;
-(void)setInputDelegate:(id)arg1;
-(NSDictionary *)markedTextStyle;
-(UITextRange *)markedTextRange;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
-(id<UITextInputDelegate>)inputDelegate;
-(id)selectionRectsForRange:(id)arg1;
-(CGRect*)firstRectForRange:(id)arg1;
-(id<UITextInputTokenizer>)tokenizer;
-(void)replaceRange:(id)arg1 withText:(id)arg2;
-(id)textInRange:(id)arg1;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(UITextRange *)selectedTextRange;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2;
-(void)setMarkedTextStyle:(id)arg1;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2;
-(CGRect*)caretRectForPosition:(id)arg1;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
-(UITextPosition *)beginningOfDocument;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;

@end

