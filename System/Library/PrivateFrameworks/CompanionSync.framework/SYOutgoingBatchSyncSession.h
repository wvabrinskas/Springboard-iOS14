/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CompanionSync/SYSession.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_os_activity;
@class NSObject, NSMutableIndexSet, _SYCountedSemaphore, _SYMessageTimerTable;

@interface SYOutgoingBatchSyncSession : SYSession {

	NSObject*<OS_dispatch_source> _stateUpdateSource;
	NSObject*<OS_dispatch_source> _sessionTimer;
	unsigned long long _batchIndex;
	NSMutableIndexSet* _ackedBatchIndices;
	NSObject*<OS_dispatch_queue> _changeFetcherQueue;
	_SYCountedSemaphore* _changeConcurrencySemaphore;
	NSObject*<OS_os_activity> _changeWaitActivity;
	NSObject*<OS_os_activity> _sessionActivity;
	unsigned _state;
	BOOL _errorIsLocal;
	BOOL _hasSentEnd;
	_SYMessageTimerTable* _timers;
	double _sessionStartTime;
	BOOL _canRestart;
	BOOL _canRollback;
	BOOL _cancelled;

}
-(void)start:(/*^block*/id)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(BOOL)wasCancelled;
-(unsigned)state;
-(BOOL)isSending;
-(unsigned long long)protocolVersion;
-(void)cancelWithError:(id)arg1 ;
-(void)_fetchNextBatch;
-(BOOL)isResetSync;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)_sendSyncBatch:(id)arg1 nextState:(unsigned)arg2 ;
-(void)_setMessageTimerForSeqno:(unsigned long long)arg1 ;
-(void)_notifySessionComplete;
-(void)_sendSyncStart;
-(void)_setStateQuietly:(unsigned)arg1 ;
-(void)_sendSyncCompleteAndRunBlock:(/*^block*/id)arg1 ;
-(void)_waitForMessageWindow;
-(void)_sendSyncCancelled;
-(void)_sendSyncRestart;
-(void)_sessionComplete;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_installTimers;
-(void)_setupChangeConcurrency;
-(double)remainingSessionTime;
-(BOOL)_handleBatchAck:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleBatchSyncEndResponse:(id)arg1 error:(id*)arg2 ;
-(void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
@end
