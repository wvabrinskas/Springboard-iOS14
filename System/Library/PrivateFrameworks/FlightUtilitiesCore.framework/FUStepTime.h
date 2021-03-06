/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FlightUtilitiesCore.framework/FlightUtilitiesCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FlightUtilitiesCore/FlightUtilitiesCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface FUStepTime : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _type;
	NSDate* _date;

}

@property (assign) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (retain) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (readonly) double timeIntervalSinceNow; 
+(BOOL)supportsSecureCoding;
-(void)setDate:(NSDate *)arg1 ;
-(double)timeIntervalSinceNow;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(NSDate *)date;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(unsigned long long)arg1 date:(id)arg2 ;
@end

