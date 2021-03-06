/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Email/EMAccount.h>
#import <libobjc.A.dylib/EMDeliveryAccountBuilder.h>

@class NSString;

@interface EMDeliveryAccount : EMAccount <EMDeliveryAccountBuilder> {

	BOOL _primaryiCloudAccount;
	NSString* _name;
	NSString* _username;
	NSString* _hostname;
	unsigned long long _maximumMessageBytes;

}

@property (assign,nonatomic) unsigned long long maximumMessageBytes;                               //@synthesize maximumMessageBytes=_maximumMessageBytes - In the implementation block
@property (nonatomic,copy) NSString * username;                                                    //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * hostname;                                                    //@synthesize hostname=_hostname - In the implementation block
@property (assign,getter=isPrimaryiCloudAccount,nonatomic) BOOL primaryiCloudAccount;              //@synthesize primaryiCloudAccount=_primaryiCloudAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)username;
-(void)encodeWithCoder:(id)arg1 ;
-(id)name;
-(void)setPrimaryiCloudAccount:(BOOL)arg1 ;
-(void)_commonInitName:(id)arg1 hostname:(id)arg2 builder:(/*^block*/id)arg3 ;
-(id)initWithObjectID:(id)arg1 name:(id)arg2 hostname:(id)arg3 builder:(/*^block*/id)arg4 ;
-(NSString *)hostname;
-(void)setHostname:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(unsigned long long)maximumMessageBytes;
-(void)setMaximumMessageBytes:(unsigned long long)arg1 ;
-(BOOL)isPrimaryiCloudAccount;
-(id)initWithCoder:(id)arg1 ;
@end

