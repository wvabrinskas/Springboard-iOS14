/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/AUTextFieldUIAlert.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextRange, NSString;

@interface AUSetupCodeUIAlert : AUTextFieldUIAlert <UIAlertViewDelegate, UITextFieldDelegate> {

	UITextRange* _selectionRange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)dealloc;
-(void)prepareToShow;
-(void)formatSetupCodeWithSender:(id)arg1 ;
@end

