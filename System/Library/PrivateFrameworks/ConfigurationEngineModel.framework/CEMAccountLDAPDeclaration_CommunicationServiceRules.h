/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAccountLDAPDeclaration_CommunicationServiceRulesDefaultServiceHandlers;

@interface CEMAccountLDAPDeclaration_CommunicationServiceRules : CEMPayloadBase {

	CEMAccountLDAPDeclaration_CommunicationServiceRulesDefaultServiceHandlers* _payloadDefaultServiceHandlers;

}

@property (nonatomic,copy) CEMAccountLDAPDeclaration_CommunicationServiceRulesDefaultServiceHandlers * payloadDefaultServiceHandlers;              //@synthesize payloadDefaultServiceHandlers=_payloadDefaultServiceHandlers - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithDefaultServiceHandlers:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDefaultServiceHandlers:(CEMAccountLDAPDeclaration_CommunicationServiceRulesDefaultServiceHandlers *)arg1 ;
-(CEMAccountLDAPDeclaration_CommunicationServiceRulesDefaultServiceHandlers *)payloadDefaultServiceHandlers;
@end
