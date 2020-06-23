//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableSet, SBFluidSwitcherAnimationSettings;
@protocol SBHomeScreenBackdropViewBaseDelegate;

@interface SBHomeScreenBackdropViewBase : UIView
{
    NSMutableSet *_backdropViewRequiringReasons;
    NSMutableSet *_liveBackdropViewRequiringReasons;
    SBFluidSwitcherAnimationSettings *_animationSettings;
    id <SBHomeScreenBackdropViewBaseDelegate> _delegate;
}


// Remaining properties
@property(nonatomic) __weak id <SBHomeScreenBackdropViewBaseDelegate> delegate; // @synthesize delegate=_delegate;
@end
