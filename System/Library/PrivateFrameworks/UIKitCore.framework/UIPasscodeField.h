/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSMutableString, NSMutableArray, UIButton, NSString;

@interface UIPasscodeField : UIView <UITextFieldDelegate> {

	NSMutableString* _value;
	NSMutableArray* _entryFields;
	NSMutableArray* _entryBackgrounds;
	UIButton* _okButton;
	BOOL _opaqueBackground;
	BOOL _centerHorizontally;
	long long _keyboardType;
	long long _keyboardAppearance;
	int _emptyContentReturnKeyType;
	id _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultHeight;
+(Class)textFieldClass;
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1 ;
-(void)setStringValue:(id)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(BOOL)isFirstResponder;
-(void)okButtonClicked:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setKeyboardType:(long long)arg1 appearance:(long long)arg2 ;
-(void)setNumberOfEntryFields:(int)arg1 opaqueBackground:(BOOL)arg2 ;
-(void)setKeyboardType:(long long)arg1 appearance:(long long)arg2 emptyContentReturnKeyType:(int)arg3 ;
-(void)deleteLastCharacter;
-(BOOL)showsOKButton;
-(BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(id)stringValue;
-(void)setDelegate:(id)arg1 ;
-(int)numberOfEntryFields;
-(void)setNumberOfEntryFields:(int)arg1 ;
-(void)textFieldDidResignFirstResponder:(id)arg1 ;
-(BOOL)textFieldShouldStartEditing:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setTextCentersHorizontally:(BOOL)arg1 ;
-(void)_updateFields;
-(void)dealloc;
-(void)setShowsOKButton:(BOOL)arg1 ;
-(void)_textDidChange;
@end

