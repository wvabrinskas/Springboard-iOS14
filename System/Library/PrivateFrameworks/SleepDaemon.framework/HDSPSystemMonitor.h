/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPSystemReadyDelegate.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@protocol HDSPSystemReadyDelegate, HDSPSystemReadyProvider;
@class HDSPEnvironment, HDSPDeviceUnlockMonitor, HDSPDevicePowerMonitor, HDSPApplicationWorkspaceMonitor, HDSPWatchOnWristMonitor, NSString;

@interface HDSPSystemMonitor : NSObject <HDSPSystemReadyDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware> {

	BOOL _systemReady;
	os_unfair_lock_s _systemMonitorLock;
	HDSPEnvironment* _environment;
	id<HDSPSystemReadyDelegate> _delegate;
	HDSPDeviceUnlockMonitor* _deviceUnlockMonitor;
	HDSPDevicePowerMonitor* _devicePowerMonitor;
	HDSPApplicationWorkspaceMonitor* _applicationWorkspaceMonitor;
	HDSPWatchOnWristMonitor* _watchOnWristMonitor;
	id<HDSPSystemReadyProvider> _systemReadyProvider;

}

@property (nonatomic,readonly) id<HDSPSystemReadyProvider> systemReadyProvider;                            //@synthesize systemReadyProvider=_systemReadyProvider - In the implementation block
@property (nonatomic,readonly) BOOL systemReady;                                                           //@synthesize systemReady=_systemReady - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s systemMonitorLock;                                         //@synthesize systemMonitorLock=_systemMonitorLock - In the implementation block
@property (assign,nonatomic,__weak) id<HDSPSystemReadyDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HDSPDeviceUnlockMonitor * deviceUnlockMonitor;                              //@synthesize deviceUnlockMonitor=_deviceUnlockMonitor - In the implementation block
@property (nonatomic,readonly) HDSPDevicePowerMonitor * devicePowerMonitor;                                //@synthesize devicePowerMonitor=_devicePowerMonitor - In the implementation block
@property (nonatomic,readonly) HDSPApplicationWorkspaceMonitor * applicationWorkspaceMonitor;              //@synthesize applicationWorkspaceMonitor=_applicationWorkspaceMonitor - In the implementation block
@property (nonatomic,readonly) HDSPWatchOnWristMonitor * watchOnWristMonitor;                              //@synthesize watchOnWristMonitor=_watchOnWristMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                                       //@synthesize environment=_environment - In the implementation block
+(id)_platformSpecificReadyProviderForEnvironment:(id)arg1 ;
-(void)systemDidBecomeReady;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(id)diagnosticInfo;
-(BOOL)systemReady;
-(BOOL)isSystemReady;
-(HDSPDevicePowerMonitor *)devicePowerMonitor;
-(id<HDSPSystemReadyDelegate>)delegate;
-(HDSPWatchOnWristMonitor *)watchOnWristMonitor;
-(id)initWithEnvironment:(id)arg1 watchOnWristMonitor:(id)arg2 devicePowerMonitor:(id)arg3 deviceUnlockMonitor:(id)arg4 systemReadyProvider:(id)arg5 applicationWorkspaceMonitor:(id)arg6 ;
-(id)initWithEnvironment:(id)arg1 watchOnWristMonitor:(id)arg2 devicePowerMonitor:(id)arg3 deviceUnlockMonitor:(id)arg4 ;
-(void)setDelegate:(id<HDSPSystemReadyDelegate>)arg1 ;
-(HDSPApplicationWorkspaceMonitor *)applicationWorkspaceMonitor;
-(HDSPEnvironment *)environment;
-(HDSPDeviceUnlockMonitor *)deviceUnlockMonitor;
-(id<HDSPSystemReadyProvider>)systemReadyProvider;
-(id)diagnosticDescription;
-(os_unfair_lock_s)systemMonitorLock;
@end

