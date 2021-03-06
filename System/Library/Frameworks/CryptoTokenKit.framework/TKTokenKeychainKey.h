/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
#import <CryptoTokenKit/TKTokenKeychainItem.h>

@class NSString, NSData;

@interface TKTokenKeychainKey : TKTokenKeychainItem {

	BOOL _canDecrypt;
	BOOL _canSign;
	BOOL _canPerformKeyExchange;
	BOOL _suitableForLogin;
	NSString* _keyType;
	NSData* _applicationTag;
	long long _keySizeInBits;
	NSData* _publicKeyData;
	NSData* _publicKeyHash;

}

@property (readonly) unsigned long long keyUsage; 
@property (copy) NSString * keyType;                                      //@synthesize keyType=_keyType - In the implementation block
@property (copy) NSData * applicationTag;                                 //@synthesize applicationTag=_applicationTag - In the implementation block
@property (assign) long long keySizeInBits;                               //@synthesize keySizeInBits=_keySizeInBits - In the implementation block
@property (copy) NSData * publicKeyData;                                  //@synthesize publicKeyData=_publicKeyData - In the implementation block
@property (copy) NSData * publicKeyHash;                                  //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (assign) BOOL canDecrypt;                                       //@synthesize canDecrypt=_canDecrypt - In the implementation block
@property (assign) BOOL canSign;                                          //@synthesize canSign=_canSign - In the implementation block
@property (assign) BOOL canPerformKeyExchange;                            //@synthesize canPerformKeyExchange=_canPerformKeyExchange - In the implementation block
@property (getter=isSuitableForLogin) BOOL suitableForLogin;              //@synthesize suitableForLogin=_suitableForLogin - In the implementation block
-(id)keychainAttributes;
-(NSString *)keyType;
-(NSData *)publicKeyData;
-(NSData *)publicKeyHash;
-(id)encodedObjectID;
-(id)initWithItemInfo:(id)arg1 ;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(unsigned long long)keyUsage;
-(BOOL)canSign;
-(id)initWithCertificate:(SecCertificateRef)arg1 objectID:(id)arg2 ;
-(void)createConstraints:(unsigned char)arg1 ;
-(BOOL)canDecrypt;
-(BOOL)canPerformKeyExchange;
-(long long)keySizeInBits;
-(NSData *)applicationTag;
-(BOOL)isSuitableForLogin;
-(BOOL)satisfiesKeyUsage:(unsigned long long)arg1 ;
-(void)setKeyType:(NSString *)arg1 ;
-(void)setApplicationTag:(NSData *)arg1 ;
-(void)setKeySizeInBits:(long long)arg1 ;
-(void)setPublicKeyData:(NSData *)arg1 ;
-(void)setCanDecrypt:(BOOL)arg1 ;
-(void)setCanSign:(BOOL)arg1 ;
-(void)setCanPerformKeyExchange:(BOOL)arg1 ;
-(void)setSuitableForLogin:(BOOL)arg1 ;
@end

