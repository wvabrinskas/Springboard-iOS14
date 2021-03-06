/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface _UIAsyncInvocationObserver : NSObject {

	NSObject*<OS_dispatch_queue> _postCompletionQueue;
	NSObject*<OS_dispatch_queue> _completionQueueManagementQueue;
	BOOL _suspendedPostCompletionQueue;
	BOOL _resumedPostCompletionQueue;

}
+(void)whenInvocationsCompleteForObservers:(id)arg1 do:(/*^block*/id)arg2 ;
-(id)init;
-(void)whenCompleteDo:(/*^block*/id)arg1 ;
-(void)_didCompleteInvocation;
@end

