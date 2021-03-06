/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppSSOCore/AppSSOCore-Structs.h>
@interface SOUtils : NSObject
+(id)mapArray:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)signatureSetToString:(long long)arg1 ;
+(BOOL)isInternalBuild;
+(id)currentProcessContainerPath;
+(void)unmapFile:(int)arg1 data:(id)arg2 ;
+(id)currentProcessName;
+(BOOL)checkEntitlementFromXPC:(id)arg1 ;
+(BOOL)auditTokenFromData:(id)arg1 auditToken:(SCD_Struct_SO0*)arg2 ;
+(int)pidFromAuditToken:(SCD_Struct_SO0)arg1 ;
+(id)bundleIdentifierFromAuditToken:(SCD_Struct_SO0)arg1 ;
+(int)mmapFile:(id)arg1 mode:(long long)arg2 mmapData:(id*)arg3 ;
+(id)teamIdentifierFromAuditToken:(SCD_Struct_SO0)arg1 ;
+(BOOL)currentProcessInSystemSession;
+(BOOL)currentProcessIsSandboxed;
+(BOOL)sandboxAllowsXPC:(const char*)arg1 ;
+(BOOL)checkSignatureOfFile:(id)arg1 teamIdentifier:(id*)arg2 trusted:(BOOL*)arg3 signedBySet:(long long*)arg4 certificates:(id*)arg5 error:(id*)arg6 ;
+(BOOL)isAppSSOServiceAvailable;
+(id)processNameForPID:(int)arg1 ;
@end

