/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSSet, NSString;

@interface PPSourceQuery : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _limit;
	NSDate* _fromDate;
	NSDate* _toDate;
	NSSet* _matchingBundleIds;
	NSSet* _matchingDocumentIds;
	NSString* _matchingContactHandle;

}

@property (assign,nonatomic) unsigned long long limit;                      //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) NSDate * fromDate;                             //@synthesize fromDate=_fromDate - In the implementation block
@property (nonatomic,retain) NSDate * toDate;                               //@synthesize toDate=_toDate - In the implementation block
@property (nonatomic,retain) NSSet * matchingBundleIds;                     //@synthesize matchingBundleIds=_matchingBundleIds - In the implementation block
@property (nonatomic,retain) NSSet * matchingDocumentIds;                   //@synthesize matchingDocumentIds=_matchingDocumentIds - In the implementation block
@property (nonatomic,retain) NSString * matchingContactHandle;              //@synthesize matchingContactHandle=_matchingContactHandle - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)toDate;
-(void)setMatchingContactHandle:(NSString *)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)init;
-(NSString *)matchingContactHandle;
-(unsigned long long)hash;
-(NSDate *)fromDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)matchingDocumentIds;
-(void)setMatchingDocumentIds:(NSSet *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setToDate:(NSDate *)arg1 ;
-(void)setFromDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)limit;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)matchingBundleIds;
-(BOOL)isEqualToSourceQuery:(id)arg1 ;
-(void)setMatchingBundleIds:(NSSet *)arg1 ;
@end
