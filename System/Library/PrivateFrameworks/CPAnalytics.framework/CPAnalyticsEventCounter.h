/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CPAnalyticsEventMatcher;

@interface CPAnalyticsEventCounter : NSObject {

	NSString* _name;
	unsigned long long _count;
	CPAnalyticsEventMatcher* _matcher;
	NSString* _countKey;

}

@property (nonatomic,readonly) CPAnalyticsEventMatcher * matcher;              //@synthesize matcher=_matcher - In the implementation block
@property (nonatomic,readonly) NSString * countKey;                            //@synthesize countKey=_countKey - In the implementation block
@property (assign,nonatomic) unsigned long long count;                         //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
+(id)_validateAndParseEventName:(id)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(void)countEvent:(id)arg1 ;
-(id)initWithEventName:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithConfig:(id)arg1 ;
-(NSString *)name;
-(NSString *)countKey;
-(id)initWithName:(id)arg1 matcher:(id)arg2 ;
-(void)resetCount;
-(CPAnalyticsEventMatcher *)matcher;
@end

