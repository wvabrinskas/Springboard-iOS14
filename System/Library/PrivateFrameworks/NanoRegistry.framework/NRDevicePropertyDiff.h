/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRDiffBase.h>

@protocol NSObjectNSCopying;
@class NRPBDevicePropertyDiff;

@interface NRDevicePropertyDiff : NRDiffBase {

	id<NSObject><NSCopying> _value;

}

@property (nonatomic,readonly) id<NSObject><NSCopying> value;                  //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NRPBDevicePropertyDiff * protobuf; 
+(BOOL)supportsSecureCoding;
+(id)enclosedClassTypes;
+(id)unpackPropertyValue:(id)arg1 ;
+(id)packPropertyValue:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithValue:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NRPBDevicePropertyDiff *)protobuf;
-(id<NSObject><NSCopying>)value;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
