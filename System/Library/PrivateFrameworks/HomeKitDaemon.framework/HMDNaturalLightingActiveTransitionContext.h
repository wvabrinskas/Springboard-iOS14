/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSNumber;

@interface HMDNaturalLightingActiveTransitionContext : HMFObject <NSCopying> {

	NSDate* _startDate;
	unsigned long long _millisecondsElapsedSinceStartDate;
	NSNumber* _transitionChecksum;

}

@property (copy,readonly) NSDate * startDate;                                           //@synthesize startDate=_startDate - In the implementation block
@property (readonly) unsigned long long millisecondsElapsedSinceStartDate;              //@synthesize millisecondsElapsedSinceStartDate=_millisecondsElapsedSinceStartDate - In the implementation block
@property (copy,readonly) NSNumber * transitionChecksum;                                //@synthesize transitionChecksum=_transitionChecksum - In the implementation block
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(NSDate *)startDate;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)millisecondsElapsedSinceStartDate;
-(NSNumber *)transitionChecksum;
-(id)initWithStartDate:(id)arg1 millisecondsElapsedSinceStartDate:(unsigned long long)arg2 transitionChecksum:(id)arg3 ;
@end

