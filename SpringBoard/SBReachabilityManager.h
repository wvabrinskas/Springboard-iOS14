//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>
#import <SpringBoard/SBSystemGestureRecognizerDelegate-Protocol.h>

@class NSHashTable, NSMutableSet, NSString, SBHomeGestureParticipant, SBReachabilityGestureRecognizer, SBReachabilityWindow, SBScreenEdgePanGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UITransform;

@interface SBReachabilityManager : NSObject <SBSystemGestureRecognizerDelegate, SBHomeGestureParticipantDelegate>
{
    NSHashTable *_observers;
    _Bool _reachabilityModeActive;
    unsigned long long _reachabilityExtensionGenerationCount;
    _Bool _reachabilityModeEnabled;
    NSMutableSet *_temporaryDisabledReasons;
    SBReachabilityWindow *_reachabilityWindow;
    UITransform *_reachabilityTransform;
    UITransform *_inverseReachabilityTransform;
    UITapGestureRecognizer *_dismissTapGestureRecognizer;
    SBHomeGestureParticipant *_homeGestureParticipant;
    NSHashTable *_ignoredWindows;
    long long _animationsInFlight;
    SBReachabilityGestureRecognizer *_reachabilityGestureRecognizer;
    double _effectiveReachabilityYOffset;
    SBScreenEdgePanGestureRecognizer *_dismissEdgeGestureRecognizer;
    UIPanGestureRecognizer *_dismissPanGestureRecognizer;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SBScreenEdgePanGestureRecognizer *dismissEdgeGestureRecognizer; // @synthesize dismissEdgeGestureRecognizer=_dismissEdgeGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *dismissPanGestureRecognizer; // @synthesize dismissPanGestureRecognizer=_dismissPanGestureRecognizer;
@property(readonly, nonatomic) double effectiveReachabilityYOffset; // @synthesize effectiveReachabilityYOffset=_effectiveReachabilityYOffset;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool reachabilityEnabled;
@property(readonly, nonatomic) SBReachabilityGestureRecognizer *reachabilityGestureRecognizer; // @synthesize reachabilityGestureRecognizer=_reachabilityGestureRecognizer;
@property(readonly, nonatomic) _Bool reachabilityModeActive; // @synthesize reachabilityModeActive=_reachabilityModeActive;
@property(readonly, nonatomic) double reachabilityYOffset;
@property(readonly) Class superclass;
@end
