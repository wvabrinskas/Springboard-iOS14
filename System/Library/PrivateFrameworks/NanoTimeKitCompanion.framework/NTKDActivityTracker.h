/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableSet;

@interface NTKDActivityTracker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _activityIdentifiers;
	NSObject*<OS_dispatch_source> _adjustCriteriaTimer;
	NSObject*<OS_dispatch_source> _removePostWakeActivityTimer;
	BOOL _xpcActivityRegistered;

}
+(id)sharedInstance;
-(void)checkin;
-(void)endActivity:(id)arg1 ;
-(id)init;
-(void)_queue_beginActivity:(id)arg1 ;
-(void)_queue_endActivity:(id)arg1 ;
-(void)_queue_setOrUpdateActivityAndTimer;
-(void)beginActivity:(id)arg1 ;
@end

