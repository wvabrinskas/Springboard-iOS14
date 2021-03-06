/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentNotificationActionRequest : PKPaymentWebServiceRequest {

	NSString* _requestID;
	NSString* _action;

}

@property (nonatomic,copy) NSString * requestID;              //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSString * action;                 //@synthesize action=_action - In the implementation block
-(void)setRequestID:(NSString *)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)requestID;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(NSString *)action;
@end

