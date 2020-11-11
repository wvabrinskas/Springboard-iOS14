/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _HDWorkoutCondenserBufferDatum : NSObject {

	unsigned char _UUIDBytes[16];
	BOOL _isSeries;
	double _startTime;
	double _endTime;
	double _value;

}

@property (nonatomic,readonly) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) double value;                  //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL isSeries;                 //@synthesize isSeries=_isSeries - In the implementation block
-(double)endTime;
-(id)init;
-(double)startTime;
-(id)description;
-(double)value;
-(BOOL)isSeries;
-(id)initWithStartTime:(double)arg1 endTime:(double)arg2 value:(double)arg3 UUIDBytes:(unsigned char)arg4 series:(BOOL)arg5 ;
-(BOOL)shouldReplaceDatum:(id)arg1 ;
@end
