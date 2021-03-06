/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ASDServiceProvider.h>

@class ASDServiceBroker, NSString;

@interface ASDOcelotStore : NSObject <ASDServiceProvider> {

	ASDServiceBroker* _serviceBroker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)interface;
-(void)sbsyncIfSubscribedWithAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sendSummaryWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)getAppSummaryEventsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)sbsyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)resetPayoutWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)topAppsForAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)recordLaunchesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getAppPayoutEventsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)subscriptionStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)flushMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reportAppEvent:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sbsyncWithDuration:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resetSummaryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)sendPayoutWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)subscriptionDetailsWithCompletionBlock:(/*^block*/id)arg1 ;
@end

