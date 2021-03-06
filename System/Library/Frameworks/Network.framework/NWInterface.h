/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_nw_interface;
@class NSObject, NSString;

@interface NWInterface : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying> {

	NSObject*<OS_nw_interface> _internalInterface;

}

@property (nonatomic,readonly) BOOL supportsMulticast; 
@property (nonatomic,readonly) BOOL hasDNS; 
@property (nonatomic,readonly) BOOL hasNAT64; 
@property (getter=isIPv4Routable,nonatomic,readonly) BOOL ipv4Routable; 
@property (getter=isIPv6Routable,nonatomic,readonly) BOOL ipv6Routable; 
@property (retain) NSObject*<OS_nw_interface> internalInterface;                     //@synthesize internalInterface=_internalInterface - In the implementation block
@property (nonatomic,readonly) unsigned long long generation; 
@property (nonatomic,readonly) long long mtu; 
@property (nonatomic,readonly) NWInterface * delegateInterface; 
@property (nonatomic,readonly) NSString * typeString; 
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (nonatomic,readonly) NSString * interfaceName; 
@property (nonatomic,readonly) unsigned long long interfaceIndex; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long subtype; 
@property (getter=isExpensive,nonatomic,readonly) BOOL expensive; 
@property (getter=isConstrained,nonatomic,readonly) BOOL constrained; 
+(id)interfaceWithProtocolBufferData:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)descriptionForType:(long long)arg1 ;
+(id)descriptionForSubtype:(long long)arg1 ;
-(long long)mtu;
-(long long)subtype;
-(unsigned long long)generation;
-(unsigned long long)interfaceIndex;
-(NWInterface *)delegateInterface;
-(unsigned long long)hash;
-(NSString *)typeString;
-(BOOL)isExpensive;
-(NSString *)privateDescription;
-(BOOL)hasDNS;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithInterface:(id)arg1 ;
-(BOOL)isDeepEqual:(id)arg1 ;
-(id)initWithInterfaceName:(id)arg1 ;
-(BOOL)hasNAT64;
-(BOOL)isIPv6Routable;
-(id)createProtocolBufferObject;
-(BOOL)isIPv4Routable;
-(id)description;
-(id)copyLocalAddressForDefaultIPv6;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isShallowEqual:(id)arg1 ;
-(id)initWithInterfaceIndex:(unsigned long long)arg1 interfaceName:(id)arg2 ;
-(id)copyLocalAddressForDefaultIPv4;
-(long long)type;
-(id)ipv4Netmask;
-(NSString *)interfaceName;
-(id)initWithInterfaceIndex:(unsigned long long)arg1 ;
-(BOOL)supportsMulticast;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_nw_interface>)internalInterface;
-(BOOL)isConstrained;
-(id)ipv4Broadcast;
-(void)setInternalInterface:(NSObject*<OS_nw_interface>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyLocalAddressForRemoteAddress:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
@end

