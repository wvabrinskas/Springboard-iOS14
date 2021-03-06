/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/ML3Predicate.h>

@interface ML3TruthPredicate : ML3Predicate {

	BOOL _truthValue;

}
+(BOOL)supportsSecureCoding;
+(id)truePredicate;
+(id)falsePredicate;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_predicateString;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isTrueAlways;
-(BOOL)isFalseAlways;
@end

