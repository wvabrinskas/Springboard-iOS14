/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OnBoardingKit/OBTextWelcomeController.h>

@protocol VTUISiriDataSharingOptInViewControllerDelegate;
@interface VTUISiriDataSharingOptInViewController : OBTextWelcomeController {

	id<VTUISiriDataSharingOptInViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VTUISiriDataSharingOptInViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VTUISiriDataSharingOptInViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VTUISiriDataSharingOptInViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithViewStyle:(long long)arg1 ;
@end

