/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RMSServiceProviderDelegate.h>
#import <libobjc.A.dylib/RMSDiscoverySession.h>

@protocol RMSDiscoverySessionDelegate;
@class Reachability, NSMutableSet, NSArray, NSString;

@interface RMSLocalDiscoverySession : NSObject <RMSServiceProviderDelegate, RMSDiscoverySession> {

	long long _discoveryTypes;
	Reachability* _reachability;
	NSMutableSet* _availableServices;
	NSArray* _providers;
	BOOL _networkAvailable;
	id<RMSDiscoverySessionDelegate> _delegate;
	NSArray* _pairedNetworkNames;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<RMSDiscoverySessionDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long discoveryTypes;                                       //@synthesize discoveryTypes=_discoveryTypes - In the implementation block
@property (nonatomic,readonly) NSArray * availableServices; 
@property (getter=isNetworkAvailable,nonatomic,readonly) BOOL networkAvailable;              //@synthesize networkAvailable=_networkAvailable - In the implementation block
@property (nonatomic,retain) NSArray * pairedNetworkNames;                                   //@synthesize pairedNetworkNames=_pairedNetworkNames - In the implementation block
-(id)init;
-(id<RMSDiscoverySessionDelegate>)delegate;
-(void)endDiscovery;
-(void)setDelegate:(id<RMSDiscoverySessionDelegate>)arg1 ;
-(BOOL)isNetworkAvailable;
-(void)beginDiscovery;
-(void)dealloc;
-(NSArray *)availableServices;
-(long long)discoveryTypes;
-(void)setDiscoveryTypes:(long long)arg1 ;
-(NSArray *)pairedNetworkNames;
-(void)setPairedNetworkNames:(NSArray *)arg1 ;
-(void)serviceProvider:(id)arg1 serviceDidBecomeAvailable:(id)arg2 ;
-(void)serviceProvider:(id)arg1 serviceDidBecomeUnavailable:(id)arg2 ;
-(void)_handleHSGroupIDDidChangeNotification:(id)arg1 ;
-(void)_handleReachabilityChangedNotification:(id)arg1 ;
-(void)_enableProviders;
-(void)_updateWifiAvailability;
-(id)_providerForDiscoveryType:(long long)arg1 ;
@end

