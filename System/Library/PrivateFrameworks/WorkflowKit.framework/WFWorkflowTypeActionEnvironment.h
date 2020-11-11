/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFActionEnvironment.h>

@class NSString;

@interface WFWorkflowTypeActionEnvironment : WFActionEnvironment {

	NSString* _workflowType;

}

@property (nonatomic,readonly) NSString * workflowType;              //@synthesize workflowType=_workflowType - In the implementation block
-(BOOL)isAppExtension;
-(id)initWithWorkflowType:(id)arg1 ;
-(NSString *)workflowType;
-(BOOL)isWatchOS;
@end
