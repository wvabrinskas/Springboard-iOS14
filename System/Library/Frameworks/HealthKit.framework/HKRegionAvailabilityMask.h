/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HKRegionAvailabilityMask : NSObject {

	unsigned long long _bitmask;
	long long _group;

}

@property (nonatomic,readonly) unsigned long long bitmask;              //@synthesize bitmask=_bitmask - In the implementation block
@property (nonatomic,readonly) long long group;                         //@synthesize group=_group - In the implementation block
+(id)maskWithBitmask:(unsigned long long)arg1 group:(long long)arg2 ;
-(unsigned long long)hash;
-(unsigned long long)bitmask;
-(BOOL)isEqual:(id)arg1 ;
-(long long)group;
-(id)initWithBitMask:(unsigned long long)arg1 regionGroup:(long long)arg2 ;
-(BOOL)_isEqualToMask:(id)arg1 ;
@end
