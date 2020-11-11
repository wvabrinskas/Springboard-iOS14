/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BSAuditToken : NSObject <NSCopying, BSXPCCoding, NSSecureCoding> {

	NSString* _bundleID;
	BOOL _resolvedBundleID;
	os_unfair_lock_s _secTaskLock;
	SecTaskRef _lazy_secTaskLock_secTask;
	SCD_Struct_BS15 _auditToken;

}

@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) long long versionedPID; 
@property (nonatomic,readonly) unsigned euid; 
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,readonly) SCD_Struct_BS15 realToken;                  //@synthesize auditToken=_auditToken - In the implementation block
@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenFromXPCMessage:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)tokenFromAuditToken:(SCD_Struct_BS15)arg1 ;
+(id)tokenForCurrentProcess;
+(id)tokenFromMachMessage:(SCD_Struct_BS16*)arg1 ;
+(id)tokenFromAuditTokenRef:(SCD_Struct_BS15*)arg1 ;
+(id)tokenFromNSXPCConnection:(id)arg1 ;
+(id)tokenFromXPCConnection:(id)arg1 ;
-(BOOL)isInvalid;
-(int)pid;
-(unsigned)euid;
-(BOOL)hasEntitlement:(id)arg1 ;
-(NSString *)bundleID;
-(BOOL)hasSameProcessAsAuditToken:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(id)initWithAuditToken:(SCD_Struct_BS15)arg1 ;
-(long long)versionedPID;
-(SCD_Struct_BS15)realToken;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end
