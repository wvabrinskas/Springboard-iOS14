/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class ICRankingQueriesDefinition, NSDictionary, NSString, NSArray, CSSearchQuery, NSObject;

@interface ICSearchQuery : NSObject {

	BOOL _modernResultsOnly;
	BOOL _wasForceStopped;
	ICRankingQueriesDefinition* _rankingQueriesDefinition;
	NSDictionary* _queryResults;
	NSString* _queryString;
	NSArray* _externalRankingQueries;
	CSSearchQuery* _searchQuery;
	NSObject*<OS_dispatch_semaphore> _synchronousSemaphore;

}

@property (nonatomic,copy) NSString * queryString;                                               //@synthesize queryString=_queryString - In the implementation block
@property (assign,nonatomic) BOOL modernResultsOnly;                                             //@synthesize modernResultsOnly=_modernResultsOnly - In the implementation block
@property (nonatomic,retain) ICRankingQueriesDefinition * rankingQueriesDefinition;              //@synthesize rankingQueriesDefinition=_rankingQueriesDefinition - In the implementation block
@property (nonatomic,retain) NSArray * externalRankingQueries;                                   //@synthesize externalRankingQueries=_externalRankingQueries - In the implementation block
@property (nonatomic,retain) CSSearchQuery * searchQuery;                                        //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,retain) NSDictionary * queryResults;                                        //@synthesize queryResults=_queryResults - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> synchronousSemaphore;              //@synthesize synchronousSemaphore=_synchronousSemaphore - In the implementation block
@property (assign,nonatomic) BOOL wasForceStopped;                                               //@synthesize wasForceStopped=_wasForceStopped - In the implementation block
@property (nonatomic,readonly) NSArray * rankingQueries; 
+(id)defaultAttributesToReturnFromCoreSpotlight;
+(id)fetchDefaultAttributesForIdentifiers:(id)arg1 ;
-(BOOL)run:(id*)arg1 ;
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)queryString;
-(void)setup;
-(CSSearchQuery *)searchQuery;
-(void)setSearchQuery:(CSSearchQuery *)arg1 ;
-(ICRankingQueriesDefinition *)rankingQueriesDefinition;
-(void)setRankingQueriesDefinition:(ICRankingQueriesDefinition *)arg1 ;
-(void)setQueryResults:(NSDictionary *)arg1 ;
-(NSArray *)externalRankingQueries;
-(BOOL)wasForceStopped;
-(BOOL)modernResultsOnly;
-(void)setSynchronousSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)synchronousSemaphore;
-(void)setWasForceStopped:(BOOL)arg1 ;
-(id)initWithQueryString:(id)arg1 rankingQueriesDefinition:(id)arg2 modernResultsOnly:(BOOL)arg3 ;
-(id)initWithQueryString:(id)arg1 externalRankingQueries:(id)arg2 modernResultsOnly:(BOOL)arg3 ;
-(void)setModernResultsOnly:(BOOL)arg1 ;
-(void)setExternalRankingQueries:(NSArray *)arg1 ;
-(NSDictionary *)queryResults;
-(void)forceStop;
-(void)cancel;
-(NSArray *)rankingQueries;
@end

