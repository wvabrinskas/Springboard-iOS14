//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBIdleTimerBase.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/ITIdleTimerDelegate-Protocol.h>

@class ITAttentionAwareIdleTimer, NSString, SBIdleTimerDescriptor;

@interface SBBacklightIdleTimer : SBIdleTimerBase <ITIdleTimerDelegate, BSDescriptionProviding>
{
    ITAttentionAwareIdleTimer *_attentionAwareTimer;
    _Bool _requiresManualReset;
    SBIdleTimerDescriptor *_descriptor;
    double _timeMultiplier;
    unsigned long long _expectation;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) SBIdleTimerDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(nonatomic) unsigned long long expectation; // @synthesize expectation=_expectation;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool requiresManualReset; // @synthesize requiresManualReset=_requiresManualReset;
@property(readonly) Class superclass;
@property(nonatomic) double timeMultiplier; // @synthesize timeMultiplier=_timeMultiplier;
@end
