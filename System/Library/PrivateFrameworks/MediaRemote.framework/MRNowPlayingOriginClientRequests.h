/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class NSObject, MRDeviceInfo, NSNumber, NSMutableArray, NSMutableDictionary, MROrigin, MRPlayerPath;

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	MRDeviceInfo* _deviceInfo;
	NSNumber* _volumeCapabilities;
	NSNumber* _volume;
	NSMutableArray* _nowPlayingClients;
	NSMutableDictionary* _transactionCallbacks;
	NSMutableArray* _deviceInfoCompletions;
	NSMutableArray* _volumeCompletions;
	NSMutableArray* _volumeCapabilitiesCompletions;
	MROrigin* _origin;
	MRPlayerPath* _playerPath;

}

@property (nonatomic,readonly) MROrigin * origin;                        //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) MRPlayerPath * playerPath;                //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) MRDeviceInfo * deviceInfo; 
@property (nonatomic,retain) NSNumber * volumeCapabilities; 
@property (nonatomic,retain) NSNumber * volume; 
-(NSNumber *)volumeCapabilities;
-(void)restoreNowPlayingClientState;
-(void)removeClient:(id)arg1 ;
-(void)setVolumeCapabilities:(NSNumber *)arg1 ;
-(MROrigin *)origin;
-(MRPlayerPath *)playerPath;
-(id)existingNowPlayingClientRequestsForPlayerPath:(id)arg1 ;
-(void)setVolume:(NSNumber *)arg1 ;
-(void)handleVolumeCapabilitiesRequestWithCompletion:(/*^block*/id)arg1 ;
-(MRDeviceInfo *)deviceInfo;
-(NSNumber *)volume;
-(id)nowPlayingClientRequestsForPlayerPath:(id)arg1 ;
-(void)setDeviceInfo:(MRDeviceInfo *)arg1 ;
-(id)debugDescription;
-(void)handleVolumeRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)handleDeviceInfoRequestWithCompletion:(/*^block*/id)arg1 ;
-(/*^block*/id)transactionCallbackForName:(unsigned long long)arg1 ;
-(void)setTransactionCallback:(/*^block*/id)arg1 forName:(unsigned long long)arg2 ;
-(id)initWithOrigin:(id)arg1 ;
@end
