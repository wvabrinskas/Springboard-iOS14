/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationDialView, UILabel, NTKWorldClockRichComplicationHandsBaseView, WorldClockCity, CLKClockTimerToken, UIColor;

@interface NTKWorldClockRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {

	SCD_Struct_NT22 _layoutConstants;
	NTKRichComplicationDialView* _dialView;
	UILabel* _cityNameLabel;
	NTKWorldClockRichComplicationHandsBaseView* _handsView;
	WorldClockCity* _city;
	CLKClockTimerToken* _clockTimerToken;
	BOOL _positionLabelNorthSide;
	UIColor* _daytimeBackgroundColor;
	UIColor* _daytimeHandsColor;
	UIColor* _daytimeHandsDotColor;
	UIColor* _nighttimeBackgroundColor;
	UIColor* _nighttimeHandsColor;
	UIColor* _nighttimeHandsDotColor;

}

@property (nonatomic,retain) UIColor * daytimeBackgroundColor;                //@synthesize daytimeBackgroundColor=_daytimeBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * daytimeHandsColor;                     //@synthesize daytimeHandsColor=_daytimeHandsColor - In the implementation block
@property (nonatomic,retain) UIColor * daytimeHandsDotColor;                  //@synthesize daytimeHandsDotColor=_daytimeHandsDotColor - In the implementation block
@property (nonatomic,retain) UIColor * nighttimeBackgroundColor;              //@synthesize nighttimeBackgroundColor=_nighttimeBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * nighttimeHandsColor;                   //@synthesize nighttimeHandsColor=_nighttimeHandsColor - In the implementation block
@property (nonatomic,retain) UIColor * nighttimeHandsDotColor;                //@synthesize nighttimeHandsDotColor=_nighttimeHandsDotColor - In the implementation block
-(void)setPaused:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)_updateUI;
-(void)dealloc;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)_applyPausedUpdate;
-(void)_startClockUpdates;
-(void)_stopClockUpdates;
-(long long)tritiumUpdateMode;
-(BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)arg1 ;
-(void)makeBackgroundTransparent;
-(UIColor *)daytimeHandsColor;
-(BOOL)_shouldUseDaytimeColoring;
-(UIColor *)daytimeBackgroundColor;
-(UIColor *)daytimeHandsDotColor;
-(UIColor *)nighttimeBackgroundColor;
-(UIColor *)nighttimeHandsColor;
-(UIColor *)nighttimeHandsDotColor;
-(void)setDaytimeBackgroundColor:(UIColor *)arg1 ;
-(void)setDaytimeHandsColor:(UIColor *)arg1 ;
-(void)setDaytimeHandsDotColor:(UIColor *)arg1 ;
-(void)setNighttimeBackgroundColor:(UIColor *)arg1 ;
-(void)setNighttimeHandsColor:(UIColor *)arg1 ;
-(void)setNighttimeHandsDotColor:(UIColor *)arg1 ;
@end

