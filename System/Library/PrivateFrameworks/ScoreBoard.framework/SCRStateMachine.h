/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SCRStateTransitionable;
#import <ScoreBoard/ScoreBoard-Structs.h>
@class SCRStateTransitionContext;

@interface SCRStateMachine : NSObject {

	id<SCRStateTransitionable> _parent;
	unsigned long long _currentState;
	SCRStateTransitionContext* _nextStateTransition;
	os_unfair_lock_s _stateLock;
	os_unfair_lock_s _processingLock;

}
+(id)stateMachineForTransitionableObject:(id)arg1 ;
-(id)_transitionStringForTransitionContext:(id)arg1 ;
-(id)_stringForState:(unsigned long long)arg1 ;
-(id)_pendingStateTransition;
-(void)_assertNextStateTransitionIsValid;
-(BOOL)_acquireProcessingLock:(BOOL)arg1 acquisitionHandler:(/*^block*/id)arg2 ;
-(void)_processingLock_processPendingTransitions;
-(void)transitionToState:(unsigned long long)arg1 ;
-(void)_performStateTransition;
-(id)_initWithParent:(id)arg1 ;
-(id)description;
-(void)_processPendingTransitions:(BOOL)arg1 ;
-(void)_enqueueTransitionToState:(unsigned long long)arg1 ;
-(void)synchronouslyTransitionToState:(unsigned long long)arg1 ;
-(void)_updateInternalState;
@end

