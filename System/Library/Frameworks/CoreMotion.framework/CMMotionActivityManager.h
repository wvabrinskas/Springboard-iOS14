/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, NSOperationQueue;

@interface CMMotionActivityManager : NSObject {

	CLConnectionClient* fLocationConnection;
	NSObject*<OS_dispatch_queue> fQueue;
	/*^block*/id fHandler;
	NSOperationQueue* fHandlerQueue;

}
+(long long)authorizationStatus;
+(BOOL)isActivityAvailable;
-(id)init;
-(void)_handleQueryResponse:(shared_ptr<CLConnectionMessage>*)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)queryActivityStartingFromDate:(id)arg1 toDate:(id)arg2 toQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)stopActivityUpdates;
-(void)startActivityUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

