/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NFDefinitionContainer.h>
#import <libobjc.A.dylib/NFRegistrationContainer.h>

@class NSMutableDictionary, NFContainerPool, NFCallbackStore, NFProxyResolver, NSString;

@interface NFContainer : NSObject <NFDefinitionContainer, NFRegistrationContainer> {

	NSMutableDictionary* _definitions;
	NFContainerPool* _pool;
	NFCallbackStore* _callbackStore;
	NSMutableDictionary* _privateContainers;

}

@property (nonatomic,retain) NSMutableDictionary * definitions;                    //@synthesize definitions=_definitions - In the implementation block
@property (nonatomic,retain) NFContainerPool * pool;                               //@synthesize pool=_pool - In the implementation block
@property (nonatomic,retain) NFCallbackStore * callbackStore;                      //@synthesize callbackStore=_callbackStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * privateContainers;              //@synthesize privateContainers=_privateContainers - In the implementation block
@property (nonatomic,readonly) NFProxyResolver * proxyResolver; 
@property (nonatomic,readonly) id<NFResolver> resolver; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NFResolver>)resolver;
-(NFContainerPool *)pool;
-(id)registerProtocol:(id)arg1 factory:(/*^block*/id)arg2 ;
-(void)setDefinitions:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NFCallbackStore *)callbackStore;
-(NSString *)debugDescription;
-(id)initWithBundleAssemblies:(id)arg1 assemblies:(id)arg2 singletonPool:(id)arg3 bridgedContainer:(id)arg4 ;
-(id)definitionForKey:(id)arg1 ;
-(void)setCallbackStore:(NFCallbackStore *)arg1 ;
-(id)registerClass:(Class)arg1 factory:(/*^block*/id)arg2 ;
-(void)setPrivateContainers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)definitions;
-(id)initAsPrivateContainer;
-(id)registerKey:(id)arg1 factory:(/*^block*/id)arg2 ;
-(id)unsafeRegisterForKey:(id)arg1 name:(id)arg2 factory:(/*^block*/id)arg3 ;
-(id)registerProtocol:(id)arg1 name:(id)arg2 factory:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)privateContainers;
-(void)setPool:(NFContainerPool *)arg1 ;
-(NFProxyResolver *)proxyResolver;
-(void)validateDefinitionsWithProxyResolver:(id)arg1 ;
-(id)initWithBundleAssemblies:(id)arg1 assemblies:(id)arg2 ;
-(id)registerClass:(Class)arg1 name:(id)arg2 factory:(/*^block*/id)arg3 ;
-(id)register:(id)arg1 createDefinitionBlock:(/*^block*/id)arg2 ;
@end

