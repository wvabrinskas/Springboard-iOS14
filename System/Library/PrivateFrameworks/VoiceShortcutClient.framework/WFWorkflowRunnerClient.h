/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFWorkflowRunnerClientDelegate;
@class WFWorkflowRunRequest, WFWorkflowRunningContext;

@interface WFWorkflowRunnerClient : NSObject {

	id<WFWorkflowRunnerClientDelegate> _delegate;
	WFWorkflowRunRequest* _runRequest;
	WFWorkflowRunningContext* _context;
	id _progressSubscriber;

}

@property (nonatomic,readonly) WFWorkflowRunRequest * runRequest;                             //@synthesize runRequest=_runRequest - In the implementation block
@property (nonatomic,retain) WFWorkflowRunningContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id progressSubscriber;                                           //@synthesize progressSubscriber=_progressSubscriber - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowRunnerClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)start;
-(id<WFWorkflowRunnerClientDelegate>)delegate;
-(WFWorkflowRunRequest *)runRequest;
-(void)setDelegate:(id<WFWorkflowRunnerClientDelegate>)arg1 ;
-(WFWorkflowRunningContext *)context;
-(id)initWithRunRequest:(id)arg1 ;
-(void)beginObservingProgressForWorkflowWithRunningContext:(id)arg1 ;
-(void)stopObservingRunProgress;
-(id)progressSubscriber;
-(void)setProgressSubscriber:(id)arg1 ;
-(void)stop;
-(void)setContext:(WFWorkflowRunningContext *)arg1 ;
@end
