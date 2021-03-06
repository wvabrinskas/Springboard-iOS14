/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKCurrencyAmount;

@interface PKPhysicalCardPriceOption : NSObject <NSSecureCoding> {

	unsigned long long _reason;
	PKCurrencyAmount* _amount;

}

@property (assign,nonatomic) unsigned long long reason;              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * amount;              //@synthesize amount=_amount - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)reason;
-(unsigned long long)hash;
-(PKCurrencyAmount *)amount;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setReason:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(id)jsonDictionaryRepresentation;
@end

