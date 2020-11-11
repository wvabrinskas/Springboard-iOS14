/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _TVRCRapportDeviceQueryDelegate;
@class _TVRCExpiringStore, RPCompanionLinkClient, NSMutableDictionary;

@interface _TVRCRapportDeviceQuery : NSObject {

	_TVRCExpiringStore* _expiringStore;
	RPCompanionLinkClient* _companionLinkClient;
	NSMutableDictionary* _wrapperToIdentifierMapping;
	NSMutableDictionary* _deviceRecords;
	BOOL _unpairedBLEDevicesReported;
	id<_TVRCRapportDeviceQueryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_TVRCRapportDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)start;
-(id<_TVRCRapportDeviceQueryDelegate>)delegate;
-(void)setDelegate:(id<_TVRCRapportDeviceQueryDelegate>)arg1 ;
-(void)stop;
-(void)dealloc;
-(void)_disconnectAllDevices;
-(BOOL)_shouldReportDevice:(id)arg1 ;
-(void)_deviceFound:(id)arg1 unpairedBLE:(BOOL)arg2 ;
-(void)_deviceLost:(id)arg1 ;
-(BOOL)_recordExistsForIDS:(id)arg1 ;
-(void)_updateRecordForIDS:(id)arg1 addTransportForFlag:(unsigned long long)arg2 ;
-(void)_updateRecordForIDS:(id)arg1 removeTransportForFlag:(unsigned long long)arg2 ;
-(unsigned long long)_transportForStatusFlag:(unsigned long long)arg1 ;
@end
