/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FIUIChartDataSetDataSource;
@class NSArray;

@interface FIUIChartDataSet : NSObject {

	NSArray* _points;
	NSArray* _labels;
	id<FIUIChartDataSetDataSource> _dataSource;
	long long _tag;

}

@property (assign,nonatomic,__weak) id<FIUIChartDataSetDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long tag;                                                 //@synthesize tag=_tag - In the implementation block
-(void)setTag:(long long)arg1 ;
-(void)setDataSource:(id<FIUIChartDataSetDataSource>)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(id)description;
-(id<FIUIChartDataSetDataSource>)dataSource;
-(long long)tag;
-(id)points;
-(void)reloadData;
-(id)maxXValue;
-(id)minXValue;
-(id)labelsForSet;
@end

