/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HKSeriesDelegate
@required
-(UIEdgeInsets*)virtualMarginInsets;
-(BOOL)measuringStartupTime;
-(BOOL)seriesDrawingDuringAutoscale;
-(BOOL)seriesDrawingDuringScrolling;
-(void)seriesDidInvalidatePaths:(id)arg1 newDataArrived:(BOOL)arg2;
-(BOOL)seriesDrawingDuringTiling;
-(CGPoint*)seriesContentOffset;
-(CGRect*)screenRectForSeries:(id)arg1;
-(void)autoscaleStateChangedForSeries:(id)arg1;
-(BOOL)rangeIsVisible:(id)arg1;
-(void)nonemptyDrawComplete;

@end

