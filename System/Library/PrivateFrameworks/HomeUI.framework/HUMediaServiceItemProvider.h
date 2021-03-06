/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItemProvider.h>
#import <libobjc.A.dylib/HFMediaServiceManagerObserver.h>

@protocol HUMediaServiceItemProviderDelegate;
@class NSMutableSet, HMHome, NSString;

@interface HUMediaServiceItemProvider : HFItemProvider <HFMediaServiceManagerObserver> {

	NSMutableSet* _items;
	HMHome* _home;
	id<HUMediaServiceItemProviderDelegate> _delegate;

}

@property (nonatomic,readonly) NSMutableSet * items;                                              //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                     //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) id<HUMediaServiceItemProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)itemComparator;
-(id<HUMediaServiceItemProviderDelegate>)delegate;
-(void)setDelegate:(id<HUMediaServiceItemProviderDelegate>)arg1 ;
-(NSMutableSet *)items;
-(HMHome *)home;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;
-(void)mediaServicesDidUpdate:(id)arg1 ;
-(void)mediaServiceRemoved:(id)arg1 ;
-(void)defaultMediaServiceDidUpdate:(id)arg1 ;
-(void)mediaServiceDidUpdate:(id)arg1 ;
-(id)reloadItems;
-(id)initWithHome:(id)arg1 delegate:(id)arg2 ;
-(id)_fetchMediaServicesFuture;
-(void)_notifyMediaServicesUpdated;
@end

