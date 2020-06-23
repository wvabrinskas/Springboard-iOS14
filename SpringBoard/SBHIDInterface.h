//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBProximitySensorControlling-Protocol.h>

@class NSMutableArray, NSString, SBHIDUILockAssertion;
@protocol BSInvalidatable;

@interface SBHIDInterface : NSObject <SBProximitySensorControlling>
{
    unsigned long long _lockState;
    NSMutableArray *_assertions;
    id <BSInvalidatable> _dispatchingAssertion;
    SBHIDUILockAssertion *_pocketTouchesAssertion;
    _Bool _proximityDetectionEnabled;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool pocketTouchesExpected;
@property(nonatomic, getter=isProximityDetectionEnabled) _Bool proximityDetectionEnabled;
@property(readonly) Class superclass;
@end
