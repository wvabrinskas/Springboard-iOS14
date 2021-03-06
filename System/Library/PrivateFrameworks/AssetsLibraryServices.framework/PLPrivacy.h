/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSObject, PLAssetsdPrivacySupportClient;

@interface PLPrivacy : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	long long _authRightFullAccess;
	long long _authRightAddOnly;
	PLAssetsdPrivacySupportClient* _privacySupportClient;
	BOOL _hasHandledLimitedLibraryReprompt;
	BOOL _limitedLibrarySupported;

}

@property (assign) BOOL hasHandledLimitedLibraryReprompt;                                                //@synthesize hasHandledLimitedLibraryReprompt=_hasHandledLimitedLibraryReprompt - In the implementation block
@property (assign,getter=isLimitedLibrarySupported,nonatomic) BOOL limitedLibrarySupported;              //@synthesize limitedLibrarySupported=_limitedLibrarySupported - In the implementation block
+(id)sharedInstance;
+(BOOL)_isLimitedLibrarySupportedInClient;
-(id)init;
-(void)_resolvePreflightStatusForScope:(long long)arg1 ;
-(BOOL)hasHandledLimitedLibraryReprompt;
-(void)setHasHandledLimitedLibraryReprompt:(BOOL)arg1 ;
-(void)setLimitedLibrarySupported:(BOOL)arg1 ;
-(void)_setAuthStatus:(long long)arg1 scope:(long long)arg2 ;
-(void)checkPhotosAccessAllowedWithScope:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(long long)photosAccessAllowedWithScope:(long long)arg1 auditToken:(SCD_Struct_PL11)arg2 clientAuthorization:(id)arg3 ;
-(long long)_authStatusForScope:(long long)arg1 ;
-(BOOL)isLimitedLibrarySupported;
-(long long)photosAccessAllowedWithScope:(long long)arg1 ;
-(void)presentAsyncPromptForLimitedLibraryPickerIfNeeded;
-(long long)checkPhotosAccessAllowedWithScope:(long long)arg1 ;
-(void)_isPhotosAccessAllowedWithScope:(long long)arg1 promptIfUnknown:(BOOL)arg2 synchronous:(BOOL)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)_checkAuthStatusForPhotosAccessScope:(long long)arg1 promptIfUnknown:(BOOL)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)requestLimitedLibraryPromptForApplicationIdentifier:(id)arg1 ;
@end

