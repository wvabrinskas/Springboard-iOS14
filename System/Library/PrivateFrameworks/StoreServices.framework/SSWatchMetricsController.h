/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class SSXPCConnection, SSWatchMetricsConfiguration, NSObject;

@interface SSWatchMetricsController : NSObject {

	SSXPCConnection* _connection;
	SSWatchMetricsConfiguration* _metricsConfiguration;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                      //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,copy) SSWatchMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
-(id)_connection;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)setMetricsConfiguration:(SSWatchMetricsConfiguration *)arg1 ;
-(SSWatchMetricsConfiguration *)metricsConfiguration;
-(void)insertEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)isEnabled;
@end
