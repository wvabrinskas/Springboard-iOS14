/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TUCallProviderManagerDataSourceDelegate.h>

@protocol OS_dispatch_queue, TUCallProviderManagerDataSource;
@class NSObject, NSMapTable, NSDictionary, TUCallProvider, NSArray, NSString;

@interface TUCallProviderManager : NSObject <TUCallProviderManagerDataSourceDelegate> {

	unsigned long long _type;
	NSObject*<OS_dispatch_queue> _queue;
	id<TUCallProviderManagerDataSource> _dataSource;
	NSMapTable* _delegateToQueue;

}

@property (nonatomic,readonly) unsigned long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<TUCallProviderManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * providersByIdentifier; 
@property (nonatomic,retain) NSMapTable * delegateToQueue;                                  //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
@property (nonatomic,readonly) TUCallProvider * tinCanProvider; 
@property (nonatomic,readonly) TUCallProvider * defaultProvider; 
@property (nonatomic,readonly) TUCallProvider * emergencyProvider; 
@property (nonatomic,readonly) TUCallProvider * voicemailProvider; 
@property (nonatomic,readonly) TUCallProvider * telephonyProvider; 
@property (nonatomic,readonly) TUCallProvider * faceTimeProvider; 
@property (nonatomic,copy,readonly) NSArray * providers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)serviceForProvider:(id)arg1 video:(BOOL)arg2 ;
+(id)defaultProviders;
-(NSArray *)providers;
-(NSDictionary *)providersByIdentifier;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(NSMapTable *)delegateToQueue;
-(id)init;
-(TUCallProvider *)defaultProvider;
-(id)dialRequestForRecentCall:(id)arg1 ;
-(void)providersChangedForDataSource:(id)arg1 ;
-(id)providerForFavoritesEntryActionBundleIdentifier:(id)arg1 ;
-(NSString *)debugDescription;
-(id)providerForFavoritesEntry:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)providersPassingTest:(/*^block*/id)arg1 ;
-(id<TUCallProviderManagerDataSource>)dataSource;
-(id)providerWithIdentifier:(id)arg1 ;
-(void)setDelegateToQueue:(NSMapTable *)arg1 ;
-(void)launchAppForDialRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDataSource:(id)arg1 type:(unsigned long long)arg2 queue:(id)arg3 ;
-(unsigned long long)type;
-(id)providerWithService:(int)arg1 video:(BOOL*)arg2 ;
-(TUCallProvider *)emergencyProvider;
-(TUCallProvider *)telephonyProvider;
-(id)initWithLocalProviders;
-(TUCallProvider *)voicemailProvider;
-(id)initWithPairedHostDeviceProviders;
-(id)providerForRecentCall:(id)arg1 ;
-(void)donateUserIntentForProviderWithIdentifier:(id)arg1 ;
-(TUCallProvider *)faceTimeProvider;
-(TUCallProvider *)tinCanProvider;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
@end
