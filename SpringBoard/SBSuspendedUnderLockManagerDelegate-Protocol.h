//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSDisplayConfiguration, FBScene, NSSet, SBDeviceApplicationSceneHandle, SBSuspendedUnderLockManager;

@protocol SBSuspendedUnderLockManagerDelegate <NSObject>
- (NSSet *)suspendedUnderLockManagerVisibleScenesInLayoutState:(SBSuspendedUnderLockManager *)arg1;
- (NSSet *)runningApplicationScenes:(SBSuspendedUnderLockManager *)arg1;
- (_Bool)suspendedUnderLockManager:(SBSuspendedUnderLockManager *)arg1 shouldPreventSuspendUnderLockForScene:(FBScene *)arg2;
- (SBDeviceApplicationSceneHandle *)suspendedUnderLockManager:(SBSuspendedUnderLockManager *)arg1 sceneHandleForScene:(FBScene *)arg2;
- (FBSDisplayConfiguration *)suspendedUnderLockManagerDisplayConfiguration:(SBSuspendedUnderLockManager *)arg1;
@end
