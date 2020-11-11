/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPFeedbackProcessing.h>

@class PPQuickTypeNavigationServant, PPQuickTypeContactsServant, PPQuickTypeEventsServant, PPQuickTypeConnectionsServant, _PASLock;

@interface PPLocalQuickTypeBroker : NSObject <PPFeedbackAccepting, PPFeedbackProcessing> {

	PPQuickTypeNavigationServant* _navigationServant;
	PPQuickTypeContactsServant* _contactsServant;
	PPQuickTypeEventsServant* _eventsServant;
	PPQuickTypeConnectionsServant* _connectionsServant;
	_PASLock* _cacheLock;

}
+(id)sharedInstance;
-(void)_registerForNotifications;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)warmUpWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)hibernateWithCompletion:(/*^block*/id)arg1 ;
-(id)_cachedQuickTypeItemsWithRecipients:(id)arg1 ;
-(id)_quickTypeItemsFromServantsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(id)_recipientItemCacheKeyForRecipients:(id)arg1 ;
-(id)_cachedQuickTypeItemsWithQuery:(id)arg1 ;
-(void)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_clearCaches;
-(void)recentQuickTypeItemsForRecipients:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)quickTypeItemsWithLanguageModelingTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 limit:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_shouldUseCacheWithCacheEntry:(id)arg1 query:(id)arg2 ;
-(id)filterFeedback:(id)arg1 ;
-(void)processfeedbackItems:(id)arg1 scoringDate:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5 ;
-(id)_cacheEntryWithRecipients:(id)arg1 ;
@end
