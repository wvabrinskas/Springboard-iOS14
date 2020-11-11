/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ARKitCore/ARKitCore-Structs.h>
@class CADisplayLink, ARRunLoop;

@interface ARDisplayLink : NSObject {

	CADisplayLink* _displayLink;
	/*^block*/id _callback;
	os_unfair_lock_s _lock;
	double _actualVsyncOffset;
	long long _preferredFramesPerSecond;
	double _vsyncOffset;
	ARRunLoop* _runloop;

}

@property (assign) long long preferredFramesPerSecond;              //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (assign) double vsyncOffset;                              //@synthesize vsyncOffset=_vsyncOffset - In the implementation block
@property (nonatomic,readonly) ARRunLoop * runloop;                 //@synthesize runloop=_runloop - In the implementation block
-(ARRunLoop *)runloop;
-(void)setVsyncOffset:(double)arg1 ;
-(id)init;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(long long)preferredFramesPerSecond;
-(void)displayLinkCallback;
-(void)_recomputeActualVsyncOffsetWithVsyncOffset:(double)arg1 preferredFramesPerSecond:(long long)arg2 ;
-(id)initWithPreferredFramesPerSecond:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(double)vsyncOffset;
-(void)invalidate;
-(void)dealloc;
@end
