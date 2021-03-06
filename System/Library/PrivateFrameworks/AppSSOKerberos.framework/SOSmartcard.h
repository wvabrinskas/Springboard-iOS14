/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppSSOKerberos/AppSSOKerberos-Structs.h>
@interface SOSmartcard : NSObject
+(id)searchForCachedIdentityWithSerial:(CFDataRef)arg1 withIssuer:(CFDataRef)arg2 withTokenID:(id)arg3 ;
+(SecIdentityRef)getLocalAuthIdentityForCert:(id)arg1 withLAContext:(id)arg2 ;
+(int)getIdentityForPersistentRef:(CFDataRef)arg1 identityToReturn:(_SecIdentity*)arg2 ;
+(BOOL)pollSmartcardForIdentityWithSerialNumber:(id)arg1 withIssuer:(id)arg2 withTokenID:(id)arg3 ;
@end

