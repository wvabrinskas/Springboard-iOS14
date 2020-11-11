/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSDictionary, BKDevice;

@interface BiometryHelper : NSObject {

	NSMutableDictionary* _databaseHashesByUserId;
	BOOL _biometryRunning;
	NSDictionary* _identities;
	BKDevice* _device;
	long long _biometryType;

}

@property (getter=isBiometryRunning,nonatomic,readonly) BOOL biometryRunning;              //@synthesize biometryRunning=_biometryRunning - In the implementation block
@property (nonatomic,readonly) NSDictionary * identities;                                  //@synthesize identities=_identities - In the implementation block
@property (nonatomic,readonly) BKDevice * device;                                          //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) long long biometryType;                                     //@synthesize biometryType=_biometryType - In the implementation block
+(id)sharedInstance;
+(id)_enumerateAvailableDevices;
+(id)pearlInstance;
+(id)touchIdInstance;
+(BOOL)_loadBiometricKit;
+(Class)biometricKitClassFromString:(id)arg1 ;
-(BOOL)isAnyUserEnrolledWithError:(id*)arg1 ;
-(BOOL)isBiometryOnForUnlock:(id)arg1 ;
-(id)catacombUUID:(id)arg1 ;
-(BKDevice *)device;
-(id)_lockoutErrorForExtendedState:(long long)arg1 userId:(id)arg2 ;
-(void)_refreshIdentities;
-(BOOL)userPresent:(BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)isBiometryRunning;
-(BOOL)isEnrolled:(id)arg1 error:(id*)arg2 ;
-(void)resetBiometry;
-(BOOL)_isEnrolled:(id)arg1 error:(id*)arg2 ;
-(id)_identitiesForUser:(id)arg1 ;
-(BOOL)isBiometryOnForStockholm:(id)arg1 ;
-(id)_biolockoutStateForUser:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(BOOL)deviceHasBiometryWithError:(id*)arg1 ;
-(id)lockoutErrorForState:(long long)arg1 userId:(id)arg2 ;
-(BOOL)_protectedConfigrationBoolForUser:(id)arg1 queryBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)identities;
-(BOOL)isIdentificationEnabled:(id)arg1 ;
-(void)_clearHashes;
-(unsigned)_uidFromUserId:(id)arg1 ;
-(id)biometryDatabaseHashForUser:(id)arg1 error:(id*)arg2 ;
-(BOOL)isLockedOutForUser:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(long long)biometryType;
-(id)initWithBiometryType:(long long)arg1 ;
-(void)dealloc;
@end
