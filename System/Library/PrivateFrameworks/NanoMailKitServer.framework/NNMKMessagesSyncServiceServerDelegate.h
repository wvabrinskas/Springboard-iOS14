/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NNMKMessagesSyncServiceServerDelegate <NSObject>
@required
-(void)messagesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
-(void)messagesSyncServiceServer:(id)arg1 didUpdateMailboxSelection:(id)arg2;
-(void)messagesSyncServiceServerSpaceBecameAvailable:(id)arg1;
-(void)messagesSyncServiceServer:(id)arg1 didDeleteMessages:(id)arg2;
-(void)messagesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
-(void)messagesSyncServiceServerConnectivityChanged:(id)arg1;
-(void)messagesSyncServiceServer:(id)arg1 didUpdateMessagesStatus:(id)arg2;
-(void)messagesSyncServiceServer:(id)arg1 didRequestCompactMessages:(id)arg2;
-(void)messagesSyncServiceServer:(id)arg1 didRequestSendMessage:(id)arg2;
-(void)messagesSyncServiceServer:(id)arg1 didWarnMessagesFilteredOut:(id)arg2;

@end
