/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface SBSRemoteAlertDefinition : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying> {

	BOOL _forCarPlay;
	NSString* _serviceName;
	NSString* _viewControllerClassName;
	NSDictionary* _userInfo;
	NSString* _impersonatedCarPlayAppIdentifier;

}

@property (nonatomic,copy) NSDictionary * userInfo;                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSString * impersonatedCarPlayAppIdentifier;              //@synthesize impersonatedCarPlayAppIdentifier=_impersonatedCarPlayAppIdentifier - In the implementation block
@property (assign,getter=isForCarPlay,nonatomic) BOOL forCarPlay;                    //@synthesize forCarPlay=_forCarPlay - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceName;                          //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewControllerClassName;              //@synthesize viewControllerClassName=_viewControllerClassName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(NSDictionary *)userInfo;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)viewControllerClassName;
-(id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2 ;
-(void)setForCarPlay:(BOOL)arg1 ;
-(BOOL)isForCarPlay;
-(void)setImpersonatedCarPlayAppIdentifier:(NSString *)arg1 ;
-(NSString *)impersonatedCarPlayAppIdentifier;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)serviceName;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

