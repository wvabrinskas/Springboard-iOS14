/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKSyncCommonClass <_DKSyncRemoteStorage>
@required
-(void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(BOOL)arg4 options:(id)arg5 responseHandler:(/*^block*/id)arg6;
-(id)client;
-(void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setDeviceID:(id)arg1;
-(id)myDeviceID;
-(void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2;
-(id)transformCaughtObject:(id)arg1 existingError:(id)arg2;
-(id)transformResponseError:(id)arg1;
-(BOOL)isTransportActiveForPeer:(id)arg1;

@end

