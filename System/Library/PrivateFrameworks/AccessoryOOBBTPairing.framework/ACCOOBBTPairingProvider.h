/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessoryOOBBTPairing.framework/AccessoryOOBBTPairing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACCOOBBTPairingProviderProtocol, ACCOOBBTPairingXPCServerProtocol;
@class NSString, NSXPCConnection, NSMutableDictionary;

@interface ACCOOBBTPairingProvider : NSObject {

	id<ACCOOBBTPairingProviderProtocol> _delegate;
	NSString* _providerUID;
	NSXPCConnection* _serverConnection;
	id<ACCOOBBTPairingXPCServerProtocol> _remoteObject;
	NSMutableDictionary* _accessories;

}

@property (nonatomic,retain) NSString * providerUID;                                           //@synthesize providerUID=_providerUID - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverConnection;                               //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) id<ACCOOBBTPairingXPCServerProtocol> remoteObject;                //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessories;                                //@synthesize accessories=_accessories - In the implementation block
@property (assign,nonatomic,__weak) id<ACCOOBBTPairingProviderProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ACCOOBBTPairingProviderProtocol>)delegate;
-(void)stopOOBBTPairing:(id)arg1 ;
-(NSXPCConnection *)serverConnection;
-(void)setDelegate:(id<ACCOOBBTPairingProviderProtocol>)arg1 ;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(NSMutableDictionary *)accessories;
-(void)startOOBBTPairing:(id)arg1 ;
-(id<ACCOOBBTPairingXPCServerProtocol>)remoteObject;
-(void)setRemoteObject:(id<ACCOOBBTPairingXPCServerProtocol>)arg1 ;
-(void)setAccessories:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(NSString *)providerUID;
-(void)setProviderUID:(NSString *)arg1 ;
-(void)connectToServer;
-(id)accessoryInfoDictionaryForLogging:(id)arg1 ;
-(void)requestLegacyConnectionIDForAccessoryUID:(id)arg1 ;
-(void)linkKeyInfo:(id)arg1 oobBtPairingUID:(id)arg2 linkKey:(id)arg3 deviceMacAddr:(id)arg4 ;
-(void)accessoryOOBBTPairingAttached:(id)arg1 accInfoDict:(id)arg2 ;
-(void)accessoryOOBBTPairingDetached:(id)arg1 ;
-(void)accessoryOOBBTPairingBTAccessoryInfo:(id)arg1 oobBtPairingUID:(id)arg2 accessoryMacAddr:(id)arg3 deviceClass:(unsigned)arg4 ;
-(void)accessoryOOBBTPairingCompletionStatus:(id)arg1 oobBtPairingUID:(id)arg2 result:(unsigned char)arg3 ;
-(void)legacyConnectionIDForAccessoryUID:(id)arg1 connectionID:(unsigned)arg2 ;
@end

