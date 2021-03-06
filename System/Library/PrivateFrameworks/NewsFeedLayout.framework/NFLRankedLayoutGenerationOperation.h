/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NFLRankedLayoutRequest, NFLFeedSettings;

@interface NFLRankedLayoutGenerationOperation : NSOperation {

	/*^block*/id _rankedLayoutGenerationCompletion;
	NFLRankedLayoutRequest* _request;
	NFLFeedSettings* _feedSettings;

}

@property (copy) NFLRankedLayoutRequest * request;                        //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NFLFeedSettings * feedSettings;              //@synthesize feedSettings=_feedSettings - In the implementation block
@property (copy) id rankedLayoutGenerationCompletion;                     //@synthesize rankedLayoutGenerationCompletion=_rankedLayoutGenerationCompletion - In the implementation block
-(NFLRankedLayoutRequest *)request;
-(id)init;
-(NFLFeedSettings *)feedSettings;
-(void)setFeedSettings:(NFLFeedSettings *)arg1 ;
-(void)setRequest:(NFLRankedLayoutRequest *)arg1 ;
-(void)setRankedLayoutGenerationCompletion:(id)arg1 ;
-(void)main;
-(id)rankedLayoutGenerationCompletion;
-(void)cancel;
-(id)initWithRequest:(id)arg1 feedSettings:(id)arg2 ;
@end

