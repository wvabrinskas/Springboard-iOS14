/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SPUISearchViewController, NSString;

@interface SPUIPPTTypingHelper : NSObject {

	double _timeSinceLastFire;
	SPUISearchViewController* _searchViewController;
	NSString* _queryString;
	NSString* _currentQueryString;
	unsigned long long _queryKind;
	/*^block*/id _completion;

}

@property (assign) double timeSinceLastFire;                                     //@synthesize timeSinceLastFire=_timeSinceLastFire - In the implementation block
@property (retain) SPUISearchViewController * searchViewController;              //@synthesize searchViewController=_searchViewController - In the implementation block
@property (retain) NSString * queryString;                                       //@synthesize queryString=_queryString - In the implementation block
@property (retain) NSString * currentQueryString;                                //@synthesize currentQueryString=_currentQueryString - In the implementation block
@property (assign) unsigned long long queryKind;                                 //@synthesize queryKind=_queryKind - In the implementation block
@property (copy) id completion;                                                  //@synthesize completion=_completion - In the implementation block
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)queryString;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(unsigned long long)queryKind;
-(void)setQueryKind:(unsigned long long)arg1 ;
-(void)fire:(id)arg1 ;
-(SPUISearchViewController *)searchViewController;
-(void)setSearchViewController:(SPUISearchViewController *)arg1 ;
-(void)setCurrentQueryString:(NSString *)arg1 ;
-(void)setTimeSinceLastFire:(double)arg1 ;
-(double)timeSinceLastFire;
-(NSString *)currentQueryString;
-(id)initWithString:(id)arg1 viewController:(id)arg2 queryKind:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
@end

