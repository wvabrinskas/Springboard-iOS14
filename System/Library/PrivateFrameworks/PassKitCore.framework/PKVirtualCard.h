/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSData, PKVirtualCardCredentials;

@interface PKVirtualCard : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supportsLocalStorage;
	BOOL _requiresAuthentication;
	NSString* _identifier;
	NSString* _cardholderName;
	long long _state;
	long long _type;
	NSString* _FPANSuffix;
	NSString* _expiration;
	NSDate* _lastUpdatedDate;
	NSData* _encryptedData;
	NSData* _ephemeralPublicKey;
	NSString* _displayName;
	NSDate* _lastAutoFilledBySafari;
	PKVirtualCardCredentials* _keychainCardCredentials;

}

@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                                       //@synthesize cardholderName=_cardholderName - In the implementation block
@property (assign,nonatomic) long long state;                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * FPANSuffix;                                           //@synthesize FPANSuffix=_FPANSuffix - In the implementation block
@property (nonatomic,copy) NSString * expiration;                                           //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdatedDate;                                        //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,copy) NSData * encryptedData;                                          //@synthesize encryptedData=_encryptedData - In the implementation block
@property (nonatomic,copy) NSData * ephemeralPublicKey;                                     //@synthesize ephemeralPublicKey=_ephemeralPublicKey - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSDate * lastAutoFilledBySafari;                                 //@synthesize lastAutoFilledBySafari=_lastAutoFilledBySafari - In the implementation block
@property (assign,nonatomic) BOOL supportsLocalStorage;                                     //@synthesize supportsLocalStorage=_supportsLocalStorage - In the implementation block
@property (assign,nonatomic) BOOL requiresAuthentication;                                   //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (nonatomic,copy) PKVirtualCardCredentials * keychainCardCredentials;              //@synthesize keychainCardCredentials=_keychainCardCredentials - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)queryKeychainForVirtualCards:(/*^block*/id)arg1 ;
+(void)deleteAllLocalKeychainVirtualCards;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(NSString *)expiration;
-(void)setExpiration:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)cardholderName;
-(id)dictionaryRepresentation;
-(void)setCardholderName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setType:(long long)arg1 ;
-(long long)state;
-(void)setEphemeralPublicKey:(NSData *)arg1 ;
-(NSData *)ephemeralPublicKey;
-(NSString *)FPANSuffix;
-(void)setFPANSuffix:(NSString *)arg1 ;
-(NSData *)encryptedData;
-(NSString *)displayName;
-(BOOL)requiresAuthentication;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLastUpdatedDate:(NSDate *)arg1 ;
-(id)initWithKeychainData:(id)arg1 ;
-(long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(NSDate *)lastUpdatedDate;
-(id)mergeVirtualCardWith:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)generateHashWithPrimaryAccountNumber:(id)arg1 expirationDate:(id)arg2 ;
-(BOOL)hasSensitiveCredentials;
-(void)writeKeychainVirtualCardToKeychain;
-(id)keychainVirtualCard;
-(void)setLastAutoFilledBySafari:(NSDate *)arg1 ;
-(BOOL)isValidFromKeychain;
-(void)setEncryptedData:(NSData *)arg1 ;
-(void)deleteLocalKeychainVirtualCard;
-(id)_wrapperWithType:(unsigned long long)arg1 identifier:(id)arg2 ;
-(BOOL)isEqualToSafariEntryWithPrimaryAccountNumber:(id)arg1 expirationDate:(id)arg2 ;
-(NSDate *)lastAutoFilledBySafari;
-(void)setLastAutoFilledBySafariWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteKeychainVirtualCard;
-(BOOL)supportsLocalStorage;
-(void)setSupportsLocalStorage:(BOOL)arg1 ;
-(PKVirtualCardCredentials *)keychainCardCredentials;
-(void)setKeychainCardCredentials:(PKVirtualCardCredentials *)arg1 ;
@end
