/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_DKSyncRemoteStorage.h>
#import <libobjc.A.dylib/_DKSyncCommonClass.h>

@protocol OS_dispatch_source;
@class NSDictionary, _DKEventTypeResultStatsCounter, NSString, RPCompanionLinkClient, NSMutableDictionary, NSObject, NSMutableSet;

@interface _DKSyncRapportCommonStorage : NSObject <_DKSyncRemoteStorage, _DKSyncCommonClass> {

	BOOL _running;
	NSDictionary* _failIfAsleepOption;
	_DKEventTypeResultStatsCounter* _failIfAsleepStats;
	NSString* _deviceID;
	RPCompanionLinkClient* _client;
	NSMutableDictionary* _companionLinkClients;
	unsigned long long _outstandingRequestCount;
	NSObject*<OS_dispatch_source> _companionLinkClientsCleanupTimer;
	double _retryTimeout;
	NSMutableSet* _peerSourceDeviceIDsWithCompletedHandshakes;
	BOOL _isAvailable;

}

@property (assign,nonatomic) BOOL isAvailable;              //@synthesize isAvailable=_isAvailable - In the implementation block
+(id)sharedInstance;
-(void)cancelOutstandingOperations;
-(BOOL)isAvailable;
-(void)start;
-(long long)transportType;
-(id)init;
-(void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(BOOL)arg4 options:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(id)client;
-(void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)name;
-(void)setDeviceID:(id)arg1 ;
-(id)myDeviceID;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2 ;
-(id)transformCaughtObject:(id)arg1 existingError:(id)arg2 ;
-(id)transformResponseError:(id)arg1 ;
-(BOOL)isTransportActiveForPeer:(id)arg1 ;
-(void)dealloc;
-(void)setIsAvailable:(BOOL)arg1 ;
@end
