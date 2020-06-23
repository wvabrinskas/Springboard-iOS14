//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardUI/_SBFVibrantView-Protocol.h>

@class NSString, UIColor, _SBFVibrantSettings;

@interface SBUIChevronView : UIView <_SBFVibrantView>
{
    UIView *_leftGrabberView;
    UIView *_rightGrabberView;
    double _animationDuration;
    long long _state;
    UIColor *_color;
    double _alphaComponent;
    _SBFVibrantSettings *_vibrantSettings;
    UIView *_tintView;
    UIView *_backgroundView;
    _Bool _unified;
    UIView *_alphaContainerView;
}


// Remaining properties
@property(nonatomic) double animationDuration;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly) Class superclass;
@property(retain, nonatomic) _SBFVibrantSettings *vibrantSettings; // @synthesize vibrantSettings=_vibrantSettings;
@end
