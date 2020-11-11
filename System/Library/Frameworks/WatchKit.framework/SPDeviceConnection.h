/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchKit/WatchKit-Structs.h>
#import <libobjc.A.dylib/SPLocalApplicationProtocol.h>

@protocol SPDeviceConnectionDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSHashTable, NSObject, NSString;

@interface SPDeviceConnection : NSObject <SPLocalApplicationProtocol> {

	id<SPDeviceConnectionDelegate> _delegate;
	NSXPCConnection* _serverConnection;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _connectionQueue;

}

@property (retain) NSXPCConnection * serverConnection;                                    //@synthesize serverConnection=_serverConnection - In the implementation block
@property (retain) NSHashTable * observers;                                               //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (assign,nonatomic,__weak) id<SPDeviceConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedDeviceConnection;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withErrorCompletion:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)fetchProvisioningProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)getAlwaysInstallForPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)installApplication:(id)arg1 completionWithError:(/*^block*/id)arg2 ;
-(void)removeProvisioningProfileWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<SPDeviceConnectionDelegate>)delegate;
-(void)getAlwaysInstallWithCompletion:(/*^block*/id)arg1 ;
-(NSHashTable *)observers;
-(void)installProvisioningProfileWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLogLevel:(id)arg1 ;
-(void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSXPCConnection *)serverConnection;
-(void)installApplication:(id)arg1 onPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)activeComplicationsWithErrorCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<SPDeviceConnectionDelegate>)arg1 ;
-(void)cancelPendingInstallations;
-(void)installProvisioningProfileWithURL:(id)arg1 onPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchInstalledApplicationsWithErrorCompletion:(/*^block*/id)arg1 ;
-(void)setAlwaysInstall:(id)arg1 forDevice:(id)arg2 ;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(void)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addObserver:(id)arg1 ;
-(void)fetchInstalledComplicationsWithErrorCompletion:(/*^block*/id)arg1 ;
-(void)fetchInfoForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchProvisioningProfilesForPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAlwaysInstall:(id)arg1 ;
-(void)fetchInstalledComplicationsForPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 forPairedDevice:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completionWithError:(/*^block*/id)arg3 ;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeProvisioningProfileWithID:(id)arg1 fromPairedDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchInstalledApplicationsForPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)activeComplicationsForPairedDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installAllApplications;
-(void)createXPCConnectionIfNecessary;
-(void)fetchInstalledApplicationsWithCompletion:(/*^block*/id)arg1 ;
-(void)activeComplicationsWithCompletion:(/*^block*/id)arg1 ;
-(void)hideUserNotification;
-(void)wakeExtensionForWatchApp:(id)arg1 ;
-(void)receiveData:(id)arg1 ;
-(void)invalidateXPCConnection;
-(long long)appInstallStateForAppConduitInstallState:(long long)arg1 ;
-(id)connectionProxy:(/*^block*/id)arg1 caller:(const char*)arg2 ;
-(void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completionWithError:(/*^block*/id)arg4 ;
-(void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchInstalledComplicationsWithCompletion:(/*^block*/id)arg1 ;
-(void)installApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchInfoForApplicationWithContainingApplicationBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showUserNotification:(long long)arg1 bundleID:(id)arg2 ;
-(void)showUserNotification:(long long)arg1 applicationName:(id)arg2 extensionBundleID:(id)arg3 ;
-(id)localeForUserNotification;
-(void)_enumerateObserversSafely:(/*^block*/id)arg1 ;
-(void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
