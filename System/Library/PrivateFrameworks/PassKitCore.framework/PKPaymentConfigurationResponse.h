/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData, NSString, NSDictionary;

@interface PKPaymentConfigurationResponse : PKPaymentWebServiceResponse {

	NSData* _data;
	NSData* _signature;
	NSString* _version;
	NSDictionary* _configuration;

}

@property (nonatomic,copy,readonly) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSData * signature;                        //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(NSData *)signature;
-(NSString *)version;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)configuration;
@end
