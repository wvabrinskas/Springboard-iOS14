/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPeerToPeer/WiFiAwareDatapathXPCDelegate.h>

@protocol OS_dispatch_queue, WiFiAwareDatapathXPC, WiFiAwareDataSessionDelegate;
@class NSXPCConnection, NSObject, NSNumber, WiFiMACAddress, WiFiAwareDiscoveryResult, WiFiAwarePublishDatapathServiceSpecificInfo, NSString, NSData;

@interface WiFiAwareDataSession : NSObject <WiFiAwareDatapathXPCDelegate> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _datapathID;
	WiFiMACAddress* _initiatorDataAddress;
	id<WiFiAwareDatapathXPC> _datapathProxy;
	unsigned _localInterfaceIndex;
	WiFiAwareDiscoveryResult* _discoveryResult;
	long long _serviceType;
	WiFiAwarePublishDatapathServiceSpecificInfo* _serviceSpecificInfo;
	NSString* _passphrase;
	NSData* _pmk;
	id<WiFiAwareDataSessionDelegate> _delegate;

}

@property (nonatomic,readonly) WiFiAwareDiscoveryResult * discoveryResult;                                     //@synthesize discoveryResult=_discoveryResult - In the implementation block
@property (nonatomic,readonly) long long serviceType;                                                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) WiFiAwarePublishDatapathServiceSpecificInfo * serviceSpecificInfo;              //@synthesize serviceSpecificInfo=_serviceSpecificInfo - In the implementation block
@property (nonatomic,readonly) NSString * passphrase;                                                          //@synthesize passphrase=_passphrase - In the implementation block
@property (nonatomic,readonly) NSData * pmk;                                                                   //@synthesize pmk=_pmk - In the implementation block
@property (assign,nonatomic,__weak) id<WiFiAwareDataSessionDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WiFiMACAddress * localDataAddress; 
@property (nonatomic,readonly) unsigned localInterfaceIndex;                                                   //@synthesize localInterfaceIndex=_localInterfaceIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isConnected;
-(void)start;
-(NSData *)pmk;
-(id<WiFiAwareDataSessionDelegate>)delegate;
-(NSString *)passphrase;
-(WiFiAwareDiscoveryResult *)discoveryResult;
-(long long)serviceType;
-(id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 ;
-(void)setDelegate:(id<WiFiAwareDataSessionDelegate>)arg1 ;
-(NSString *)description;
-(WiFiAwarePublishDatapathServiceSpecificInfo *)serviceSpecificInfo;
-(void)stop;
-(unsigned)localInterfaceIndex;
-(void)reportIssue:(id)arg1 ;
-(void)resetState;
-(void)dealloc;
-(id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 passphrase:(id)arg4 pmk:(id)arg5 ;
-(void)datapathStartedWithInstanceID:(unsigned char)arg1 initiatorDataAddress:(id)arg2 localInterfaceIndex:(unsigned)arg3 ;
-(void)datapathFailedToStartWithError:(long long)arg1 ;
-(void)datapathConfirmedForPeerDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2 ;
-(void)datapathReceivedControlDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2 onInterfaceIndex:(unsigned)arg3 ;
-(void)datapathTerminatedWithReason:(long long)arg1 ;
-(void)handleError;
-(void)startDatapathSync;
-(id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 passphrase:(id)arg4 ;
-(id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 pmk:(id)arg4 ;
-(WiFiMACAddress *)localDataAddress;
@end

