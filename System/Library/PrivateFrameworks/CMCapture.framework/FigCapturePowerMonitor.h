/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject;

@interface FigCapturePowerMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _registrationToken;
	/*^block*/id _torchHandler;
	OpaqueFigSimpleMutexRef _maxTorchLevelLock;
	float _maxTorchLevel;

}

@property (readonly) float maxTorchLevel; 
+(void)initialize;
-(float)maxTorchLevel;
-(id)init;
-(void)setPowerHandler:(/*^block*/id)arg1 ;
-(void)_powerNotification:(unsigned)arg1 ;
-(void)dealloc;
@end
