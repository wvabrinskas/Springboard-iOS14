/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NGMFullPrekey, NGMPublicDeviceIdentity;

@interface NGMKeyRollingTicket : NSObject {

	NGMFullPrekey* _prekey;
	NGMPublicDeviceIdentity* _registrationInfo;

}

@property (nonatomic,readonly) NGMFullPrekey * prekey;                                  //@synthesize prekey=_prekey - In the implementation block
@property (nonatomic,readonly) NGMPublicDeviceIdentity * registrationInfo;              //@synthesize registrationInfo=_registrationInfo - In the implementation block
-(NGMFullPrekey *)prekey;
-(id)prekeyData;
-(id)publicDeviceIdentity;
-(id)identityData;
-(NGMPublicDeviceIdentity *)registrationInfo;
-(id)initTicketWithSigningKey:(id)arg1 error:(id*)arg2 ;
@end

