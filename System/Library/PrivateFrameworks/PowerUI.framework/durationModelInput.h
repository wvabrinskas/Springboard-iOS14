/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface durationModelInput : NSObject <MLFeatureProvider> {

	double _plugin_battery_level;
	double _time_from_plugin;
	double _med_dur_1;
	double _med_dur_2;
	double _med_dur_4;
	double _med_dur_8;
	double _med_dur_16;
	double _med_dur_24;
	double _cnt_dur_1;
	double _cnt_dur_2;
	double _cnt_dur_4;
	double _cnt_dur_8;
	double _cnt_dur_16;
	double _cnt_dur_24;
	double _std_dur_1;
	double _std_dur_2;
	double _std_dur_4;
	double _std_dur_8;
	double _std_dur_16;
	double _std_dur_24;

}

@property (assign,nonatomic) double plugin_battery_level;              //@synthesize plugin_battery_level=_plugin_battery_level - In the implementation block
@property (assign,nonatomic) double time_from_plugin;                  //@synthesize time_from_plugin=_time_from_plugin - In the implementation block
@property (assign,nonatomic) double med_dur_1;                         //@synthesize med_dur_1=_med_dur_1 - In the implementation block
@property (assign,nonatomic) double med_dur_2;                         //@synthesize med_dur_2=_med_dur_2 - In the implementation block
@property (assign,nonatomic) double med_dur_4;                         //@synthesize med_dur_4=_med_dur_4 - In the implementation block
@property (assign,nonatomic) double med_dur_8;                         //@synthesize med_dur_8=_med_dur_8 - In the implementation block
@property (assign,nonatomic) double med_dur_16;                        //@synthesize med_dur_16=_med_dur_16 - In the implementation block
@property (assign,nonatomic) double med_dur_24;                        //@synthesize med_dur_24=_med_dur_24 - In the implementation block
@property (assign,nonatomic) double cnt_dur_1;                         //@synthesize cnt_dur_1=_cnt_dur_1 - In the implementation block
@property (assign,nonatomic) double cnt_dur_2;                         //@synthesize cnt_dur_2=_cnt_dur_2 - In the implementation block
@property (assign,nonatomic) double cnt_dur_4;                         //@synthesize cnt_dur_4=_cnt_dur_4 - In the implementation block
@property (assign,nonatomic) double cnt_dur_8;                         //@synthesize cnt_dur_8=_cnt_dur_8 - In the implementation block
@property (assign,nonatomic) double cnt_dur_16;                        //@synthesize cnt_dur_16=_cnt_dur_16 - In the implementation block
@property (assign,nonatomic) double cnt_dur_24;                        //@synthesize cnt_dur_24=_cnt_dur_24 - In the implementation block
@property (assign,nonatomic) double std_dur_1;                         //@synthesize std_dur_1=_std_dur_1 - In the implementation block
@property (assign,nonatomic) double std_dur_2;                         //@synthesize std_dur_2=_std_dur_2 - In the implementation block
@property (assign,nonatomic) double std_dur_4;                         //@synthesize std_dur_4=_std_dur_4 - In the implementation block
@property (assign,nonatomic) double std_dur_8;                         //@synthesize std_dur_8=_std_dur_8 - In the implementation block
@property (assign,nonatomic) double std_dur_16;                        //@synthesize std_dur_16=_std_dur_16 - In the implementation block
@property (assign,nonatomic) double std_dur_24;                        //@synthesize std_dur_24=_std_dur_24 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(id)initWithPlugin_battery_level:(double)arg1 time_from_plugin:(double)arg2 med_dur_1:(double)arg3 med_dur_2:(double)arg4 med_dur_4:(double)arg5 med_dur_8:(double)arg6 med_dur_16:(double)arg7 med_dur_24:(double)arg8 cnt_dur_1:(double)arg9 cnt_dur_2:(double)arg10 cnt_dur_4:(double)arg11 cnt_dur_8:(double)arg12 cnt_dur_16:(double)arg13 cnt_dur_24:(double)arg14 std_dur_1:(double)arg15 std_dur_2:(double)arg16 std_dur_4:(double)arg17 std_dur_8:(double)arg18 std_dur_16:(double)arg19 std_dur_24:(double)arg20 ;
-(double)plugin_battery_level;
-(void)setPlugin_battery_level:(double)arg1 ;
-(double)time_from_plugin;
-(void)setTime_from_plugin:(double)arg1 ;
-(double)med_dur_1;
-(void)setMed_dur_1:(double)arg1 ;
-(double)med_dur_2;
-(void)setMed_dur_2:(double)arg1 ;
-(double)med_dur_4;
-(void)setMed_dur_4:(double)arg1 ;
-(double)med_dur_8;
-(void)setMed_dur_8:(double)arg1 ;
-(double)med_dur_16;
-(void)setMed_dur_16:(double)arg1 ;
-(double)med_dur_24;
-(void)setMed_dur_24:(double)arg1 ;
-(double)cnt_dur_1;
-(void)setCnt_dur_1:(double)arg1 ;
-(double)cnt_dur_2;
-(void)setCnt_dur_2:(double)arg1 ;
-(double)cnt_dur_4;
-(void)setCnt_dur_4:(double)arg1 ;
-(double)cnt_dur_8;
-(void)setCnt_dur_8:(double)arg1 ;
-(double)cnt_dur_16;
-(void)setCnt_dur_16:(double)arg1 ;
-(double)cnt_dur_24;
-(void)setCnt_dur_24:(double)arg1 ;
-(double)std_dur_1;
-(void)setStd_dur_1:(double)arg1 ;
-(double)std_dur_2;
-(void)setStd_dur_2:(double)arg1 ;
-(double)std_dur_4;
-(void)setStd_dur_4:(double)arg1 ;
-(double)std_dur_8;
-(void)setStd_dur_8:(double)arg1 ;
-(double)std_dur_16;
-(void)setStd_dur_16:(double)arg1 ;
-(double)std_dur_24;
-(void)setStd_dur_24:(double)arg1 ;
@end
