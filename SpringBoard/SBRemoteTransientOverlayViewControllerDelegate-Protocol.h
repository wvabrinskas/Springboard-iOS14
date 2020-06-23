//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSError, NSString, SBRemoteTransientOverlayViewController, SBUIRemoteAlertButtonAction;

@protocol SBRemoteTransientOverlayViewControllerDelegate <NSObject>
- (SBUIRemoteAlertButtonAction *)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2;
- (_Bool)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(NSString *)arg2;
- (void)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)remoteTransientOverlayViewControllerRequestsInvalidation:(SBRemoteTransientOverlayViewController *)arg1;
- (void)remoteTransientOverlayViewControllerRequestsDeactivation:(SBRemoteTransientOverlayViewController *)arg1;
- (void)remoteTransientOverlayViewControllerDidInvalidate:(SBRemoteTransientOverlayViewController *)arg1;

@optional
- (void)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 didDisappearAnimated:(_Bool)arg2;
- (void)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 willDisappearAnimated:(_Bool)arg2;
- (void)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 didAppearAnimated:(_Bool)arg2;
- (void)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 willAppearAnimated:(_Bool)arg2;
@end
