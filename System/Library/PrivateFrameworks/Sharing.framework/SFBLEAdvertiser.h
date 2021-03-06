/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/WPNearbyDelegate.h>

@protocol OS_dispatch_queue;
@class NSData, NSDictionary, NSString, CURetrier, WPNearby, NSObject, NSArray;

@interface SFBLEAdvertiser : NSObject <WPNearbyDelegate> {

	BOOL _activateCalled;
	long long _advertiseState;
	BOOL _invalidateCalled;
	NSData* _payloadDataCurrent;
	NSData* _payloadDataPrevious;
	NSDictionary* _payloadFields;
	NSString* _payloadIdentifier;
	long long _payloadType;
	CURetrier* _startRetrier;
	WPNearby* _wpNearby;
	long long _wpNearbyType;
	LogCategory* _ucat;
	long long _advertiseRate;
	/*^block*/id _advertiseStateChangedHandler;
	/*^block*/id _bluetoothStateChangedHandler;
	/*^block*/id _connectionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSArray* _lePipeDevices;

}

@property (nonatomic,copy) NSArray * lePipeDevices;                                   //@synthesize lePipeDevices=_lePipeDevices - In the implementation block
@property (assign,nonatomic) long long advertiseRate;                                 //@synthesize advertiseRate=_advertiseRate - In the implementation block
@property (nonatomic,copy) id advertiseStateChangedHandler;                           //@synthesize advertiseStateChangedHandler=_advertiseStateChangedHandler - In the implementation block
@property (nonatomic,copy) id bluetoothStateChangedHandler;                           //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
@property (nonatomic,copy) id connectionHandler;                                      //@synthesize connectionHandler=_connectionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bluetoothStateChangedHandler;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setAdvertiseRate:(long long)arg1 ;
-(long long)advertiseRate;
-(int)_preparePayload:(BOOL)arg1 ;
-(id)_preparePayloadNearbyAction:(int*)arg1 ;
-(id)_preparePayloadNearbyInfo:(int*)arg1 ;
-(void)setLePipeDevices:(NSArray *)arg1 ;
-(void)setPayloadFields:(id)arg1 ;
-(id)advertiseStateChangedHandler;
-(void)setAdvertiseStateChangedHandler:(id)arg1 ;
-(id)connectionHandler;
-(NSArray *)lePipeDevices;
-(id)invalidationHandler;
-(void)nearbyDidUpdateState:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(NSString *)description;
-(void)setConnectionHandler:(id)arg1 ;
-(void)_invalidate;
-(void)_restartIfNeeded:(BOOL)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)nearby:(id)arg1 didStopAdvertisingType:(long long)arg2 withError:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)nearby:(id)arg1 didConnectToPeer:(id)arg2 transport:(long long)arg3 error:(id)arg4 ;
-(void)nearby:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3 ;
-(void)invalidate;
-(void)setPayloadData:(id)arg1 ;
-(void)nearby:(id)arg1 didDeferAdvertisingType:(long long)arg2 ;
-(void)dealloc;
-(void)nearby:(id)arg1 didStartAdvertisingType:(long long)arg2 ;
@end

