//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBBiometricUnlockBehaviorConfiguration-Protocol.h>
#import <SpringBoard/SBLiftToWakeObserver-Protocol.h>

@class CSLockScreenSettings, NSString, SBLiftToWakeController, SBUIBiometricResource;
@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@interface SBDashBoardMesaUnlockBehaviorConfiguration : NSObject <SBLiftToWakeObserver, SBBiometricUnlockBehaviorConfiguration>
{
    id <SBBiometricUnlockBehaviorConfigurationDelegate> _delegate;
    SBLiftToWakeController *_liftToWakeController;
    CSLockScreenSettings *_prototypeSettings;
    SBUIBiometricResource *_biometricResource;
    Class _currentTriggerClass;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBBiometricUnlockBehaviorConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
