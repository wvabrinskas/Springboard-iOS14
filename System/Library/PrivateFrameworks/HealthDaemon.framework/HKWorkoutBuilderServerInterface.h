/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HKWorkoutBuilderServerInterface <NSObject>
@required
-(void)remote_setTargetConstructionState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 completion:(/*^block*/id)arg4;
-(void)remote_addSamples:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_addWorkoutEvents:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_addMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_removeMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_updateDevice:(id)arg1;
-(void)remote_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(id)arg2;
-(void)remote_setStatisticsComputationMethod:(long long)arg1 forType:(id)arg2;
-(void)remote_setShouldCollectEvents:(BOOL)arg1;
-(void)remote_addDataSourcesWithIdentifiers:(id)arg1;
-(void)remote_removeDataSourcesWithIdentifiers:(id)arg1;
-(void)remote_recoverWithCompletion:(/*^block*/id)arg1;

@end

