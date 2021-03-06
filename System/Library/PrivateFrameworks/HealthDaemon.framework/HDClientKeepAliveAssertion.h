/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDAssertion.h>

@class NSDate, NSString, NSDictionary;

@interface HDClientKeepAliveAssertion : HDAssertion {

	long long _launchCount;
	NSDate* _lastLaunchAttempt;
	NSString* _clientBundleIdentifier;
	NSDictionary* _payloadOptions;

}

@property (assign,nonatomic) long long launchCount;                                 //@synthesize launchCount=_launchCount - In the implementation block
@property (nonatomic,copy) NSDate * lastLaunchAttempt;                              //@synthesize lastLaunchAttempt=_lastLaunchAttempt - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientBundleIdentifier;              //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * payloadOptions;                  //@synthesize payloadOptions=_payloadOptions - In the implementation block
-(NSString *)clientBundleIdentifier;
-(NSDictionary *)payloadOptions;
-(id)initWithOwnerIdentifier:(id)arg1 clientBundleIdentifier:(id)arg2 payloadOptions:(id)arg3 ;
-(NSDate *)lastLaunchAttempt;
-(long long)launchCount;
-(void)setLastLaunchAttempt:(NSDate *)arg1 ;
-(void)setLaunchCount:(long long)arg1 ;
@end

