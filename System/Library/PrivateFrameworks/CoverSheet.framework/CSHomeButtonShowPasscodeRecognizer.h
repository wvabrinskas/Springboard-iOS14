/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBHomeButtonShowPasscodeRecognizer.h>

@protocol SBHomeButtonShowPasscodeRecognizerDelegate;
@class NSString, BSTimer;

@interface CSHomeButtonShowPasscodeRecognizer : NSObject <SBHomeButtonShowPasscodeRecognizer> {

	NSString* _simplePublicDescription;
	id<SBHomeButtonShowPasscodeRecognizerDelegate> _delegate;
	unsigned long long _state;
	BOOL _fingerWasOnInitially;
	BOOL _fingerHasLifted;
	BSTimer* _minimumTimer;
	NSString* _terminalStateReasoning;

}

@property (assign,nonatomic,__weak) id<SBHomeButtonShowPasscodeRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(unsigned long long)_state;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(id<SBHomeButtonShowPasscodeRecognizerDelegate>)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setDelegate:(id<SBHomeButtonShowPasscodeRecognizerDelegate>)arg1 ;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)noteAuthenticated:(BOOL)arg1 ;
-(id)initWithFingerOn:(BOOL)arg1 ;
-(void)_reallySetState:(unsigned long long)arg1 forReason:(id)arg2 ;
-(void)_invalidateMinimumTimer;
-(void)_switchedFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(void)_minimumTimerFired;
-(void)_simulateTimerFiring;
@end

