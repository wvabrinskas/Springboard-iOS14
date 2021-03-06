/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <NearbyInteraction/NIConfiguration.h>

@class NIDiscoveryToken, NSDictionary;

@interface _NIWiFiRangingTestConfiguration : NIConfiguration {

	NIDiscoveryToken* _peerDiscoveryToken;
	NSDictionary* _parameters;

}

@property (nonatomic,copy,readonly) NIDiscoveryToken * peerDiscoveryToken;              //@synthesize peerDiscoveryToken=_peerDiscoveryToken - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;                               //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)parameters;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionInternal;
-(NIDiscoveryToken *)peerDiscoveryToken;
-(id)initWithDiscoveryToken:(id)arg1 wifiRangingParameters:(id)arg2 ;
@end

