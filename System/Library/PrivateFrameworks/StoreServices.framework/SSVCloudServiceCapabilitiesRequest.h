/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSVCloudServiceCapabilitiesRequest : SSRequest <SSXPCCoding> {

	BOOL _allowsPromptingForPrivacyAcknowledgement;

}

@property (assign,nonatomic) BOOL allowsPromptingForPrivacyAcknowledgement;              //@synthesize allowsPromptingForPrivacyAcknowledgement=_allowsPromptingForPrivacyAcknowledgement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(BOOL)allowsPromptingForPrivacyAcknowledgement;
-(void)setAllowsPromptingForPrivacyAcknowledgement:(BOOL)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end
