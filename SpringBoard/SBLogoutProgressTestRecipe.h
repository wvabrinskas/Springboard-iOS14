//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBLogoutProgressDataSource-Protocol.h>
#import <SpringBoard/SBTestRecipe-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, SBLogoutProgressTransientOverlayViewController;

@interface SBLogoutProgressTestRecipe : NSObject <SBLogoutProgressDataSource, SBTestRecipe>
{
    NSMutableArray *_tasks;
    SBLogoutProgressTransientOverlayViewController *_logoutProgressTransientOverlayViewController;
    NSArray *_remainingApplications;
    NSDictionary *_remainingBlockingTasks;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBLogoutProgressTransientOverlayViewController *logoutProgressTransientOverlayViewController; // @synthesize logoutProgressTransientOverlayViewController=_logoutProgressTransientOverlayViewController;
@property(copy, nonatomic) NSArray *remainingApplications; // @synthesize remainingApplications=_remainingApplications;
@property(retain, nonatomic) NSDictionary *remainingBlockingTasks; // @synthesize remainingBlockingTasks=_remainingBlockingTasks;
@property(readonly) Class superclass;
@end
