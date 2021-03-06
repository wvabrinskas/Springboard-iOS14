/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>
#import <libobjc.A.dylib/SBReachabilityObserver.h>

@class NSMutableArray, UIWindow, SBSharedModalAlertItemPresenter, BSMonotonicReferenceTime, NSString;

@interface SBAlertLayoutPresentationVerifier : NSObject <SBUIActiveOrientationObserver, SBReachabilityObserver> {

	BOOL _pendingLayoutVerification;
	NSMutableArray* _updateReasons;
	UIWindow* _alertWindow;
	SBSharedModalAlertItemPresenter* _alertPresenter;
	BSMonotonicReferenceTime* _firstLogEventTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleReachabilityYOffsetDidChange;
-(id)init;
-(void)setAlertItemWindow:(id)arg1 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)setAlertPresenter:(id)arg1 ;
-(void)scheduleAlertLayoutVerificationForReason:(id)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)dealloc;
@end

