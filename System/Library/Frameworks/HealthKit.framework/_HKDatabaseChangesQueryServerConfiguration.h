/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSSet, HKQueryAnchor;

@interface _HKDatabaseChangesQueryServerConfiguration : HKQueryServerConfiguration {

	BOOL _includeChangeDetails;
	NSSet* _sampleTypes;
	HKQueryAnchor* _anchor;
	long long _changeDetailsQueryStrategy;
	long long _anchorStrategyChangeCountLimit;

}

@property (nonatomic,copy) NSSet * sampleTypes;                                     //@synthesize sampleTypes=_sampleTypes - In the implementation block
@property (nonatomic,copy) HKQueryAnchor * anchor;                                  //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) BOOL includeChangeDetails;                             //@synthesize includeChangeDetails=_includeChangeDetails - In the implementation block
@property (assign,nonatomic) long long changeDetailsQueryStrategy;                  //@synthesize changeDetailsQueryStrategy=_changeDetailsQueryStrategy - In the implementation block
@property (assign,nonatomic) long long anchorStrategyChangeCountLimit;              //@synthesize anchorStrategyChangeCountLimit=_anchorStrategyChangeCountLimit - In the implementation block
+(BOOL)supportsSecureCoding;
-(HKQueryAnchor *)anchor;
-(void)setSampleTypes:(NSSet *)arg1 ;
-(void)setChangeDetailsQueryStrategy:(long long)arg1 ;
-(BOOL)includeChangeDetails;
-(void)setAnchorStrategyChangeCountLimit:(long long)arg1 ;
-(long long)changeDetailsQueryStrategy;
-(long long)anchorStrategyChangeCountLimit;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)sampleTypes;
-(void)setIncludeChangeDetails:(BOOL)arg1 ;
-(void)setAnchor:(HKQueryAnchor *)arg1 ;
@end
