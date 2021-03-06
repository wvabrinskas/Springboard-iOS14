/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface SOSiteCode : NSObject <NSSecureCoding> {

	NSString* _code;
	NSDate* _timeStamp;
	NSString* _networkFingerprint;

}

@property (nonatomic,readonly) NSString * code;                            //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) NSDate * timeStamp;                         //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,readonly) NSString * networkFingerprint;              //@synthesize networkFingerprint=_networkFingerprint - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)code;
-(NSDate *)timeStamp;
-(double)age;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)networkFingerprint;
-(id)initWithSiteCode:(id)arg1 forNetworkFingerprint:(id)arg2 ;
@end

