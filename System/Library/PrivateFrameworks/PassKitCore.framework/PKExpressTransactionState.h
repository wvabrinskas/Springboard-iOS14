/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKExpressTransactionState : NSObject <NSSecureCoding> {

	BOOL _processing;
	long long _technologyType;
	NSString* _paymentApplicationIdentifier;
	NSString* _passUniqueIdentifier;
	unsigned long long _receivedEvents;

}

@property (assign,nonatomic) long long technologyType;                           //@synthesize technologyType=_technologyType - In the implementation block
@property (nonatomic,copy) NSString * paymentApplicationIdentifier;              //@synthesize paymentApplicationIdentifier=_paymentApplicationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * passUniqueIdentifier;                    //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
@property (assign,getter=isProcessing,nonatomic) BOOL processing;                //@synthesize processing=_processing - In the implementation block
@property (assign,nonatomic) unsigned long long receivedEvents;                  //@synthesize receivedEvents=_receivedEvents - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isProcessing;
-(long long)technologyType;
-(void)setTechnologyType:(long long)arg1 ;
-(NSString *)passUniqueIdentifier;
-(NSString *)paymentApplicationIdentifier;
-(void)setPaymentApplicationIdentifier:(NSString *)arg1 ;
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
-(void)setProcessing:(BOOL)arg1 ;
-(unsigned long long)receivedEvents;
-(void)setReceivedEvents:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

