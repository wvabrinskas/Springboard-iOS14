/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Accounts/Authentication/AppleIDSSOAuthenticationPlugin.bundle/AppleIDSSOAuthenticationPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>

@class AKAppleIDAuthenticationController, NSString;

@interface AppleIDSSOAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin> {

	AKAppleIDAuthenticationController* _authController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_authController;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id*)arg4 ;
-(void)_attemptInteractiveCredentialRenewalForAccount:(id)arg1 store:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_attemptSilentCredentialRenewalForAccount:(id)arg1 store:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_silentAuthContextForAccount:(id)arg1 rawPassword:(id)arg2 store:(id)arg3 options:(id)arg4 ;
-(id)_standardAuthContextForAccount:(id)arg1 store:(id)arg2 options:(id)arg3 ;
@end
