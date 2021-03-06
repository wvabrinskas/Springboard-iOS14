/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NearField/NFTrustObject.h>

@class NSNumber, NFTrustKey, NSData, NSString;

@interface NFTrustSignResponse : NFTrustObject {

	NSNumber* _counterValue;
	NFTrustKey* _key;
	NSData* _trustObjectInternalRawNSData;

}

@property (nonatomic,retain) NSData * trustObjectInternalRawNSData;              //@synthesize trustObjectInternalRawNSData=_trustObjectInternalRawNSData - In the implementation block
@property (nonatomic,retain) NSNumber * counterValue;                            //@synthesize counterValue=_counterValue - In the implementation block
@property (nonatomic,readonly) NSString * rawData; 
@property (nonatomic,retain) NFTrustKey * key;                                   //@synthesize key=_key - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)signResponseWithRawData:(id)arg1 counterValueData:(id)arg2 ;
-(NSString *)rawData;
-(NFTrustKey *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setKey:(NFTrustKey *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)counterValue;
-(void)setCounterValue:(NSNumber *)arg1 ;
-(NSData *)trustObjectInternalRawNSData;
-(void)setTrustObjectInternalRawNSData:(NSData *)arg1 ;
@end

