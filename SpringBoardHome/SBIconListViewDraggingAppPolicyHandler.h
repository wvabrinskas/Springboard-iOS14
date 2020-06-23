//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconListViewDraggingPolicyHandling-Protocol.h>

@class NSMapTable, NSString, SBHIconEditingSettings, SBIconListViewDraggingDestinationDelegate;

@interface SBIconListViewDraggingAppPolicyHandler : NSObject <SBIconListViewDraggingPolicyHandling>
{
    NSMapTable *_dragContexts;
    SBIconListViewDraggingDestinationDelegate *_draggingDestinationDelegate;
    SBHIconEditingSettings *_iconEditingSettings;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak SBIconListViewDraggingDestinationDelegate *draggingDestinationDelegate; // @synthesize draggingDestinationDelegate=_draggingDestinationDelegate;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBHIconEditingSettings *iconEditingSettings; // @synthesize iconEditingSettings=_iconEditingSettings;
@property(readonly) Class superclass;
@end
