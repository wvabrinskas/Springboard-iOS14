/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIColor, PSListController, NSString;

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate> {

	UIColor* _textColor;
	id _delegate;
	BOOL _forceFirstResponder;
	BOOL _delaySpecifierRelease;
	SEL _targetSetter;
	id _realTarget;
	BOOL _valueChanged;
	BOOL _returnKeyTapped;
	PSListController* _controllerDelegate;

}

@property (nonatomic,readonly) BOOL returnKeyTapped;                                    //@synthesize returnKeyTapped=_returnKeyTapped - In the implementation block
@property (assign,nonatomic,__weak) PSListController * controllerDelegate;              //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)cellStyle;
-(BOOL)resignFirstResponder;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)canReload;
-(BOOL)isFirstResponder;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setCellEnabled:(BOOL)arg1 ;
-(void)controlChanged:(id)arg1 ;
-(void)_setValueChanged;
-(void)setDelegate:(id)arg1 ;
-(void)_saveForExit;
-(void)setPlaceholderText:(id)arg1 ;
-(BOOL)isTextFieldEditing;
-(void)endEditingAndSave;
-(BOOL)_cellIsEditing;
-(BOOL)returnKeyTapped;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(id)_defaultTextColor;
-(id)textField;
-(void)cellRemovedFromView;
-(id)value;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
-(void)prepareForReuse;
-(void)setValue:(id)arg1 ;
-(BOOL)isEditing;
-(PSListController *)controllerDelegate;
-(void)dealloc;
-(void)setControllerDelegate:(PSListController *)arg1 ;
@end
