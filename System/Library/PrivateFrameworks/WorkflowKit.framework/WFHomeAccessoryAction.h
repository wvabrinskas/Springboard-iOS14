/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/WFHomeManagerEventObserver.h>

@class HFTriggerActionSetsBuilder, NSString;

@interface WFHomeAccessoryAction : WFAction <WFHomeManagerEventObserver>

@property (nonatomic,readonly) HFTriggerActionSetsBuilder * triggerActionSetsBuilder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)arg1 ;
+(id)homeAccessoryActionWithHome:(id)arg1 ;
-(id)homeName;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(id)localizedName;
-(void)dealloc;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)localizedDescriptionSummary;
-(id)localizedAttribution;
-(HFTriggerActionSetsBuilder *)triggerActionSetsBuilder;
-(void)_performHomeAccessoryAction;
-(id)parameterSummaryString;
-(void)localizedParameterSummaryWithCompletion:(/*^block*/id)arg1 ;
-(id)localizedSummaryText;
@end

