/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, HDDaemon;

@interface HDPluginManager : NSObject {

	NSArray* _plugins;
	HDDaemon* _daemon;
	NSArray* _allowablePluginDirectoryPaths;

}

@property (assign,nonatomic,__weak) HDDaemon * daemon;                           //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,copy) NSArray * allowablePluginDirectoryPaths;              //@synthesize allowablePluginDirectoryPaths=_allowablePluginDirectoryPaths - In the implementation block
-(void)setDaemon:(HDDaemon *)arg1 ;
-(HDDaemon *)daemon;
-(id)_pluginsDirectoryPath;
-(void)setAllowablePluginDirectoryPaths:(NSArray *)arg1 ;
-(NSArray *)allowablePluginDirectoryPaths;
-(id)_internalPluginsDirectoryPaths;
-(id)_createPluginsFromClasses:(id)arg1 ;
-(id)_loadPrincipalClassesConformingToProtocols:(id)arg1 fromBundlesInDirectoryAtPath:(id)arg2 error:(id*)arg3 ;
-(id)_pluginDirectoryPaths;
-(id)createExtensionsForProfile:(id)arg1 ;
-(id)pluginsConformingToProtocol:(id)arg1 ;
-(Class)_loadPrincipalClassConformingToProtocols:(id)arg1 fromBundleAtPath:(id)arg2 ;
-(void)_loadPlugins;
-(id)_builtInPluginClasses;
-(id)_principalClassProtocols;
-(id)initWithDaemon:(id)arg1 ;
-(id)createExtensionsForDaemon:(id)arg1 ;
-(id)_pluginClasses;
@end
