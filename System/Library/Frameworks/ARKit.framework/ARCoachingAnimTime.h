/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ARCoachingAnimTime : NSObject {

	double _absoluteTime;
	double _startTime;
	double _oscillatingTime;
	double _delta;
	double _deltaPercentage;
	double _duration;

}

@property (assign,nonatomic) double absoluteTime; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double oscillatingTime; 
@property (nonatomic,readonly) double delta; 
@property (nonatomic,readonly) double deltaPercentage; 
-(void)setDuration:(double)arg1 ;
-(id)init;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)duration;
-(double)absoluteTime;
-(double)delta;
-(void)setAbsoluteTime:(double)arg1 ;
-(double)oscillatingTime;
-(double)deltaPercentage;
@end
