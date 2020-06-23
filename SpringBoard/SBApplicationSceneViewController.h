//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSceneViewController.h>

#import <SpringBoard/SBApplicationSceneViewControlling-Protocol.h>

@class NSString, SBAppStatusBarSettings, SBApplicationSceneHandle, SBApplicationSceneView, UIView;
@protocol SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;

@interface SBApplicationSceneViewController : SBSceneViewController <SBApplicationSceneViewControlling>
{
    _Bool __applicationStatusBarHidden;
    id <SBApplicationSceneViewControllingStatusBarDelegate> _applicationSceneStatusBarDelegate;
    SBAppStatusBarSettings *_overrideStatusBarSettings;
}


// Remaining properties
@property(readonly, nonatomic, getter=_isApplicationStatusBarHidden) _Bool _applicationStatusBarHidden; // @synthesize _applicationStatusBarHidden=__applicationStatusBarHidden;
@property(nonatomic) __weak id <SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; // @synthesize applicationSceneStatusBarDelegate=_applicationSceneStatusBarDelegate;
@property(readonly, nonatomic) long long contentInterfaceOrientation;
@property(readonly, nonatomic) struct CGSize contentReferenceSize;
@property(retain, nonatomic) UIView *customContentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long displayMode;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic, getter=_overrideStatusBarSettings, setter=_setOverrideStatusBarSettings:) SBAppStatusBarSettings *overrideStatusBarSettings; // @synthesize overrideStatusBarSettings=_overrideStatusBarSettings;
@property(readonly, nonatomic) long long overrideStatusBarStyle;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property(readonly, nonatomic) SBApplicationSceneHandle *sceneHandle;
@property(readonly, nonatomic, getter=_sceneView) SBApplicationSceneView *sceneView; // @dynamic sceneView;
@property(readonly, nonatomic) double statusBarAlpha;
@property(readonly) Class superclass;
@end
