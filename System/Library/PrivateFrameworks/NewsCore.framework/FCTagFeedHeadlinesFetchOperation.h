/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCFeedPersonalizing;
@class NSDate, FCFeedRange, NSArray, NSSet, FCCloudContext, FCFeedDescriptor;

@interface FCTagFeedHeadlinesFetchOperation : FCOperation {

	/*^block*/id _fetchCompletionHandler;
	NSDate* _topOfFeedDate;
	FCFeedRange* _freeFeedRange;
	FCFeedRange* _paidFeedRange;
	long long _maxFetchCount;
	NSArray* _precedingAdjacentHeadlines;
	NSArray* _followingAdjacentHeadlines;
	NSSet* _shownArticleIDs;
	NSSet* _shownClusterIDs;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _cloudContext;
	FCFeedDescriptor* _feedDescriptor;
	id<FCFeedPersonalizing> _personalizer;

}

@property (nonatomic,copy,readonly) id<FCCoreConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) FCCloudContext * cloudContext;                           //@synthesize cloudContext=_cloudContext - In the implementation block
@property (nonatomic,readonly) FCFeedDescriptor * feedDescriptor;                       //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,readonly) id<FCFeedPersonalizing> personalizer;                    //@synthesize personalizer=_personalizer - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                                   //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
@property (nonatomic,copy) NSDate * topOfFeedDate;                                      //@synthesize topOfFeedDate=_topOfFeedDate - In the implementation block
@property (nonatomic,copy) FCFeedRange * freeFeedRange;                                 //@synthesize freeFeedRange=_freeFeedRange - In the implementation block
@property (nonatomic,copy) FCFeedRange * paidFeedRange;                                 //@synthesize paidFeedRange=_paidFeedRange - In the implementation block
@property (assign,nonatomic) long long maxFetchCount;                                   //@synthesize maxFetchCount=_maxFetchCount - In the implementation block
@property (nonatomic,copy) NSArray * precedingAdjacentHeadlines;                        //@synthesize precedingAdjacentHeadlines=_precedingAdjacentHeadlines - In the implementation block
@property (nonatomic,copy) NSArray * followingAdjacentHeadlines;                        //@synthesize followingAdjacentHeadlines=_followingAdjacentHeadlines - In the implementation block
@property (nonatomic,copy) NSSet * shownArticleIDs;                                     //@synthesize shownArticleIDs=_shownArticleIDs - In the implementation block
@property (nonatomic,copy) NSSet * shownClusterIDs;                                     //@synthesize shownClusterIDs=_shownClusterIDs - In the implementation block
-(void)performOperation;
-(id)filterTransformationWithFilterOptions:(long long)arg1 ;
-(NSDate *)topOfFeedDate;
-(NSSet *)shownArticleIDs;
-(void)_fetchOrdinaryHeadlinesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_fetchPinnedHeadlinesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)precedingAdjacentHeadlines;
-(NSArray *)followingAdjacentHeadlines;
-(void)supplementFeedItems:(id)arg1 forTag:(id)arg2 fromCursor:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSSet *)shownClusterIDs;
-(void)setTopOfFeedDate:(NSDate *)arg1 ;
-(void)setFreeFeedRange:(FCFeedRange *)arg1 ;
-(FCFeedDescriptor *)feedDescriptor;
-(id)initWithConfiguration:(id)arg1 cloudContext:(id)arg2 feedDescriptor:(id)arg3 personalizer:(id)arg4 ;
-(void)setPaidFeedRange:(FCFeedRange *)arg1 ;
-(void)setMaxFetchCount:(long long)arg1 ;
-(void)setPrecedingAdjacentHeadlines:(NSArray *)arg1 ;
-(void)setFollowingAdjacentHeadlines:(NSArray *)arg1 ;
-(void)setShownArticleIDs:(NSSet *)arg1 ;
-(void)setShownClusterIDs:(NSSet *)arg1 ;
-(id)fetchCompletionHandler;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(id<FCFeedPersonalizing>)personalizer;
-(id)feedTransformations;
-(id)filterTransformationWithFilterOptions:(long long)arg1 additionalArticleIDs:(id)arg2 ;
-(FCFeedRange *)paidFeedRange;
-(FCFeedRange *)freeFeedRange;
-(long long)maxFetchCount;
-(id<FCCoreConfiguration>)configuration;
-(FCCloudContext *)cloudContext;
@end

