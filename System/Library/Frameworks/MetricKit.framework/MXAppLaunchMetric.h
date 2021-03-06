/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricKit/MXMetric.h>

@class MXHistogram;

@interface MXAppLaunchMetric : MXMetric {

	MXHistogram* _histogrammedTimeToFirstDraw;
	MXHistogram* _histogrammedApplicationResumeTime;

}

@property (readonly) MXHistogram * histogrammedTimeToFirstDraw;                    //@synthesize histogrammedTimeToFirstDraw=_histogrammedTimeToFirstDraw - In the implementation block
@property (readonly) MXHistogram * histogrammedApplicationResumeTime;              //@synthesize histogrammedApplicationResumeTime=_histogrammedApplicationResumeTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLaunchTimeData:(id)arg1 withResumeTimeData:(id)arg2 ;
-(MXHistogram *)histogrammedTimeToFirstDraw;
-(MXHistogram *)histogrammedApplicationResumeTime;
@end

