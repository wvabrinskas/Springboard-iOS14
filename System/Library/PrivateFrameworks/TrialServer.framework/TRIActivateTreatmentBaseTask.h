/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TRITreatmentBaseTask.h>

@class NSDate;

@interface TRIActivateTreatmentBaseTask : TRITreatmentBaseTask {

	NSDate* _startTime;
	BOOL _testingIgnoreDependencies;
	NSDate* _endTime;

}

@property (assign,nonatomic) BOOL testingIgnoreDependencies;              //@synthesize testingIgnoreDependencies=_testingIgnoreDependencies - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                            //@synthesize endTime=_endTime - In the implementation block
-(NSDate *)endTime;
-(id)startTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(id)dependencies;
-(void)setStartTime:(id)arg1 ;
-(id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2 ;
-(void)runEnqueueHandlerUsingContext:(id)arg1 ;
-(void)runDequeueHandlerUsingContext:(id)arg1 ;
-(id)_nextTasksForRunStatus:(int)arg1 ;
-(id)runTaskUsingContext:(id)arg1 experiment:(id)arg2 ;
-(BOOL)_writeNamespaceDescriptorsWithPaths:(id)arg1 toTreatmentLayer:(unsigned long long)arg2 forExperiment:(id)arg3 treatmentURLs:(id)arg4 context:(id)arg5 ;
-(id)runTaskUsingContext:(id)arg1 ;
-(BOOL)testingIgnoreDependencies;
-(BOOL)_experimentRecord:(id)arg1 hasConflictWithExperimentsInDatabase:(id)arg2 conflictEndTime:(id*)arg3 ;
-(BOOL)updateLoggingWithExperimentRecord:(id)arg1 paths:(id)arg2 trackingId:(id)arg3 newLogTreatmentAddedOut:(id*)arg4 ;
-(void)setTestingIgnoreDependencies:(BOOL)arg1 ;
@end

