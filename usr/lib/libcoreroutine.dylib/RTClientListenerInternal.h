/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTXPCListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class RTAccountManager, RTAssetManager, RTAuthorizationManager, RTDeviceLocationPredictor, RTDiagnostics, RTEventAgentManager, RTEventModelProvider, RTFingerprintManager, RTHintManager, RTLearnedLocationManager, RTLearnedLocationStore, RTLocationManager, RTLocationStore, RTMotionActivityManager, RTPersistenceManager, RTPlatform, RTPurgeManager, RTScenarioTriggerManager, RTVehicleLocationProvider, RTVisitManager, RTWiFiManager, NSString;

@interface RTClientListenerInternal : RTXPCListener <NSXPCListenerDelegate> {

	RTAccountManager* _accountManager;
	RTAssetManager* _assetManager;
	RTAuthorizationManager* _authorizationManager;
	RTDeviceLocationPredictor* _deviceLocationPredictor;
	RTDiagnostics* _diagnostics;
	RTEventAgentManager* _eventAgentManager;
	RTEventModelProvider* _eventModelProvider;
	RTFingerprintManager* _fingerprintManager;
	RTHintManager* _hintManager;
	RTLearnedLocationManager* _learnedLocationManager;
	RTLearnedLocationStore* _learnedLocationStore;
	RTLocationManager* _locationManager;
	RTLocationStore* _locationStore;
	RTMotionActivityManager* _motionActivityManager;
	RTPersistenceManager* _persistenceManager;
	RTPlatform* _platform;
	RTPurgeManager* _purgeManager;
	RTScenarioTriggerManager* _scenarioTriggerManager;
	RTVehicleLocationProvider* _vehicleLocationProvider;
	RTVisitManager* _visitManager;
	RTWiFiManager* _wifiManager;

}

@property (nonatomic,retain) RTAccountManager * accountManager;                                //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,retain) RTAssetManager * assetManager;                                    //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) RTAuthorizationManager * authorizationManager;                    //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (nonatomic,retain) RTDeviceLocationPredictor * deviceLocationPredictor;              //@synthesize deviceLocationPredictor=_deviceLocationPredictor - In the implementation block
@property (nonatomic,retain) RTDiagnostics * diagnostics;                                      //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,retain) RTEventAgentManager * eventAgentManager;                          //@synthesize eventAgentManager=_eventAgentManager - In the implementation block
@property (nonatomic,retain) RTEventModelProvider * eventModelProvider;                        //@synthesize eventModelProvider=_eventModelProvider - In the implementation block
@property (nonatomic,retain) RTFingerprintManager * fingerprintManager;                        //@synthesize fingerprintManager=_fingerprintManager - In the implementation block
@property (nonatomic,retain) RTHintManager * hintManager;                                      //@synthesize hintManager=_hintManager - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;                //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTLearnedLocationStore * learnedLocationStore;                    //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTLocationStore * locationStore;                                  //@synthesize locationStore=_locationStore - In the implementation block
@property (nonatomic,retain) RTMotionActivityManager * motionActivityManager;                  //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;                        //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                            //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) RTPurgeManager * purgeManager;                                    //@synthesize purgeManager=_purgeManager - In the implementation block
@property (nonatomic,retain) RTScenarioTriggerManager * scenarioTriggerManager;                //@synthesize scenarioTriggerManager=_scenarioTriggerManager - In the implementation block
@property (nonatomic,retain) RTVehicleLocationProvider * vehicleLocationProvider;              //@synthesize vehicleLocationProvider=_vehicleLocationProvider - In the implementation block
@property (nonatomic,retain) RTVisitManager * visitManager;                                    //@synthesize visitManager=_visitManager - In the implementation block
@property (nonatomic,retain) RTWiFiManager * wifiManager;                                      //@synthesize wifiManager=_wifiManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScenarioTriggerManager:(RTScenarioTriggerManager *)arg1 ;
-(RTLearnedLocationManager *)learnedLocationManager;
-(void)setVisitManager:(RTVisitManager *)arg1 ;
-(void)setEventModelProvider:(RTEventModelProvider *)arg1 ;
-(RTVehicleLocationProvider *)vehicleLocationProvider;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(RTLocationStore *)locationStore;
-(void)setAccountManager:(RTAccountManager *)arg1 ;
-(void)setFingerprintManager:(RTFingerprintManager *)arg1 ;
-(RTEventAgentManager *)eventAgentManager;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(void)setAuthorizationManager:(RTAuthorizationManager *)arg1 ;
-(void)setEventAgentManager:(RTEventAgentManager *)arg1 ;
-(RTFingerprintManager *)fingerprintManager;
-(RTLocationManager *)locationManager;
-(RTVisitManager *)visitManager;
-(void)setWifiManager:(RTWiFiManager *)arg1 ;
-(RTDeviceLocationPredictor *)deviceLocationPredictor;
-(RTAccountManager *)accountManager;
-(RTHintManager *)hintManager;
-(RTAuthorizationManager *)authorizationManager;
-(RTWiFiManager *)wifiManager;
-(void)setHintManager:(RTHintManager *)arg1 ;
-(void)setVehicleLocationProvider:(RTVehicleLocationProvider *)arg1 ;
-(void)setPurgeManager:(RTPurgeManager *)arg1 ;
-(RTPurgeManager *)purgeManager;
-(void)setDiagnostics:(RTDiagnostics *)arg1 ;
-(RTEventModelProvider *)eventModelProvider;
-(void)setDeviceLocationPredictor:(RTDeviceLocationPredictor *)arg1 ;
-(void)setLocationStore:(RTLocationStore *)arg1 ;
-(RTScenarioTriggerManager *)scenarioTriggerManager;
-(RTDiagnostics *)diagnostics;
-(RTPlatform *)platform;
-(void)setAssetManager:(RTAssetManager *)arg1 ;
-(id)init;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(RTAssetManager *)assetManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(RTPersistenceManager *)persistenceManager;
-(void)setMotionActivityManager:(RTMotionActivityManager *)arg1 ;
-(RTMotionActivityManager *)motionActivityManager;
-(RTLearnedLocationStore *)learnedLocationStore;
-(id)handleClientConnection:(id)arg1 ;
-(id)initWithAccountManager:(id)arg1 assetManager:(id)arg2 authorizationManager:(id)arg3 deviceLocationPredictor:(id)arg4 diagnostics:(id)arg5 eventAgentManager:(id)arg6 eventModelProvider:(id)arg7 fingerprintManager:(id)arg8 hintManager:(id)arg9 learnedLocationManager:(id)arg10 learnedLocationStore:(id)arg11 locationManager:(id)arg12 locationStore:(id)arg13 motionActivityManager:(id)arg14 persistenceManager:(id)arg15 platform:(id)arg16 purgeManager:(id)arg17 scenarioTriggerManager:(id)arg18 vehicleLocationProvider:(id)arg19 visitManager:(id)arg20 ;
-(void)setLearnedLocationStore:(RTLearnedLocationStore *)arg1 ;
@end

