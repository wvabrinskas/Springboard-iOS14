//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout;

@interface SBInsertionSwitcherModifier : SBSwitcherModifier
{
    SBAppLayout *_appLayout;
    _Bool _isSimulatingPreInsertionState;
    unsigned long long _indexToScrollToAfterInsertion;
    struct CGPoint _contentOffsetBeforeInsertion;
    unsigned long long _phase;
}


// Remaining properties
@property(readonly, nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@end
