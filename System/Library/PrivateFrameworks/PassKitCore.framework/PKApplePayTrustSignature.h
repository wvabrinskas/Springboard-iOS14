/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKApplePayTrustSignatureRequest, NSData;

@interface PKApplePayTrustSignature : NSObject <NSSecureCoding> {

	PKApplePayTrustSignatureRequest* _signatureRequest;
	NSData* _signatureData;
	NSData* _paymentData;

}

@property (nonatomic,readonly) PKApplePayTrustSignatureRequest * signatureRequest;              //@synthesize signatureRequest=_signatureRequest - In the implementation block
@property (nonatomic,copy,readonly) NSData * signatureData;                                     //@synthesize signatureData=_signatureData - In the implementation block
@property (nonatomic,copy,readonly) NSData * paymentData;                                       //@synthesize paymentData=_paymentData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSignatureRequest:(id)arg1 signature:(id)arg2 ;
-(PKApplePayTrustSignatureRequest *)signatureRequest;
-(NSData *)paymentData;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)signatureData;
@end
