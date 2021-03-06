/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AKAnisetteServiceProtocol;
@class NSXPCConnection, NSLock, NSXPCListenerEndpoint, AKDevice;

@interface AKAnisetteProvisioningController : NSObject {

	NSXPCConnection* _anisetteServiceConnection;
	NSLock* _connectionLock;
	NSXPCListenerEndpoint* _daemonXPCEndpoint;
	AKDevice* _targetDevice;
	id<AKAnisetteServiceProtocol> _anisetteDataProvider;

}

@property (nonatomic,retain) AKDevice * targetDevice;                                         //@synthesize targetDevice=_targetDevice - In the implementation block
@property (nonatomic,retain) id<AKAnisetteServiceProtocol> anisetteDataProvider;              //@synthesize anisetteDataProvider=_anisetteDataProvider - In the implementation block
-(void)setAnisetteDataProvider:(id<AKAnisetteServiceProtocol>)arg1 ;
-(AKDevice *)targetDevice;
-(id<AKAnisetteServiceProtocol>)anisetteDataProvider;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(id)anisetteDataWithError:(id*)arg1 ;
-(void)syncWithSIMData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)provisionWithCompletion:(/*^block*/id)arg1 ;
-(void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_anisetteServiceConnection;
-(id)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 error:(id*)arg2 ;
-(void)anisetteDataWithCompletion:(/*^block*/id)arg1 ;
-(void)anisetteDataForURLRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initForDevice:(id)arg1 provider:(id)arg2 ;
-(void)eraseWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(void)setTargetDevice:(AKDevice *)arg1 ;
-(id)anisetteDataForURLRequest:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)fetchAttestationForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

