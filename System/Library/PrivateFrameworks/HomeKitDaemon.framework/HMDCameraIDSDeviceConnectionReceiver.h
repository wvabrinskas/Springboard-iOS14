/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDCameraIDSDeviceConnection.h>
#import <libobjc.A.dylib/HMDCameraRemoteStreamReceiverSocketProtocol.h>

@protocol HMDCameraIDSDeviceConnectionReceiverDelegate, OS_dispatch_queue;
@class NSObject, IDSSession, NSString;

@interface HMDCameraIDSDeviceConnectionReceiver : HMDCameraIDSDeviceConnection <HMDCameraRemoteStreamReceiverSocketProtocol> {

	id<HMDCameraIDSDeviceConnectionReceiverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign,nonatomic,__weak) id<HMDCameraIDSDeviceConnectionReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) int remoteAudioSocket; 
@property (nonatomic,readonly) int remoteVideoSocket; 
@property (nonatomic,readonly) IDSSession * session; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<HMDCameraIDSDeviceConnectionReceiverDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegate:(id<HMDCameraIDSDeviceConnectionReceiverDelegate>)arg1 ;
-(IDSSession *)session;
-(id)logIdentifier;
-(void)dealloc;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(void)setupReceiver:(id)arg1 ;
-(int)remoteAudioSocket;
-(int)remoteVideoSocket;
-(void)_callSessionEnded:(id)arg1 ;
-(void)_socketOpened:(id)arg1 ;
@end
