/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, SOExtensionDelegate;
#import <AppSSO/AppSSO-Structs.h>
@class NSUUID, NSObject, SORemoteExtensionViewController, NSExtension, NSArray, NSString;

@interface SOExtension : NSObject {

	NSUUID* _sessionID;
	NSObject*<OS_dispatch_queue> _queue;
	SORemoteExtensionViewController* _remoteViewController;
	NSExtension* _extension;
	NSArray* _associatedDomains;
	id<SOExtensionDelegate> _extensionDelegate;

}

@property (nonatomic,retain) NSExtension * extension;                                       //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSString * extensionBundleIdentifier; 
@property (nonatomic,readonly) NSString * localizedExtensionDisplayName; 
@property (nonatomic,readonly) NSString * containerAppPath; 
@property (nonatomic,readonly) NSString * containerAppBundleIdentifier; 
@property (nonatomic,retain) NSArray * associatedDomains;                                   //@synthesize associatedDomains=_associatedDomains - In the implementation block
@property (assign,nonatomic,__weak) id<SOExtensionDelegate> extensionDelegate;              //@synthesize extensionDelegate=_extensionDelegate - In the implementation block
-(void)unload;
-(id)initWithExtension:(id)arg1 ;
-(void)_beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_finishedSettingUpSession:(id)arg1 ;
-(void)setExtensionDelegate:(id<SOExtensionDelegate>)arg1 ;
-(BOOL)isEqualToExtension:(id)arg1 ;
-(NSArray *)associatedDomains;
-(BOOL)hasAssociatedDomainsApproved;
-(void)requestAuthorizationViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasURLApprovedAssociatedDomain:(id)arg1 ;
-(void)checkAssociatedDomains;
-(NSString *)containerAppPath;
-(id)_contextForSession;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)cancelAuthorizationWithCompletion:(/*^block*/id)arg1 ;
-(id)description;
-(void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)localizedExtensionDisplayName;
-(void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)extensionBundleIdentifier;
-(void)beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<SOExtensionDelegate>)extensionDelegate;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
-(void)_setupExtension;
-(NSString *)containerAppBundleIdentifier;
-(NSExtension *)extension;
-(void)_beginAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(SCD_Struct_SO0)auditTokenForSession;
-(void)_setupSessionIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupSessionHelperForIOSWithCompletion:(/*^block*/id)arg1 ;
-(void)_connectContextToSessionWithRequestIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
