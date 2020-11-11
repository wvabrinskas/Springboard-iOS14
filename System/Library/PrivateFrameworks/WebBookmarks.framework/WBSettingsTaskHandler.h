/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, WBSettingsTask, WebBookmarksSettingsGateway;

@interface WBSettingsTaskHandler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _tasks;
	WBSettingsTask* _currentTask;
	long long _currentRetryCount;
	WebBookmarksSettingsGateway* _settingsGateway;
	id _backgroundTaskAssertionToken;
	/*^block*/id _startBackgroundTaskAssertionBlock;
	/*^block*/id _finishBackgroundTaskAssertionBlock;

}

@property (nonatomic,copy) id startBackgroundTaskAssertionBlock;               //@synthesize startBackgroundTaskAssertionBlock=_startBackgroundTaskAssertionBlock - In the implementation block
@property (nonatomic,copy) id finishBackgroundTaskAssertionBlock;              //@synthesize finishBackgroundTaskAssertionBlock=_finishBackgroundTaskAssertionBlock - In the implementation block
-(id)init;
-(void)_enqueueTask:(id)arg1 ;
-(BOOL)_shouldEnqueueTask:(id)arg1 ;
-(void)_performNextTask;
-(void)_attemptCurrentTask;
-(void)enqueueTask:(id)arg1 ;
-(void)_finishCurrentTask;
-(void)_currentTaskAttemptDidFinishWithError:(id)arg1 ;
-(id)startBackgroundTaskAssertionBlock;
-(void)setStartBackgroundTaskAssertionBlock:(id)arg1 ;
-(id)finishBackgroundTaskAssertionBlock;
-(void)setFinishBackgroundTaskAssertionBlock:(id)arg1 ;
@end
