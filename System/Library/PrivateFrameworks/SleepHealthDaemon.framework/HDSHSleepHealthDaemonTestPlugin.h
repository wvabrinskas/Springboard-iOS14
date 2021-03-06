/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SleepHealthDaemon/HDSHSleepHealthDaemonPlugin.h>

@class HDSHSleepOnboardingTestStore, HDSHProfileExtension, NSDate;

@interface HDSHSleepHealthDaemonTestPlugin : HDSHSleepHealthDaemonPlugin {

	HDSHSleepOnboardingTestStore* _sleepStore;
	HDSHProfileExtension* _mainExtension;

}

@property (nonatomic,retain) NSDate * currentDate; 
@property (assign,nonatomic) BOOL springBoardGreetingDisabled; 
-(NSDate *)currentDate;
-(id)init;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(id)extensionForProfile:(id)arg1 ;
-(void)setSpringBoardGreetingDisabled:(BOOL)arg1 ;
-(BOOL)springBoardGreetingDisabled;
-(id)_availabilityStoreForFeature:(id)arg1 ;
-(long long)onboardingCompletedVersionForFeature:(id)arg1 ;
-(id)onboardingCompletedDateForFeature:(id)arg1 ;
-(void)notifyForOnboardingVersionChangeForFeature:(id)arg1 ;
@end

