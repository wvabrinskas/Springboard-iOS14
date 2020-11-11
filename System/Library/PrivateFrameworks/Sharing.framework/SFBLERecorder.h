/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SFBLERecorderReplayDelegate;
@class NSMutableArray;

@interface SFBLERecorder : NSObject {

	NSMutableArray* _recordings;
	unsigned long long _replayIndex;
	long long _payloadType;
	id<SFBLERecorderReplayDelegate> _replayDelegate;

}

@property (nonatomic,readonly) long long payloadType;                                            //@synthesize payloadType=_payloadType - In the implementation block
@property (assign,nonatomic,__weak) id<SFBLERecorderReplayDelegate> replayDelegate;              //@synthesize replayDelegate=_replayDelegate - In the implementation block
-(long long)payloadType;
-(id<SFBLERecorderReplayDelegate>)replayDelegate;
-(id)initWithPayloadType:(long long)arg1 ;
-(id)initWithRecordingURL:(id)arg1 ;
-(BOOL)recordDevice:(id)arg1 data:(id)arg2 rssi:(id)arg3 info:(id)arg4 error:(id*)arg5 ;
-(BOOL)replayNextRecording;
-(void)setReplayDelegate:(id<SFBLERecorderReplayDelegate>)arg1 ;
-(BOOL)saveToDirectory:(id)arg1 ;
@end
