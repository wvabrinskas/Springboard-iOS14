//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString, SBBootDefaults;

@interface SBInitialRestartState : NSObject <BSDescriptionProviding>
{
    _Bool _isAuthenticated;
    _Bool _isInLostMode;
    _Bool _isBlocked;
    _Bool _hasPasscodeSet;
    _Bool _requiresSetup;
    _Bool _shouldNeverLock;
    _Bool _forSimulator;
    _Bool _isLoginSession;
    long long _homeButtonType;
    SBBootDefaults *_bootDefaults;
}


// Remaining properties
@property(nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_isAuthenticated;
@property(nonatomic, getter=isBlocked) _Bool blocked; // @synthesize blocked=_isBlocked;
@property(retain, nonatomic) SBBootDefaults *bootDefaults; // @synthesize bootDefaults=_bootDefaults;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForSimulator) _Bool forSimulator; // @synthesize forSimulator=_forSimulator;
@property(nonatomic) _Bool hasPasscodeSet; // @synthesize hasPasscodeSet=_hasPasscodeSet;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long homeButtonType; // @synthesize homeButtonType=_homeButtonType;
@property(nonatomic, getter=isInLostMode) _Bool inLostMode; // @synthesize inLostMode=_isInLostMode;
@property(nonatomic, getter=isLoginSession) _Bool loginSession; // @synthesize loginSession=_isLoginSession;
@property(nonatomic) _Bool requiresSetup; // @synthesize requiresSetup=_requiresSetup;
@property(nonatomic) _Bool shouldNeverLock; // @synthesize shouldNeverLock=_shouldNeverLock;
@property(readonly) Class superclass;
@end
