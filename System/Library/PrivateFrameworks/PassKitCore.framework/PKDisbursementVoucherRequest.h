/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKDisbursementVoucherRequest : PKPeerPaymentWebServiceRequest {

	unsigned long long _disbursementSource;
	unsigned long long _disbursementTarget;
	NSString* _teamIdentifier;
	NSString* _bundleIdentifier;

}

@property (assign,nonatomic) unsigned long long disbursementSource;              //@synthesize disbursementSource=_disbursementSource - In the implementation block
@property (assign,nonatomic) unsigned long long disbursementTarget;              //@synthesize disbursementTarget=_disbursementTarget - In the implementation block
@property (nonatomic,copy) NSString * teamIdentifier;                            //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(unsigned long long)disbursementSource;
-(unsigned long long)disbursementTarget;
-(NSString *)teamIdentifier;
-(id)initWithDisbursementSource:(unsigned long long)arg1 disbursementTarget:(unsigned long long)arg2 teamIdentifier:(id)arg3 bundleIdentifier:(id)arg4 ;
-(void)setDisbursementSource:(unsigned long long)arg1 ;
-(void)setDisbursementTarget:(unsigned long long)arg1 ;
@end

