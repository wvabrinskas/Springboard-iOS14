/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDCloudSyncPipelineStage.h>

@class NSSet;

@interface HDCloudSyncPipelineStageRemoveSharingParticipants : HDCloudSyncPipelineStage {

	BOOL _removeAllParticipants;
	NSSet* _participantsToRemove;

}

@property (assign,nonatomic) BOOL removeAllParticipants;              //@synthesize removeAllParticipants=_removeAllParticipants - In the implementation block
@property (nonatomic,copy) NSSet * participantsToRemove;              //@synthesize participantsToRemove=_participantsToRemove - In the implementation block
-(void)main;
-(void)setParticipantsToRemove:(NSSet *)arg1 ;
-(void)setRemoveAllParticipants:(BOOL)arg1 ;
-(id)_delegateToOperationForRemoveSharingParticipants:(id)arg1 ;
-(BOOL)removeAllParticipants;
-(NSSet *)participantsToRemove;
@end
