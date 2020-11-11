/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>

@protocol FCCoreConfigurationManager, FCBundleSubscriptionManagerType;
@class FCEndpointConnection, FCAsyncSerialQueue, NSString, FCFileCoordinatedNotificationDropbox, NSURL;

@interface FCNotificationsEndpointConnection : NSObject <FCCoreConfigurationObserving> {

	FCEndpointConnection* _endpointConnection;
	id<FCCoreConfigurationManager> _configurationManager;
	id<FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
	FCAsyncSerialQueue* _serialQueue;
	NSString* _deviceType;
	NSString* _deviceOSVersion;
	FCFileCoordinatedNotificationDropbox* _fileCoordinatedNotificationDropbox;
	NSURL* _baseURL;

}

@property (nonatomic,retain) FCEndpointConnection * endpointConnection;                                              //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;                                    //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,retain) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager;                          //@synthesize bundleSubscriptionManager=_bundleSubscriptionManager - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * serialQueue;                                                       //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,copy) NSString * deviceType;                                                                    //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,copy) NSString * deviceOSVersion;                                                               //@synthesize deviceOSVersion=_deviceOSVersion - In the implementation block
@property (nonatomic,retain) FCFileCoordinatedNotificationDropbox * fileCoordinatedNotificationDropbox;              //@synthesize fileCoordinatedNotificationDropbox=_fileCoordinatedNotificationDropbox - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                                        //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(FCAsyncSerialQueue *)serialQueue;
-(FCEndpointConnection *)endpointConnection;
-(void)setSerialQueue:(FCAsyncSerialQueue *)arg1 ;
-(NSString *)deviceType;
-(void)setDeviceType:(NSString *)arg1 ;
-(id)_notificationDataInDropbox;
-(id)initWithConfigurationManager:(id)arg1 bundleSubscriptionManager:(id)arg2 ;
-(void)unsubscribeNotificationsForChannelIDs:(id)arg1 userID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 callbackQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)_notificationEntitiyWithChannelIDs:(id)arg1 isPaid:(BOOL)arg2 paidBundleSubscriptionStatus:(unsigned long long)arg3 notificationType:(int)arg4 ;
-(void)updateBaseURL:(id)arg1 ;
-(FCFileCoordinatedNotificationDropbox *)fileCoordinatedNotificationDropbox;
-(id)_marketingSubscriptionRequestWithType:(int)arg1 action:(int)arg2 dsid:(id)arg3 ;
-(void)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 callbackQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)modifyMarketingSubscriptionWithType:(int)arg1 action:(int)arg2 dsid:(id)arg3 callbackQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_deviceInfoWithDeviceToken:(id)arg1 ;
-(void)setFileCoordinatedNotificationDropbox:(FCFileCoordinatedNotificationDropbox *)arg1 ;
-(id)initWithEndpointConnection:(id)arg1 configurationManager:(id)arg2 bundleSubscriptionManager:(id)arg3 ;
-(id)initWithBaseURLString:(id)arg1 ;
-(void)setEndpointConnection:(FCEndpointConnection *)arg1 ;
-(void)setBundleSubscriptionManager:(id<FCBundleSubscriptionManagerType>)arg1 ;
-(id<FCCoreConfigurationManager>)configurationManager;
-(NSString *)deviceOSVersion;
-(void)_updateNotificationDropboxDataWithBaseURL:(id)arg1 notificationUserID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 ;
-(int)_pbNotificationEntityPaidBundleSubscriptionStatusFromSubscriptionState:(unsigned long long)arg1 ;
-(void)configurationManager:(id)arg1 configurationDidChange:(id)arg2 ;
-(void)subscribeNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 callbackQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id<FCBundleSubscriptionManagerType>)bundleSubscriptionManager;
-(void)unregisterDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 callbackQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_pushNotifySubscriptionRequestWithChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 ;
-(void)setDeviceOSVersion:(NSString *)arg1 ;
-(void)registerDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 callbackQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_notificationEntitiesWithChannelIDs:(id)arg1 isPaid:(BOOL)arg2 paidBundleSubscriptionStatus:(unsigned long long)arg3 editorialChannelID:(id)arg4 ;
-(void)_sendNotificationsSubscriptionRequest:(id)arg1 pathComponent:(id)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
