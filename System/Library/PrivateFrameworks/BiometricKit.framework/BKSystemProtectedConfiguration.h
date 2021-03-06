/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber;

@interface BKSystemProtectedConfiguration : NSObject {

	NSNumber* _biometryEnabled;
	NSNumber* _unlockEnabled;
	NSNumber* _identificationEnabled;
	NSNumber* _loginEnabled;
	NSNumber* _unlockTokenMaxLifetime;

}

@property (nonatomic,retain) NSNumber * biometryEnabled;                     //@synthesize biometryEnabled=_biometryEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * unlockEnabled;                       //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * identificationEnabled;               //@synthesize identificationEnabled=_identificationEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * loginEnabled;                        //@synthesize loginEnabled=_loginEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * unlockTokenMaxLifetime;              //@synthesize unlockTokenMaxLifetime=_unlockTokenMaxLifetime - In the implementation block
-(NSNumber *)unlockTokenMaxLifetime;
-(void)setUnlockTokenMaxLifetime:(NSNumber *)arg1 ;
-(NSNumber *)biometryEnabled;
-(void)setBiometryEnabled:(NSNumber *)arg1 ;
-(NSNumber *)unlockEnabled;
-(NSNumber *)loginEnabled;
-(void)setLoginEnabled:(NSNumber *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(id)description;
-(void)setIdentificationEnabled:(NSNumber *)arg1 ;
-(NSNumber *)identificationEnabled;
-(void)setUnlockEnabled:(NSNumber *)arg1 ;
@end

