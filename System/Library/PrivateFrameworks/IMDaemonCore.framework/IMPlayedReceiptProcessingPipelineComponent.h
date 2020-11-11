/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDiMessagePipelineResources;

@interface IMPlayedReceiptProcessingPipelineComponent : IMPipelineComponent {

	IMDiMessagePipelineResources* _pipelineResources;

}

@property (nonatomic,readonly) IMDiMessagePipelineResources * pipelineResources;              //@synthesize pipelineResources=_pipelineResources - In the implementation block
-(id)_account;
-(id)_messageStore;
-(id)_idsAccount;
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)initWithPipelineResources:(id)arg1 ;
-(IMDiMessagePipelineResources *)pipelineResources;
-(void)_markMessageAsPlayedAndNotify:(id)arg1 session:(id)arg2 chat:(id)arg3 date:(id)arg4 ;
@end
