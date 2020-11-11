/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableArray, NSString;

@interface BWPipelineStage : NSObject {

	NSObject*<OS_dispatch_queue> _executionQueue;
	NSObject*<OS_dispatch_group> _executionGroup;
	NSMutableArray* _queuedMessages;
	NSMutableArray* _inputsForQueuedMessages;
	NSString* _name;
	unsigned _priority;
	BOOL _stillImagePipelineStage;
	NSString* _stillImagePipelineStageEntryNodeName;

}

@property (nonatomic,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned priority;                                            //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) BOOL stillImagePipelineStage;                                 //@synthesize stillImagePipelineStage=_stillImagePipelineStage - In the implementation block
@property (nonatomic,readonly) NSString * stillImagePipelineStageEntryNodeName;              //@synthesize stillImagePipelineStageEntryNodeName=_stillImagePipelineStageEntryNodeName - In the implementation block
+(void)initialize;
+(id)_currentPipelineStage;
+(id)pipelineStageWithName:(id)arg1 priority:(unsigned)arg2 ;
+(id)pipelineStageWithName:(id)arg1 priority:(unsigned)arg2 discardsLateSampleData:(BOOL)arg3 ;
+(void)_setCurrentPipelineStage:(id)arg1 ;
+(id)pipelineStageForStillImagesWithName:(id)arg1 priority:(unsigned)arg2 ;
+(id)pipelineStageForStillImagesWithName:(id)arg1 entryNodeName:(id)arg2 priority:(unsigned)arg3 ;
-(NSString *)stillImagePipelineStageEntryNodeName;
-(void)sendMessagesToInput:(id)arg1 messageProvider:(/*^block*/id)arg2 ;
-(BOOL)stillImagePipelineStage;
-(void)_serviceQueuedMessages;
-(NSString *)name;
-(id)description;
-(void)sendMessage:(id)arg1 toInput:(id)arg2 ;
-(id)_initStillImagePipelineStageWithName:(id)arg1 entryNodeName:(id)arg2 priority:(unsigned)arg3 ;
-(id)_initWithName:(id)arg1 priority:(unsigned)arg2 discardsLateSampleData:(BOOL)arg3 ;
-(unsigned)priority;
-(BOOL)_isCurrentPipelineStage;
-(void)dealloc;
@end
