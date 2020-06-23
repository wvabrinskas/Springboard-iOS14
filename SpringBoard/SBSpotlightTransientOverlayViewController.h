//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransientOverlayViewController.h>

#import <SpringBoard/SPUIRemoteSearchViewDelegate-Protocol.h>

@class NSString, SBSpotlightSettings, SBSpotlightTransientOverlaySpotlightViewController, UIView, UIVisualEffectView;
@protocol SBSpotlightTransientOverlayViewControllerDelegate, SBTransientOverlayTransitionContextProviding;

@interface SBSpotlightTransientOverlayViewController : SBTransientOverlayViewController <SPUIRemoteSearchViewDelegate>
{
    UIVisualEffectView *_blurEffectView;
    SBSpotlightTransientOverlaySpotlightViewController *_spotlightViewController;
    _Bool _presentingInteractively;
    _Bool _performedAlongsideAnimations;
    id <SBTransientOverlayTransitionContextProviding> _interactivePresentationContextProvider;
    id <SBSpotlightTransientOverlayViewControllerDelegate> _delegate;
    unsigned long long _presentationSource;
    SBSpotlightSettings *_settings;
    UIView *_scalingView;
    unsigned long long _animationCount;
}


// Remaining properties
@property(nonatomic) unsigned long long animationCount; // @synthesize animationCount=_animationCount;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBSpotlightTransientOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long presentationSource; // @synthesize presentationSource=_presentationSource;
@property(retain, nonatomic) UIView *scalingView; // @synthesize scalingView=_scalingView;
@property(retain, nonatomic) SBSpotlightSettings *settings; // @synthesize settings=_settings;
@property(readonly) Class superclass;
@end
