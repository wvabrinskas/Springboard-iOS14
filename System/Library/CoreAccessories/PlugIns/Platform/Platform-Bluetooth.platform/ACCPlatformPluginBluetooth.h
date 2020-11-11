/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Platform/Platform-Bluetooth.platform/Platform-Bluetooth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Platform-Bluetooth/Platform-Bluetooth-Structs.h>
#import <libobjc.A.dylib/ACCPlatformBluetoothStatusPluginProtocol.h>
#import <libobjc.A.dylib/ACCPlatformBluetoothAccessoryInformationPluginProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface ACCPlatformPluginBluetooth : NSObject <ACCPlatformBluetoothStatusPluginProtocol, ACCPlatformBluetoothAccessoryInformationPluginProtocol> {

	BOOL _isRunning;
	BOOL _btUpdatesStarted;
	BTSessionImplRef _btSession;
	NSObject*<OS_dispatch_queue> _btEventQueue;
	NSMutableDictionary* _accessoryList;

}

@property (assign,nonatomic) BOOL isRunning;                                         //@synthesize isRunning=_isRunning - In the implementation block
@property (assign,nonatomic) BOOL btUpdatesStarted;                                  //@synthesize btUpdatesStarted=_btUpdatesStarted - In the implementation block
@property (assign,nonatomic) BTSessionImplRef btSession;                             //@synthesize btSession=_btSession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> btEventQueue;              //@synthesize btEventQueue=_btEventQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryList;                    //@synthesize accessoryList=_accessoryList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(void)initPlugin;
-(void)startPlugin;
-(void)stopPlugin;
-(NSString *)pluginName;
-(void)setIsRunning:(BOOL)arg1 ;
-(BTSessionImplRef)btSession;
-(id)nameForMacAddress:(id)arg1 ;
-(BOOL)btUpdatesStarted;
-(void)stopCheckingForUpdates:(id)arg1 forAccessory:(id)arg2 ;
-(BOOL)isRunning;
-(id)accessoryAttached:(id)arg1 ;
-(void)iterateRegisteredComponentsForKnownAddresses:(id)arg1 allOFF:(BOOL)arg2 ;
-(void)setBtSession:(BTSessionImplRef)arg1 ;
-(void)startCheckingForUpdates:(id)arg1 forAccessory:(id)arg2 ;
-(void)unplugBTDevice:(id)arg1 btAccessoryManager:(BTAccessoryManagerImplRef)arg2 btDevice:(BTDeviceImplRef)arg3 ;
-(NSObject*<OS_dispatch_queue>)btEventQueue;
-(void)accessoryDetached:(id)arg1 ;
-(int)updateBTComponent:(id)arg1 forAccessory:(id)arg2 withEnabledState:(BOOL)arg3 ;
-(void)performInit;
-(NSMutableDictionary *)accessoryList;
-(id)getAccessoryList;
-(void)setBtEventQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)pluginBTDevice:(id)arg1 btAccessoryManager:(BTAccessoryManagerImplRef)arg2 btDevice:(BTDeviceImplRef)arg3 ;
-(void)setBtUpdatesStarted:(BOOL)arg1 ;
-(void)setAccessoryList:(NSMutableDictionary *)arg1 ;
@end
