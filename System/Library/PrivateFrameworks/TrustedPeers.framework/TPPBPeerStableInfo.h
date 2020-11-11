/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSData;

@interface TPPBPeerStableInfo : PBCodable <NSCopying> {

	unsigned long long _clock;
	unsigned long long _flexiblePolicyVersion;
	unsigned long long _frozenPolicyVersion;
	NSString* _deviceName;
	NSString* _flexiblePolicyHash;
	NSString* _frozenPolicyHash;
	NSString* _osVersion;
	NSMutableArray* _policySecrets;
	NSData* _recoveryEncryptionPublicKey;
	NSData* _recoverySigningPublicKey;
	NSString* _serialNumber;
	int _userControllableViewStatus;
	SCD_Struct_TP5 _has;

}

@property (assign,nonatomic) BOOL hasClock; 
@property (assign,nonatomic) unsigned long long clock;                              //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic) BOOL hasFrozenPolicyVersion; 
@property (assign,nonatomic) unsigned long long frozenPolicyVersion;                //@synthesize frozenPolicyVersion=_frozenPolicyVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasFrozenPolicyHash; 
@property (nonatomic,retain) NSString * frozenPolicyHash;                           //@synthesize frozenPolicyHash=_frozenPolicyHash - In the implementation block
@property (nonatomic,readonly) BOOL hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion;                                  //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                                 //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasRecoverySigningPublicKey; 
@property (nonatomic,retain) NSData * recoverySigningPublicKey;                     //@synthesize recoverySigningPublicKey=_recoverySigningPublicKey - In the implementation block
@property (nonatomic,readonly) BOOL hasRecoveryEncryptionPublicKey; 
@property (nonatomic,retain) NSData * recoveryEncryptionPublicKey;                  //@synthesize recoveryEncryptionPublicKey=_recoveryEncryptionPublicKey - In the implementation block
@property (nonatomic,readonly) BOOL hasSerialNumber; 
@property (nonatomic,retain) NSString * serialNumber;                               //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign,nonatomic) BOOL hasFlexiblePolicyVersion; 
@property (assign,nonatomic) unsigned long long flexiblePolicyVersion;              //@synthesize flexiblePolicyVersion=_flexiblePolicyVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasFlexiblePolicyHash; 
@property (nonatomic,retain) NSString * flexiblePolicyHash;                         //@synthesize flexiblePolicyHash=_flexiblePolicyHash - In the implementation block
@property (nonatomic,retain) NSMutableArray * policySecrets;                        //@synthesize policySecrets=_policySecrets - In the implementation block
@property (assign,nonatomic) BOOL hasUserControllableViewStatus; 
@property (assign,nonatomic) int userControllableViewStatus;                        //@synthesize userControllableViewStatus=_userControllableViewStatus - In the implementation block
+(Class)policySecretsType;
-(unsigned long long)clock;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)deviceName;
-(BOOL)hasOsVersion;
-(NSString *)serialNumber;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)osVersion;
-(unsigned long long)hash;
-(void)setSerialNumber:(NSString *)arg1 ;
-(BOOL)hasSerialNumber;
-(id)dictionaryRepresentation;
-(void)setClock:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDeviceName;
-(void)writeTo:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)recoverySigningPublicKey;
-(NSData *)recoveryEncryptionPublicKey;
-(unsigned long long)frozenPolicyVersion;
-(unsigned long long)flexiblePolicyVersion;
-(NSMutableArray *)policySecrets;
-(void)setPolicySecrets:(NSMutableArray *)arg1 ;
-(void)setRecoverySigningPublicKey:(NSData *)arg1 ;
-(void)setRecoveryEncryptionPublicKey:(NSData *)arg1 ;
-(void)setHasClock:(BOOL)arg1 ;
-(BOOL)hasClock;
-(void)setFrozenPolicyVersion:(unsigned long long)arg1 ;
-(void)setHasFrozenPolicyVersion:(BOOL)arg1 ;
-(BOOL)hasFrozenPolicyVersion;
-(BOOL)hasFrozenPolicyHash;
-(BOOL)hasRecoverySigningPublicKey;
-(BOOL)hasRecoveryEncryptionPublicKey;
-(void)setFlexiblePolicyVersion:(unsigned long long)arg1 ;
-(void)setHasFlexiblePolicyVersion:(BOOL)arg1 ;
-(BOOL)hasFlexiblePolicyVersion;
-(BOOL)hasFlexiblePolicyHash;
-(void)clearPolicySecrets;
-(void)addPolicySecrets:(id)arg1 ;
-(unsigned long long)policySecretsCount;
-(id)policySecretsAtIndex:(unsigned long long)arg1 ;
-(int)userControllableViewStatus;
-(void)setUserControllableViewStatus:(int)arg1 ;
-(void)setHasUserControllableViewStatus:(BOOL)arg1 ;
-(BOOL)hasUserControllableViewStatus;
-(id)userControllableViewStatusAsString:(int)arg1 ;
-(int)StringAsUserControllableViewStatus:(id)arg1 ;
-(NSString *)frozenPolicyHash;
-(void)setFrozenPolicyHash:(NSString *)arg1 ;
-(NSString *)flexiblePolicyHash;
-(void)setFlexiblePolicyHash:(NSString *)arg1 ;
@end
