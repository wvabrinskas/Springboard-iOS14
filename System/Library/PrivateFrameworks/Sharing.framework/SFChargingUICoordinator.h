/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Sharing/SFXPCClient.h>

@protocol OS_dispatch_source;
@class NSDate, NSObject;

@interface SFChargingUICoordinator : SFXPCClient {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _animationSPIAdopted;
	BOOL _runningAsCarry;
	NSDate* _uiUpdateMaxDate;
	NSDate* _uiUpdateRequestDate;
	/*^block*/id _uiUpdateHandler;
	BOOL _uiUpdateMinTimeElapsed;
	BOOL _uiUpdateShouldDismiss;
	NSObject*<OS_dispatch_source> _uiUpdateTimer;
	long long _defaultDuration;

}

@property (assign,nonatomic) long long defaultDuration;              //@synthesize defaultDuration=_defaultDuration - In the implementation block
-(void)setDefaultDuration:(long long)arg1 ;
-(id)machServiceName;
-(void)_activate;
-(void)onqueue_connectionEstablished;
-(void)activate;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(void)_dismissUI;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)_timingInvalidateMinTimer;
-(void)initialViewControllerDidAppear;
-(void)initialViewControllerDidDisappear;
-(void)requestToDismissUIHandler:(/*^block*/id)arg1 ;
-(void)_initialViewControllerDidAppear;
-(void)requestAnimationDateWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestToDismissUIHandler:(/*^block*/id)arg1 ;
-(void)_invalidate;
-(long long)defaultDuration;
-(void)onqueue_connectionInvalidated;
-(void)requestToStartAnimationAtDate:(id)arg1 ;
-(void)_timingRestartMinTimer;
-(void)_requestToStartAnimationAtDate:(id)arg1 ;
-(void)_sendDismissUIWithReason:(long long)arg1 ;
-(void)onqueue_connectionInterrupted;
-(void)invalidate;
-(void)sendDismissUIWithReason:(long long)arg1 ;
-(void)_initialViewControllerDidDisappear;
-(void)requestToShowUIWithHandler:(/*^block*/id)arg1 ;
@end
