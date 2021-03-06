/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HKRPOxygenSaturationSessionClientInterface <NSObject>
@required
-(void)clientRemote_didSendFeedback:(unsigned long long)arg1;
-(void)clientRemote_didStartWithStartTime:(double)arg1 expectedDuration:(double)arg2;
-(void)clientRemote_didEndWithReason:(long long)arg1 saturation:(id)arg2 barometricPressure:(id)arg3 averageHeartRate:(id)arg4 averageHeartRateUUID:(id)arg5 error:(id)arg6;

@end

