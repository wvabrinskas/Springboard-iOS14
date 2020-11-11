/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
#import <CMCapture/CMCapture-Structs.h>
@class BWFigCaptureDevice, NSMutableArray, BWFigCaptureDeviceClient, NSObject, NSDictionary, NSMutableSet, NSMutableDictionary;

@interface BWFigCaptureDeviceVendor : NSObject {

	/*function pointer*/void* _deviceCreateFunction;
	BWFigCaptureDevice* _device;
	NSMutableArray* _controlledStreams;
	NSMutableArray* _streamsControlledByOtherClients;
	NSMutableArray* _registeredDeviceClients;
	BWFigCaptureDeviceClient* _deviceClient;
	NSMutableArray* _victimizedDeviceClients;
	NSObject*<OS_dispatch_queue> _deviceQueue;
	NSObject*<OS_dispatch_source> _deviceCloseTimer;
	int _deviceUsageCount;
	double _deviceCloseTimeoutSeconds;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject*<OS_os_transaction> _activeForClientAssertion;
	NSDictionary* _cameraPoseMatricesByPortType;
	NSMutableSet* _portTypesToCheckForToFAFEstimator;
	NSMutableDictionary* _tofAFEstimatorResultsByPortType;
	NSMutableSet* _portTypesToCheckForAFDriverShortStatistics;
	NSMutableDictionary* _afDriverShortStatisticsByPortType;

}
+(void)initialize;
+(id)sharedCaptureDeviceVendor;
+(BOOL)videoCaptureDeviceFirmwareIsLoaded;
-(id)_popLatestVictimizedDeviceClient;
-(id)_registeredDeviceClientWithID:(int)arg1 ;
-(id)copyDeviceForClient:(int)arg1 error:(int*)arg2 ;
-(void)takeBackDevice:(id)arg1 forClient:(int)arg2 informClientWhenDeviceAvailableAgain:(BOOL)arg3 ;
-(void)_handleErrorForGlobalDevice;
-(void)_performBlockOnDeviceQueue:(/*^block*/id)arg1 ;
-(BOOL)streamsInUseForDevice:(id)arg1 ;
-(void)shutDownSystemPressuredDevice:(id)arg1 ;
-(void)_performBlockOnDeviceQueueSynchronously:(/*^block*/id)arg1 ;
-(void)_updateTofAFEstimatorResultsForStream:(id)arg1 ;
-(int)_requestControlOfStreams:(id)arg1 device:(id)arg2 ;
-(void)_relinquishControlOfStreams;
-(void)invalidateVideoDevice:(id)arg1 forPID:(int)arg2 ;
-(void)_unregisterFromStreamNotifications:(id)arg1 ;
-(void)_updateAFDriverShortStatisticsForStream:(id)arg1 ;
-(BOOL)activeDeviceEquals:(id)arg1 ;
-(void)_resetDeviceCloseTimer;
-(void)_logToFAFEstimatorResultsToCoreAnalytics;
-(void)_handleDeviceUnrecoverableError:(int)arg1 fromDevice:(OpaqueFigCaptureDeviceRef)arg2 ;
-(void)_unregisterForDeviceNotifications:(id)arg1 ;
-(int)registerClientWithPID:(int)arg1 clientDescription:(id)arg2 stealingBehavior:(int)arg3 deviceSharingWithOtherClientsAllowed:(BOOL)arg4 deviceAvailabilityChangedHandler:(/*^block*/id)arg5 ;
-(id)_copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(id)arg3 requestControl:(BOOL)arg4 error:(int*)arg5 ;
-(int)_createDevice:(const char*)arg1 clientPID:(int)arg2 ;
-(id)cameraPoseMatrixForStreamWithPosition:(int)arg1 deviceType:(int)arg2 ;
-(void)_handleStreamRelinquishedByAnotherClientNotification:(OpaqueFigCaptureStreamRef)arg1 ;
-(id)_moveDeviceClientToVictimizedList;
-(void)_handleStreamFrameReceiveTimeoutNotification:(OpaqueFigCaptureStreamRef)arg1 ;
-(void)_registerForStreamNotifications:(id)arg1 ;
-(id)copyStreamsWithUniqueIDs:(id)arg1 forDevice:(id)arg2 error:(int*)arg3 ;
-(void)_logAFDriverShortStatisticsToCoreAnalytics;
-(void)_deviceAvailabilityChangedForClient:(id)arg1 available:(BOOL)arg2 postNotification:(BOOL)arg3 reason:(int)arg4 ;
-(void)takeBackStreams:(id)arg1 device:(id)arg2 ;
-(void)prewarmDefaultVideoDeviceForPID:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(id)arg3 requestControl:(BOOL)arg4 error:(int*)arg5 ;
-(void)unregisterCallbacksForClient:(int)arg1 ;
-(void)_setupDeviceCloseTimer;
-(void)_removeVictimizedDeviceClientWithClientID:(int)arg1 ;
-(void)_registerForDeviceNotifications:(id)arg1 ;
-(void)_removeDeviceClient;
-(void)_dumpInventory;
-(void)resumeSystemPressuredDevice;
-(id)copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(id)arg3 error:(int*)arg4 ;
-(id)initWithDeviceCreateFunction:(/*function pointer*/void*)arg1 ;
-(float)structuredLightProjectorStandbyTemperatureWithError:(int*)arg1 ;
-(id)copyStreamForFlashlightWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(id)arg3 ;
-(void)_invalidateAndReleaseDevice;
-(id)copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(id)arg3 error:(int*)arg4 ;
-(void)dealloc;
-(void)_handleStreamControlTakenByAnotherClientNotification:(OpaqueFigCaptureStreamRef)arg1 ;
-(void)_handleDeviceNoLongerAvailable:(OpaqueFigCaptureDeviceRef)arg1 ;
@end
