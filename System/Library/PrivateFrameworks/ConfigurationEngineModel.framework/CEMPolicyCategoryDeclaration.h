/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSArray;

@interface CEMPolicyCategoryDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadMode;
	NSArray* _payloadCategories;
	NSArray* _payloadCategoriesVersion2;

}

@property (nonatomic,copy) NSString * payloadMode;                           //@synthesize payloadMode=_payloadMode - In the implementation block
@property (nonatomic,copy) NSArray * payloadCategories;                      //@synthesize payloadCategories=_payloadCategories - In the implementation block
@property (nonatomic,copy) NSArray * payloadCategoriesVersion2;              //@synthesize payloadCategoriesVersion2=_payloadCategoriesVersion2 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withMode:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg1 withMode:(id)arg2 withCategories:(id)arg3 withCategoriesVersion2:(id)arg4 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withMode:(id)arg2 withCategories:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)payloadCategoriesVersion2;
-(NSArray *)payloadCategories;
-(void)setPayloadCategoriesVersion2:(NSArray *)arg1 ;
-(void)setPayloadMode:(NSString *)arg1 ;
-(void)setPayloadCategories:(NSArray *)arg1 ;
-(NSString *)payloadMode;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
@end

