/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncManagerRepositoryTask.h>

@class HDAssertion;

@interface HDCloudSyncManagerPipelineTask : HDCloudSyncManagerRepositoryTask {

	os_unfair_lock_s _lock;
	/*^block*/id _completion;
	HDAssertion* _accessibilityAssertion;

}

@property (nonatomic,retain) HDAssertion * accessibilityAssertion;              //@synthesize accessibilityAssertion=_accessibilityAssertion - In the implementation block
-(void)dealloc;
-(HDAssertion *)accessibilityAssertion;
-(void)callCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)didFinishWithSuccess;
-(void)didFailWithErrors:(id)arg1 ;
-(id)pipelineForRepository:(id)arg1 ;
-(id)initWithManager:(id)arg1 context:(id)arg2 accessibilityAssertion:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)requiresExistingShareOwnerParticipant;
-(id)initWithManager:(id)arg1 context:(id)arg2 ;
-(void)mainWithRepositories:(id)arg1 error:(id)arg2 ;
-(void)setAccessibilityAssertion:(HDAssertion *)arg1 ;
@end
