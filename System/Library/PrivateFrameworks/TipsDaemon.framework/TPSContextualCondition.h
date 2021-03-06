/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TipsDaemon/TipsDaemon-Structs.h>
#import <TipsCore/TPSSerializableObject.h>

@class NSDate, NSArray;

@interface TPSContextualCondition : TPSSerializableObject {

	unsigned long long _type;
	unsigned long long _joinType;
	NSDate* _matchedDate;
	NSArray* _rules;

}

@property (assign,nonatomic) unsigned long long joinType;              //@synthesize joinType=_joinType - In the implementation block
@property (nonatomic,copy) NSArray * rules;                            //@synthesize rules=_rules - In the implementation block
@property (assign,nonatomic) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSDate * matchedDate;                       //@synthesize matchedDate=_matchedDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(id)eventsForConditionDictionary:(id)arg1 ;
-(id)eventIdentifiers;
-(NSArray *)rules;
-(void)setJoinType:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setType:(unsigned long long)arg1 ;
-(void)setMatchedDate:(NSDate *)arg1 ;
-(NSDate *)matchedDate;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setRules:(NSArray *)arg1 ;
-(unsigned long long)joinType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)restartTracking;
-(id)initWithDictionary:(id)arg1 type:(unsigned long long)arg2 ;
@end

