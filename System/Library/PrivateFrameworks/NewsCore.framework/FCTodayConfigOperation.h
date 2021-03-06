/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCContentContext;
@class NSString, NSArray, NTPBTodayConfig, NSError, NSDictionary;

@interface FCTodayConfigOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	id<FCContentContext> _context;
	NSString* _widgetConfigID;
	NSArray* _networkEvents;
	/*^block*/id _defaultConfigCompletionHandler;
	/*^block*/id _singleTagConfigCompletionHandler;
	NTPBTodayConfig* _resultDefaultConfig;
	NSError* _defaultConfigError;
	NTPBTodayConfig* _resultSingleTagConfig;
	NSError* _singleTagConfigError;
	NSDictionary* _resultHeldRecordsByType;

}

@property (nonatomic,copy) NTPBTodayConfig * resultDefaultConfig;                 //@synthesize resultDefaultConfig=_resultDefaultConfig - In the implementation block
@property (nonatomic,copy) NSError * defaultConfigError;                          //@synthesize defaultConfigError=_defaultConfigError - In the implementation block
@property (nonatomic,copy) NTPBTodayConfig * resultSingleTagConfig;               //@synthesize resultSingleTagConfig=_resultSingleTagConfig - In the implementation block
@property (nonatomic,copy) NSError * singleTagConfigError;                        //@synthesize singleTagConfigError=_singleTagConfigError - In the implementation block
@property (nonatomic,copy) NSArray * networkEvents;                               //@synthesize networkEvents=_networkEvents - In the implementation block
@property (nonatomic,retain) NSDictionary * resultHeldRecordsByType;              //@synthesize resultHeldRecordsByType=_resultHeldRecordsByType - In the implementation block
@property (copy) id<FCCoreConfiguration> configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * widgetConfigID;                             //@synthesize widgetConfigID=_widgetConfigID - In the implementation block
@property (nonatomic,copy) id defaultConfigCompletionHandler;                     //@synthesize defaultConfigCompletionHandler=_defaultConfigCompletionHandler - In the implementation block
@property (nonatomic,copy) id singleTagConfigCompletionHandler;                   //@synthesize singleTagConfigCompletionHandler=_singleTagConfigCompletionHandler - In the implementation block
-(NSDictionary *)resultHeldRecordsByType;
-(BOOL)validateOperation;
-(NSArray *)networkEvents;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setNetworkEvents:(NSArray *)arg1 ;
-(id)init;
-(void)setWidgetConfigID:(NSString *)arg1 ;
-(id)defaultConfigCompletionHandler;
-(id)singleTagConfigCompletionHandler;
-(id)_todayConfigWithConfigJSON:(id)arg1 articleListIDs:(id)arg2 articleIDs:(id)arg3 error:(id*)arg4 ;
-(void)setDefaultConfigError:(NSError *)arg1 ;
-(void)setSingleTagConfigError:(NSError *)arg1 ;
-(void)setResultDefaultConfig:(NTPBTodayConfig *)arg1 ;
-(void)setResultSingleTagConfig:(NTPBTodayConfig *)arg1 ;
-(NTPBTodayConfig *)resultDefaultConfig;
-(NTPBTodayConfig *)resultSingleTagConfig;
-(void)setResultHeldRecordsByType:(NSDictionary *)arg1 ;
-(NSError *)defaultConfigError;
-(NSError *)singleTagConfigError;
-(void)_collectRecordIDsReferencedBySectionConfig:(id)arg1 withArticleListIDs:(id)arg2 articleIDs:(id)arg3 ;
-(void)setDefaultConfigCompletionHandler:(id)arg1 ;
-(void)setSingleTagConfigCompletionHandler:(id)arg1 ;
-(NSString *)widgetConfigID;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(id<FCCoreConfiguration>)configuration;
@end

