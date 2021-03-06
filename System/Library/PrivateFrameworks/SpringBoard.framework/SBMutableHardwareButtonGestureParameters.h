/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBHardwareButtonGestureParameters.h>

@interface SBMutableHardwareButtonGestureParameters : SBHardwareButtonGestureParameters {

	long long _maximumPressCount;
	double _longPressTimeInterval;
	double _multiplePressTimeInterval;

}

@property (assign,nonatomic) long long maximumPressCount;                   //@synthesize maximumPressCount=_maximumPressCount - In the implementation block
@property (assign,nonatomic) double longPressTimeInterval;                  //@synthesize longPressTimeInterval=_longPressTimeInterval - In the implementation block
@property (assign,nonatomic) double multiplePressTimeInterval;              //@synthesize multiplePressTimeInterval=_multiplePressTimeInterval - In the implementation block
-(double)longPressTimeInterval;
-(void)setMaximumPressCount:(long long)arg1 ;
-(long long)maximumPressCount;
-(double)multiplePressTimeInterval;
-(void)setLongPressTimeInterval:(double)arg1 ;
-(void)setMultiplePressTimeInterval:(double)arg1 ;
@end

