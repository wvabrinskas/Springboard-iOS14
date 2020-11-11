/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface FBServiceClientAuthenticator : NSObject <BSDescriptionProviding> {

	NSString* _entitlement;
	unsigned long long _credentials;

}

@property (nonatomic,copy,readonly) NSString * entitlement;                 //@synthesize entitlement=_entitlement - In the implementation block
@property (nonatomic,readonly) unsigned long long credentials;              //@synthesize credentials=_credentials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_errorForCode:(int)arg1 process:(id)arg2 failedEntitlement:(id)arg3 ;
+(id)sharedForegroundUIAppClientAuthenticator;
+(BOOL)authenticateAuditToken:(SCD_Struct_FB8)arg1 forEntitlement:(id)arg2 error:(out id*)arg3 ;
+(id)sharedSystemClientAuthenticator;
+(id)sharedUIAppClientAuthenticator;
+(int)_authenticateAuditToken:(id)arg1 entitlement:(id)arg2 credentials:(unsigned long long)arg3 error:(out id*)arg4 withResult:(/*^block*/id)arg5 ;
-(id)succinctDescription;
-(BOOL)authenticateAuditToken:(id)arg1 error:(out id*)arg2 ;
-(id)init;
-(id)initWithEntitlement:(id)arg1 additionalCredentials:(unsigned long long)arg2 ;
-(BOOL)authenticateClient:(id)arg1 error:(out id*)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)entitlement;
-(id)initWithCredentials:(unsigned long long)arg1 ;
-(int)authenticateAuditToken:(SCD_Struct_FB8*)arg1 forEntitlement:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(BOOL)authenticateAuditToken:(id)arg1 ;
-(id)initWithEntitlement:(id)arg1 ;
-(unsigned long long)credentials;
-(BOOL)authenticateAuditToken:(id)arg1 forEntitlement:(id)arg2 error:(out id*)arg3 ;
-(int)authenticateClient:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(int)authenticateAuditToken:(SCD_Struct_FB8*)arg1 withResult:(/*^block*/id)arg2 ;
-(id)succinctDescriptionBuilder;
-(BOOL)authenticateClient:(id)arg1 ;
@end
