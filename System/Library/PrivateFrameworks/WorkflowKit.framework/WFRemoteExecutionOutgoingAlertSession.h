/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFRemoteExecutionSession.h>

@interface WFRemoteExecutionOutgoingAlertSession : WFRemoteExecutionSession {

	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
-(void)finish;
-(void)finishWithError:(id)arg1 ;
-(id)completion;
-(id)initWithService:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendToDestinations:(id)arg1 options:(id)arg2 ;
-(void)handleIncomingProtobuf:(id)arg1 ;
-(void)handleTimeout;
-(double)timeoutLimitInSeconds;
@end

