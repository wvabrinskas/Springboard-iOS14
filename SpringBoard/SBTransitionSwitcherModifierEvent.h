//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class NSUUID, SBAppLayout;

@interface SBTransitionSwitcherModifierEvent : SBSwitcherModifierEvent
{
    _Bool _animated;
    NSUUID *_transitionID;
    unsigned long long _phase;
    SBAppLayout *_fromAppLayout;
    long long _fromEnvironmentMode;
    SBAppLayout *_toAppLayout;
    long long _toEnvironmentMode;
    long long _fromInterfaceOrientation;
    long long _toInterfaceOrientation;
}


// Remaining properties
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) SBAppLayout *fromAppLayout; // @synthesize fromAppLayout=_fromAppLayout;
@property(nonatomic) long long fromEnvironmentMode; // @synthesize fromEnvironmentMode=_fromEnvironmentMode;
@property(nonatomic) long long fromInterfaceOrientation; // @synthesize fromInterfaceOrientation=_fromInterfaceOrientation;
@property(nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(retain, nonatomic) SBAppLayout *toAppLayout; // @synthesize toAppLayout=_toAppLayout;
@property(nonatomic) long long toEnvironmentMode; // @synthesize toEnvironmentMode=_toEnvironmentMode;
@property(nonatomic) long long toInterfaceOrientation; // @synthesize toInterfaceOrientation=_toInterfaceOrientation;
@property(readonly, nonatomic) NSUUID *transitionID; // @synthesize transitionID=_transitionID;
@end
