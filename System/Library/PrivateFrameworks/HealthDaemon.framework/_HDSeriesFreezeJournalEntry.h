/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID, NSDictionary;

@interface _HDSeriesFreezeJournalEntry : HDJournalEntry {

	NSUUID* _seriesUUID;
	NSDictionary* _metadata;
	Class _seriesClass;

}

@property (nonatomic,copy,readonly) NSUUID * seriesUUID;                  //@synthesize seriesUUID=_seriesUUID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) Class seriesClass;                         //@synthesize seriesClass=_seriesClass - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)metadata;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSeriesUUID:(id)arg1 metadata:(id)arg2 class:(Class)arg3 ;
-(Class)seriesClass;
-(NSUUID *)seriesUUID;
@end

