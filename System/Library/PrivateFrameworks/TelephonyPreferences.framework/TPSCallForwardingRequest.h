/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <TelephonyPreferences/TPSCallClassRequest.h>

@interface TPSCallForwardingRequest : TPSCallClassRequest {

	int _reason;

}

@property (nonatomic,readonly) int reason;              //@synthesize reason=_reason - In the implementation block
+(id)unarchivedObjectClasses;
-(int)reason;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2 ;
-(id)initWithSubscriptionContext:(id)arg1 reason:(int)arg2 ;
@end
