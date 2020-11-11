/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface PKApplyWebServiceApplyStepInfo : NSObject {

	NSString* _conversationIdentifier;
	unsigned long long _contextType;
	NSArray* _pages;
	NSString* _coreIDVSessionID;
	NSString* _coreIDVServiceProviderName;
	NSString* _coreIDVTier;
	NSArray* _encryptionCertificates;
	NSString* _encryptionVersion;

}

@property (nonatomic,copy) NSString * conversationIdentifier;                           //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long contextType;                          //@synthesize contextType=_contextType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pages;                                    //@synthesize pages=_pages - In the implementation block
@property (nonatomic,copy,readonly) NSString * coreIDVSessionID;                        //@synthesize coreIDVSessionID=_coreIDVSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * coreIDVServiceProviderName;              //@synthesize coreIDVServiceProviderName=_coreIDVServiceProviderName - In the implementation block
@property (nonatomic,copy,readonly) NSString * coreIDVTier;                             //@synthesize coreIDVTier=_coreIDVTier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * encryptionCertificates;                   //@synthesize encryptionCertificates=_encryptionCertificates - In the implementation block
@property (nonatomic,copy,readonly) NSString * encryptionVersion;                       //@synthesize encryptionVersion=_encryptionVersion - In the implementation block
-(unsigned long long)contextType;
-(NSString *)conversationIdentifier;
-(NSArray *)pages;
-(NSString *)coreIDVServiceProviderName;
-(NSArray *)encryptionCertificates;
-(NSString *)encryptionVersion;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(void)_handleCertificates:(id)arg1 ;
-(NSString *)coreIDVSessionID;
-(id)initWithJSONObject:(id)arg1 featureApplication:(id)arg2 ;
-(NSString *)coreIDVTier;
@end
