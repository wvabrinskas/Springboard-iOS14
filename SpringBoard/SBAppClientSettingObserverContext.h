//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSceneTransitionContext, FBScene, SBApplication, SBDeviceApplicationSceneHandle, UIApplicationSceneClientSettings, UIApplicationSceneSettings;

@interface SBAppClientSettingObserverContext : NSObject
{
    FBScene *_scene;
    SBApplication *_app;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIApplicationSceneSettings *_settings;
    UIApplicationSceneClientSettings *_oldClientSettings;
    UIApplicationSceneClientSettings *_updatedClientSettings;
    FBSSceneTransitionContext *_transition;
}

@end
