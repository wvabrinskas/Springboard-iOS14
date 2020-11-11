/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreCDPUI/CDPPassphraseEntryViewController.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>

@protocol CDPRemoteSecretEntryDelegate;
@class NSNumber, CDPDevice, CDPRemoteDeviceSecretValidator, CDPRemoteValidationEscapeOffer, NSString;

@interface CDPRemoteSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate> {

	BOOL _hasNumericSecret;
	NSNumber* _numericSecretLength;
	CDPDevice* _remoteRecoveryDevice;
	long long _remainingAttempts;
	CDPRemoteDeviceSecretValidator* _validator;
	id<CDPRemoteSecretEntryDelegate> _delegate;
	unsigned long long _validationState;
	CDPRemoteValidationEscapeOffer* _escapeOffer;

}

@property (nonatomic,readonly) CDPRemoteDeviceSecretValidator * validator;              //@synthesize validator=_validator - In the implementation block
@property (nonatomic,retain) CDPRemoteValidationEscapeOffer * escapeOffer;              //@synthesize escapeOffer=_escapeOffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)useProgressiveDelays;
-(BOOL)simplePIN;
-(BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)didCancelEnteringPIN;
-(id)pinInstructionsPrompt;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setPane:(id)arg1 ;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(BOOL)validatePIN:(id)arg1 ;
-(id)initWithValidator:(id)arg1 ;
-(CDPRemoteDeviceSecretValidator *)validator;
-(id)title;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithIsNumeric:(BOOL)arg1 numericLength:(id)arg2 validator:(id)arg3 delegate:(id)arg4 ;
-(void)setEscapeOffer:(CDPRemoteValidationEscapeOffer *)arg1 ;
-(id)initWithDevice:(id)arg1 validator:(id)arg2 delegate:(id)arg3 ;
-(void)disableUserInteractionAndStartSpinner;
-(void)enableUserInteractionAndStopSpinner;
-(CDPRemoteValidationEscapeOffer *)escapeOffer;
-(void)showIncorrectRemoteSecretAlertForPasscode:(id)arg1 withRecoveryError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didEnterValidRemoteSecret:(id)arg1 ;
@end
