/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSArray;

@interface IDSRegisteredDevice : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _hardwareVersion;
	NSData* _pushToken;
	NSArray* _URIs;
	NSData* _publicDeviceIdentity;

}

@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * hardwareVersion;                 //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (nonatomic,readonly) NSData * pushToken;                         //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) NSArray * URIs;                             //@synthesize URIs=_URIs - In the implementation block
@property (nonatomic,readonly) NSData * publicDeviceIdentity;              //@synthesize publicDeviceIdentity=_publicDeviceIdentity - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)registeredDeviceFromDependentRegistrationDictionary:(id)arg1 ;
-(NSArray *)URIs;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithName:(id)arg1 hardwareVersion:(id)arg2 pushToken:(id)arg3 URIs:(id)arg4 publicDeviceIdentity:(id)arg5 ;
-(NSData *)publicDeviceIdentity;
-(BOOL)isEqualToRegisteredDevice:(id)arg1 ;
-(NSString *)hardwareVersion;
-(NSData *)pushToken;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

