/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDSPNotificationObserver.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@class HDSPEnvironment, HKSPObserverSet, HKSPDiagnostics, NSString;

@interface HDSPDiagnostics : NSObject <HDSPNotificationObserver, HDSPEnvironmentAware> {

	HDSPEnvironment* _environment;
	HKSPObserverSet* _providers;
	HKSPDiagnostics* _diagnostics;

}

@property (nonatomic,readonly) HKSPObserverSet * providers;                       //@synthesize providers=_providers - In the implementation block
@property (nonatomic,readonly) HKSPDiagnostics * diagnostics;                     //@synthesize diagnostics=_diagnostics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
-(HKSPObserverSet *)providers;
-(void)removeProvider:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)addProvider:(id)arg1 ;
-(HKSPDiagnostics *)diagnostics;
-(void)_logDiagnostics:(id)arg1 ;
-(HDSPEnvironment *)environment;
@end

