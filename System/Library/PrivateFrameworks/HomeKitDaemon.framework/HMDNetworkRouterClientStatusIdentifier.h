/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVUnsignedNumberValue, NSData, HMDNetworkRouterIPAddress, NSString;

@interface HMDNetworkRouterClientStatusIdentifier : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVUnsignedNumberValue* _clientIdentifier;
	NSData* _macAddress;
	HMDNetworkRouterIPAddress* _ipAddress;

}

@property (nonatomic,retain) HAPTLVUnsignedNumberValue * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSData * macAddress;                                       //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddress * ipAddress;                     //@synthesize ipAddress=_ipAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)setClientIdentifier:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)clientIdentifier;
-(HMDNetworkRouterIPAddress *)ipAddress;
-(void)setIpAddress:(HMDNetworkRouterIPAddress *)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)macAddress;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setMacAddress:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 macAddress:(id)arg2 ipAddress:(id)arg3 ;
@end

