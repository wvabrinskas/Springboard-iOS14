/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CACTouchEventObserverDelegate;
@class AXEventProcessor, AXMutableReplayableGesture;

@interface CACTouchEventObserver : NSObject {

	AXEventProcessor* _eventProcessor;
	BOOL _areTouchesDown;
	id<CACTouchEventObserverDelegate> _delegate;
	AXMutableReplayableGesture* _gestureBeingRecorded;
	double _startTimeForGestureBeingRecorded;

}

@property (nonatomic,retain) AXMutableReplayableGesture * gestureBeingRecorded;              //@synthesize gestureBeingRecorded=_gestureBeingRecorded - In the implementation block
@property (assign,nonatomic) double startTimeForGestureBeingRecorded;                        //@synthesize startTimeForGestureBeingRecorded=_startTimeForGestureBeingRecorded - In the implementation block
@property (assign,nonatomic,__weak) id<CACTouchEventObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)beginObserving;
-(id)init;
-(id<CACTouchEventObserverDelegate>)delegate;
-(void)endObserving;
-(void)setDelegate:(id<CACTouchEventObserverDelegate>)arg1 ;
-(void)startRecordingGesture;
-(id)stopRecordingGesture;
-(void)_didReceiveEvent:(id)arg1 ;
-(void)setGestureBeingRecorded:(AXMutableReplayableGesture *)arg1 ;
-(void)setStartTimeForGestureBeingRecorded:(double)arg1 ;
-(AXMutableReplayableGesture *)gestureBeingRecorded;
-(BOOL)_isLiftEvent:(id)arg1 ;
-(double)startTimeForGestureBeingRecorded;
-(void)_recordEvent:(id)arg1 ;
-(BOOL)_isTouchEvent:(id)arg1 ;
@end
