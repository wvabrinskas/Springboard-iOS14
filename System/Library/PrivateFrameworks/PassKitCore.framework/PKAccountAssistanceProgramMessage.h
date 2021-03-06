/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSDecimalNumber, NSString;

@interface PKAccountAssistanceProgramMessage : NSObject <NSSecureCoding, PKRecordObject> {

	NSDecimalNumber* _pastDue;
	NSDecimalNumber* _chargeOffPreventionAmount;
	NSDecimalNumber* _currentBalance;

}

@property (nonatomic,retain) NSDecimalNumber * pastDue;                                //@synthesize pastDue=_pastDue - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * chargeOffPreventionAmount;              //@synthesize chargeOffPreventionAmount=_chargeOffPreventionAmount - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * currentBalance;                         //@synthesize currentBalance=_currentBalance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordType;
+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCurrentBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)currentBalance;
-(NSDecimalNumber *)chargeOffPreventionAmount;
-(void)setChargeOffPreventionAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)pastDue;
-(void)encodeWithRecord:(id)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPastDue:(NSDecimalNumber *)arg1 ;
@end

