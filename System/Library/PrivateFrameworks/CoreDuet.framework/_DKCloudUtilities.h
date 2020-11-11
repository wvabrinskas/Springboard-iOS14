/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, _DKThrottledActivity;

@interface _DKCloudUtilities : NSObject {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	_DKThrottledActivity* _activityThrottler;
	BOOL _supportsDeviceToDeviceEncryption;
	BOOL _isSingleDevice;

}

@property (nonatomic,readonly) BOOL isSingleDevice; 
@property (nonatomic,readonly) BOOL isCloudSyncAvailable; 
@property (nonatomic,readonly) BOOL isSiriCloudSyncEnabled; 
@property (nonatomic,readonly) BOOL supportsDeviceToDeviceEncryption; 
+(BOOL)isCloudKitEnabled;
+(id)sharedInstance;
+(BOOL)isSyncAvailableAndEnabled;
+(BOOL)isSyncAvailableAndEnabledWithVerboseLogging:(BOOL)arg1 ;
+(id)containerIdentifier;
+(void)setUnitTesting:(BOOL)arg1 ;
+(void)setCloudKitEnabled:(BOOL)arg1 ;
+(BOOL)isUnitTesting;
-(void)deleteRemoteStateWithReply:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)isSiriCloudSyncEnabled;
-(BOOL)supportsDeviceToDeviceEncryption;
-(void)setCloudSyncAvailable:(BOOL)arg1 ;
-(BOOL)isCloudSyncAvailable;
-(BOOL)isSingleDevice;
-(void)dealloc;
-(void)_accountDidChange:(id)arg1 ;
@end
