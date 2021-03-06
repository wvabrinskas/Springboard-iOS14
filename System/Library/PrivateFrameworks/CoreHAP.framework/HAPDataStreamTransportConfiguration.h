/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPDataStreamTransportProtocolWrapper, HAPTLVUnsignedNumberValue, NSString;

@interface HAPDataStreamTransportConfiguration : NSObject <NSCopying, HAPTLVProtocol> {

	HAPDataStreamTransportProtocolWrapper* _transport;
	HAPTLVUnsignedNumberValue* _maximumControllerTransportMTU;

}

@property (nonatomic,retain) HAPDataStreamTransportProtocolWrapper * transport;                      //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * maximumControllerTransportMTU;              //@synthesize maximumControllerTransportMTU=_maximumControllerTransportMTU - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)setTransport:(HAPDataStreamTransportProtocolWrapper *)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(HAPDataStreamTransportProtocolWrapper *)transport;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(HAPTLVUnsignedNumberValue *)maximumControllerTransportMTU;
-(void)setMaximumControllerTransportMTU:(HAPTLVUnsignedNumberValue *)arg1 ;
-(id)initWithTransport:(id)arg1 maximumControllerTransportMTU:(id)arg2 ;
@end

