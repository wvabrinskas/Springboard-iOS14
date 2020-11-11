/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WiFiMACAddress;

@interface WiFiAwarePublisherDataSessionHandle : NSObject <NSSecureCoding> {

	unsigned char _datapathID;
	WiFiMACAddress* _initiatorDataAddress;

}

@property (nonatomic,readonly) unsigned char datapathID;                           //@synthesize datapathID=_datapathID - In the implementation block
@property (nonatomic,readonly) WiFiMACAddress * initiatorDataAddress;              //@synthesize initiatorDataAddress=_initiatorDataAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned char)datapathID;
-(WiFiMACAddress *)initiatorDataAddress;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDatapathID:(unsigned char)arg1 initiatorDataAddress:(id)arg2 ;
@end
