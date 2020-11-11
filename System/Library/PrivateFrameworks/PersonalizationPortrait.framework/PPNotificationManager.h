/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class _PASLock, NSObject, NSNotificationCenter;

@interface PPNotificationManager : NSObject {

	_PASLock* _lockedData;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSNotificationCenter* _notificationCenter;

}
+(id)sharedInstance;
+(void)addMeCardObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addPortraitChangeObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addSuggestionsObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addEventKitObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addContactsObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)addPortraitInvalidationObserverForLifetimeOfObject:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)new;
-(void)stopListening;
-(void)addPortraitInvalidationBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)addMeCardChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)addEventKitChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(id)init;
-(void)addSuggestionsChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)simulatePortraitChange;
-(void)_registerForEventKitChangeTrackingWithGuardedData:(id)arg1 ;
-(void)simulatePortraitInvalidation;
-(void)addPortraitChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(id)initWithQueueName:(const char*)arg1 notificationCenter:(id)arg2 ;
-(void)waitOnQueueToDrain;
-(void)addContactsChangeBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(void)dealloc;
@end
