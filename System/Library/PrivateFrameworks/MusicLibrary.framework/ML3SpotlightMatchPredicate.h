/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/ML3Predicate.h>

@class ML3SpotlightNameCache, NSArray, NSString;

@interface ML3SpotlightMatchPredicate : ML3Predicate {

	ML3SpotlightNameCache* _names;
	NSArray* _searchProperties;
	NSString* _searchString;

}

@property (nonatomic,readonly) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
+(id)predicateWithProperties:(id)arg1 searchString:(id)arg2 ;
-(NSString *)searchString;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(void)dealloc;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(id)spotlightPredicate;
-(id)initWithSearchString:(id)arg1 matchingProperties:(id)arg2 ;
@end
