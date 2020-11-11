/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NNMKSyncStateManagerDelegate <NSObject>
@required
-(void)syncStateManager:(id)arg1 didAcknowledgeForwardNotificationPayload:(/*^block*/id)arg2 forBulletin:(id)arg3;
-(void)syncStateManagerDidChangePairedDevice:(id)arg1;
-(void)syncStateManagerDidBeginSyncSession:(id)arg1 syncSessionType:(id)arg2 syncSessionIdentifier:(id)arg3;
-(void)syncStateManagerDidUnpair:(id)arg1;
-(BOOL)syncStateManagerShouldAddFavoriteSubsectionForMailboxId:(id)arg1;
-(void)syncStateManagerDidInvalidateSyncSession:(id)arg1 syncSessionIdentifier:(id)arg2;

@end
