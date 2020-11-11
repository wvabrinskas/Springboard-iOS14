/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBLogoutProgressDataSource.h>
#import <libobjc.A.dylib/SBLogoutProgressDelegate.h>
#import <libobjc.A.dylib/UMCriticalUserSwitchStakeholder.h>

@class UMUserManager, UMUser, SBMainDisplayPolicyAggregator, SBLogoutProgressTransientOverlayViewController, NSMutableArray, NSMutableSet, UMUserSwitchBlockingTask, NSDate, NSDictionary, LKLogoutSupport, NSString;

@interface SBUserSessionController : NSObject <SBLogoutProgressDataSource, SBLogoutProgressDelegate, UMCriticalUserSwitchStakeholder> {

	UMUserManager* _userManager;
	UMUser* _lazy_user;
	SBMainDisplayPolicyAggregator* _lazy_policyAggregator;
	SBLogoutProgressTransientOverlayViewController* _progressTransientOverlayViewController;
	NSMutableArray* _displayApplications;
	NSMutableSet* _terminatingApplications;
	UMUserSwitchBlockingTask* _terminateApplicationsTask;
	NSDate* _terminateApplicationsStartDate;
	NSDictionary* _debugBlockingTasks;
	LKLogoutSupport* _logoutSupport;
	BOOL _loginSession;
	BOOL _loggingOut;

}

@property (assign,getter=isLoggingOut,nonatomic) BOOL loggingOut;                                                                                 //@synthesize loggingOut=_loggingOut - In the implementation block
@property (setter=_setPolicyAggregator:,getter=_policyAggregator,nonatomic,retain) SBMainDisplayPolicyAggregator * policyAggregator;              //@synthesize lazy_policyAggregator=_lazy_policyAggregator - In the implementation block
@property (nonatomic,retain,readonly) UMUser * user; 
@property (getter=isLoginSession,nonatomic,readonly) BOOL loginSession;                                                                           //@synthesize loginSession=_loginSession - In the implementation block
@property (nonatomic,readonly) BOOL isMultiUserSupported; 
@property (nonatomic,readonly) BOOL canLogout; 
@property (nonatomic,readonly) long long sessionType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLoginSession;
-(UMUser *)user;
-(id)succinctDescription;
-(SBMainDisplayPolicyAggregator *)policyAggregator;
-(void)_setPolicyAggregator:(id)arg1 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)readyToSwitchToLoginSession:(id)arg1 ;
-(long long)sessionType;
-(CGPoint)_portraitOrientedProgressLocationForOrientation:(long long)arg1 ;
-(BOOL)isMultiUserSupported;
-(void)_evaluateRunningApplications;
-(NSString *)description;
-(id)_initWithUserManager:(id)arg1 ;
-(id)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(id)arg1 ;
-(id)_policyAggregator;
-(BOOL)isLoggingOut;
-(BOOL)canLogout;
-(void)logout;
-(void)disableCurrentUser;
-(void)logoutWithLogoutSupport:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLoggingOut:(BOOL)arg1 ;
-(id)pendingApplicationsForLogoutProgressTransientOverlayViewController:(id)arg1 ;
-(void)readyToSwitchToUser:(id)arg1 ;
-(void)_noteApplicationDidExitFromNotification:(id)arg1 ;
-(void)userSwitchBlockingTasksDidUpdate:(id)arg1 ;
-(void)_noteApplicationDidExit:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_displayProgressTransientOverlayIfNeeded;
-(id)_massageApplicationListForDisplay:(id)arg1 ;
-(void)willSwitchToUser:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)_readyToSwitchToUser:(id)arg1 ;
-(void)logoutProgressTransientOverlayViewControllerDidDisappear:(id)arg1 ;
-(void)dealloc;
@end
