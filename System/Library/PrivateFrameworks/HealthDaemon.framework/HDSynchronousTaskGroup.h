/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HDSynchronousTaskGroupDelegate;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSMutableArray;

@interface HDSynchronousTaskGroup : NSObject {

	Ai _taskCount;
	os_unfair_lock_s _lock;
	BOOL _success;
	NSMutableArray* _errors;
	id<HDSynchronousTaskGroupDelegate> _delegate;
	/*^block*/id _didFinish;

}

@property (readonly) int taskCount; 
@property (__weak) id<HDSynchronousTaskGroupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) id didFinish;                                               //@synthesize didFinish=_didFinish - In the implementation block
-(id)init;
-(id<HDSynchronousTaskGroupDelegate>)delegate;
-(void)setDidFinish:(id)arg1 ;
-(void)finishTask;
-(void)setDelegate:(id<HDSynchronousTaskGroupDelegate>)arg1 ;
-(id)didFinish;
-(void)beginTask;
-(void)failTaskWithError:(id)arg1 ;
-(int)taskCount;
@end
