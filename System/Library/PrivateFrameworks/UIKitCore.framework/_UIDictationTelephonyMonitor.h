/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CXCallObserver, NSString;

@interface _UIDictationTelephonyMonitor : NSObject <CXCallObserverDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CXCallObserver* _callObserver;
	BOOL _telephonyActivity;
	/*^block*/id _activityChanged;

}

@property (nonatomic,readonly) BOOL telephonyActivity;              //@synthesize telephonyActivity=_telephonyActivity - In the implementation block
@property (copy) id activityChanged;                                //@synthesize activityChanged=_activityChanged - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(id)init;
-(void)_backgroundInit;
-(id)activityChanged;
-(BOOL)telephonyActivity;
-(void)_backgroundReset;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(void)setActivityChanged:(id)arg1 ;
@end
