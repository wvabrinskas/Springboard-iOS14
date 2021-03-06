/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSData, NSArray;

@interface NFHardwareSecureElementInfo : NSObject <NSSecureCoding> {

	BOOL _restrictedMode;
	BOOL _restrictedPerformanceMode;
	BOOL _osUpdateMode;
	BOOL _personalisable;
	BOOL _jcopTooOld;
	NSString* _identifier;
	unsigned long long _OSVersion;
	unsigned long long _fullOSVersion;
	unsigned long long _firmwareVersion;
	NSNumber* _compiledFWVersion;
	unsigned long long _hardwareVersion;
	unsigned long long _deviceType;
	NSNumber* _sequenceCounter;
	NSNumber* _referenceCounter;
	unsigned long long _osid;
	NSNumber* _otherOSValid;
	unsigned long long _OSMode;
	unsigned long long _signingKeyType;
	unsigned long long _migrationState;
	unsigned long long _migrationContext;
	NSNumber* _migrationPackages;
	NSNumber* _migrationInstances;
	NSString* _platformIdentifier;
	NSString* _serialNumber;
	NSString* _rsaCertificate;
	NSString* _ecdsaCertificate;
	NSString* _eckaCertificate;
	unsigned long long _appletMap;
	NSNumber* _persistentConfigID;
	NSString* _rootKeyID;
	NSString* _osKeyID;
	NSString* _firmwareKeyID;
	NSString* _nonce;
	NSData* _manifestQuery;
	NSArray* _bootHistory;
	unsigned long long _supportedTechnologies;
	unsigned long long _seType;
	NSString* _atrString;

}

@property (nonatomic,retain,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long OSVersion;                          //@synthesize OSVersion=_OSVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long fullOSVersion;                      //@synthesize fullOSVersion=_fullOSVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long firmwareVersion;                    //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * compiledFWVersion;                   //@synthesize compiledFWVersion=_compiledFWVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long hardwareVersion;                    //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceType;                         //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * sequenceCounter;                     //@synthesize sequenceCounter=_sequenceCounter - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * referenceCounter;                    //@synthesize referenceCounter=_referenceCounter - In the implementation block
@property (nonatomic,readonly) unsigned long long osid;                               //@synthesize osid=_osid - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * otherOSValid;                        //@synthesize otherOSValid=_otherOSValid - In the implementation block
@property (nonatomic,readonly) BOOL restrictedMode;                                   //@synthesize restrictedMode=_restrictedMode - In the implementation block
@property (nonatomic,readonly) BOOL restrictedPerformanceMode;                        //@synthesize restrictedPerformanceMode=_restrictedPerformanceMode - In the implementation block
@property (nonatomic,readonly) BOOL osUpdateMode;                                     //@synthesize osUpdateMode=_osUpdateMode - In the implementation block
@property (nonatomic,readonly) unsigned long long OSMode;                             //@synthesize OSMode=_OSMode - In the implementation block
@property (nonatomic,readonly) unsigned long long signingKeyType;                     //@synthesize signingKeyType=_signingKeyType - In the implementation block
@property (nonatomic,readonly) unsigned long long migrationState;                     //@synthesize migrationState=_migrationState - In the implementation block
@property (nonatomic,readonly) unsigned long long migrationContext;                   //@synthesize migrationContext=_migrationContext - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * migrationPackages;                   //@synthesize migrationPackages=_migrationPackages - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * migrationInstances;                  //@synthesize migrationInstances=_migrationInstances - In the implementation block
@property (nonatomic,retain,readonly) NSString * platformIdentifier;                  //@synthesize platformIdentifier=_platformIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSString * serialNumber;                        //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain,readonly) NSString * rsaCertificate;                      //@synthesize rsaCertificate=_rsaCertificate - In the implementation block
@property (nonatomic,retain,readonly) NSString * ecdsaCertificate;                    //@synthesize ecdsaCertificate=_ecdsaCertificate - In the implementation block
@property (nonatomic,retain,readonly) NSString * eckaCertificate;                     //@synthesize eckaCertificate=_eckaCertificate - In the implementation block
@property (nonatomic,readonly) unsigned long long appletMap;                          //@synthesize appletMap=_appletMap - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * persistentConfigID;                  //@synthesize persistentConfigID=_persistentConfigID - In the implementation block
@property (nonatomic,retain,readonly) NSString * rootKeyID;                           //@synthesize rootKeyID=_rootKeyID - In the implementation block
@property (nonatomic,retain,readonly) NSString * osKeyID;                             //@synthesize osKeyID=_osKeyID - In the implementation block
@property (nonatomic,retain,readonly) NSString * firmwareKeyID;                       //@synthesize firmwareKeyID=_firmwareKeyID - In the implementation block
@property (nonatomic,retain,readonly) NSString * nonce;                               //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,retain,readonly) NSData * manifestQuery;                         //@synthesize manifestQuery=_manifestQuery - In the implementation block
@property (nonatomic,readonly) BOOL personalisable;                                   //@synthesize personalisable=_personalisable - In the implementation block
@property (nonatomic,retain,readonly) NSArray * bootHistory;                          //@synthesize bootHistory=_bootHistory - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedTechnologies;              //@synthesize supportedTechnologies=_supportedTechnologies - In the implementation block
@property (nonatomic,readonly) unsigned long long seType;                             //@synthesize seType=_seType - In the implementation block
@property (nonatomic,retain,readonly) NSString * atrString;                           //@synthesize atrString=_atrString - In the implementation block
@property (nonatomic,readonly) BOOL jcopTooOld;                                       //@synthesize jcopTooOld=_jcopTooOld - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_setIsInRestrictedMode:(BOOL)arg1 ;
-(id)asDictionary;
-(unsigned long long)deviceType;
-(NSString *)serialNumber;
-(unsigned long long)migrationState;
-(unsigned long long)OSMode;
-(NSNumber *)otherOSValid;
-(NSArray *)bootHistory;
-(NSString *)osKeyID;
-(BOOL)osUpdateMode;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)compiledFWVersion;
-(unsigned long long)firmwareVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)restrictedPerformanceMode;
-(BOOL)jcopTooOld;
-(NSString *)eckaCertificate;
-(unsigned long long)signingKeyType;
-(NSString *)atrString;
-(unsigned long long)migrationContext;
-(BOOL)personalisable;
-(unsigned long long)OSVersion;
-(unsigned long long)supportedTechnologies;
-(BOOL)restrictedMode;
-(void)setBootHistory:(NSArray *)arg1 ;
-(NSString *)rootKeyID;
-(unsigned long long)fullOSVersion;
-(unsigned long long)hardwareVersion;
-(NSNumber *)migrationInstances;
-(NSData *)manifestQuery;
-(NSString *)firmwareKeyID;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)nonce;
-(NSNumber *)sequenceCounter;
-(NSString *)rsaCertificate;
-(NSNumber *)referenceCounter;
-(NSString *)platformIdentifier;
-(unsigned long long)seType;
-(NSNumber *)persistentConfigID;
-(unsigned long long)osid;
-(NSString *)ecdsaCertificate;
-(NSNumber *)migrationPackages;
-(void)_setIsInRestrictedPerformanceMode:(BOOL)arg1 ;
-(unsigned long long)appletMap;
@end

