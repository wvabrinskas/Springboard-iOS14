/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DASActivityBackgroundTasksScheduler <NSObject>
@required
-(void)cancelTaskRequestWithIdentifier:(id)arg1;
-(void)cancelAllTaskRequests;
-(void)completeTaskRequest:(id)arg1;
-(id)submitTaskRequest:(id)arg1;
-(void)getPendingTaskRequestsWithCompletionHandler:(/*^block*/id)arg1;
-(void)setBackgroundTasksSchedulerDelegate:(id)arg1;

@end

