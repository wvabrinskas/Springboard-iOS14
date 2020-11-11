/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BKSTouchDeliveryPolicy : NSObject <NSSecureCoding>

@property (nonatomic,retain) NSObject*<OS_xpc_object> assertionEndpoint; 
+(id)policyRequiringSharingOfTouchesDeliveredToChildContextId:(unsigned)arg1 withHostContextId:(unsigned)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)policyCancelingTouchesDeliveredToContextId:(unsigned)arg1 withInitialTouchTimestamp:(double)arg2 ;
+(id)policyByCombiningPolicies:(id)arg1 ;
-(unsigned long long)hash;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)policyByMappingContainedPoliciesWithBlock:(/*^block*/id)arg1 ;
-(id)reducePolicyToObjectWithBlock:(/*^block*/id)arg1 ;
-(id)policyIncludingPolicy:(id)arg1 ;
-(id)policyExcludingPolicy:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)matchSharingTouchesPolicy:(/*^block*/id)arg1 orCancelTouchesPolicy:(/*^block*/id)arg2 orCombinedPolicy:(/*^block*/id)arg3 ;
-(NSObject*<OS_xpc_object>)assertionEndpoint;
-(void)setAssertionEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
@end
