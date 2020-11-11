/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FamilyCircleUI/FAConfirmIdentityViewController.h>
#import <libobjc.A.dylib/FAFamilySetupPage.h>

@protocol FAFamilySetupPageDelegate;
@class NSString;

@interface FAFamilySetupOrganizerViewController : FAConfirmIdentityViewController <FAFamilySetupPage> {

	id<FAFamilySetupPageDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FAFamilySetupPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FAFamilySetupPageDelegate>)delegate;
-(id)pageTitle;
-(void)setDelegate:(id<FAFamilySetupPageDelegate>)arg1 ;
-(id)instructions;
-(void)viewDidLoad;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(BOOL)shouldShowInviteeInstructions;
-(id)titleForContinuebutton;
-(void)continueButtonWasTapped:(id)arg1 ;
-(id)_createCancelButton;
@end
