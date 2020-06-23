//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSTimer, NSMutableArray, SBPressSequenceValidator, SBPressTuple;
@protocol SBPressSequenceRecognizerDelegate;

@interface SBPressSequenceRecognizer : NSObject
{
    double _lastPressDownEvent;
    double _lastPressUpEvent;
    BSTimer *_watchdogTimer;
    SBPressTuple *_currentPressTuple;
    NSMutableArray *_currentSequence;
    id <SBPressSequenceRecognizerDelegate> _delegate;
    SBPressSequenceValidator *_validator;
    unsigned long long _numberOfPresses;
}


// Remaining properties
@property(nonatomic) __weak id <SBPressSequenceRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long numberOfPresses; // @synthesize numberOfPresses=_numberOfPresses;
@property(readonly, nonatomic) SBPressSequenceValidator *validator; // @synthesize validator=_validator;
@end
