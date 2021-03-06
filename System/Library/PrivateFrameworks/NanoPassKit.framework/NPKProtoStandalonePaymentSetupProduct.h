/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NPKProtoStandalonePaymentSetupProductImageAssetURLs, NSMutableArray;

@interface NPKProtoStandalonePaymentSetupProduct : PBCodable <NSCopying> {

	long long _flags;
	long long _hsa2Requirement;
	long long _supportedProvisioningMethods;
	NSString* _displayName;
	NPKProtoStandalonePaymentSetupProductImageAssetURLs* _imageAssetURLs;
	NSString* _partnerIdentifier;
	NSString* _partnerName;
	NSMutableArray* _paymentOptions;
	NSString* _productIdentifier;
	NSString* _readerModeMetadataJson;
	NSMutableArray* _regions;
	NSMutableArray* _requestedProvisioningMethods;
	NSMutableArray* _requiredFields;
	NSMutableArray* _supportedProtocols;
	NSString* _termsURL;
	BOOL _suppressPendingPurchases;
	SCD_Struct_NP9 _has;

}

@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                                                            //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSMutableArray * regions;                                                          //@synthesize regions=_regions - In the implementation block
@property (nonatomic,readonly) BOOL hasProductIdentifier; 
@property (nonatomic,retain) NSString * productIdentifier;                                                      //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPartnerIdentifier; 
@property (nonatomic,retain) NSString * partnerIdentifier;                                                      //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPartnerName; 
@property (nonatomic,retain) NSString * partnerName;                                                            //@synthesize partnerName=_partnerName - In the implementation block
@property (nonatomic,retain) NSMutableArray * requiredFields;                                                   //@synthesize requiredFields=_requiredFields - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedProtocols;                                               //@synthesize supportedProtocols=_supportedProtocols - In the implementation block
@property (nonatomic,readonly) BOOL hasTermsURL; 
@property (nonatomic,retain) NSString * termsURL;                                                               //@synthesize termsURL=_termsURL - In the implementation block
@property (assign,nonatomic) BOOL hasSupportedProvisioningMethods; 
@property (assign,nonatomic) long long supportedProvisioningMethods;                                            //@synthesize supportedProvisioningMethods=_supportedProvisioningMethods - In the implementation block
@property (nonatomic,readonly) BOOL hasReaderModeMetadataJson; 
@property (nonatomic,retain) NSString * readerModeMetadataJson;                                                 //@synthesize readerModeMetadataJson=_readerModeMetadataJson - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) long long flags;                                                                   //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL hasHsa2Requirement; 
@property (assign,nonatomic) long long hsa2Requirement;                                                         //@synthesize hsa2Requirement=_hsa2Requirement - In the implementation block
@property (nonatomic,readonly) BOOL hasImageAssetURLs; 
@property (nonatomic,retain) NPKProtoStandalonePaymentSetupProductImageAssetURLs * imageAssetURLs;              //@synthesize imageAssetURLs=_imageAssetURLs - In the implementation block
@property (assign,nonatomic) BOOL hasSuppressPendingPurchases; 
@property (assign,nonatomic) BOOL suppressPendingPurchases;                                                     //@synthesize suppressPendingPurchases=_suppressPendingPurchases - In the implementation block
@property (nonatomic,retain) NSMutableArray * paymentOptions;                                                   //@synthesize paymentOptions=_paymentOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestedProvisioningMethods;                                     //@synthesize requestedProvisioningMethods=_requestedProvisioningMethods - In the implementation block
+(Class)regionsType;
+(Class)requiredFieldsType;
+(Class)supportedProtocolsType;
+(Class)paymentOptionsType;
+(Class)requestedProvisioningMethodsType;
-(void)mergeFrom:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)hasFlags;
-(void)setHasFlags:(BOOL)arg1 ;
-(long long)supportedProvisioningMethods;
-(unsigned long long)hash;
-(void)clearRegions;
-(long long)flags;
-(long long)hsa2Requirement;
-(void)setSupportedProvisioningMethods:(long long)arg1 ;
-(void)setHsa2Requirement:(long long)arg1 ;
-(NPKProtoStandalonePaymentSetupProductImageAssetURLs *)imageAssetURLs;
-(unsigned long long)regionsCount;
-(id)regionsAtIndex:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)requestedProvisioningMethods;
-(void)setRequestedProvisioningMethods:(NSMutableArray *)arg1 ;
-(NSString *)termsURL;
-(void)setSupportedProtocols:(NSMutableArray *)arg1 ;
-(void)setFlags:(long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addRegions:(id)arg1 ;
-(NSMutableArray *)supportedProtocols;
-(NSString *)displayName;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)partnerName;
-(NSMutableArray *)paymentOptions;
-(BOOL)suppressPendingPurchases;
-(NSString *)partnerIdentifier;
-(BOOL)hasDisplayName;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)requiredFields;
-(void)setRequiredFields:(NSMutableArray *)arg1 ;
-(BOOL)hasPartnerIdentifier;
-(void)setTermsURL:(NSString *)arg1 ;
-(void)setRegions:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)regions;
-(NSString *)productIdentifier;
-(BOOL)hasProductIdentifier;
-(void)setImageAssetURLs:(NPKProtoStandalonePaymentSetupProductImageAssetURLs *)arg1 ;
-(BOOL)hasTermsURL;
-(void)setPartnerName:(NSString *)arg1 ;
-(void)addRequiredFields:(id)arg1 ;
-(void)addSupportedProtocols:(id)arg1 ;
-(void)setReaderModeMetadataJson:(NSString *)arg1 ;
-(void)setSuppressPendingPurchases:(BOOL)arg1 ;
-(void)addPaymentOptions:(id)arg1 ;
-(void)addRequestedProvisioningMethods:(id)arg1 ;
-(unsigned long long)requiredFieldsCount;
-(void)clearRequiredFields;
-(id)requiredFieldsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasReaderModeMetadataJson;
-(NSString *)readerModeMetadataJson;
-(unsigned long long)supportedProtocolsCount;
-(void)clearSupportedProtocols;
-(id)supportedProtocolsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)paymentOptionsCount;
-(void)clearPaymentOptions;
-(id)paymentOptionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)requestedProvisioningMethodsCount;
-(void)clearRequestedProvisioningMethods;
-(id)requestedProvisioningMethodsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPartnerName;
-(void)setHasSupportedProvisioningMethods:(BOOL)arg1 ;
-(BOOL)hasSupportedProvisioningMethods;
-(void)setHasHsa2Requirement:(BOOL)arg1 ;
-(BOOL)hasHsa2Requirement;
-(BOOL)hasImageAssetURLs;
-(void)setHasSuppressPendingPurchases:(BOOL)arg1 ;
-(BOOL)hasSuppressPendingPurchases;
-(void)setPaymentOptions:(NSMutableArray *)arg1 ;
@end

