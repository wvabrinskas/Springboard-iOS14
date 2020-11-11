/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDateInterval;

@interface RTStoredVisitFetchOptions : NSObject <NSSecureCoding> {

	BOOL _ascending;
	BOOL _labelVisit;
	NSNumber* _confidence;
	NSDateInterval* _dateInterval;
	NSNumber* _limit;

}

@property (nonatomic,readonly) BOOL ascending;                         //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) NSNumber * confidence;                  //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) BOOL labelVisit;                        //@synthesize labelVisit=_labelVisit - In the implementation block
@property (nonatomic,readonly) NSNumber * limit;                       //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)ascending;
-(unsigned long long)hash;
-(BOOL)isEqualToFetchOptions:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(id)initWithAscending:(BOOL)arg1 confidence:(id)arg2 dateInterval:(id)arg3 labelVisit:(BOOL)arg4 limit:(id)arg5 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)confidence;
-(id)initWithAscending:(BOOL)arg1 confidence:(id)arg2 dateInterval:(id)arg3 limit:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)labelVisit;
-(NSNumber *)limit;
@end
