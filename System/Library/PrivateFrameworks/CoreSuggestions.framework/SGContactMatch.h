/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SGRecordId, SGContact, NSArray, SGMatchedDetails, SGObject;

@interface SGContactMatch : NSObject <NSCopying, NSSecureCoding> {

	SGRecordId* _matchingFieldRecordId;
	long long _matchingFieldType;
	SGContact* _contact;
	NSArray* _matchTokens;
	SGMatchedDetails* _matchedDetails;

}

@property (nonatomic,readonly) SGContact * contact;                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) SGObject * matchingField; 
@property (nonatomic,readonly) long long matchingFieldType;                    //@synthesize matchingFieldType=_matchingFieldType - In the implementation block
@property (nonatomic,readonly) NSArray * matchTokens;                          //@synthesize matchTokens=_matchTokens - In the implementation block
@property (nonatomic,readonly) SGMatchedDetails * matchedDetails;              //@synthesize matchedDetails=_matchedDetails - In the implementation block
+(BOOL)supportsSecureCoding;
-(SGContact *)contact;
-(unsigned long long)hash;
-(id)initWithContact:(id)arg1 matchTokens:(id)arg2 matchInfo:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(SGObject *)matchingField;
-(id)initWithContact:(id)arg1 matchingFieldRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2 ;
-(id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2 ;
-(BOOL)isEqualToContactMatch:(id)arg1 ;
-(id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(id)initWithContact:(id)arg1 matchingPhoneRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(long long)matchingFieldType;
-(NSArray *)matchTokens;
-(SGMatchedDetails *)matchedDetails;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
