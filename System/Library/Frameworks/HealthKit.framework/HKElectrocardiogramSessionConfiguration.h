/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface HKElectrocardiogramSessionConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _wornOnRightArm;
	NSUUID* _sessionUUID;
	long long _mode;
	double _maximumDuration;

}

@property (nonatomic,copy) NSUUID * sessionUUID;                  //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) long long mode;                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double maximumDuration;              //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (assign,nonatomic) BOOL wornOnRightArm;                 //@synthesize wornOnRightArm=_wornOnRightArm - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sessionConfigurationWithUUID:(id)arg1 mode:(long long)arg2 maximumDuration:(double)arg3 wornOnRightArm:(BOOL)arg4 ;
-(NSUUID *)sessionUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)mode;
-(BOOL)wornOnRightArm;
-(void)setWornOnRightArm:(BOOL)arg1 ;
-(void)setMode:(long long)arg1 ;
-(void)setMaximumDuration:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)maximumDuration;
-(void)setSessionUUID:(NSUUID *)arg1 ;
@end

