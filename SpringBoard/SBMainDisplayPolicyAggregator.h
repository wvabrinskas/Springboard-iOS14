//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBPolicyAggregator.h>

@class MCProfileConnection, SBAlertItemsController, SBApplicationController, SBAssistantController, SBBannerManager, SBCommandTabController, SBConferenceManager, SBLocalDefaults, SBLockScreenManager, SBLockStateAggregator, SBMainWorkspace, SBRemoteTransientOverlaySessionManager, SBSetupManager, SBTelephonyManager;

@interface SBMainDisplayPolicyAggregator : SBPolicyAggregator
{
    MCProfileConnection *_override_profileConnection;
    SBSetupManager *_override_setupManager;
    SBAlertItemsController *_override_alertItemsController;
    SBApplicationController *_override_applicationController;
    SBAssistantController *_override_assistantController;
    SBCommandTabController *_override_commandTabController;
    SBConferenceManager *_override_conferenceManager;
    SBRemoteTransientOverlaySessionManager *_override_remoteTransientOverlaySessionManager;
    SBLockScreenManager *_override_lockScreenManager;
    SBLockStateAggregator *_override_lockStateAggregator;
    SBTelephonyManager *_override_telephonyManager;
    SBMainWorkspace *_override_mainWorkspace;
    SBBannerManager *_override_bannerManager;
    struct __CFBoolean *_hasCameraCapability;
    SBLocalDefaults *_defaults;
    _Bool _storeDemoAppLockEnabled;
}


// Remaining properties
@property(retain, nonatomic, getter=_alertItemsController, setter=_setAlertItemsController:) SBAlertItemsController *alertItemsController; // @synthesize alertItemsController=_override_alertItemsController;
@property(retain, nonatomic, getter=_applicationController, setter=_setApplicationController:) SBApplicationController *applicationController; // @synthesize applicationController=_override_applicationController;
@property(retain, nonatomic, getter=_assistantController, setter=_setAssistantController:) SBAssistantController *assistantController; // @synthesize assistantController=_override_assistantController;
@property(retain, nonatomic, getter=_bannerManager, setter=_setBannerManager:) SBBannerManager *bannerManager; // @synthesize bannerManager=_override_bannerManager;
@property(retain, nonatomic, getter=_commandTabController, setter=_setCommandTabController:) SBCommandTabController *commandTabController; // @synthesize commandTabController=_override_commandTabController;
@property(retain, nonatomic, getter=_conferenceManager, setter=_setConferenceManager:) SBConferenceManager *conferenceManager; // @synthesize conferenceManager=_override_conferenceManager;
@property(retain, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_override_lockScreenManager;
@property(retain, nonatomic, getter=_lockStateAggregator, setter=_setLockStateAggregator:) SBLockStateAggregator *lockStateAggregator; // @synthesize lockStateAggregator=_override_lockStateAggregator;
@property(retain, nonatomic, getter=_mainWorkspace, setter=_setMainWorkspace:) SBMainWorkspace *mainWorkspace; // @synthesize mainWorkspace=_override_mainWorkspace;
@property(retain, nonatomic, getter=_profileConnection, setter=_setProfileConnection:) MCProfileConnection *profileConnection; // @synthesize profileConnection=_override_profileConnection;
@property(retain, nonatomic, getter=_remoteTransientOverlaySessionManager, setter=_setRemoteTransientOverlaySessionManager:) SBRemoteTransientOverlaySessionManager *remoteTransientOverlaySessionManager; // @synthesize remoteTransientOverlaySessionManager=_override_remoteTransientOverlaySessionManager;
@property(retain, nonatomic, getter=_setupManager, setter=_setSetupManager:) SBSetupManager *setupManager; // @synthesize setupManager=_override_setupManager;
@property(retain, nonatomic, getter=_telephonyManager, setter=_setTelephonyManager:) SBTelephonyManager *telephonyManager; // @synthesize telephonyManager=_override_telephonyManager;
@end
