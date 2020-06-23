//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BNBannerSourceListenerDelegate-Protocol.h>
#import <SpringBoard/BNPosting-Protocol.h>
#import <SpringBoard/BNPostingPrivate-Protocol.h>
#import <SpringBoard/BNPresentingDelegate-Protocol.h>
#import <SpringBoard/SBAssistantObserver-Protocol.h>
#import <SpringBoard/SBButtonEventsHandler-Protocol.h>

@class BNBannerController, BNBannerSourceListener, BNContentViewController, NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSString, SBBannerAuthority, UIPanGestureRecognizer, UIWindow;
@protocol BNLayoutManaging, BSInvalidatable;

@interface SBBannerManager : NSObject <BNPostingPrivate, BNPresentingDelegate, BNBannerSourceListenerDelegate, SBAssistantObserver, BNPosting, SBButtonEventsHandler>
{
    SBBannerAuthority *_bannerAuthority;
    BNBannerController *_bannerController;
    BNContentViewController *_contentViewController;
    BNBannerSourceListener *_bannerSourceListener;
    NSMutableArray *_windowLevelAssertions;
    UIPanGestureRecognizer *_panGesture;
    _Bool _installedAsSystemGesture;
    NSMutableArray *_gesturePriorityAssertions;
    NSMapTable *_presentablesToGesturePriorityAssertions;
    id <BSInvalidatable> _bannerGestureRecognizerPriorityAssertion;
    NSHashTable *_suppressionAssertions;
    NSMutableSet *_clientSuppressionAssertions;
    id <BSInvalidatable> _systemStatusBarAssertion;
    id <BSInvalidatable> _appsStatusBarAssertion;
    NSMutableSet *_statusBarAssertionReasons;
    UIWindow *_bannerWindow;
}


// Remaining properties
@property(readonly, nonatomic) UIWindow *bannerWindow; // @synthesize bannerWindow=_bannerWindow;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <BNLayoutManaging> layoutManager;
@property(readonly, nonatomic, getter=isPresentingBanner) _Bool presentingBanner;
@property(readonly) Class superclass;
@end
