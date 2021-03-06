/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SBApplication, UISApplicationInitializationContext;

@interface SBApplicationSupportServiceRequestContext : NSObject {

	BOOL _hostIsSpringBoard;
	SBApplication* _app;
	SBApplication* _hostApp;
	SBApplication* _extensionContainingApp;
	UISApplicationInitializationContext* _applicationInitializationContext;

}

@property (nonatomic,readonly) UISApplicationInitializationContext * applicationInitializationContext; 
+(id)initializationContextForClient:(id)arg1 ;
+(id)hostingApplicationBundleIDForPid:(int)arg1 ;
+(id)_hostProcessForProcess:(id)arg1 ;
-(id)initWithApplication:(id)arg1 ;
-(id)initWithClient:(id)arg1 host:(id)arg2 ;
-(UISApplicationInitializationContext *)applicationInitializationContext;
-(long long)_main_effectiveClassicMode;
-(id)_main_applicationInitializationContext;
-(unsigned long long)_main_effectiveScreenType;
-(id)_main_deviceContext;
-(id)_main_displayContext;
-(id)_main_persistenceIDs;
@end

