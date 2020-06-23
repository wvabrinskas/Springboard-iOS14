//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSSceneIdentity, NSString, SBApplication;

@protocol SBApplicationDropSessionSceneProviding <NSObject>
- (FBSSceneIdentity *)mostRecentSceneIdentityExcludingLiveScenesForApplication:(SBApplication *)arg1;
- (FBSSceneIdentity *)preferredSceneIdentityForApplication:(SBApplication *)arg1 targetContentIdentifier:(NSString *)arg2 preferNewScene:(_Bool)arg3;
- (FBSSceneIdentity *)newSceneIdentityForApplication:(SBApplication *)arg1;
- (_Bool)isApplicationActiveAndVisible:(SBApplication *)arg1;
@end
