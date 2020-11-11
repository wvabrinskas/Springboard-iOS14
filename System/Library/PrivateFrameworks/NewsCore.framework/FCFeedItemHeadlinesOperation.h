/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCContentContext, FCFeedPersonalizing;
@class NSArray, NSMapTable, NSDictionary;

@interface FCFeedItemHeadlinesOperation : FCOperation {

	BOOL _shouldFilterHeadlinesWithoutSourceChannels;
	id<FCCoreConfiguration> _configuration;
	id<FCContentContext> _context;
	NSArray* _feedItems;
	id<FCFeedPersonalizing> _personalizer;
	NSMapTable* _feedItemScoreProfiles;
	long long _feedPersonalizationConfigurationSet;
	/*^block*/id _rapidUpdateRefreshTest;
	NSDictionary* _feedContextByFeedID;
	NSDictionary* _feedIDsByArticleID;
	/*^block*/id _headlinesCompletionHandler;
	/*^block*/id _headlinesMapCompletionHandler;
	NSArray* _resultHeadlines;
	NSMapTable* _resultHeadlinesByFeedItem;

}

@property (nonatomic,retain) NSArray * resultHeadlines;                                    //@synthesize resultHeadlines=_resultHeadlines - In the implementation block
@property (nonatomic,retain) NSMapTable * resultHeadlinesByFeedItem;                       //@synthesize resultHeadlinesByFeedItem=_resultHeadlinesByFeedItem - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                          //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSArray * feedItems;                                            //@synthesize feedItems=_feedItems - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> personalizer;                         //@synthesize personalizer=_personalizer - In the implementation block
@property (nonatomic,copy) NSMapTable * feedItemScoreProfiles;                             //@synthesize feedItemScoreProfiles=_feedItemScoreProfiles - In the implementation block
@property (assign,nonatomic) long long feedPersonalizationConfigurationSet;                //@synthesize feedPersonalizationConfigurationSet=_feedPersonalizationConfigurationSet - In the implementation block
@property (assign,nonatomic) BOOL shouldFilterHeadlinesWithoutSourceChannels;              //@synthesize shouldFilterHeadlinesWithoutSourceChannels=_shouldFilterHeadlinesWithoutSourceChannels - In the implementation block
@property (nonatomic,copy) id rapidUpdateRefreshTest;                                      //@synthesize rapidUpdateRefreshTest=_rapidUpdateRefreshTest - In the implementation block
@property (nonatomic,copy) NSDictionary * feedContextByFeedID;                             //@synthesize feedContextByFeedID=_feedContextByFeedID - In the implementation block
@property (nonatomic,copy) NSDictionary * feedIDsByArticleID;                              //@synthesize feedIDsByArticleID=_feedIDsByArticleID - In the implementation block
@property (nonatomic,copy) id headlinesCompletionHandler;                                  //@synthesize headlinesCompletionHandler=_headlinesCompletionHandler - In the implementation block
@property (nonatomic,copy) id headlinesMapCompletionHandler;                               //@synthesize headlinesMapCompletionHandler=_headlinesMapCompletionHandler - In the implementation block
-(NSArray *)feedItems;
-(void)setPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)setFeedItems:(NSArray *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setFeedContextByFeedID:(NSDictionary *)arg1 ;
-(NSMapTable *)feedItemScoreProfiles;
-(id)init;
-(void)setResultHeadlines:(NSArray *)arg1 ;
-(void)setResultHeadlinesByFeedItem:(NSMapTable *)arg1 ;
-(void)setShouldFilterHeadlinesWithoutSourceChannels:(BOOL)arg1 ;
-(long long)feedPersonalizationConfigurationSet;
-(NSDictionary *)feedIDsByArticleID;
-(NSArray *)resultHeadlines;
-(id)rapidUpdateRefreshTest;
-(void)setFeedItemScoreProfiles:(NSMapTable *)arg1 ;
-(id<FCFeedPersonalizing>)personalizer;
-(id<FCContentContext>)context;
-(void)_fetchUnadornedHeadlinesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMapTable *)resultHeadlinesByFeedItem;
-(void)setFeedIDsByArticleID:(NSDictionary *)arg1 ;
-(BOOL)shouldFilterHeadlinesWithoutSourceChannels;
-(NSDictionary *)feedContextByFeedID;
-(void)setHeadlinesMapCompletionHandler:(id)arg1 ;
-(void)setHeadlinesCompletionHandler:(id)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(void)setFeedPersonalizationConfigurationSet:(long long)arg1 ;
-(id)headlinesMapCompletionHandler;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(id)headlinesCompletionHandler;
-(id<FCCoreConfiguration>)configuration;
-(void)setRapidUpdateRefreshTest:(id)arg1 ;
@end
