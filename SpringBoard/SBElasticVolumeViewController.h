//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBHUDViewControlling-Protocol.h>
#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>

@class CCUICAPackageDescription, NSArray, NSDate, NSMutableArray, NSMutableOrderedSet, NSString, NSTimer, SBElasticSliderMaterialWrapperView, SBElasticSliderView, SBFTouchPassThroughView, SBUIViewFloatSpringProperty, SBVolumeHUDSettings, UIButton, UILabel, UILongPressGestureRecognizer, UIPanGestureRecognizer, UISegmentedControl, UISlider, UISwitch, UIView, _UIEdgeFeedbackGenerator, _UIFeedback, _UIFeedbackEngine, _UILegibilityLabel;
@protocol SBElasticAudioDataSource, SBElasticAudioVolumeViewControllerDelegate;

@interface SBElasticVolumeViewController : UIViewController <UIGestureRecognizerDelegate, PTSettingsKeyObserver, SBHUDViewControlling>
{
    SBFTouchPassThroughView *_sliderContainerView;
    SBElasticSliderMaterialWrapperView *_sliderWrapperView;
    long long _previousState;
    long long _state;
    SBFTouchPassThroughView *_labelContainerView;
    _UILegibilityLabel *_leadingLabel;
    _UILegibilityLabel *_trailingLabel;
    UIView *_touchTrackingView;
    UIView *_dimmingView;
    double _startingValue;
    UIPanGestureRecognizer *_sliderViewPanGestureRecognizer;
    UILongPressGestureRecognizer *_shortLongPressGestureRecognizer;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
    unsigned long long _sliderTrackingCount;
    NSTimer *_dismissalTimer;
    NSTimer *_sliderApplyValueTimer;
    NSMutableOrderedSet *_sliderApplyValueQueue;
    _Bool _initialTransitionCompleted;
    _Bool _lockState;
    _Bool _isDebugging;
    _Bool _isRotating;
    _Bool _isDeflating;
    _Bool _startingDismissal;
    _Bool _reduceMotionEnabled;
    UIView *_debugContainerView;
    UILabel *_debugLabel;
    UISegmentedControl *_debugStateSegmentedControl;
    UILabel *_debugAutoDismissLabel;
    UISwitch *_debugAutoDismissalSwitch;
    UILabel *_debugLockStateLabel;
    UISwitch *_debugLockStateSwitch;
    UISlider *_debugWidthSlider;
    UISlider *_debugHeightSlider;
    UISlider *_debugPortraitYOriginSlider;
    UIButton *_debugDumpButton;
    UIButton *_debugNextAudioRouteButton;
    UIButton *_debugResetAudioRouteButton;
    unsigned long long _debugOverrideAudioRouteCount;
    long long _debugOverrideAudioRouteType;
    NSDate *_volumeUpLastHitDate;
    NSDate *_volumeDownLastHitDate;
    NSMutableArray *_runningListOfVolumesUpdates;
    unsigned long long _tickFeedbackIntervalCycleCounter;
    _UIFeedbackEngine *_tickVolumeFeedbackEngine;
    _UIFeedbackEngine *_edgeVolumeFeedbackEngine;
    _UIFeedback *_tickVolumeFeedback;
    _UIFeedback *_edgeVolumeFeedback;
    NSString *_volumeString;
    NSString *_highVolumeString;
    NSString *_audioRouteString;
    int _anyCallActive;
    unsigned long long _audioRouteCount;
    long long _audioRouteType;
    CCUICAPackageDescription *_audioRoutePackage;
    NSArray *_debugAutolayoutConstraints;
    SBUIViewFloatSpringProperty *_positionXSpring;
    SBUIViewFloatSpringProperty *_positionYSpring;
    SBUIViewFloatSpringProperty *_scaleSpring;
    SBUIViewFloatSpringProperty *_minMaxScaleXSpring;
    SBUIViewFloatSpringProperty *_minMaxScaleYSpring;
    _Bool _volumeUpButtonIsDown;
    _Bool _volumeDownButtonIsDown;
    unsigned long long _axis;
    id <SBElasticAudioDataSource> _dataSource;
    id <SBElasticAudioVolumeViewControllerDelegate> _delegate;
    SBVolumeHUDSettings *_settings;
    SBElasticSliderView *_sliderView;
}


// Remaining properties
@property(readonly, nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property(nonatomic) __weak id <SBElasticAudioDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBElasticAudioVolumeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isSliderTracking;
@property(readonly, nonatomic) SBVolumeHUDSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) SBElasticSliderView *sliderView; // @synthesize sliderView=_sliderView;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool volumeDownButtonIsDown; // @synthesize volumeDownButtonIsDown=_volumeDownButtonIsDown;
@property(readonly, nonatomic) _Bool volumeUpButtonIsDown; // @synthesize volumeUpButtonIsDown=_volumeUpButtonIsDown;
@end
