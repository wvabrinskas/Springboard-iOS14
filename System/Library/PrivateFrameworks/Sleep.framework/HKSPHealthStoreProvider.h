/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HKHealthStore, HKSleepHealthStore;

@interface HKSPHealthStoreProvider : NSObject {

	HKHealthStore* _healthStore;
	HKSleepHealthStore* _sleepHealthStore;

}

@property (nonatomic,readonly) HKSleepHealthStore * sleepHealthStore;              //@synthesize sleepHealthStore=_sleepHealthStore - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                        //@synthesize healthStore=_healthStore - In the implementation block
+(id)_initializedLocalDeviceHealthStore;
-(id)initWithSleepHealthStore:(id)arg1 healthStore:(id)arg2 ;
-(id)initWithLocalDeviceHealthStore;
-(HKHealthStore *)healthStore;
-(HKSleepHealthStore *)sleepHealthStore;
@end
