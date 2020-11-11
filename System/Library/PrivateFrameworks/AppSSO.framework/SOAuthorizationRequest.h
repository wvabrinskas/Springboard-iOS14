/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SOHostExtensionContextProtocol;
@class SOAuthorizationRequestParameters, SOAuthorizationCredential, NSError, NSURL, NSString, NSDictionary, NSData;

@interface SOAuthorizationRequest : NSObject {

	SOAuthorizationRequestParameters* _requestParameters;
	id<SOHostExtensionContextProtocol> _hostExtensionContext;
	BOOL _authorizationCanceled;
	SOAuthorizationCredential* _canceledAuthorizationCredential;
	NSError* _canceledAuthorizationError;

}

@property (assign,getter=isAuthorizationCanceled,nonatomic) BOOL authorizationCanceled;                //@synthesize authorizationCanceled=_authorizationCanceled - In the implementation block
@property (nonatomic,retain) SOAuthorizationCredential * canceledAuthorizationCredential;              //@synthesize canceledAuthorizationCredential=_canceledAuthorizationCredential - In the implementation block
@property (nonatomic,retain) NSError * canceledAuthorizationError;                                     //@synthesize canceledAuthorizationError=_canceledAuthorizationError - In the implementation block
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSString * requestedOperation; 
@property (nonatomic,retain) NSDictionary * httpHeaders; 
@property (nonatomic,retain) NSData * httpBody; 
@property (nonatomic,retain) NSString * realm; 
@property (nonatomic,retain) NSDictionary * extensionData; 
@property (nonatomic,retain) NSString * callerBundleIdentifier; 
@property (nonatomic,retain) NSData * auditTokenData; 
@property (nonatomic,retain) NSDictionary * authorizationOptions; 
@property (assign,getter=isCallerManaged,nonatomic) BOOL callerManaged; 
@property (nonatomic,retain) NSString * callerTeamIdentifier; 
@property (nonatomic,retain) NSString * localizedCallerDisplayName; 
-(void)completeWithError:(id)arg1 ;
-(NSData *)auditTokenData;
-(NSDictionary *)extensionData;
-(void)complete;
-(NSURL *)url;
-(void)setRealm:(NSString *)arg1 ;
-(void)setLocalizedCallerDisplayName:(NSString *)arg1 ;
-(void)setRequestedOperation:(NSString *)arg1 ;
-(void)setCallerTeamIdentifier:(NSString *)arg1 ;
-(void)setExtensionData:(NSDictionary *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)isCallerManaged;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(void)setCallerBundleIdentifier:(NSString *)arg1 ;
-(void)setAuthorizationOptions:(NSDictionary *)arg1 ;
-(NSString *)callerTeamIdentifier;
-(void)setAuditTokenData:(NSData *)arg1 ;
-(NSString *)requestedOperation;
-(NSData *)httpBody;
-(void)doNotHandle;
-(NSString *)localizedCallerDisplayName;
-(NSDictionary *)httpHeaders;
-(id)initWithRequestParameters:(id)arg1 hostExtensionContext:(id)arg2 ;
-(void)setAuthorizationCanceled:(BOOL)arg1 ;
-(void)setCanceledAuthorizationCredential:(SOAuthorizationCredential *)arg1 ;
-(NSError *)canceledAuthorizationError;
-(void)setCanceledAuthorizationError:(NSError *)arg1 ;
-(SOAuthorizationCredential *)canceledAuthorizationCredential;
-(BOOL)isAuthorizationCanceled;
-(void)cancel;
-(void)setHttpBody:(NSData *)arg1 ;
-(NSDictionary *)authorizationOptions;
-(NSString *)realm;
-(BOOL)_isUserInterfaceAllowed;
-(void)completeWithHTTPAuthorizationHeaders:(id)arg1 ;
-(void)completeWithHTTPResponse:(id)arg1 httpBody:(id)arg2 ;
-(void)presentAuthorizationViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)callerBundleIdentifier;
-(void)setCallerManaged:(BOOL)arg1 ;
@end
