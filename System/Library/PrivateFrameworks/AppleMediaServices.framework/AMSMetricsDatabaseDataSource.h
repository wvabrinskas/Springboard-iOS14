/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSMetricsDataSource.h>

@protocol OS_dispatch_queue;
@class AMSMetricsDatabase, NSString, NSObject;

@interface AMSMetricsDatabaseDataSource : NSObject <AMSMetricsDataSource> {

	AMSMetricsDatabase* _database;
	NSString* _containerIdentifier;
	NSString* _currentLockKey;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) AMSMetricsDatabase * database;                 //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSString * currentLockKey;                       //@synthesize currentLockKey=_currentLockKey - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * containerIdentifier;                //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) long long eventCount; 
-(void)removeAllEvents;
-(void)setCurrentLockKey:(NSString *)arg1 ;
-(void)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2 ;
-(NSString *)containerIdentifier;
-(void)skipEvents:(id)arg1 error:(id*)arg2 ;
-(void)didFinishBatching;
-(void)enumerateSortedEventsForTopic:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)enqueueEvents:(id)arg1 ;
-(NSString *)currentLockKey;
-(void)removeEvents:(id)arg1 error:(id*)arg2 ;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)cancel;
-(NSObject*<OS_dispatch_queue>)queue;
-(AMSMetricsDatabase *)database;
-(long long)eventCount;
-(void)dealloc;
@end

