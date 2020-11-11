/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSURL, NSString;


@protocol CAMMutableCaptureRequestPersistence <NSObject>
@property (assign,nonatomic) long long persistenceOptions; 
@property (assign,nonatomic) unsigned long long deferredPersistenceOptions; 
@property (assign,nonatomic) long long temporaryPersistenceOptions; 
@property (nonatomic,copy) NSURL * localDestinationURL; 
@property (nonatomic,copy) NSString * persistenceUUID; 
@property (assign,nonatomic) BOOL shouldExtractDiagnosticsFromMetadata; 
@property (assign,nonatomic) BOOL shouldPersistDiagnosticsToSidecar; 
@property (assign,nonatomic) BOOL shouldDelayRemotePersistence; 
@required
-(void)setPersistenceOptions:(long long)arg1;
-(void)setLocalDestinationURL:(id)arg1;
-(void)setShouldExtractDiagnosticsFromMetadata:(BOOL)arg1;
-(void)setDeferredPersistenceOptions:(unsigned long long)arg1;
-(NSURL *)localDestinationURL;
-(void)setPersistenceUUID:(id)arg1;
-(void)setShouldDelayRemotePersistence:(BOOL)arg1;
-(BOOL)shouldDelayRemotePersistence;
-(void)setTemporaryPersistenceOptions:(long long)arg1;
-(NSString *)persistenceUUID;
-(void)setShouldPersistDiagnosticsToSidecar:(BOOL)arg1;
-(long long)persistenceOptions;
-(long long)temporaryPersistenceOptions;
-(unsigned long long)deferredPersistenceOptions;
-(BOOL)shouldExtractDiagnosticsFromMetadata;
-(BOOL)shouldPersistDiagnosticsToSidecar;

@end
