/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLGpsPosition : NSObject <NSSecureCoding> {

	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _expiry;
	SCD_Struct_CL29 _gpsLocation;
	SCD_Struct_CL31 _gpsLocationPrivate;

}

@property (nonatomic,readonly) time_point<std::__1::chrono::steady_clock expiry;              //@synthesize expiry=_expiry - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CL32 gpsLocation;                                   //@synthesize gpsLocation=_gpsLocation - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CL33 gpsLocationPrivate;                            //@synthesize gpsLocationPrivate=_gpsLocationPrivate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isStaleFix:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 ;
-(id)initWithLocation:(const SCD_Struct_CL32*)arg1 andPrivateLocation:(const SCD_Struct_CL33*)arg2 ;
-(id)description;
-(SCD_Struct_CL33)gpsLocationPrivate;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CL32)gpsLocation;
-(time_point<std::__1::chrono::steady_clock)expiry;
@end
