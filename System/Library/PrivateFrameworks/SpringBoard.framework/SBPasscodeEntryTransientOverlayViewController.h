/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBFAuthenticationResponder.h>
#import <libobjc.A.dylib/SBUIPasscodeLockViewDelegate.h>

@protocol SBUIPasscodeLockView, SBPasscodeEntryTransientOverlayViewControllerDelegate;
@class SBFUserAuthenticationController, SBUIPasscodeViewWithLockScreenStyle, CSLockScreenPearlSettings, CSPoseidonViewController, NSString;

@interface SBPasscodeEntryTransientOverlayViewController : SBTransientOverlayViewController <PTSettingsKeyObserver, SBFAuthenticationResponder, SBUIPasscodeLockViewDelegate> {

	BOOL _attemptingUnlock;
	SBFUserAuthenticationController* _authenticationController;
	id<SBUIPasscodeLockView> _passcodeRequester;
	SBUIPasscodeViewWithLockScreenStyle* _passcodeView;
	CSLockScreenPearlSettings* _pearlSettings;
	CSPoseidonViewController* _poseidonViewController;
	BOOL _keyboardVisible;
	BOOL _showEmergencyCallButton;
	BOOL _useBiometricPresentation;
	int _intent;
	id<SBPasscodeEntryTransientOverlayViewControllerDelegate> _delegate;
	NSString* _unlockDestination;

}

@property (assign,nonatomic,__weak) id<SBPasscodeEntryTransientOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showEmergencyCallButton;                                                           //@synthesize showEmergencyCallButton=_showEmergencyCallButton - In the implementation block
@property (assign,nonatomic) BOOL useBiometricPresentation;                                                          //@synthesize useBiometricPresentation=_useBiometricPresentation - In the implementation block
@property (nonatomic,copy) NSString * unlockDestination;                                                             //@synthesize unlockDestination=_unlockDestination - In the implementation block
@property (assign,nonatomic) int intent;                                                                             //@synthesize intent=_intent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)preferredInterfaceOrientationForPresentation;
-(id<SBPasscodeEntryTransientOverlayViewControllerDelegate>)delegate;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(int)intent;
-(void)passcodeLockViewPasscodeDidChange:(id)arg1 ;
-(NSString *)unlockDestination;
-(void)setUnlockDestination:(NSString *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)idleTimerDuration;
-(int)_preferredStatusBarVisibility;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)idleTimerMode;
-(void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2 ;
-(void)setDelegate:(id<SBPasscodeEntryTransientOverlayViewControllerDelegate>)arg1 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1 ;
-(void)viewDidLoad;
-(long long)idleWarnMode;
-(void)handleInvalidAuthenticationRequest:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)handleSuccessfulAuthenticationRequest:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)isContentOpaque;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setIntent:(int)arg1 ;
-(id)initWithAuthenticationController:(id)arg1 ;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(id)preferredDisplayLayoutElementIdentifier;
-(void)_updatePrototypeSettings;
-(void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(BOOL)arg2 ;
-(void)_attemptUnlock:(id)arg1 passcode:(id)arg2 ;
-(void)handleWillShowKeyboard:(BOOL)arg1 ;
-(void)setShowEmergencyCallButton:(BOOL)arg1 ;
-(void)setUseBiometricPresentation:(BOOL)arg1 ;
-(BOOL)showEmergencyCallButton;
-(BOOL)useBiometricPresentation;
@end
