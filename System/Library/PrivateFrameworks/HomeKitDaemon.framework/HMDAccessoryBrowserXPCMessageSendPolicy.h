/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDXPCMessageSendPolicy.h>

@interface HMDAccessoryBrowserXPCMessageSendPolicy : HMDXPCMessageSendPolicy {

	unsigned long long _requiredEntitlements;

}

@property (readonly) unsigned long long requiredEntitlements;              //@synthesize requiredEntitlements=_requiredEntitlements - In the implementation block
-(unsigned long long)requiredEntitlements;
-(id)init;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)canSendWithPolicyParameters:(id)arg1 ;
-(id)initWithRequiredEntitlements:(unsigned long long)arg1 ;
@end
