/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXExecutableIdentifier, NSDate;

@interface ATXEngagementRecordEntry : NSObject <NSSecureCoding> {

	ATXExecutableIdentifier* _executable;
	NSDate* _dateEngaged;
	unsigned long long _engagementRecordType;

}

@property (nonatomic,readonly) ATXExecutableIdentifier * executable;                 //@synthesize executable=_executable - In the implementation block
@property (nonatomic,readonly) NSDate * dateEngaged;                                 //@synthesize dateEngaged=_dateEngaged - In the implementation block
@property (nonatomic,readonly) unsigned long long engagementRecordType;              //@synthesize engagementRecordType=_engagementRecordType - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)jsonDict;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ATXExecutableIdentifier *)executable;
-(NSDate *)dateEngaged;
-(id)initWithExecutable:(id)arg1 dateEngaged:(id)arg2 engagementRecordType:(unsigned long long)arg3 ;
-(unsigned long long)engagementRecordType;
@end

