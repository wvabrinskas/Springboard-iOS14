//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>

@class NSString, SBBarSwipeAffordanceView, SBHomeGestureParticipant;
@protocol SBHomeGrabberPointerClickDelegate;

@interface SBBarSwipeAffordanceViewController : UIViewController <SBHomeGestureParticipantDelegate>
{
    long long _homeGestureParticipantIdentifier;
    _Bool _wantsToBeActiveAffordance;
    _Bool _suppressAffordance;
    SBHomeGestureParticipant *_homeGestureParticipant;
    id <SBHomeGrabberPointerClickDelegate> _pointerClickDelegate;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SBHomeGestureParticipant *homeGestureParticipant;
@property(nonatomic) __weak id <SBHomeGrabberPointerClickDelegate> pointerClickDelegate; // @synthesize pointerClickDelegate=_pointerClickDelegate;
@property(readonly) Class superclass;
@property(nonatomic) _Bool suppressAffordance; // @synthesize suppressAffordance=_suppressAffordance;
@property(retain, nonatomic) SBBarSwipeAffordanceView *view; // @dynamic view;
@property(nonatomic) _Bool wantsToBeActiveAffordance; // @synthesize wantsToBeActiveAffordance=_wantsToBeActiveAffordance;
@end
