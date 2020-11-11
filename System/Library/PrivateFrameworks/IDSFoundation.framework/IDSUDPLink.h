/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSLink.h>

@protocol IDSLinkDelegate;
@class IDSSockAddrWrapper, NSDictionary, NSString, NSIndexSet;

@interface IDSUDPLink : NSObject <IDSLink> {

	int _socket;
	int _cellularSocket;
	int _addressFamily;
	IDSSockAddrWrapper* _localAddress;
	IDSSockAddrWrapper* _destinationAddress;
	BOOL _hasFixedDestination;
	NSDictionary* _destinationAddressToDeviceIDMap;
	unsigned short _port;
	unsigned short _cellularPort;
	BOOL _wantsAWDL;
	BOOL _wantsWiFi;
	BOOL _wantsCellular;
	BOOL _useDefaultInterfaceOnly;
	BOOL _allowsLinkLocal;
	BOOL _skipTransportThread;
	BOOL _needToConnect;
	BOOL _hasTemporaryError;
	BOOL _isInvalidated;
	double _lastDestinationSent;
	double _lastDestinationReceived;
	unsigned long long _state;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	double _previousReportTime;
	NSString* _cbuuid;
	NSString* _deviceUniqueID;
	id<IDSLinkDelegate> _delegate;
	id<IDSLinkDelegate> _alternateDelegate;
	NSIndexSet* _cellularInterfaceIndices;
	BOOL _wifiAssistEnabled;

}

