/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKContainer, NSString;

@interface MSPCloudKitAccountAccess : NSObject {

	CKContainer* _container;
	CKContainer* _containerWithZoneWidePCS;
	CKContainer* _secureContainer;
	CKContainer* _secureContainerWithZoneWidePCS;
	BOOL _useSecureContainer;
	BOOL _disableDeviceToDeviceEncryption;
	NSString* _accountIdentifier;

}

@property (assign,nonatomic) BOOL useSecureContainer;                           //@synthesize useSecureContainer=_useSecureContainer - In the implementation block
@property (nonatomic,retain) NSString * accountIdentifier;                      //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) BOOL disableDeviceToDeviceEncryption;              //@synthesize disableDeviceToDeviceEncryption=_disableDeviceToDeviceEncryption - In the implementation block
+(void)fetchDeviceToDeviceEncryptionStatus:(/*^block*/id)arg1 ;
+(long long)containerEnvironmentForAccessEnvironment:(long long)arg1 ;
+(id)sharedAccess;
+(BOOL)useLongLivedOperations;
+(BOOL)hasCloudKitEntitlement;
+(long long)defaultEnvironment;
-(void)fetchDeviceToDeviceEncryptionStatus:(/*^block*/id)arg1 ;
-(id)initWithEnvironment:(long long)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setUseSecureContainer:(BOOL)arg1 ;
-(void)setDisableDeviceToDeviceEncryption:(BOOL)arg1 ;
-(id)description;
-(void)fetchAccountStatus:(/*^block*/id)arg1 ;
-(void)fetchAccountIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(id)containerForAccount;
-(BOOL)disableDeviceToDeviceEncryption;
-(id)initWithEnvironment:(long long)arg1 createContainers:(BOOL)arg2 ;
-(id)containerWithZoneWidePCS:(BOOL)arg1 ;
-(BOOL)useSecureContainer;
@end

