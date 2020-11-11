/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PSBillingPeriodSource;
@class PSDataUsageStatisticsCache, PSSpecifier;

@interface PSUITotalCellularUsageSubgroup : NSObject {

	id<PSBillingPeriodSource> _billingPeriodSource;
	PSDataUsageStatisticsCache* _statisticsCache;
	PSSpecifier* _totalUsageSpecifier;
	PSSpecifier* _totalRoamingUsageSpecifier;

}

@property (nonatomic,retain) PSDataUsageStatisticsCache * statisticsCache;                      //@synthesize statisticsCache=_statisticsCache - In the implementation block
@property (nonatomic,retain) PSSpecifier * totalUsageSpecifier;                                 //@synthesize totalUsageSpecifier=_totalUsageSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * totalRoamingUsageSpecifier;                          //@synthesize totalRoamingUsageSpecifier=_totalRoamingUsageSpecifier - In the implementation block
@property (assign,nonatomic,__weak) id<PSBillingPeriodSource> billingPeriodSource;              //@synthesize billingPeriodSource=_billingPeriodSource - In the implementation block
-(id)specifiers;
-(PSDataUsageStatisticsCache *)statisticsCache;
-(void)setStatisticsCache:(PSDataUsageStatisticsCache *)arg1 ;
-(id)initWithStatisticsCache:(id)arg1 andBillingPeriodSource:(id)arg2 ;
-(void)setBillingPeriodSource:(id<PSBillingPeriodSource>)arg1 ;
-(id<PSBillingPeriodSource>)billingPeriodSource;
-(id)totalDataUsageForSpecifier:(id)arg1 ;
-(id)totalRoamingDataUsageForSpecifier:(id)arg1 ;
-(id)totalBytesUsed;
-(id)totalRoamingBytesUsed;
-(PSSpecifier *)totalUsageSpecifier;
-(void)setTotalUsageSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)totalRoamingUsageSpecifier;
-(void)setTotalRoamingUsageSpecifier:(PSSpecifier *)arg1 ;
@end
