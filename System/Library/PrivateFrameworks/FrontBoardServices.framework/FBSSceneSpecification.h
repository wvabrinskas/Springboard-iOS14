/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSArray, NSDictionary, NSString;

@interface FBSSceneSpecification : NSObject <NSCopying, BSDescriptionProviding> {

	BOOL _forLocalSynchronousSceneClientProvider;

}

@property (nonatomic,readonly) NSArray * initialSettingsDiffActions; 
@property (nonatomic,readonly) NSArray * finalSettingsDiffActions; 
@property (nonatomic,readonly) NSArray * initialActionHandlers; 
@property (nonatomic,readonly) NSArray * finalActionHandlers; 
@property (nonatomic,readonly) NSDictionary * baseSceneComponentClassDictionary; 
@property (nonatomic,readonly) NSString * uiSceneSessionRole; 
@property (nonatomic,readonly) Class sceneSubstrateClass; 
@property (nonatomic,readonly) Class lifecycleMonitorClass; 
@property (nonatomic,readonly) Class uiSceneMinimumClass; 
@property (nonatomic,readonly) BOOL isUIKitManaged; 
@property (nonatomic,readonly) BOOL isInternal; 
@property (nonatomic,readonly) BOOL affectsAppLifecycleIfInternal; 
@property (nonatomic,readonly) Class hostAgentClass; 
@property (nonatomic,readonly) Class clientAgentClass; 
@property (nonatomic,readonly) Class settingsClass; 
@property (nonatomic,readonly) Class clientSettingsClass; 
@property (nonatomic,readonly) Class transitionContextClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)specification;
+(void)initialize;
+(/*function pointer*/void*)_swizzleMethodOnClass:(Class)arg1 originalSelector:(SEL)arg2 block:(id)arg3 ;
-(NSDictionary *)baseSceneComponentClassDictionary;
-(BOOL)affectsAppLifecycleIfInternal;
-(NSArray *)initialSettingsDiffActions;
-(BOOL)isUIKitManaged;
-(Class)sceneSubstrateClass;
-(NSArray *)finalSettingsDiffActions;
-(BOOL)isInternal;
-(NSString *)uiSceneSessionRole;
-(Class)uiSceneMinimumClass;
-(NSArray *)initialActionHandlers;
-(id)connectionHandlers;
-(Class)lifecycleMonitorClass;
-(id)disconnectionHandlers;
-(NSArray *)finalActionHandlers;
-(id)succinctDescription;
-(unsigned long long)hash;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(Class)hostAgentClass;
-(Class)settingsClass;
-(Class)clientAgentClass;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(Class)clientSettingsClass;
-(Class)transitionContextClass;
-(id)succinctDescriptionBuilder;
-(id)_copyForLocalSynchronousSceneClientProvider;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
@end

