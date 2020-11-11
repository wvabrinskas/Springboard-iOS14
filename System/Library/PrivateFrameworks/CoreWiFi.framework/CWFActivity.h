/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface CWFActivity : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSString* _reason;
	long long _type;
	unsigned long long _timeout;

}

@property (nonatomic,copy) NSUUID * UUID;                             //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) NSString * reason;                         //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long timeout;              //@synthesize timeout=_timeout - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)activityWithType:(long long)arg1 reason:(id)arg2 ;
-(NSString *)reason;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTimeout:(unsigned long long)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(unsigned long long)timeout;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToActivity:(id)arg1 ;
@end
