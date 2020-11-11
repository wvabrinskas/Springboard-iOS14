/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, MSVTimer;

@interface MSVBlockGuard : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _disarmed;
	BOOL _didTimeout;
	MSVTimer* _timeoutTimer;
	/*^block*/id _interruptionHandler;

}
-(id)initWithTimeout:(double)arg1 ;
-(id)init;
-(void)_interruptWithReason:(long long)arg1 ;
-(id)initWithDeallocHandler:(/*^block*/id)arg1 ;
-(BOOL)disarm;
-(void)dealloc;
-(id)initWithTimeout:(double)arg1 interruptionHandler:(/*^block*/id)arg2 ;
@end
