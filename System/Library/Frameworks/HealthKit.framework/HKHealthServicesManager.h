/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKHealthServicesManagerClientInterface.h>

@class HKProxyProvider, NSMutableDictionary, NSMutableSet, NSString;

@interface HKHealthServicesManager : NSObject <_HKXPCExportable, HKHealthServicesManagerClientInterface> {

	HKProxyProvider* _proxyProvider;
	NSMutableDictionary* _discoveries;
	NSMutableSet* _discoveriesEnded;
	NSMutableDictionary* _sessions;
	NSMutableSet* _sessionsEnded;
	/*^block*/id _bluetoothStatusHandler;

}

@property (nonatomic,retain) NSMutableDictionary * discoveries;              //@synthesize discoveries=_discoveries - In the implementation block
@property (nonatomic,retain) NSMutableSet * discoveriesEnded;                //@synthesize discoveriesEnded=_discoveriesEnded - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sessions;                 //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,retain) NSMutableSet * sessionsEnded;                   //@synthesize sessionsEnded=_sessionsEnded - In the implementation block
@property (nonatomic,copy) id bluetoothStatusHandler;                        //@synthesize bluetoothStatusHandler=_bluetoothStatusHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(id)remoteInterface;
-(void)registerPeripheralIdentifier:(id)arg1 name:(id)arg2 services:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)setSessions:(NSMutableDictionary *)arg1 ;
-(void)addHealthServicePairing:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)connectionInterrupted;
-(void)endHealthServiceSession:(id)arg1 ;
-(NSMutableDictionary *)discoveries;
-(void)_addEndedDiscovery:(id)arg1 ;
-(void)setDiscoveries:(NSMutableDictionary *)arg1 ;
-(void)_fetchHealthServicesServerProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_startHealthServiceExtendedDiscovery:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_addEndedSession:(id)arg1 ;
-(NSMutableSet *)discoveriesEnded;
-(void)setDiscoveriesEnded:(NSMutableSet *)arg1 ;
-(NSMutableSet *)sessionsEnded;
-(void)setSessionsEnded:(NSMutableSet *)arg1 ;
-(void)startBluetoothStatusUpdates:(/*^block*/id)arg1 ;
-(void)endBluetoothStatusUpdates;
-(void)_fetchSupportedServiceIDsWithCompletion:(/*^block*/id)arg1 ;
-(id)startAllHealthServicesDiscoveryWithHandler:(/*^block*/id)arg1 ;
-(id)activeHealthServiceSessions;
-(id)activeHealthServiceDiscoveries;
-(void)getEnabledStatusForPeripheral:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setBluetoothStatusHandler:(id)arg1 ;
-(void)setEnabledStatus:(BOOL)arg1 forPeripheral:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)getHealthServicePropertyNamesWithHandler:(/*^block*/id)arg1 ;
-(id)bluetoothStatusHandler;
-(void)getHealthServiceProperty:(id)arg1 forSession:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)performHealthServiceOperation:(id)arg1 onSession:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(void)startHealthServiceDiscovery:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)endHealthServiceDiscovery:(id)arg1 ;
-(id)initWithWeakHealthStore:(id)arg1 ;
-(void)unregisterPeripheralIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)sessions;
-(void)healthPeripheralsWithFilter:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)startHealthServiceSession:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)removeHealthServicePairing:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)healthServicePairingsWithHandler:(/*^block*/id)arg1 ;
-(void)clientRemote_deliverBluetoothStatus:(long long)arg1 withError:(id)arg2 ;
-(void)clientRemote_deliverDiscoveryHealthService:(id)arg1 toClient:(unsigned long long)arg2 finished:(BOOL)arg3 withError:(id)arg4 ;
-(void)clientRemote_deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(BOOL)arg3 withError:(id)arg4 ;
-(void)clientRemote_deliverSessionCharacteristics:(id)arg1 forService:(id)arg2 toClient:(unsigned long long)arg3 withError:(id)arg4 ;
@end
