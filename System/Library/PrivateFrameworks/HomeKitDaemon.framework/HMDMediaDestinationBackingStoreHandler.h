/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreHandler.h>

@protocol HMDMediaDestinationBackingStoreHandlerDelegate;
@class HMFUnfairLock, HMMutableMediaDestination, HMMediaDestination;

@interface HMDMediaDestinationBackingStoreHandler : HMDBackingStoreHandler {

	HMFUnfairLock* _lock;
	HMMutableMediaDestination* _destination;
	id<HMDMediaDestinationBackingStoreHandlerDelegate> _delegate;

}

@property (__weak) id<HMDMediaDestinationBackingStoreHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) HMMediaDestination * destination; 
+(id)logCategory;
+(id)backingStoreObjectForMediaDestination:(id)arg1 ;
-(id<HMDMediaDestinationBackingStoreHandlerDelegate>)delegate;
-(HMMediaDestination *)destination;
-(void)setDelegate:(id<HMDMediaDestinationBackingStoreHandlerDelegate>)arg1 ;
-(void)setAudioGroupIdentifier:(id)arg1 ;
-(void)setSupportedOptions:(unsigned long long)arg1 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)initWithDestination:(id)arg1 backingStore:(id)arg2 delegate:(id)arg3 ;
-(void)updateSupportedOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateAudioGroupIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

