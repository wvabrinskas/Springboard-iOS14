/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface PPConnectionsParameters : NSObject {

	NSDictionary* _assets;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)donationBlockedApps;
-(double)linguisticTriggerExpirySeconds;
-(long long)locationAppPredictionLaunchTimeOfDayFactor;
-(id)donationAllowedWebsites;
-(double)namedEntitySourceExpirySeconds;
-(id)init;
-(double)calendarEventLocationExpirySeconds;
-(BOOL)boolValueForKey:(id)arg1 default:(BOOL)arg2 ;
-(double)pasteboardItemExpirySeconds;
-(double)namedEntitySourceLookBackSeconds;
-(double)doubleValueForKey:(id)arg1 default:(long long)arg2 ;
-(long long)locationAppPredictionOverallLaunchFactor;
-(long long)appSwitcherPredictionExpiry;
-(double)userActivityExpirySeconds;
-(double)foundInAppsSourceExpirySeconds;
-(long long)integerValueForKey:(id)arg1 default:(long long)arg2 ;
-(unsigned long long)userActivityBatchSize;
-(long long)locationAppPredictionInstallMaxScore;
-(id)donationBlockedWebsites;
-(double)userActivityCandidateScore;
-(BOOL)shouldUseAllowedApps;
-(double)calendarEventLocationLookaheadTimeSeconds;
-(id)donationAllowedApps;
-(long long)locationAppPredictionInstallHalflife;
-(long long)unsignedIntegerValueForKey:(id)arg1 default:(long long)arg2 ;
-(double)foundInAppsSourceLookBackSeconds;
-(long long)expirySeconds;
-(BOOL)shouldUseAllowedWebsite;
-(id)assetValueForKey:(id)arg1 ;
-(id)locationPredictionBlockedApps;
-(double)locationAppLastUseTimeoutSeconds;
-(unsigned long long)quickTypePredictionLimit;
@end