@property (assign,nonatomic) unsigned short port;                                  //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) unsigned short cellularPort;                          //@synthesize cellularPort=_cellularPort - In the implementation block
@property (nonatomic,readonly) int socket;                                         //@synthesize socket=_socket - In the implementation block
@property (nonatomic,readonly) int cellularSocket;                                 //@synthesize cellularSocket=_cellularSocket - In the implementation block
@property (assign,nonatomic) BOOL useDefaultInterfaceOnly;                         //@synthesize useDefaultInterfaceOnly=_useDefaultInterfaceOnly - In the implementation block
@property (nonatomic,readonly) BOOL isInvalidated;                                 //@synthesize isInvalidated=_isInvalidated - In the implementation block
@property (assign,nonatomic) double lastDestinationSent;                           //@synthesize lastDestinationSent=_lastDestinationSent - In the implementation block
@property (nonatomic,readonly) double lastDestinationReceived;                     //@synthesize lastDestinationReceived=_lastDestinationReceived - In the implementation block
@property (assign,nonatomic) BOOL allowsLinkLocal;                                 //@synthesize allowsLinkLocal=_allowsLinkLocal - In the implementation block
@property (assign,nonatomic) BOOL skipTransportThread;                             //@synthesize skipTransportThread=_skipTransportThread - In the implementation block
@property (nonatomic,retain) NSIndexSet * cellularInterfaceIndices;                //@synthesize cellularInterfaceIndices=_cellularInterfaceIndices - In the implementation block
@property (assign,nonatomic) BOOL wifiAssistEnabled;                               //@synthesize wifiAssistEnabled=_wifiAssistEnabled - In the implementation block
@property (retain) NSString * cbuuid;                                              //@synthesize cbuuid=_cbuuid - In the implementation block
@property (retain) NSString * deviceUniqueID;                                      //@synthesize deviceUniqueID=_deviceUniqueID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long headerOverhead; 
@property (__weak) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<IDSLinkDelegate> alternateDelegate;                          //@synthesize alternateDelegate=_alternateDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned short)port;
-(BOOL)setTrafficClass:(int)arg1 ;
-(id<IDSLinkDelegate>)delegate;
-(int)socket;
-(NSString *)cbuuid;
-(unsigned long long)state;
-(id)copyCurrentNetworkInterfaces;
-(void)setPort:(unsigned short)arg1 ;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(void)setCbuuid:(NSString *)arg1 ;
-(unsigned long long)sendPacketBufferArray:(/*function pointer*/void**)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(BOOL)isInvalidated;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID24*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2 ;
-(id)copyLinkStatsDict;
-(NSString *)deviceUniqueID;
-(void)setDeviceUniqueID:(NSString *)arg1 ;
-(NSString *)linkTypeString;
-(unsigned long long)headerOverhead;
-(id<IDSLinkDelegate>)alternateDelegate;
-(void)setAlternateDelegate:(id<IDSLinkDelegate>)arg1 ;
-(void)setWiFiAssistState:(BOOL)arg1 ;
-(NSIndexSet *)cellularInterfaceIndices;
-(BOOL)wifiAssistEnabled;
-(void)setCellularInterfaceIndices:(NSIndexSet *)arg1 ;
-(void)setWifiAssistEnabled:(BOOL)arg1 ;
-(unsigned short)cellularPort;
-(BOOL)_isInterfaceIndexCellular:(int)arg1 ;
-(unsigned long long)_sendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)_processIncomingPacketOnSocket:(int)arg1 ;
-(unsigned long long)_sendBytes:(const void*)arg1 length:(unsigned long long)arg2 destinationAddress:(const sockaddr*)arg3 ;
-(int)_findSocketForInterfaceIndex:(int)arg1 ;
-(BOOL)setDestinationAddress:(id)arg1 isFixedDestination:(BOOL)arg2 fromAddress:(id)arg3 ;
-(int)_createNewUDPSocketWithIPVersion:(unsigned long long)arg1 localPort:(unsigned short*)arg2 wantsAWDL:(BOOL)arg3 clientUUID:(unsigned char)arg4 ;
-(void)_processIncomingPacket;
-(void)_processIncomingCellularPacket;
-(BOOL)_setTrafficClassOnSocket:(int)arg1 trafficClassValue:(int)arg2 ;
-(id)_createNetworkInterfaceArrayWithIPVersion:(unsigned long long)arg1 wantsAWDL:(BOOL)arg2 wantsWiFi:(BOOL)arg3 wantsCellular:(BOOL)arg4 allowsLinkLocal:(BOOL)arg5 useDefaultInterfaceOnly:(BOOL)arg6 defaultPairedDevice:(BOOL)arg7 ;
-(void)reconnectWithLocalAddress:(id)arg1 ;
-(unsigned long long)_sendBytesArray:(const void*)arg1 lengthArray:(unsigned long long*)arg2 arraySize:(int)arg3 localInterfaceIndex:(int)arg4 localAddress:(const sockaddr*)arg5 destinationAddress:(const sockaddr*)arg6 trafficClass:(unsigned short)arg7 ;
-(BOOL)setDestinationAddressToDeviceIDMap:(id)arg1 ;
-(BOOL)useDefaultInterfaceOnly;
-(BOOL)setDestinationAddress:(id)arg1 localIfIndex:(unsigned)arg2 isFixedDestination:(BOOL)arg3 fromAddress:(id)arg4 ;
-(id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(BOOL)arg2 wantsWiFi:(BOOL)arg3 wantsCellular:(BOOL)arg4 ;
-(void)setUseDefaultInterfaceOnly:(BOOL)arg1 ;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID24*)arg1 destination:(id)arg2 toDeviceID:(id)arg3 ;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID24*)arg1 sourceInterface:(id)arg2 destination:(id)arg3 toDeviceID:(id)arg4 ;
-(double)lastDestinationSent;
-(void)setLastDestinationSent:(double)arg1 ;
-(BOOL)skipTransportThread;
-(double)lastDestinationReceived;
-(void)setSkipTransportThread:(BOOL)arg1 ;
-(int)cellularSocket;
-(BOOL)allowsLinkLocal;
-(void)setAllowsLinkLocal:(BOOL)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(void)setCellularPort:(unsigned short)arg1 ;
-(id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(BOOL)arg2 wantsWiFi:(BOOL)arg3 wantsCellular:(BOOL)arg4 clientUUID:(unsigned char)arg5 ;
-(void)removeSocket;
@end
