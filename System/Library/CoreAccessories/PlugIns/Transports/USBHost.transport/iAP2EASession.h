/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Transports/USBHost.transport/USBHost
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface iAP2EASession : NSObject {

	NSString* _endpointUUID;
	NSString* _eaSessionUUID;
	int _listenSock;
	int _sock;
	BOOL _openPipeToAppAfterAccept;
	BOOL _openPipeFromAppAfterAccept;
	BOOL _isWirelessSession;

}
-(id)init;
-(id)description;
-(void)dealloc;
-(void)shuttingDownSession;
-(BOOL)openPipeToApp;
-(BOOL)openPipeFromApp;
-(void)_openPipeToApp;
-(void)_openPipeFromApp;
-(id)initWithProtocol:(id)arg1 endpointUUID:(id)arg2 eaSessionUUID:(id)arg3 ;
-(BOOL)closeDataPipes;
-(int)_createListenSocket;
@end
