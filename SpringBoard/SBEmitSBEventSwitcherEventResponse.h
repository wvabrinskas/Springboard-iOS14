//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class NSDictionary;

@interface SBEmitSBEventSwitcherEventResponse : SBSwitcherModifierEventResponse
{
    unsigned long long _eventType;
    NSDictionary *_payload;
}


// Remaining properties
@property(readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@end
