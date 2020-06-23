//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBDeviceApplicationSceneHandleObserver-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>
#import <SpringBoard/SBMainDisplaySceneManagerObserver-Protocol.h>

@class NSMutableDictionary, NSString, PSPointerClientController, UIApplicationSceneSettingsDiffInspector;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface SBLockedPointerManager : NSObject <SBMainDisplaySceneManagerObserver, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneHandleObserver>
{
    PSPointerClientController *_pointerClientController;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    NSObject<OS_dispatch_queue> *_stateSerialQueue;
    NSMutableDictionary *_queue_preferredLockStateBySceneIdentifier;
    NSString *_queue_sceneIdentifierThatHasLockedPointer;
    id <BSInvalidatable> _queue_backboardLockedPointerAssertion;
    id <BSInvalidatable> _queue_pointerHiddenAssertion;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
