//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBAutoUnlockComposableRule.h>

@class SBFUserAuthenticationController, SBSyncController;

@interface SBLockScreenAutoUnlockAggregateRule : SBAutoUnlockComposableRule
{
    SBFUserAuthenticationController *_userAuthenticationController;
    SBSyncController *_syncController;
}


// Remaining properties
@property(retain, nonatomic, getter=_syncController, setter=_setSyncController:) SBSyncController *syncController; // @synthesize syncController=_syncController;
@property(readonly, nonatomic) SBFUserAuthenticationController *userAuthenticationController; // @synthesize userAuthenticationController=_userAuthenticationController;
@end
