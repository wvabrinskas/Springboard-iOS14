/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIAlertController, _UIAlertControllerShimPresenter, NSMutableArray, NSString, UIViewController;

@interface UIAlertView : UIView {

	UIAlertController* _alertController;
	_UIAlertControllerShimPresenter* _presenter;
	id _retainedSelf;
	NSMutableArray* _actions;
	long long _cancelIndex;
	long long _defaultButtonIndex;
	long long _firstOtherButtonIndex;
	NSString* _message;
	NSString* _subtitle;
	long long _alertViewStyle;
	BOOL _hasPreparedAlertActions;
	BOOL _isPresented;
	BOOL _alertControllerShouldDismiss;
	BOOL _handlingAlertActionShouldDismiss;
	BOOL _dismissingAlertController;
	id _delegate;
	id _context;
	UIViewController* _externalViewControllerForPresentation;

}

@property (nonatomic,retain) id context;                                                                                                                                                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long defaultButtonIndex; 
@property (assign,nonatomic) long long numberOfRows; 
@property (nonatomic,retain) NSString * subtitle; 
@property (setter=_setExternalViewControllerForPresentation:,getter=_externalViewControllerForPresentation,nonatomic,retain) UIViewController * externalViewControllerForPresentation;              //@synthesize externalViewControllerForPresentation=_externalViewControllerForPresentation - In the implementation block
@property (nonatomic,retain) NSString * bodyText; 
@property (assign,nonatomic) BOOL groupsTextFields; 
@property (assign,nonatomic,__weak) id delegate;                                                                                                                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,readonly) long long numberOfButtons; 
@property (assign,nonatomic) long long cancelButtonIndex; 
@property (nonatomic,readonly) long long firstOtherButtonIndex; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (assign,nonatomic) long long alertViewStyle; 
+(id)_remoteAlertViewWithBlock:(/*^block*/id)arg1 ;
+(id)_alertViewForSessionWithRemoteViewController:(id)arg1 ;
+(id)_alertViewForWindow:(id)arg1 ;
-(void)show;
-(id)titleLabel;
-(BOOL)isVisible;
-(id)_alertController;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)_isAnimating;
-(void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)bodyText;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5 ;
-(id)delegate;
-(long long)_maximumNumberOfTextFieldsForCurrentStyle;
-(void)_setExternalViewControllerForPresentation:(id)arg1 ;
-(id)tableView;
-(NSString *)subtitle;
-(id)textFieldAtIndex:(long long)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)_externalViewControllerForPresentation;
-(void)setTableShouldShowMinimumContent:(BOOL)arg1 ;
-(void)dismiss;
-(NSString *)message;
-(BOOL)_prepareToDismissForTappedIndex:(long long)arg1 ;
-(void)setBodyText:(NSString *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)_updateFirstOtherButtonEnabledState;
-(int)buttonCount;
-(id)context;
-(void)_updateButtonTitle:(id)arg1 buttonIndex:(unsigned long long)arg2 ;
-(id)keyboard;
-(id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2 ;
-(id)textField;
-(id)_addTextFieldWithValue:(id)arg1 label:(id)arg2 ;
-(long long)numberOfRows;
-(NSString *)title;
-(long long)numberOfButtons;
-(id)_preparedAlertActionAtIndex:(unsigned long long)arg1 ;
-(id)addTextFieldWithValue:(id)arg1 label:(id)arg2 ;
-(void)setNumberOfRows:(long long)arg1 ;
-(void)_setFirstOtherButtonIndex:(long long)arg1 ;
-(void)_textDidChangeInTextField:(id)arg1 ;
-(id)addButtonWithTitle:(id)arg1 label:(id)arg2 ;
-(void)_updateMessageAndSubtitle;
-(long long)alertViewStyle;
-(int)textFieldCount;
-(void)_showAnimated:(BOOL)arg1 ;
-(CGSize)backgroundSize;
-(id)initWithCoder:(id)arg1 ;
-(long long)cancelButtonIndex;
-(void)_setIsPresented:(BOOL)arg1 ;
-(void)_prepareAlertActions;
-(void)_setAccessoryView:(id)arg1 ;
-(BOOL)groupsTextFields;
-(void)setGroupsTextFields:(BOOL)arg1 ;
-(id)_addButtonWithTitle:(id)arg1 ;
-(id)_titleLabel;
-(void)setTitle:(NSString *)arg1 ;
-(void)layout;
-(long long)firstOtherButtonIndex;
-(id)window;
-(void)setCancelButtonIndex:(long long)arg1 ;
-(void)setContext:(id)arg1 ;
-(void)setDefaultButtonIndex:(long long)arg1 ;
-(void)setAlertViewStyle:(long long)arg1 ;
-(long long)defaultButtonIndex;
-(long long)addButtonWithTitle:(id)arg1 ;
-(id)buttonTitleAtIndex:(long long)arg1 ;
-(void)_dismissForTappedIndex:(long long)arg1 ;
-(void)dealloc;
@end

