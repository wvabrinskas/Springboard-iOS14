/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatistics.h>

@interface _UIStatisticsDistribution : _UIStatistics
-(void)cancelTimingForObject:(id)arg1 ;
-(void)recordDistributionValue:(double)arg1 ;
-(void)recordTimingForObject:(id)arg1 ;
-(void)resetDistributionToValue:(double)arg1 ;
-(void)startTimingForObject:(id)arg1 ;
-(void)resetDistribution;
-(BOOL)isTimingForObject:(id)arg1 ;
@end
