/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSDateInterval, NSNumber, NSDictionary;

@interface HDSyncPredicate : NSObject <NSSecureCoding, NSCopying> {

	NSSet* _excludedSyncProvenances;
	NSDateInterval* _dateInterval;
	NSSet* _includedObjectTypes;
	NSNumber* _defaultMaximumObjectAge;
	NSNumber* _defaultMaximumTombstoneAge;
	NSDictionary* _maximumObjectAgeByType;

}

@property (nonatomic,copy,readonly) NSSet * excludedSyncProvenances;                    //@synthesize excludedSyncProvenances=_excludedSyncProvenances - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;                      //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSSet * includedObjectTypes;                        //@synthesize includedObjectTypes=_includedObjectTypes - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * defaultMaximumObjectAge;                 //@synthesize defaultMaximumObjectAge=_defaultMaximumObjectAge - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * defaultMaximumTombstoneAge;              //@synthesize defaultMaximumTombstoneAge=_defaultMaximumTombstoneAge - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * maximumObjectAgeByType;              //@synthesize maximumObjectAgeByType=_maximumObjectAgeByType - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDateInterval *)dateInterval;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)defaultMaximumObjectAge;
-(id)initWithExcludedSyncProvenances:(id)arg1 dateInterval:(id)arg2 includedObjectTypes:(id)arg3 defaultMaximumObjectAge:(id)arg4 defaultMaximumTombstoneAge:(id)arg5 maximumObjectAgeByType:(id)arg6 ;
-(id)maximumObjectAgeForType:(id)arg1 ;
-(NSSet *)excludedSyncProvenances;
-(NSSet *)includedObjectTypes;
-(NSNumber *)defaultMaximumTombstoneAge;
-(NSDictionary *)maximumObjectAgeByType;
@end

