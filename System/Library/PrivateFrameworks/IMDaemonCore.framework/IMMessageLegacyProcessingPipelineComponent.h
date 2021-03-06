/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDServiceSession, IMDAccount, IMDiMessageIDSTrustedData;

@interface IMMessageLegacyProcessingPipelineComponent : IMPipelineComponent {

	IMDServiceSession* _serviceSession;
	IMDAccount* _account;
	IMDiMessageIDSTrustedData* _idsTrustedData;
	id _messageContext;

}
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)initWithServiceSession:(id)arg1 idsTrustedData:(id)arg2 account:(id)arg3 messageContext:(id)arg4 ;
@end

