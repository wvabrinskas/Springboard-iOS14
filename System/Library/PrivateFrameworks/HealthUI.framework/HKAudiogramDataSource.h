/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>

@class HKGraphSeriesDataBlock;

@interface HKAudiogramDataSource : HKGraphSeriesDataSource {

	HKGraphSeriesDataBlock* _dataBlock;

}

@property (nonatomic,readonly) HKGraphSeriesDataBlock * dataBlock;              //@synthesize dataBlock=_dataBlock - In the implementation block
-(id)cachedBlockForPath:(SCD_Struct_HK1)arg1 context:(id)arg2 ;
-(HKGraphSeriesDataBlock *)dataBlock;
-(SCD_Struct_HK1)blockPathForX:(id)arg1 zoom:(long long)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK1)arg1 toPath:(SCD_Struct_HK1)arg2 priorityDelegate:(id)arg3 ;
-(id)_chartPointsFromSensitivityData:(id)arg1 leftEarSeries:(BOOL)arg2 ;
-(id)_flatPointsFromSensitivityData:(id)arg1 leftEarSeries:(BOOL)arg2 ;
-(id)initWithSensitivityData:(id)arg1 forLeftEar:(BOOL)arg2 ;
-(id)initWithFlatSensitivityData:(id)arg1 forLeftEar:(BOOL)arg2 ;
@end

