/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularClosedGaugeText : CLKComplicationTemplateGraphicCircular {

	CLKGaugeProvider* _gaugeProvider;
	CLKTextProvider* _centerTextProvider;

}

@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider;                  //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * centerTextProvider;              //@synthesize centerTextProvider=_centerTextProvider - In the implementation block
+(id)templateWithGaugeProvider:(id)arg1 centerTextProvider:(id)arg2 ;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(CLKTextProvider *)centerTextProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setCenterTextProvider:(CLKTextProvider *)arg1 ;
-(id)initWithGaugeProvider:(id)arg1 centerTextProvider:(id)arg2 ;
@end

