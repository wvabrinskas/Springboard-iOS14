/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, FPSandboxingURLWrapper;

@interface UISUISecurityScopedResource : NSObject <NSSecureCoding> {

	BOOL _hasActiveAccessAssertion;
	NSURL* _url;
	long long _allowedAccess;
	FPSandboxingURLWrapper* _sandboxExtensionWrapper;
	long long _underlyingSandboxAssertionHandle;

}

@property (nonatomic,retain) FPSandboxingURLWrapper * sandboxExtensionWrapper;              //@synthesize sandboxExtensionWrapper=_sandboxExtensionWrapper - In the implementation block
@property (assign,nonatomic) long long allowedAccess;                                       //@synthesize allowedAccess=_allowedAccess - In the implementation block
@property (assign,nonatomic) BOOL hasActiveAccessAssertion;                                 //@synthesize hasActiveAccessAssertion=_hasActiveAccessAssertion - In the implementation block
@property (assign,nonatomic) long long underlyingSandboxAssertionHandle;                    //@synthesize underlyingSandboxAssertionHandle=_underlyingSandboxAssertionHandle - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL isContentManaged; 
+(BOOL)supportsSecureCoding;
+(id)scopedResourceWithURL:(id)arg1 allowedAccess:(long long)arg2 ;
+(id)scopedResourceWithFileURL:(id)arg1 allowedAccess:(long long)arg2 ;
+(id)readonlySandboxExtensionClassString;
+(BOOL)_isValidURLForIssuingSandboxExtension:(id)arg1 ;
+(id)_sandboxExtensionClassForAllowedAccess:(long long)arg1 ;
+(id)_scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3 ;
+(id)readwriteSandboxExtensionClassString;
+(id)uniquedSecurityScopedResources:(id)arg1 ;
+(id)scopedResourceWithAbsolutePath:(id)arg1 allowedAccess:(long long)arg2 ;
+(id)scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3 ;
-(void)stopAccessing;
-(BOOL)isContentManaged;
-(FPSandboxingURLWrapper *)sandboxExtensionWrapper;
-(void)setSandboxExtensionWrapper:(FPSandboxingURLWrapper *)arg1 ;
-(long long)underlyingSandboxAssertionHandle;
-(void)setUnderlyingSandboxAssertionHandle:(long long)arg1 ;
-(NSURL *)url;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAbsoluteURL:(id)arg1 sandboxExtensionWrapper:(id)arg2 allowedAccess:(long long)arg3 ;
-(long long)allowedAccess;
-(BOOL)hasActiveAccessAssertion;
-(void)setHasActiveAccessAssertion:(BOOL)arg1 ;
-(BOOL)_isEqualAccessToSecurityScopedResource:(id)arg1 ;
-(void)startAccessing;
-(void)setAllowedAccess:(long long)arg1 ;
@end

