/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUImageOBWelcomeController.h>
#import <libobjc.A.dylib/VTUIEnrollTrainingViewControllerDelegate.h>
#import <libobjc.A.dylib/HUOnboardingWarningPresenter.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class HMHome, OBTrayButton, OBLinkTrayButton, HUPersonalRequestsEditorItemManager, NSString, VTUIEnrollTrainingViewController;

@interface HUVoiceProfileSetupViewController : HUImageOBWelcomeController <VTUIEnrollTrainingViewControllerDelegate, HUOnboardingWarningPresenter, HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	HMHome* _home;
	OBTrayButton* _setupButton;
	OBLinkTrayButton* _notNowButton;
	HUPersonalRequestsEditorItemManager* _prEditorItemManager;
	NSString* _buttonOneText;
	VTUIEnrollTrainingViewController* _voiceProfileVC;

}

@property (nonatomic,retain) HMHome * home;                                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) OBTrayButton * setupButton;                                             //@synthesize setupButton=_setupButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * notNowButton;                                        //@synthesize notNowButton=_notNowButton - In the implementation block
@property (nonatomic,retain) HUPersonalRequestsEditorItemManager * prEditorItemManager;              //@synthesize prEditorItemManager=_prEditorItemManager - In the implementation block
@property (nonatomic,retain) NSString * buttonOneText;                                               //@synthesize buttonOneText=_buttonOneText - In the implementation block
@property (nonatomic,retain) VTUIEnrollTrainingViewController * voiceProfileVC;                      //@synthesize voiceProfileVC=_voiceProfileVC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)continueSetup;
-(id)initWithHome:(id)arg1 ;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(OBTrayButton *)setupButton;
-(void)viewDidLoad;
-(OBLinkTrayButton *)notNowButton;
-(void)setNotNowButton:(OBLinkTrayButton *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)hu_preloadContent;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)_setupPersonalRequestsItemInfrastructure;
-(HUPersonalRequestsEditorItemManager *)prEditorItemManager;
-(void)setPrEditorItemManager:(HUPersonalRequestsEditorItemManager *)arg1 ;
-(void)_turnOffPersonalRequests;
-(void)userTappedContinueFromWarning;
-(void)userTappedCancelFromWarning;
-(void)setSetupButton:(OBTrayButton *)arg1 ;
-(void)_dontSetupVoiceProfile;
-(void)_turnOffVoiceRecognition;
-(void)setVoiceProfileVC:(VTUIEnrollTrainingViewController *)arg1 ;
-(VTUIEnrollTrainingViewController *)voiceProfileVC;
-(void)_resetVoiceProfileSetup;
-(void)_dontSetupVoiceProfileWithWarning:(id)arg1 ;
-(NSString *)buttonOneText;
-(void)_setupVoiceProfile:(id)arg1 ;
-(void)skipSetup;
-(void)showLearnMore;
-(void)dismissSetup;
-(void)setButtonOneText:(NSString *)arg1 ;
@end

