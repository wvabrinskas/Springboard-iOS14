//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBAWDMetricData.h>

@class NSArray, NSString, NSUUID;

@interface SBPressSequenceMetricData : SBAWDMetricData
{
    _Bool _didTriggerSOS;
    NSString *_pressName;
    NSArray *_pressSequence;
    unsigned long long _clickMax;
    NSUUID *_sosTriggerUUID;
}


// Remaining properties
@property(nonatomic) unsigned long long clickMax; // @synthesize clickMax=_clickMax;
@property(nonatomic) _Bool didTriggerSOS; // @synthesize didTriggerSOS=_didTriggerSOS;
@property(copy, nonatomic) NSString *pressName; // @synthesize pressName=_pressName;
@property(copy, nonatomic) NSArray *pressSequence; // @synthesize pressSequence=_pressSequence;
@property(copy, nonatomic) NSUUID *sosTriggerUUID; // @synthesize sosTriggerUUID=_sosTriggerUUID;
@end
