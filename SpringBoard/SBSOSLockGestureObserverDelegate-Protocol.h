//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBSOSLockGestureObserver;

@protocol SBSOSLockGestureObserverDelegate <NSObject>
- (void)sosLockDidTriggerSOS:(SBSOSLockGestureObserver *)arg1 completion:(void (^)(_Bool))arg2;

@optional
- (void)sosLockTriggerDidBecomeInactive:(SBSOSLockGestureObserver *)arg1;
- (void)sosLockTriggerDidBecomeActive:(SBSOSLockGestureObserver *)arg1;
@end
